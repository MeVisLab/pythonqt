/****************************************************************************
**
** Copyright (C) 1992-2008 Trolltech ASA. All rights reserved.
**
** This file is part of the Qt Script Generator project on Trolltech Labs.
**
** This file may be used under the terms of the GNU General Public
** License version 2.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of
** this file.  Please review the following information to ensure GNU
** General Public Licensing requirements will be met:
** http://www.trolltech.com/products/qt/opensource.html
**
** If you are unsure which license is appropriate for your use, please
** review the following information:
** http://www.trolltech.com/products/qt/licensing.html or contact the
** sales department at sales@trolltech.com.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#include "classgenerator.h"
#include "fileout.h"

#include <QtCore/QDir>
#include <QtCore/QMetaType>

#include <qdebug.h>

#define GENERATOR_NO_PROTECTED_FUNCTIONS

ClassGenerator::ClassGenerator(PriGenerator *pri, SetupGenerator *setup) :
    priGenerator(pri),
    setupGenerator(setup)
{}

QString ClassGenerator::fileNameForClass(const AbstractMetaClass *meta_class) const
{
    return QString("qtscript_%1.cpp").arg(meta_class->name());
}

bool ClassGenerator::shouldGenerate(const AbstractMetaClass *meta_class) const
{
  return false; // DISABLED!
    uint cg = meta_class->typeEntry()->codeGeneration();
    return (cg & TypeEntry::GenerateCode) != 0;
}

static QString normalizedType(const AbstractMetaType *type)
{
    QString str = QString::fromLatin1(QMetaObject::normalizedType(type->cppSignature().toLatin1()));
    if (str.endsWith(QLatin1Char('&')))
        str.chop(1);
    else if (str.startsWith("const ")) {
        if (str.endsWith('*') || type->hasInstantiations() || type->typeEntry()->isValue())
            str.remove(0, 6);
    }
    if (str == QLatin1String("QBool")) // ### hack
        str = QLatin1String("bool");
    return str;
}

/*!
  Returns true if the class \a meta_class inherits from QObject,
  otherwise returns false.
*/
static bool isQObjectBased(const AbstractMetaClass *meta_class)
{
    while (meta_class) {
        if (meta_class->name() == QLatin1String("QObject"))
            return true;
        meta_class = meta_class->baseClass();
    }
    return false;
}

/*!
  Returns true if any of the given \a enums has been declared with
  Q_ENUMS.
*/
static bool hasQEnums(const AbstractMetaEnumList &enums)
{
    for (int i = 0; i < enums.size(); ++i) {
        if (enums.at(i)->hasQEnumsDeclaration())
            return true;
    }
    return false;
}

/*!
  Returns true if any of the given \a enums has a QFlags class
  associated with it.
*/
static bool hasFlags(const AbstractMetaEnumList &enums)
{
    for (int i = 0; i < enums.size(); ++i) {
        FlagsTypeEntry *flags = enums.at(i)->typeEntry()->flags();
        if (flags)
            return true;
    }
    return false;
}

static bool isSequenceType(const AbstractMetaType *tp)
{
    return tp->isContainer() && (tp->instantiations().size() == 1);
}

static AbstractMetaFunction *findDefaultConstructor(const AbstractMetaFunctionList &ctors)
{
    for (int i = 0; i < ctors.size(); ++i) {
        if (ctors.at(i)->actualMinimumArgumentCount() == 0)
            return ctors.at(i);
    }
    return 0;
}

static AbstractMetaFunctionList findConstructors(const AbstractMetaClass *meta_class)
{
    return meta_class->queryFunctions(AbstractMetaClass::Constructors
                                      | AbstractMetaClass::WasPublic
                                      | AbstractMetaClass::NotRemovedFromTargetLang);
}

/*!
  Returns true if \a meta_class has a default constructor, false
  otherwise.
*/
bool hasDefaultConstructor(const AbstractMetaClass *meta_class)
{
    return findDefaultConstructor(findConstructors(meta_class)) != 0;
}

/*!
  Given the list of \a functions, creates a mapping from # of
  arguments to list of functions.
*/
static QMap<int, AbstractMetaFunctionList> createArgcToFunctionsMap(
    const AbstractMetaFunctionList &functions)
{
    QMap<int, AbstractMetaFunctionList> result;
    for (int i = 0; i < functions.size(); ++i) {
        AbstractMetaFunction *func = functions.at(i);
        int argc = func->arguments().size();
        for (int k = argc; k > 0; --k) {
            if (func->argumentRemoved(k))
                --argc;
        }
        for (int j = func->actualMinimumArgumentCount(); j <= argc; ++j)
            result[j].append(func);
    }
    return result;
}

/*!
  Returns the name of the QScriptValue function to use to test if
  a value is of the given \a typeName, or an empty string if there
  is no such function.
*/
static QString builtinTypeTesterFunction(const QString &typeName)
{
    if (typeName == QLatin1String("QString"))
        return QLatin1String("isString");
    else if (typeName == QLatin1String("double"))
        return QLatin1String("isNumber");
    else if (typeName == QLatin1String("float"))
        return QLatin1String("isNumber");
    else if (typeName == QLatin1String("int"))
        return QLatin1String("isNumber");
    else if (typeName == QLatin1String("uint"))
        return QLatin1String("isNumber");
    else if (typeName == QLatin1String("short"))
        return QLatin1String("isNumber");
    else if (typeName == QLatin1String("unsigned short"))
        return QLatin1String("isNumber");
    else if (typeName == QLatin1String("bool"))
        return QLatin1String("isBoolean");
    else if (typeName == QLatin1String("QVariant"))
        return QLatin1String("isVariant");
//    else if (typeName == QLatin1String("QDateTime"))
//        return QLatin1String("isDate");
    else if (typeName == QLatin1String("QRegExp"))
        return QLatin1String("isRegExp");
    else if (typeName == QLatin1String("QObject*"))
        return QLatin1String("isQObject");
    return QString();
}

/*!
  Writes the code injections for the class \a meta_class that should
  be injected at position \a pos.
*/
static void writeInjectedCode(QTextStream &s, const AbstractMetaClass *meta_class,
                              CodeSnip::Position pos)
{
    CodeSnipList code_snips = meta_class->typeEntry()->codeSnips();
    foreach (const CodeSnip &cs, code_snips) {
        if ((cs.language == TypeSystem::NativeCode) && (cs.position == pos)) {
            s << cs.code() << endl;
        }
    }
}

/*!
  Writes the code injections for the function \a fun of the class \a
  meta_class that should be injected at position \a pos.
*/
static void writeInjectedCode(QTextStream &s, const AbstractMetaClass *meta_class,
                              const AbstractMetaFunction *fun, CodeSnip::Position pos)
{
    FunctionModificationList mods = fun->modifications(meta_class);
    foreach (const FunctionModification &mod, mods) {
        if (!mod.isCodeInjection())
            continue;
        foreach (const CodeSnip &cs, mod.snips) {
            if ((cs.language == TypeSystem::NativeCode) && (cs.position == pos)) {
                s << cs.code() << endl;
            }
        }
    }
}

/*!
  Writes a boolean expression that checks if the actual arguments are
  compatible with what the function expects. This is used to resolve
  ambiguous calls.
*/
static void writeArgumentTypeTests(QTextStream &stream, const AbstractMetaFunction *fun,
                                   const AbstractMetaArgumentList &arguments, int argc, int indent)
{
    QString indentStr(indent, QLatin1Char(' '));
    int j = 0;
    for (int i = 0; i < argc; ++j) {
        if (fun->argumentRemoved(j+1))
            continue;
        if (i > 0)
            stream << endl << indentStr << "&& ";
        const AbstractMetaType *argType = 0;
        QString typeName = fun->typeReplaced(j+1);
        if (typeName.isEmpty()) {
            AbstractMetaArgument *arg = arguments.at(j);
            argType = arg->type();
            typeName = normalizedType(argType);
        }
        QString scriptArg = QString::fromLatin1("context->argument(%0)").arg(i);
        if (argType && isSequenceType(argType)) {
            stream << scriptArg << ".isArray()";
        } else if (typeName == "QVariant") {
            stream << "true";
        } else {
            QString tester = builtinTypeTesterFunction(typeName);
            if (!tester.isEmpty()) {
                stream << scriptArg << "." << tester << "()";
            } else if (typeName.endsWith('*')) {
                stream << "qscriptvalue_cast<" << typeName << ">(" << scriptArg << ")";
            } else {
                // typeid-based test
                stream << "(qMetaTypeId<" << typeName;
                if (typeName.endsWith(QLatin1Char('>')))
                    stream << " ";
                stream << ">() == " << scriptArg << ".toVariant().userType())";
            }
        }
        ++i;
    }
}

/*!
  Returns the name of the QScriptValue function to use to convert a
  value is of the given \a typeName, or an empty string if there is no
  such function.
*/
static QString builtinConversionFunction(const QString &typeName)
{
    if (typeName == QLatin1String("QString"))
        return QLatin1String("toString");
    else if (typeName == QLatin1String("double"))
        return QLatin1String("toNumber");
    else if (typeName == QLatin1String("int"))
        return QLatin1String("toInt32");
    else if (typeName == QLatin1String("uint"))
        return QLatin1String("toUInt32");
    else if (typeName == QLatin1String("bool"))
        return QLatin1String("toBoolean");
    else if (typeName == QLatin1String("QVariant"))
        return QLatin1String("toVariant");
    else if (typeName == QLatin1String("QDateTime"))
        return QLatin1String("toDateTime");
    else if (typeName == QLatin1String("QRegExp"))
        return QLatin1String("toRegExp");
    else if (typeName == QLatin1String("QObject*"))
        return QLatin1String("toQObject");
    return QString();
}

/*!
  Generates script arguments --> C++ types conversion, in preparation
  for calling the native function we are binding.
*/
static int writePrepareArguments(QTextStream &stream, const AbstractMetaFunction *fun,
                                 const AbstractMetaArgumentList &arguments,
                                 int scriptArgc, int indent)
{
    if (arguments.size() == 0) {
        Q_ASSERT(scriptArgc == 0);
        return 0; // nothing to do
    }
    QString indentStr(indent, QLatin1Char(' '));
    int j = 0;
    for (int scriptArgIndex = 0; j < arguments.size(); ++j) {
        const AbstractMetaArgument *arg = arguments.at(j);
        bool isOptional = !arg->defaultValueExpression().isEmpty();
        if (isOptional && (scriptArgIndex == scriptArgc))
            break;
        QString conv = fun->conversionRule(TypeSystem::NativeCode, j+1);
        QString actualIn = QString::fromLatin1("context->argument(%0)").arg(scriptArgIndex);
        QString actualOut = QString::fromLatin1("_q_arg%0").arg(j);
        if (!conv.isEmpty()) {
            // custom conversion
            conv.replace(QString::fromLatin1("%in%"), actualIn);
            conv.replace(QString::fromLatin1("%out%"), actualOut);
            conv.replace(QString::fromLatin1("%this%"), QString::fromLatin1("_q_self"));
            stream << conv;
        } else {
            const AbstractMetaType *argType = 0;
            QString typeName = fun->typeReplaced(j+1);
            if (typeName.isEmpty()) {
                argType = arg->type();
                typeName = normalizedType(argType);
            }
            stream << indentStr << typeName << " " << actualOut;
            QString converter;
            // ### generalize the QSet check (we should check if the type has push_back())
            bool useToSequence = argType && isSequenceType(argType) && !argType->name().startsWith("Set");
            if (useToSequence) {
                stream << ";" << endl;
                stream << indentStr << "qScriptValueToSequence(";
            } else {
                stream << " = ";
                converter = builtinConversionFunction(typeName);
                if (converter.isEmpty()) {
                    // generic conversion
                    stream << "qscriptvalue_cast<" << typeName;
                    if (typeName.endsWith(QLatin1Char('>')))
                        stream << " ";
                    stream << ">(";
                }
            }
            stream << actualIn;
            if (useToSequence) {
                stream << ", " << actualOut << ")";
            } else {
                if (converter.isEmpty()) {
                    stream << ")"; // close qscriptvalue_cast
                } else {
                    stream << "." << converter << "()";
                }
            }
            stream << ";" << endl;
        }
        if (!fun->argumentRemoved(j+1))
            ++scriptArgIndex;
    }
    return j;
}

/*!
  Writes the arguments that are passed to the native function we are
  binding. Those arguments must have been prepared already in variables
  _q_arg0, _q_arg1, .. in the generated code.
*/
static void writeArguments(QTextStream &stream, int count)
{
    for (int i = 0; i < count; ++i) {
        if (i > 0)
            stream << ", ";
        stream << "_q_arg" << i;
    }
}

/*!
  Writes a constructor call.
*/
static void writeConstructorCallAndReturn(QTextStream &stream, const AbstractMetaFunction *fun,
                                          int scriptArgc, const AbstractMetaClass *meta_class,
                                          int indent)
{
    QString indentStr(indent, QLatin1Char(' '));

    writeInjectedCode(stream, meta_class, fun, CodeSnip::Beginning);

    AbstractMetaArgumentList arguments = fun->arguments();
    Q_ASSERT(arguments.size() >= scriptArgc);
    int nativeArgc = writePrepareArguments(stream, fun, arguments, scriptArgc, indent);
    stream << indentStr;
    if (meta_class->generateShellClass()) {
        stream << "QtScriptShell_" << meta_class->name();
    } else {
        stream << meta_class->qualifiedCppName();
    }
    bool useNew = meta_class->typeEntry()->isObject() || !hasDefaultConstructor(meta_class);
    if (useNew)
        stream << "*";
    stream << " _q_cpp_result";
    if (useNew) {
        stream << " = new ";
        if (meta_class->generateShellClass())
            stream << "QtScriptShell_" << meta_class->name();
        else
            stream << meta_class->qualifiedCppName();
    }
    if (useNew || (nativeArgc != 0)) {
        stream << "(";
        writeArguments(stream, nativeArgc);
        stream << ")";
    }
    stream << ";" << endl;

    stream << indentStr << "QScriptValue _q_result = context->engine()->new";
    if (isQObjectBased(meta_class))
        stream << "QObject";
    else
        stream << "Variant";
    stream << "(context->thisObject(), ";
    if (!isQObjectBased(meta_class))
        stream << "qVariantFromValue(";
    if (meta_class->generateShellClass()) {
        stream << "(" << meta_class->qualifiedCppName();
        if (useNew)
            stream << "*";
        stream << ")";
    }
    stream << "_q_cpp_result";
    if (isQObjectBased(meta_class))
        stream << ", QScriptEngine::AutoOwnership";
    else
        stream << ")";
    stream << ");" << endl;
    if (meta_class->generateShellClass()) {
        stream << indentStr << "_q_cpp_result";
        if (useNew)
            stream << "->";
        else
            stream << ".";
        stream << "__qtscript_self = _q_result;" << endl;
    }

    writeInjectedCode(stream, meta_class, fun, CodeSnip::End);

    stream << indentStr << "return _q_result;" << endl;
}

/*!
  Returns true if the given \a typeName has a QScriptValue constructor
  we can use, false otherwise.
*/
static bool hasScriptValueConstructor(const QString &typeName)
{
    return (typeName == QLatin1String("bool"))
            || (typeName == QLatin1String("int"))
            || (typeName == QLatin1String("uint"))
            || (typeName == QLatin1String("double"))
            || (typeName == QLatin1String("QString"));
}

/*!
  Writes a function call.
*/
static void writeFunctionCallAndReturn(QTextStream &stream, const AbstractMetaFunction *fun,
                                       int scriptArgc, const AbstractMetaClass *meta_class,
                                       int indent)
{
    QString indentStr(indent, QLatin1Char(' '));
    AbstractMetaArgumentList arguments = fun->arguments();
    Q_ASSERT(arguments.size() >= scriptArgc);

    writeInjectedCode(stream, meta_class, fun, CodeSnip::Beginning);

    int nativeArgc = writePrepareArguments(stream, fun, arguments, scriptArgc, indent);
    bool returnThisObject = fun->shouldReturnThisObject();
    bool ignoreReturnValue = returnThisObject || fun->shouldIgnoreReturnValue();
    stream << indentStr;
    AbstractMetaType *retType = fun->type();
    bool constCastResult = false;
    if (retType && !ignoreReturnValue) {
        QString rsig = retType->cppSignature();
        QString typeName = normalizedType(retType);
        stream << typeName << " _q_result = ";
        constCastResult = rsig.endsWith('*') && rsig.startsWith("const ");
        if (constCastResult)
            stream << "const_cast<" << typeName << ">(";
    }

    if (!fun->isStatic()) {
        // ### the friendly check should be enough...
        if (fun->isFriendly()
            || ((fun->name() == QLatin1String("operator_equal"))
                && ((meta_class->name() == QLatin1String("QPoint"))
                    || (meta_class->name() == QLatin1String("QPointF"))
                    || (meta_class->name() == QLatin1String("QRect"))
                    || (meta_class->name() == QLatin1String("QRectF"))
                    || (meta_class->name() == QLatin1String("QSize"))
                    || (meta_class->name() == QLatin1String("QSizeF"))))) {
            stream << fun->originalName() << "(";
            stream << "*_q_self, ";
        } else {
            stream << "_q_self->";
            stream << fun->originalName() << "(";
        }
    } else {
        stream << meta_class->qualifiedCppName() << "::";
        stream << fun->originalName() << "(";
    }
    writeArguments(stream, nativeArgc);
    if (constCastResult)
        stream << ")";
    stream << ");" << endl;

    writeInjectedCode(stream, meta_class, fun, CodeSnip::End);

    // write return statement
    stream << indentStr;
    if (returnThisObject) {
        stream << "return context->thisObject();";
    } else {
        QString conv = fun->conversionRule(TypeSystem::NativeCode, 0);
        if (!conv.isEmpty()) {
            // custom conversion
            conv.replace(QString::fromLatin1("%in%"), "_q_result");
            conv.replace(QString::fromLatin1("%out%"), "_q_convertedResult");
            stream << conv;
            stream << "return qScriptValueFromValue(context->engine(), _q_convertedResult);";
        } else {
            stream << "return ";
            if (retType) {
                if (isSequenceType(retType))
                    stream << "qScriptValueFromSequence";
                else if (hasScriptValueConstructor(normalizedType(retType)))
                    stream << "QScriptValue";
                else
                    stream << "qScriptValueFromValue";
                stream << "(context->engine(), _q_result);";
            } else {
                stream << "context->engine()->undefinedValue();";
            }
        }
    }
    stream << endl;
}

/*!
  Returns true if the given function \a fun is operator>>() or
  operator<<() that streams from/to a Q{Data,Text}Stream, false
  otherwise.
*/
bool ClassGenerator::isSpecialStreamingOperator(const AbstractMetaFunction *fun)
{
    return ((fun->functionType() == AbstractMetaFunction::GlobalScopeFunction)
            && (fun->arguments().size() == 1)
            && (((fun->originalName() == "operator>>") && (fun->modifiedName() == "readFrom"))
                || ((fun->originalName() == "operator<<") && (fun->modifiedName() == "writeTo"))));
}

/*!
  Generates code that uses Q{Data,Text}Stream operator>>() or
  operator<<() to read/write an instance of meta_class.
*/
static void writeStreamingOperatorCall(QTextStream &stream, const AbstractMetaFunction *fun,
                                       const AbstractMetaClass */*meta_class*/, int indent)
{
    QString indentStr(indent, QLatin1Char(' '));
    QString streamClassName = fun->arguments().at(0)->type()->name();
    stream << indentStr << streamClassName << "* _q_arg0 = qscriptvalue_cast<"
           << streamClassName << "*>(context->argument(0));" << endl;
    stream << indentStr << "operator";
    if (fun->modifiedName() == "readFrom")
        stream << ">>";
    else
        stream << "<<";
    stream << "(*_q_arg0, *_q_self);" << endl;
    stream << indentStr << "return context->engine()->undefinedValue();" << endl;
}

/*!
  Writes the constructor forwarding for \a meta_class.
*/
static void writeConstructorForwarding(QTextStream &stream,
                                       const AbstractMetaFunctionList &functions,
                                       const AbstractMetaClass *meta_class)
{
#if 0
    stream << "/** signatures:" << endl;
    foreach (const AbstractMetaFunction *fun, functions) {
        stream << " *     " << fun->signature() << endl;
    } 
    stream << " */" << endl; 
#endif

    if (/*meta_class->isAbstract() ||*/ (functions.size() == 0)) {
        stream << "    return context->throwError(QScriptContext::TypeError," << endl
               << "        QString::fromLatin1(\"" << meta_class->name()
               << " cannot be constructed\"));" << endl;

    } else {
        stream << "    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {" << endl
               << "        return context->throwError(QString::fromLatin1(\""
               << meta_class->name() << "(): Did you forget to construct with 'new'?\"));" << endl
               << "    }" << endl;

        writeInjectedCode(stream, meta_class, CodeSnip::Constructor);

        QMap<int, AbstractMetaFunctionList> argcToFunctions;
        argcToFunctions = createArgcToFunctionsMap(functions);

        int argcMin = argcToFunctions.keys().first();
        int argcMax = argcToFunctions.keys().last();
        bool needElse = false;
        for (int i = argcMin; i <= argcMax; ++i) {
            AbstractMetaFunctionList funcs = argcToFunctions.value(i);
            if (funcs.isEmpty())
                continue;
            if (needElse)
                stream << " else ";
            else
                stream << "    ";
            needElse = true;
            stream << "if (context->argumentCount() == " << i << ") {" << endl;
            if ((funcs.size() == 1) || (i == 0)) {
                AbstractMetaFunction *fun = funcs.at(0);
                const int indent = 8;
                writeConstructorCallAndReturn(stream, fun, i, meta_class, indent);
            } else {
                // handle overloads
                for (int j = 0; j < funcs.size(); ++j) {
                    AbstractMetaFunction *fun = funcs.at(j);
                    stream << "        ";
                    if (j > 0)
                        stream << "} else ";
                    stream << "if (";
                    AbstractMetaArgumentList arguments = fun->arguments();
                    const int indent = 12;
                    writeArgumentTypeTests(stream, fun, arguments, i, indent);
                    stream << ") {" << endl;
                    writeConstructorCallAndReturn(stream, fun, i, meta_class, indent);
                }
                stream << "        }" << endl;
            }
            stream << "    }";
        }
        stream << endl;
//        writeThrowAmbiguityError(stream, meta_class, 0, signatures.toList());
    }
}

/*!
  Returns a list of enum \a values that are actually unique.
 */
QList<int> uniqueEnumValueIndexes(const AbstractMetaEnumValueList &values)
{
    QMap<int, int> map;
    for (int i = 0; i < values.count(); ++i) {
        AbstractMetaEnumValue *val = values.at(i);
        if (!map.contains(val->value()))
            map.insert(val->value(), i);
    }
    return map.values();
}

/*!
 */
static bool isContiguousEnum(const QList<int> &indexes, const AbstractMetaEnumValueList &values)
{
    if (indexes.isEmpty())
        return false;
    int prev = values.at(indexes.at(0))->value();
    for (int i = 1; i < indexes.size(); ++i) {
        int curr = values.at(indexes.at(i))->value();
        if (curr != prev + 1)
            return false;
        prev = curr;
    }
    return true;
}

static void writeCreateEnumClassHelper(QTextStream &stream)
{
    stream << "static QScriptValue qtscript_create_enum_class_helper(" << endl
           << "    QScriptEngine *engine," << endl
           << "    QScriptEngine::FunctionSignature construct," << endl
           << "    QScriptEngine::FunctionSignature valueOf," << endl
           << "    QScriptEngine::FunctionSignature toString)" << endl
           << "{" << endl
           << "    QScriptValue proto = engine->newObject();" << endl
           << "    proto.setProperty(QString::fromLatin1(\"valueOf\")," << endl
           << "        engine->newFunction(valueOf), QScriptValue::SkipInEnumeration);" << endl
           << "    proto.setProperty(QString::fromLatin1(\"toString\")," << endl
           << "        engine->newFunction(toString), QScriptValue::SkipInEnumeration);" << endl
           << "    return engine->newFunction(construct, proto, 1);" << endl
           << "}" << endl << endl;
}

static void writeCreateFlagsClassHelper(QTextStream &stream)
{
    stream << "static QScriptValue qtscript_create_flags_class_helper(" << endl
           << "    QScriptEngine *engine," << endl
           << "    QScriptEngine::FunctionSignature construct," << endl
           << "    QScriptEngine::FunctionSignature valueOf," << endl
           << "    QScriptEngine::FunctionSignature toString," << endl
           << "    QScriptEngine::FunctionSignature equals)" << endl
           << "{" << endl
           << "    QScriptValue proto = engine->newObject();" << endl
           << "    proto.setProperty(QString::fromLatin1(\"valueOf\")," << endl
           << "        engine->newFunction(valueOf), QScriptValue::SkipInEnumeration);" << endl
           << "    proto.setProperty(QString::fromLatin1(\"toString\")," << endl
           << "        engine->newFunction(toString), QScriptValue::SkipInEnumeration);" << endl
           << "    proto.setProperty(QString::fromLatin1(\"equals\")," << endl
           << "        engine->newFunction(equals), QScriptValue::SkipInEnumeration);" << endl
           << "    return engine->newFunction(construct, proto);" << endl
           << "}" << endl << endl;
}

/*!
  Writes the enum \a enom belonging to the class \a meta_class to the
  given \a stream.
 */
static void writeEnumClass(QTextStream &stream, const AbstractMetaClass *meta_class,
                           const AbstractMetaEnum *enom)
{
    QString qualifiedEnumName = meta_class->qualifiedCppName() + "::" + enom->name();
    QString qtScriptEnumName = meta_class->name() + "_" + enom->name();

    stream << "//" << endl;
    stream << "// " << qualifiedEnumName << endl;
    stream << "//" << endl << endl;

    // determine unique values (aliases will cause switch statement to not compile)
    AbstractMetaEnumValueList values = enom->values();
    QList<int> uniqueIndexes = uniqueEnumValueIndexes(values);

    bool contiguous = isContiguousEnum(uniqueIndexes, values);

    // write arrays of values and keys
    stream << "static const " << qualifiedEnumName
           << " qtscript_" << qtScriptEnumName << "_values[] = {" << endl;
    for (int i = 0; i < uniqueIndexes.size(); ++i) {
        stream << "    ";
        if (i > 0)
            stream << ", ";
        stream << meta_class->qualifiedCppName() << "::" << values.at(uniqueIndexes.at(i))->name() << endl;
    }
    stream << "};" << endl << endl;
    stream << "static const char * const qtscript_" << qtScriptEnumName << "_keys[] = {" << endl;
    for (int i = 0; i < uniqueIndexes.size(); ++i) {
        stream << "    ";
        if (i > 0)
            stream << ", ";
        stream << "\"" << values.at(uniqueIndexes.at(i))->name() << "\"" << endl;
    }
    stream << "};" << endl << endl;

    // write toString helper
    stream << "static QString qtscript_"
           << qtScriptEnumName << "_toStringHelper"
           << "(" << qualifiedEnumName << " value)" << endl;
    stream << "{" << endl;
    if (enom->hasQEnumsDeclaration() && (meta_class->qualifiedCppName() != "QTransform")) {
        stream << "    const QMetaObject *meta = qtscript_" << meta_class->name() << "_metaObject();" << endl;
        stream << "    int idx = meta->indexOfEnumerator(\"" << enom->name() << "\");" << endl;
        stream << "    Q_ASSERT(idx != -1);" << endl;
        stream << "    QMetaEnum menum = meta->enumerator(idx);" << endl;
        stream << "    return QString::fromLatin1(menum.valueToKey(value));" << endl;
    } else {
        if (contiguous) {
            stream << "    if ((value >= " << meta_class->qualifiedCppName()
                   << "::" << values.at(uniqueIndexes.first())->name() << ")"
                   << " && (value <= " << meta_class->qualifiedCppName()
                   << "::" << values.at(uniqueIndexes.last())->name() << "))" << endl
                   << "        return qtscript_" << qtScriptEnumName
                   << "_keys[static_cast<int>(value)-static_cast<int>("
                   << meta_class->qualifiedCppName() << "::"
                   << values.at(uniqueIndexes.first())->name() << ")];" << endl;
        } else {
            stream << "    for (int i = 0; i < " << uniqueIndexes.size() << "; ++i) {" << endl
                   << "        if (qtscript_" << qtScriptEnumName << "_values[i] == value)" << endl
                   << "            return QString::fromLatin1(qtscript_" << qtScriptEnumName << "_keys[i]);" << endl
                   << "    }" << endl;
        }
        stream << "    return QString();" << endl;
    }
    stream << "}" << endl << endl;

    // write QScriptValue <--> C++ conversion functions
    stream << "static QScriptValue qtscript_"
           << qtScriptEnumName << "_toScriptValue("
           << "QScriptEngine *engine, const " << qualifiedEnumName << " &value)" << endl
           << "{" << endl
           << "    QScriptValue clazz = engine->globalObject().property(QString::fromLatin1(\""
           << meta_class->name() << "\"));" << endl
//           << "    QScriptValue enumClazz = clazz.property(QString::fromLatin1(\""
//           << enom->name() << "\"));" << endl
           << "    return clazz.property(qtscript_" << qtScriptEnumName << "_toStringHelper(value));" << endl
           << "}" << endl << endl;
    stream << "static void qtscript_"
           << qtScriptEnumName << "_fromScriptValue("
           << "const QScriptValue &value, " << qualifiedEnumName << " &out)" << endl
           << "{" << endl
           << "    out = qvariant_cast<" << qualifiedEnumName << ">(value.toVariant());" << endl
           << "}" << endl << endl;

    // write constructor
    stream << "static QScriptValue qtscript_construct_"
           << qtScriptEnumName
           << "(QScriptContext *context, QScriptEngine *engine)" << endl;
    stream << "{" << endl;
    stream << "    int arg = context->argument(0).toInt32();" << endl;
    if (enom->hasQEnumsDeclaration() && (meta_class->qualifiedCppName() != "QTransform")) {
        stream << "    const QMetaObject *meta = qtscript_" << meta_class->name() << "_metaObject();" << endl;
        stream << "    int idx = meta->indexOfEnumerator(\"" << enom->name() << "\");" << endl;
        stream << "    Q_ASSERT(idx != -1);" << endl;
        stream << "    QMetaEnum menum = meta->enumerator(idx);" << endl;
        stream << "    if (menum.valueToKey(arg) != 0)" << endl;
        stream << "        return qScriptValueFromValue(engine,  static_cast<"
               << qualifiedEnumName << ">(arg));" << endl;
    } else {
        if (contiguous) {
            stream << "    if ((arg >= " << meta_class->qualifiedCppName()
                   << "::" << values.at(uniqueIndexes.first())->name() << ")"
                   << " && (arg <= " << meta_class->qualifiedCppName()
                   << "::" << values.at(uniqueIndexes.last())->name() << "))" << endl;
            stream << "        return qScriptValueFromValue(engine,  static_cast<"
                   << qualifiedEnumName << ">(arg));" << endl;
        } else {
            stream << "    for (int i = 0; i < " << uniqueIndexes.size() << "; ++i) {" << endl
                   << "        if (qtscript_" << qtScriptEnumName << "_values[i] == arg)" << endl;
            stream << "            return qScriptValueFromValue(engine,  static_cast<"
                   << qualifiedEnumName << ">(arg));" << endl;
            stream << "    }" << endl;
        }
    }
    stream << "    return context->throwError(QString::fromLatin1(\""
           << enom->name() << "(): invalid enum value (%0)\").arg(arg));" << endl;
    stream << "}" << endl;
    stream << endl;

    // write prototype.valueOf()
    stream << "static QScriptValue qtscript_" << qtScriptEnumName
           << "_valueOf(QScriptContext *context, QScriptEngine *engine)" << endl;
    stream << "{" << endl;
    stream << "    " << qualifiedEnumName << " value = "
           << "qscriptvalue_cast<" << qualifiedEnumName
           << ">(context->thisObject());" << endl;
    stream << "    return QScriptValue(engine, static_cast<int>(value));" << endl;
    stream << "}" << endl;
    stream << endl;

    // write prototype.toString()
    stream << "static QScriptValue qtscript_" << qtScriptEnumName
           << "_toString(QScriptContext *context, QScriptEngine *engine)" << endl;
    stream << "{" << endl;
    stream << "    " << qualifiedEnumName << " value = "
           << "qscriptvalue_cast<" << qualifiedEnumName
           << ">(context->thisObject());" << endl;
    stream << "    return QScriptValue(engine, qtscript_" << qtScriptEnumName << "_toStringHelper(value));" << endl;
    stream << "}" << endl;
    stream << endl;

    // write class creation function
    stream << "static QScriptValue qtscript_create_"
           << qtScriptEnumName
           << "_class(QScriptEngine *engine, QScriptValue &clazz)" << endl;
    stream << "{" << endl;

    stream << "    QScriptValue ctor = qtscript_create_enum_class_helper(" << endl
           << "        engine, qtscript_construct_" << qtScriptEnumName << "," << endl
           << "        qtscript_" << qtScriptEnumName << "_valueOf, qtscript_"
           << qtScriptEnumName << "_toString);" << endl;

    stream << "    qScriptRegisterMetaType<" << qualifiedEnumName << ">(engine, "
           << "qtscript_" << qtScriptEnumName << "_toScriptValue," << endl
           << "        qtscript_" << qtScriptEnumName << "_fromScriptValue,"
           << " ctor.property(QString::fromLatin1(\"prototype\")));" << endl;

    // enum values are properties of the constructor
    stream << "    for (int i = 0; i < " << uniqueIndexes.size() << "; ++i) {" << endl
           << "        clazz.setProperty(QString::fromLatin1(qtscript_"
           << qtScriptEnumName << "_keys[i])," << endl
           << "            engine->newVariant(qVariantFromValue(qtscript_"
           << qtScriptEnumName << "_values[i]))," << endl
           << "            QScriptValue::ReadOnly | QScriptValue::Undeletable);" << endl
           << "    }" << endl;

    stream << "    return ctor;" << endl;
    stream << "}" << endl;
    stream << endl;

    // write flags class too, if any
    FlagsTypeEntry *flags = enom->typeEntry()->flags();
    if (!flags)
        return;

    QString qualifiedFlagsName = meta_class->qualifiedCppName() + "::" + flags->targetLangName();
    QString qtScriptFlagsName = meta_class->name() + "_" + flags->targetLangName();

    stream << "//" << endl;
    stream << "// " << qualifiedFlagsName << endl;
    stream << "//" << endl << endl;

    // write QScriptValue <--> C++ conversion functions
    stream << "static QScriptValue qtscript_"
           << qtScriptFlagsName << "_toScriptValue("
           << "QScriptEngine *engine, const " << qualifiedFlagsName << " &value)" << endl
           << "{" << endl
           << "    return engine->newVariant(qVariantFromValue(value));" << endl
           << "}" << endl << endl;
    stream << "static void qtscript_"
           << qtScriptFlagsName << "_fromScriptValue("
           << "const QScriptValue &value, " << qualifiedFlagsName << " &out)" << endl
           << "{" << endl
           << "    QVariant var = value.toVariant();" << endl
           << "    if (var.userType() == qMetaTypeId<" << qualifiedFlagsName << ">())" << endl
           << "        out = qvariant_cast<" << qualifiedFlagsName << ">(var);" << endl
           << "    else if (var.userType() == qMetaTypeId<" << qualifiedEnumName << ">())" << endl
           << "        out = qvariant_cast<" << qualifiedEnumName << ">(var);" << endl
           << "    else" << endl
           << "        out = 0;" << endl
           << "}" << endl << endl;

    // write constructor
    stream << "static QScriptValue qtscript_construct_"
           << qtScriptFlagsName
           << "(QScriptContext *context, QScriptEngine *engine)" << endl;
    stream << "{" << endl;
    stream << "    " << qualifiedFlagsName << " result = 0;" << endl;
    stream << "    if ((context->argumentCount() == 1) && context->argument(0).isNumber()) {" << endl;
    stream << "        result = static_cast<" << qualifiedFlagsName << ">(context->argument(0).toInt32());" << endl;
    stream << "    } else {" << endl;
    stream << "        for (int i = 0; i < context->argumentCount(); ++i) {" << endl;
    stream << "            QVariant v = context->argument(i).toVariant();" << endl;
    stream << "            if (v.userType() != qMetaTypeId<" << qualifiedEnumName << ">()) {" << endl;
    stream << "                return context->throwError(QScriptContext::TypeError," << endl
           << "                    QString::fromLatin1(\"" << flags->targetLangName()
           << "(): argument %0 is not of type " << enom->name() << "\").arg(i));" << endl;
    stream << "            }" << endl;
    stream << "            result |= qvariant_cast<" << qualifiedEnumName
           << ">(v);" << endl;
    stream << "        }" << endl;
    stream << "   }" << endl;
    stream << "    return engine->newVariant(qVariantFromValue(result));" << endl;
    stream << "}" << endl;
    stream << endl;

    // write prototype.valueOf()
    stream << "static QScriptValue qtscript_" << qtScriptFlagsName
           << "_valueOf(QScriptContext *context, QScriptEngine *engine)" << endl;
    stream << "{" << endl;
    stream << "    " << qualifiedFlagsName << " value = "
           << "qscriptvalue_cast<" << qualifiedFlagsName
           << ">(context->thisObject());" << endl;
    stream << "    return QScriptValue(engine, static_cast<int>(value));" << endl;
    stream << "}" << endl;
    stream << endl;

    // write prototype.toString()
    stream << "static QScriptValue qtscript_" << qtScriptFlagsName
           << "_toString(QScriptContext *context, QScriptEngine *engine)" << endl;
    stream << "{" << endl;
    stream << "    " << qualifiedFlagsName << " value = "
           << "qscriptvalue_cast<" << qualifiedFlagsName
           << ">(context->thisObject());" << endl;
    stream << "    QString result;" << endl;
    stream << "    for (int i = 0; i < " << uniqueIndexes.size() << "; ++i) {" << endl
           << "        if ((value & qtscript_" << qtScriptEnumName << "_values[i])"
           << " == qtscript_" << qtScriptEnumName << "_values[i]) {" << endl
           << "            if (!result.isEmpty())" << endl
           << "                result.append(QString::fromLatin1(\",\"));" << endl
           << "            result.append(QString::fromLatin1(qtscript_" << qtScriptEnumName << "_keys[i]));" << endl
           << "        }" << endl
           << "    }" << endl
           << "    return QScriptValue(engine, result);" << endl
           << "}" << endl
           << endl;

    // write prototype.equals()
    stream << "static QScriptValue qtscript_" << qtScriptFlagsName
           << "_equals(QScriptContext *context, QScriptEngine *engine)" << endl
           << "{" << endl
           << "    QVariant thisObj = context->thisObject().toVariant();" << endl
           << "    QVariant otherObj = context->argument(0).toVariant();" << endl
           
           << "    return QScriptValue(engine, ((thisObj.userType() == otherObj.userType()) &&" << endl
           << "                                 (thisObj.value<" << qualifiedFlagsName << ">() == otherObj.value<" << qualifiedFlagsName << ">())));" << endl
           << "}" << endl << endl;

    // write class creation function
    stream << "static QScriptValue qtscript_create_" << qtScriptFlagsName << "_class(QScriptEngine *engine)" << endl;
    stream << "{" << endl;
    stream << "    QScriptValue ctor = qtscript_create_flags_class_helper(" << endl
           << "        engine, qtscript_construct_" << qtScriptFlagsName
           << ", qtscript_" << qtScriptFlagsName << "_valueOf," << endl
           << "        qtscript_" << qtScriptFlagsName << "_toString, qtscript_"
           << qtScriptFlagsName << "_equals);" << endl;

    stream << "    qScriptRegisterMetaType<" << qualifiedFlagsName << ">(engine, "
           << "qtscript_" << qtScriptFlagsName << "_toScriptValue," << endl
           << "        qtscript_" << qtScriptFlagsName << "_fromScriptValue,"
           << " ctor.property(QString::fromLatin1(\"prototype\")));" << endl;

    stream << "    return ctor;" << endl;
    stream << "}" << endl;
    stream << endl;
}

/*!
  Declares the given \a typeName if it hasn't been declared already,
  and adds it to the set of registered type names.
*/
void maybeDeclareMetaType(QTextStream &stream, const QString &typeName,
                          QSet<QString> &registeredTypeNames)
{
    QString name = typeName;
    if (name.endsWith(QLatin1Char('&')))
        name.chop(1);
    if (registeredTypeNames.contains(name) || (QMetaType::type(typeName.toLatin1()) != 0))
        return;
    if (name.contains(QLatin1Char(','))) {
        // need to expand the Q_DECLARE_METATYPE macro manually,
        // otherwise the compiler will choke
        stream << "template <> \\" << endl
               << "struct QMetaTypeId< " << name << " > \\" << endl
               << "{ \\" << endl
               << "    enum { Defined = 1 }; \\" << endl
               << "    static int qt_metatype_id() \\" << endl
               << "    { \\" << endl
               << "        static QBasicAtomicInt metatype_id = Q_BASIC_ATOMIC_INITIALIZER(0); \\" << endl
               << "        if (!metatype_id) \\" << endl
               << "            metatype_id = qRegisterMetaType< " << name << " >(\"" << name << "\"); \\" << endl
               << "        return metatype_id; \\" << endl
               << "    } \\" << endl
               << "};" << endl;
    } else {
        stream << "Q_DECLARE_METATYPE(" << name << ")" << endl;
    }
    registeredTypeNames << name;
}

/*!
  Declares the given \a type recursively (i.e. subtypes of a composite
  type are also declared).
*/
static void declareTypeRecursive(QTextStream &stream, const AbstractMetaType *type,
                                 QSet<QString> &registeredTypeNames)
{
    if (!type)
        return;
    QList<AbstractMetaType *> subTypes = type->instantiations();
    for (int i = 0; i < subTypes.size(); ++i)
        declareTypeRecursive(stream, subTypes.at(i), registeredTypeNames);
    QString typeName = normalizedType(type);
    if (typeName == QLatin1String("QStringList<QString>"))
        return; // ### wtf...
    maybeDeclareMetaType(stream, typeName, registeredTypeNames);
}

/*!
  Declares the types associated with the given \a functions.
*/
void declareFunctionMetaTypes(QTextStream &stream, const AbstractMetaFunctionList &functions,
                              QSet<QString> &registeredTypeNames)
{
    for (int i = 0; i < functions.size(); ++i) {
        AbstractMetaFunction *fun = functions.at(i);
        if (ClassGenerator::isSpecialStreamingOperator(fun)) {
            maybeDeclareMetaType(stream, fun->arguments().at(0)->type()->name() + "*",
                                 registeredTypeNames);
            continue;
        }
        AbstractMetaArgumentList arguments = fun->arguments();
        for (int j = 0; j < arguments.size(); ++j) {
            if (fun->argumentRemoved(j+1))
                continue;
            QString repl = fun->typeReplaced(j+1);
            if (!repl.isEmpty()) {
                maybeDeclareMetaType(stream, repl, registeredTypeNames);
            } else {
                const AbstractMetaArgument *arg = arguments.at(j);
                declareTypeRecursive(stream, arg->type(), registeredTypeNames);
            }
        }
        QString retRepl = fun->typeReplaced(0);
        if (!retRepl.isEmpty())
            maybeDeclareMetaType(stream, retRepl, registeredTypeNames);
        else
            declareTypeRecursive(stream, fun->type(), registeredTypeNames);
    }
}

/*!
  Returns true if we don't care about the given enum \a enom,
  false otherwise.
*/
static bool shouldIgnoreEnum(const AbstractMetaEnum *enom)
{
    return !enom->wasPublic() || (enom->name() == "enum_1");
}

/*!
  Declares the types associated with the enums of the given \a
  meta_class.
*/
void declareEnumMetaTypes(QTextStream &stream, const AbstractMetaClass *meta_class,
                          QSet<QString> &registeredTypeNames)
{
    AbstractMetaEnumList enums = meta_class->enums();
    for (int i = 0; i < enums.size(); ++i) {
        const AbstractMetaEnum *enom = enums.at(i);
        if (shouldIgnoreEnum(enom))
            continue;
        maybeDeclareMetaType(stream, QString::fromLatin1("%0::%1")
                             .arg(meta_class->qualifiedCppName()).arg(enom->name()),
                             registeredTypeNames);
        FlagsTypeEntry *flags = enom->typeEntry()->flags();
        if (flags) {
            maybeDeclareMetaType(stream, QString::fromLatin1("QFlags<%0::%1>")
                                 .arg(meta_class->qualifiedCppName()).arg(enom->name()),
                                 registeredTypeNames);
        }
    }
}

/*!
  Returns the maximum function length among \a functions.
*/
static int maxFunctionLength(const AbstractMetaFunctionList &functions)
{
    int result = 0;
    for (int i = 0; i < functions.size(); ++i)
        result = qMax(result, functions.at(i)->arguments().size());
    return result;
}

/*!
  Writes a prototype/static function.
*/
static void writeFunctionForwarding(QTextStream &stream, const AbstractMetaClass *meta_class,
                                    const AbstractMetaFunctionList &functions)
{
#if 0
    stream << "/** signatures:" << endl;
    foreach (const AbstractMetaFunction *fun, functions) {
        stream << " *     " << fun->signature() << endl;
    } 
    stream << " */" << endl; 
#endif
    QMap<int, AbstractMetaFunctionList> argcToFunctions;
    argcToFunctions = createArgcToFunctionsMap(functions);
    QSet<QString> signatures;
    int argcMin = argcToFunctions.keys().first();
    int argcMax = argcToFunctions.keys().last();
    for (int i = argcMin; i <= argcMax; ++i) {
        AbstractMetaFunctionList funcs = argcToFunctions.value(i);
        if (funcs.isEmpty())
            continue;
        stream << "    if (context->argumentCount() == " << i << ") {" << endl;
        if (funcs.size() == 1) {
            AbstractMetaFunction *fun = funcs.at(0);
            const int indent = 8;
            // special case for Q{Data,Text}Stream streaming operators
            if (ClassGenerator::isSpecialStreamingOperator(fun))
                writeStreamingOperatorCall(stream, fun, meta_class, indent);
            else
                writeFunctionCallAndReturn(stream, fun, i, meta_class, indent);
            signatures.insert(fun->targetLangSignature());
        } else {
            // handle overloads
            QStringList sigs;
            for (int j = 0; j < funcs.size(); ++j) {
                AbstractMetaFunction *fun = funcs.at(j);
                sigs.append(fun->signature());
                stream << "        ";
                if (j > 0)
                    stream << "} else ";
                stream << "if (";
                AbstractMetaArgumentList arguments = fun->arguments();
                const int indent = 12;
                writeArgumentTypeTests(stream, fun, arguments, i, indent);
                stream << ") {" << endl;
                writeFunctionCallAndReturn(stream, fun, i, meta_class, indent);
                signatures.insert(fun->targetLangSignature());
            }
            stream << "        }" << endl;
        }
        stream << "    }" << endl;
    }
}

static void writePrototypeCall(QTextStream &s, const AbstractMetaClass *meta_class,
                               const QMap<QString, AbstractMetaFunctionList> &nameToFunctions,
                               int prototypeFunctionsOffset)
{
    s << "static QScriptValue qtscript_" << meta_class->name()
      << "_prototype_call(QScriptContext *context, QScriptEngine *)" << endl
      << "{" << endl;

    s << "#if QT_VERSION > 0x040400" << endl;

    s << "    Q_ASSERT(context->callee().isFunction());" << endl
      << "    uint _id = context->callee().data().toUInt32();" << endl;

    s << "#else" << endl
      << "    uint _id;" << endl
      << "    if (context->callee().isFunction())" << endl
      << "        _id = context->callee().data().toUInt32();" << endl
      << "    else" << endl
      << "        _id = 0xBABE0000 + " << nameToFunctions.size() << ";" << endl;

    s << "#endif" << endl;

    s << "    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);" << endl
      << "    _id &= 0x0000FFFF;" << endl;

    // cast the thisObject to C++ type
    s << "    ";
#ifndef GENERATOR_NO_PROTECTED_FUNCTIONS
    if (meta_class->hasProtectedFunctions())
        s << "qtscript_";
#endif
    s << meta_class->qualifiedCppName() << "* _q_self = ";
#ifndef GENERATOR_NO_PROTECTED_FUNCTIONS
    if (meta_class->hasProtectedFunctions())
        s << "reinterpret_cast<qtscript_" << meta_class->name() << "*>(";
#endif
    s << "qscriptvalue_cast<" << meta_class->qualifiedCppName()
      << "*>(context->thisObject())";
#ifndef GENERATOR_NO_PROTECTED_FUNCTIONS
    if (meta_class->hasProtectedFunctions())
        s << ")";
#endif
    s << ";" << endl
      << "    if (!_q_self) {" << endl 
      << "        return context->throwError(QScriptContext::TypeError," << endl
      << "            QString::fromLatin1(\"" << meta_class->name()
      << ".%0(): this object is not a " << meta_class->name() << "\")" << endl
      << "            .arg(qtscript_" << meta_class->name()
      << "_function_names[_id+" << prototypeFunctionsOffset <<"]));" << endl
      << "    }" << endl << endl;

    s << "    switch (_id) {" << endl;

    QMap<QString, AbstractMetaFunctionList>::const_iterator it;
    int index = 0;
    for (it = nameToFunctions.constBegin(); it != nameToFunctions.constEnd(); ++it) {
        s << "    case " << index << ":" << endl;
        writeFunctionForwarding(s, meta_class, it.value());
        s << "    break;" << endl << endl;
        ++index;
    }

    if (!meta_class->hasDefaultToStringFunction()) {
        s << "    case " << index << ": {" << endl;
        s << "    QString result";
        FunctionModelItem fun = meta_class->hasToStringCapability();
        if (fun) {
            int indirections = fun->arguments().at(1)->type().indirections();
            QString deref = QLatin1String(indirections == 0 ? "*" : "");
            s << ";" << endl
              << "    QDebug d(&result);" << endl
              << "    d << " << deref  << "_q_self;" << endl;
        } else {
            // ### FIXME: can cause compile error
//        s << "=QString(\"" << meta_class->name() << "(0x%1)\").arg((int)_q_self, 0, 16);" << endl;
            s << " = QString::fromLatin1(\"" << meta_class->name() << "\");" << endl;
        }
        s << "    return QScriptValue(context->engine(), result);" << endl
          << "    }" << endl << endl;
    }

    s << "    default:" << endl
      << "    Q_ASSERT(false);" << endl
      << "    }" << endl;

    s << "    return qtscript_" << meta_class->name() << "_throw_ambiguity_error_helper(context," << endl
      << "        qtscript_" << meta_class->name()
      << "_function_names[_id+" << prototypeFunctionsOffset << "]," << endl
      << "        qtscript_" << meta_class->name()
      << "_function_signatures[_id+" << prototypeFunctionsOffset << "]);" << endl;

    s << "}" << endl << endl;
}

static void writeStaticCall(QTextStream &s, const AbstractMetaClass *meta_class,
                            const AbstractMetaFunctionList &constructors,
                            const QMap<QString, AbstractMetaFunctionList> &nameToFunctions)
{
    s << "static QScriptValue qtscript_" << meta_class->name()
      << "_static_call(QScriptContext *context, QScriptEngine *)" << endl
      << "{" << endl;

    s << "    uint _id = context->callee().data().toUInt32();" << endl
      << "    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);" << endl
      << "    _id &= 0x0000FFFF;" << endl;

    s << "    switch (_id) {" << endl;

    s << "    case 0:" << endl;
    writeConstructorForwarding(s, constructors, meta_class);
    s << "    break;" << endl << endl;

    QMap<QString, AbstractMetaFunctionList>::const_iterator it;
    int index = 1;
    for (it = nameToFunctions.constBegin(); it != nameToFunctions.constEnd(); ++it) {
        s << "    case " << index << ":" << endl;
        writeFunctionForwarding(s, meta_class, it.value());
        s << "    break;" << endl << endl;
        ++index;
    }

    s << "    default:" << endl
      << "    Q_ASSERT(false);" << endl
      << "    }" << endl;

    s << "    return qtscript_" << meta_class->name() << "_throw_ambiguity_error_helper(context," << endl
      << "        qtscript_" << meta_class->name() << "_function_names[_id]," << endl
      << "        qtscript_" << meta_class->name() << "_function_signatures[_id]);" << endl;

    s << "}" << endl << endl;
}

/*!
  Writes the include defined by \a inc to \a stream.
*/
void ClassGenerator::writeInclude(QTextStream &stream, const Include &inc)
{
    if (inc.name.isEmpty())
        return;
    if (inc.type == Include::TargetLangImport)
        return;
    stream << "#include ";
    if (inc.type == Include::IncludePath)
        stream << "<";
    else
        stream << "\"";
    stream << inc.name;
    if (inc.type == Include::IncludePath)
        stream << ">";
    else
        stream << "\"";
    stream << endl;
}

static void writeHelperFunctions(QTextStream &stream, const AbstractMetaClass *meta_class)
{
    stream << "static QScriptValue qtscript_" << meta_class->name() << "_throw_ambiguity_error_helper(" << endl
           << "    QScriptContext *context, const char *functionName, const char *signatures)" << endl
           << "{" << endl
           << "    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\\n'));" << endl
           << "    QStringList fullSignatures;" << endl
           << "    for (int i = 0; i < lines.size(); ++i)" << endl
           << "        fullSignatures.append(QString::fromLatin1(\"%0(%1)\").arg(functionName).arg(lines.at(i)));" << endl
           << "    return context->throwError(QString::fromLatin1(\"" << meta_class->name()
           << "::%0(): could not find a function match; candidates are:\\n%1\")" << endl
           << "        .arg(functionName).arg(fullSignatures.join(QLatin1String(\"\\n\"))));" << endl
           << "}" << endl << endl;
}

void writeQtScriptQtBindingsLicense(QTextStream &stream)
{
    stream
        << "/****************************************************************************" << endl
        << "**" << endl
        << "** Copyright (C) 2008 Trolltech ASA. All rights reserved." << endl
        << "**" << endl
        << "** This file is part of the Qt Script Qt Bindings project on Trolltech Labs." << endl
        << "**" << endl
        << "** This file may be used under the terms of the GNU General Public" << endl
        << "** License version 2.0 as published by the Free Software Foundation" << endl
        << "** and appearing in the file LICENSE.GPL included in the packaging of" << endl
        << "** this file.  Please review the following information to ensure GNU" << endl
        << "** General Public Licensing requirements will be met:" << endl
        << "** http://www.trolltech.com/products/qt/opensource.html" << endl
        << "**" << endl
        << "** If you are unsure which license is appropriate for your use, please" << endl
        << "** review the following information:" << endl
        << "** http://www.trolltech.com/products/qt/licensing.html or contact the" << endl
        << "** sales department at sales@trolltech.com." << endl
        << "**" << endl
        << "** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE" << endl
        << "** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE." << endl
        << "**" << endl
        << "****************************************************************************/" << endl
        << endl;
}

/*!
  Finds the functions in \a meta_class that we actually want to
  generate bindings for.
*/
void findPrototypeAndStaticFunctions(
    const AbstractMetaClass *meta_class,
    QMap<QString, AbstractMetaFunctionList> &nameToPrototypeFunctions,
    QMap<QString, AbstractMetaFunctionList> &nameToStaticFunctions)
{
    AbstractMetaFunctionList functions = meta_class->functionsInTargetLang();
    for (int i = 0; i < functions.size(); ++i) {
        AbstractMetaFunction* func = functions.at(i);
        if (!func->isNormal())
            continue;
#ifdef GENERATOR_NO_PROTECTED_FUNCTIONS
        if (func->wasProtected())
            continue;
#endif
        if (func->declaringClass() != meta_class)
            continue; // function inherited through prototype
        if (func->isPropertyReader() || func->isPropertyWriter())
            continue; // no point in including property accessors
        if (func->isSlot() || func->isSignal() || func->isInvokable())
            continue; // no point in including signals and slots
        QMap<QString, AbstractMetaFunctionList> &map =
            func->isStatic() ? nameToStaticFunctions : nameToPrototypeFunctions;
        map[func->modifiedName()].append(func);
    }
}

static void writeFunctionSignaturesString(QTextStream &s, const AbstractMetaFunctionList &functions)
{
    s << "\"";
    for (int i = 0; i < functions.size(); ++i) {
        if (i > 0)
            s << "\\n";
        QString sig = functions.at(i)->targetLangSignature();
        sig = sig.mid(sig.indexOf('(') + 1);
        sig.chop(1);
        s << sig;
    }
    s << "\"";
}

/*!
  Writes the whole native binding for the class \a meta_class.
*/
void ClassGenerator::write(QTextStream &stream, const AbstractMetaClass *meta_class)
{
    if (meta_class->name() == "Global") // ### hmmmmmm
        return;

    if (FileOut::license)
        writeQtScriptQtBindingsLicense(stream);

    // write common includes
    stream << "#include <QtScript/QScriptEngine>" << endl;
    stream << "#include <QtScript/QScriptContext>" << endl;
    stream << "#include <QtScript/QScriptValue>" << endl;
    stream << "#include <QtCore/QStringList>" << endl;
    stream << "#include <QtCore/QDebug>" << endl;
    stream << "#include <qmetaobject.h>" << endl;
    stream << endl;

    // write class-specific includes
    {
        Include inc = meta_class->typeEntry()->include();
        writeInclude(stream, inc);
    }
    {
        IncludeList includes = meta_class->typeEntry()->extraIncludes();
        qSort(includes.begin(), includes.end());

        foreach (const Include &i, includes) {
            writeInclude(stream, i);
        }
    }
    stream << endl;

    if (meta_class->generateShellClass()) {
        stream << "#include \"qtscriptshell_" << meta_class->name() << ".h\"" << endl;
        stream << endl;
    }

    AbstractMetaEnumList enums = meta_class->enums();
    {
        // kill the enums we don't care about
        AbstractMetaEnumList::iterator it;
        for (it = enums.begin(); it != enums.end(); ) {
            if (shouldIgnoreEnum(*it))
                it = enums.erase(it);
            else
                ++it;
        }
    }

    // find constructors
    AbstractMetaFunctionList ctors = findConstructors(meta_class);
    bool hasDefaultCtor = findDefaultConstructor(ctors) != 0;

    // find interesting functions
    QMap<QString, AbstractMetaFunctionList> nameToPrototypeFunctions;
    QMap<QString, AbstractMetaFunctionList> nameToStaticFunctions;
    findPrototypeAndStaticFunctions(meta_class, nameToPrototypeFunctions, nameToStaticFunctions);

    int staticFunctionsOffset = 1;
    int prototypeFunctionsOffset = staticFunctionsOffset + nameToStaticFunctions.size();

    // write table of function names
    stream << "static const char * const qtscript_"
           << meta_class->name() << "_function_names[] = {" << endl;
    stream << "    \"" << meta_class->name() << "\"" << endl;
    {
        QMap<QString, AbstractMetaFunctionList>::const_iterator it;
        stream << "    // static" << endl;
        for (it = nameToStaticFunctions.constBegin(); it != nameToStaticFunctions.constEnd(); ++it) {
            stream << "    , ";
            stream << "\"" << it.key() << "\"" << endl;
        }
        stream << "    // prototype" << endl;
        for (it = nameToPrototypeFunctions.constBegin(); it != nameToPrototypeFunctions.constEnd(); ++it) {
            QString functionName = it.key();
            QString scriptName = functionName;
            if (functionName == QLatin1String("operator_equal"))
                scriptName = QLatin1String("equals");
            stream << "    , ";
            stream << "\"" << scriptName << "\"" << endl;
        }
        if (!meta_class->hasDefaultToStringFunction())
            stream << "    , \"toString\"" << endl;
    }
    stream << "};" << endl << endl;

    // write table of function signatures
    stream << "static const char * const qtscript_"
           << meta_class->name() << "_function_signatures[] = {" << endl;
    stream << "    ";
    writeFunctionSignaturesString(stream, ctors);
    stream << endl;
    {
        QMap<QString, AbstractMetaFunctionList>::const_iterator it;
        stream << "    // static" << endl;
        for (it = nameToStaticFunctions.constBegin(); it != nameToStaticFunctions.constEnd(); ++it) {
            stream << "    , ";
            writeFunctionSignaturesString(stream, it.value());
            stream << endl;
        }
        stream << "    // prototype" << endl;
        for (it = nameToPrototypeFunctions.constBegin(); it != nameToPrototypeFunctions.constEnd(); ++it) {
            stream << "    , ";
            writeFunctionSignaturesString(stream, it.value());
            stream << endl;
        }
        if (!meta_class->hasDefaultToStringFunction())
            stream << "\"\"" << endl;
    }
    stream << "};" << endl << endl;

#ifndef GENERATOR_NO_PROTECTED_FUNCTIONS
    if (meta_class->hasProtectedFunctions()) {
        // write a friendly class
        stream << "class qtscript_" << meta_class->name()
               << " : public " << meta_class->qualifiedCppName() << endl;
        stream << "{" << endl;
        for (int x = 0; x < 2; ++x) {
            QMap<QString, AbstractMetaFunctionList> &map =
                x ? nameToStaticFunctions : nameToPrototypeFunctions;
            QMap<QString, AbstractMetaFunctionList>::const_iterator it;
            for (it = map.constBegin(); it != map.constEnd(); ++it) {
                AbstractMetaFunctionList functions = it.value();
                for (int i = 0; i < functions.size(); ++i) {
                    if (functions.at(i)->isProtected()) {
                        stream << "    friend QScriptValue qtscript_" << meta_class->name()
                               << "_" << it.key();
                        if (functions.at(i)->isStatic())
                            stream << "_static";
                        stream << "(QScriptContext *, QScriptEngine *);" << endl;
                        break;
                    }
                }
            }
        }
        stream << "};" << endl;
        stream << endl;
    }
#endif

    writeHelperFunctions(stream, meta_class);

    // write metaobject getter if we need it
    if (hasQEnums(enums) && (meta_class->qualifiedCppName() != "QTransform")) {
        if (meta_class->qualifiedCppName() == "Qt") {
            stream << "struct qtscript_Qt_metaObject_helper : private QObject" << endl
                   << "{" << endl
                   << "    static const QMetaObject *get()" << endl
                   << "    { return &static_cast<qtscript_Qt_metaObject_helper*>(0)->staticQtMetaObject; }" << endl
                   << "};" << endl << endl;
        }
        stream << "static const QMetaObject *qtscript_" << meta_class->name() << "_metaObject()" << endl
               << "{" << endl
               << "    return ";
        if (meta_class->qualifiedCppName() == "Qt")
            stream << "qtscript_Qt_metaObject_helper::get()";
        else
            stream << "&" << meta_class->qualifiedCppName() << "::staticMetaObject";
        stream << ";" << endl
               << "}" << endl << endl;
    }

    // write metatype declarations
    {
        QSet<QString> registeredTypeNames = m_qmetatype_declared_typenames;

        if (!meta_class->isNamespace()) {
            if (meta_class->typeEntry()->isValue() && hasDefaultCtor)
                maybeDeclareMetaType(stream, meta_class->qualifiedCppName(), registeredTypeNames);
            else
                registeredTypeNames << meta_class->qualifiedCppName();
            maybeDeclareMetaType(stream, meta_class->qualifiedCppName() + "*", registeredTypeNames);
        }
        if (meta_class->generateShellClass()) {
            if (meta_class->typeEntry()->isValue()) {
                maybeDeclareMetaType(stream, "QtScriptShell_" + meta_class->name(),
                                     registeredTypeNames);
            }
            maybeDeclareMetaType(stream, "QtScriptShell_" + meta_class->name() + "*",
                                 registeredTypeNames);
        }

        declareEnumMetaTypes(stream, meta_class, registeredTypeNames);

        for (int x = 0; x < 2; ++x) {
            QMap<QString, AbstractMetaFunctionList> &map =
                x ? nameToStaticFunctions : nameToPrototypeFunctions;
            QMap<QString, AbstractMetaFunctionList>::const_iterator it;
            for (it = map.constBegin(); it != map.constEnd(); ++it) {
                declareFunctionMetaTypes(stream, it.value(), registeredTypeNames);
            }
        }

        declareFunctionMetaTypes(stream, ctors, registeredTypeNames);

        if (meta_class->baseClass() != 0) {
            maybeDeclareMetaType(stream, meta_class->baseClass()->qualifiedCppName()
                                 + QLatin1String("*"), registeredTypeNames);
        }
        foreach (AbstractMetaClass *iface, meta_class->interfaces()) {
            AbstractMetaClass *impl = iface->primaryInterfaceImplementor();
            maybeDeclareMetaType(stream, impl->qualifiedCppName() + QLatin1String("*"),
                                 registeredTypeNames);
        }

        // ### hackety hack
        if (meta_class->name().endsWith("Gradient"))
            maybeDeclareMetaType(stream, "QGradient", registeredTypeNames);

        stream << endl;
    }

    writeInjectedCode(stream, meta_class, CodeSnip::Beginning);

    // write enum classes
    if (!enums.isEmpty()) {
        writeCreateEnumClassHelper(stream);
        if (hasFlags(enums))
            writeCreateFlagsClassHelper(stream);

        for (int i = 0; i < enums.size(); ++i) {
            const AbstractMetaEnum *enom = enums.at(i);
            writeEnumClass(stream, meta_class, enom);
        }
    }

    stream << "//" << endl;
    stream << "// " << meta_class->name() << endl;
    stream << "//" << endl << endl;

    if (!meta_class->isNamespace()) {
        if (!nameToPrototypeFunctions.isEmpty() || !meta_class->hasDefaultToStringFunction())
            writePrototypeCall(stream, meta_class, nameToPrototypeFunctions, prototypeFunctionsOffset);
    }

    writeStaticCall(stream, meta_class, ctors, nameToStaticFunctions);

    if (isQObjectBased(meta_class)) {
        // write C++ <--> script conversion functions
        stream << "static QScriptValue qtscript_" << meta_class->name() << "_toScriptValue(QScriptEngine *engine, "
               << meta_class->qualifiedCppName() << "* const &in)" << endl
               << "{" << endl
               << "    return engine->newQObject(in, QScriptEngine::QtOwnership, QScriptEngine::PreferExistingWrapperObject);" << endl
               << "}" << endl << endl;
        stream << "static void qtscript_" << meta_class->name() << "_fromScriptValue(const QScriptValue &value, "
               << meta_class->qualifiedCppName() << "* &out)" << endl
               << "{" << endl
               << "    out = qobject_cast<" << meta_class->qualifiedCppName() << "*>(value.toQObject());" << endl
               << "}" << endl << endl;
    }

    //
    // write exported function that creates the QtScript class
    //
    stream << "QScriptValue qtscript_create_" << meta_class->name()
           << "_class(QScriptEngine *engine)" << endl;
    stream << "{" << endl;

    // write lengths array
    stream << "    static const int function_lengths[] = {" << endl;
    stream << "        " << maxFunctionLength(ctors) << endl;
    {
        QMap<QString, AbstractMetaFunctionList>::const_iterator it;
        stream << "        // static" << endl;
        for (it = nameToStaticFunctions.constBegin(); it != nameToStaticFunctions.constEnd(); ++it) {
            stream << "        , " << maxFunctionLength(it.value()) << endl;
        }
        stream << "        // prototype" << endl;
        for (it = nameToPrototypeFunctions.constBegin(); it != nameToPrototypeFunctions.constEnd(); ++it) {
            stream << "        , " << maxFunctionLength(it.value()) << endl;
        }
        if (!meta_class->hasDefaultToStringFunction())
            stream << "        , 0" << endl;
    }
    stream << "    };" << endl;

    // setup prototype
    if (!meta_class->isNamespace()) {
        stream << "    engine->setDefaultPrototype(qMetaTypeId<"
               << meta_class->qualifiedCppName() << "*>(), QScriptValue());" << endl;
        stream << "    QScriptValue proto = engine->newVariant(qVariantFromValue(("
               << meta_class->qualifiedCppName() << "*)0));" << endl;
        bool havePrototypePrototype = false;
        if (meta_class->baseClass() != 0) {
            stream << "    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<"
                   << meta_class->baseClass()->qualifiedCppName() << "*>()));" << endl;
            havePrototypePrototype = true;
        }
        foreach (AbstractMetaClass *iface, meta_class->interfaces()) {
            AbstractMetaClass *impl = iface->primaryInterfaceImplementor();
            if (impl == meta_class)
                continue;
            if (!havePrototypePrototype) {
                stream << "    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<"
                       << impl->qualifiedCppName() << "*>()));" << endl;
                havePrototypePrototype = true;
            } else {
                // alternative would be to copy the properties from the secondary
                // prototype to the primary prototype.
                stream << "    proto.setProperty(QString::fromLatin1(\"__"
                       << impl->name() << "__\")," << endl
                       << "        engine->defaultPrototype(qMetaTypeId<"
                       << impl->qualifiedCppName() << "*>())," << endl
                       << "        QScriptValue::SkipInEnumeration);" << endl;
            }
        }
        if (!nameToPrototypeFunctions.isEmpty()) {
            QMap<QString, AbstractMetaFunctionList>::const_iterator it;
            int count = nameToPrototypeFunctions.size();
            if (!meta_class->hasDefaultToStringFunction())
                ++count;
            stream << "    for (int i = 0; i < " << count << "; ++i) {" << endl
                   << "        QScriptValue fun = engine->newFunction(qtscript_"
                   << meta_class->name() << "_prototype_call, function_lengths[i+"
                   << prototypeFunctionsOffset << "]);" << endl
                   << "        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));" << endl
                   << "        proto.setProperty(QString::fromLatin1(qtscript_"
                   << meta_class->name() << "_function_names[i+" << prototypeFunctionsOffset << "])," << endl
                   << "            fun, QScriptValue::SkipInEnumeration);" << endl
                   << "    }" << endl;
        }
        writeInjectedCode(stream, meta_class, CodeSnip::PrototypeInitialization);
        stream << endl;

        // register the prototype
//        stream << "    qDebug() << \"registering " << meta_class->name() << " prototype\";" << endl;
        if (meta_class->typeEntry()->isValue() && hasDefaultCtor) {
            stream << "    engine->setDefaultPrototype(qMetaTypeId<"
                   << meta_class->qualifiedCppName() << ">(), proto);" << endl;
        }
        if (isQObjectBased(meta_class)) {
            stream << "    qScriptRegisterMetaType<" << meta_class->qualifiedCppName() << "*>(engine, qtscript_"
                   << meta_class->name() << "_toScriptValue, " << endl << "        qtscript_"
                   << meta_class->name() << "_fromScriptValue, proto);" << endl;
        } else {
            stream << "    engine->setDefaultPrototype(qMetaTypeId<"
                   << meta_class->qualifiedCppName() << "*>(), proto);" << endl;
        }
        stream << endl;
    } else {
        stream << "    QScriptValue proto = QScriptValue();" << endl;
    }

    // setup constructor
    stream << "    QScriptValue ctor = engine->newFunction(qtscript_" << meta_class->name()
           << "_static_call, proto, function_lengths[0]);" << endl;
    stream << "    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));" << endl;
    if (!nameToStaticFunctions.isEmpty()) {
        // static functions
        QMap<QString, AbstractMetaFunctionList>::const_iterator it;
        stream << "    for (int i = 0; i < " << nameToStaticFunctions.size() << "; ++i) {" << endl
               << "        QScriptValue fun = engine->newFunction(qtscript_" << meta_class->name()
               << "_static_call," << endl
               << "            function_lengths[i+" << staticFunctionsOffset << "]);" << endl
               << "        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i+1)));" << endl
               << "        ctor.setProperty(QString::fromLatin1(qtscript_"
               << meta_class->name() << "_function_names[i+" << staticFunctionsOffset << "])," << endl
               << "            fun, QScriptValue::SkipInEnumeration);" << endl
               << "    }" << endl;
    }
    stream << endl;
    //   enums and flags classes
    {
        for (int i = 0; i < enums.size(); ++i) {
            const AbstractMetaEnum *enom = enums.at(i);
            stream << "    ctor.setProperty(QString::fromLatin1(\""
                   << enom->name() << "\")," << endl
                   << "        qtscript_create_" << meta_class->name()
                   << "_" << enom->name() << "_class(engine, ctor));" << endl;
            FlagsTypeEntry *flags = enom->typeEntry()->flags();
            if (flags) {
                stream << "    ctor.setProperty(QString::fromLatin1(\""
                       << flags->targetLangName() << "\")," << endl
                       << "        qtscript_create_" << meta_class->name()
                       << "_" << flags->targetLangName() << "_class(engine));" << endl;
            }
        }
    }

    writeInjectedCode(stream, meta_class, CodeSnip::ConstructorInitialization);

    stream << "    return ctor;" << endl;
    stream << "}" << endl;

    writeInjectedCode(stream, meta_class, CodeSnip::End);

    QString pro_file_name = meta_class->package().replace(".", "_") + "/" + meta_class->package().replace(".", "_") + ".pri";
    priGenerator->addSource(pro_file_name, fileNameForClass(meta_class));
    setupGenerator->addClass(meta_class);
}

bool ClassGenerator::isBuiltIn(const QString& name) {
  
  static QSet<QString> builtIn;
  if (builtIn.isEmpty()) {
    builtIn.insert("Qt");
    builtIn.insert("QFont");
    builtIn.insert("QPixmap");
    builtIn.insert("QBrush");
    builtIn.insert("QPalette");
    builtIn.insert("QIcon");
    builtIn.insert("QImage");
    builtIn.insert("QPolygon");
    builtIn.insert("QRegion");
    builtIn.insert("QBitmap");
    builtIn.insert("QCursor");
    builtIn.insert("QColor");
    builtIn.insert("QSizePolicy");
    builtIn.insert("QKeySequence");
    builtIn.insert("QTextLength");
    builtIn.insert("QTextFormat");
    builtIn.insert("QMatrix");
    builtIn.insert("QDate");
    builtIn.insert("QTime");
    builtIn.insert("QDateTime");
    builtIn.insert("QUrl");
    builtIn.insert("QLocale");
    builtIn.insert("QRect");
    builtIn.insert("QRectF");
    builtIn.insert("QSize");
    builtIn.insert("QSizeF");
    builtIn.insert("QLine");
    builtIn.insert("QLineF");
    builtIn.insert("QPoint");
    builtIn.insert("QPointF");
    builtIn.insert("QRegExp");
  }
  return builtIn.contains(name);
}
