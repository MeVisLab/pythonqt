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

#ifndef SHELLGENERATOR_H
#define SHELLGENERATOR_H

#include "generator.h"
#include "metaqtscript.h"
#include "prigenerator.h"

class ShellGenerator : public Generator
{
    Q_OBJECT

public:
    virtual QString subDirectoryForClass(const AbstractMetaClass *cls) const
    {
        return "generated_cpp/" + cls->package().replace(".", "_") + "/";
    }

    static void writeTypeInfo(QTextStream &s, const AbstractMetaType *type, Option option = NoOption);
    static void writeFunctionSignature(QTextStream &s, const AbstractMetaFunction *meta_function,
                                const AbstractMetaClass *implementor = 0,
                                const QString &name_prefix = QString(),
                                Option option = NoOption,
                                const QString &classname_prefix = QString(),
                                const QStringList &extra_arguments = QStringList(),
                                int numArguments = -1);
    static void writeFunctionArguments(QTextStream &s, const AbstractMetaClass* owner, const AbstractMetaArgumentList &arguments,
                                Option option = NoOption,
                                int numArguments = -1);

    bool shouldGenerate(const AbstractMetaClass *meta_class) const;

    static QString shellClassName(const AbstractMetaClass *meta_class) {
      return "PythonQtShell_" + meta_class->name();
    }
    static QString wrapperClassName(const AbstractMetaClass *meta_class) {
      return "PythonQtWrapper_" + meta_class->name();
    }
    static QString promoterClassName(const AbstractMetaClass *meta_class) {
      return "PythonQtPublicPromoter_" + meta_class->name();
    }

    static AbstractMetaFunctionList getFunctionsToWrap(const AbstractMetaClass* cls);
    static AbstractMetaFunctionList getVirtualFunctionsForShell(const AbstractMetaClass* cls);
    static AbstractMetaFunctionList getProtectedFunctionsThatNeedPromotion(const AbstractMetaClass* cls);

    // PythonQt builtins..., dont put them in pri files and dont register them, but generate the code
    static bool isBuiltIn(const QString& name);

    static bool isSpecialStreamingOperator(const AbstractMetaFunction *fun);

    static void writeInclude(QTextStream &stream, const Include &inc);

 protected:
    PriGenerator *priGenerator;

};


#endif // SHELLGENERATOR_H
