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

#include "docgenerator.h"
#include "fileout.h"

DocGenerator::DocGenerator()
{
}

QString DocGenerator::fileNameForClass(const AbstractMetaClass *meta_class) const
{
    return QString::fromLatin1("%0.html").arg(meta_class->name().toLower());
}

QString DocGenerator::subDirectoryForClass(const AbstractMetaClass *) const
{
    return QString::fromLatin1("doc");
}

static void writeDocumentHeader(QTextStream &s, const QString &title)
{
    s << "<?xml version=\"1.0\" encoding=\"iso-8859-1\"?>" << endl
      << "<!DOCTYPE html" << endl
      << "    PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"DTD/xhtml1-strict.dtd\">" << endl
      << "<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\" lang=\"en\">" << endl
      << "<head>" << endl
      << "  <title>" << title << "</title>" << endl
      << "  <link href=\"classic.css\" rel=\"stylesheet\" type=\"text/css\" />" << endl
      << "</head>" << endl
      << "<body>" << endl;
}

static void writeDocumentFooter(QTextStream &s)
{
    s << "</body>" << endl
      << "</html>" << endl;
}

static bool classLessThan(const AbstractMetaClass *c1, const AbstractMetaClass *c2)
{
    return c1->name() < c2->name();
}

bool DocGenerator::shouldGenerate(const AbstractMetaClass *meta_class) const
{
    uint cg = meta_class->typeEntry()->codeGeneration();
    return (cg & TypeEntry::GenerateCode) != 0;
}

void DocGenerator::generate()
{
    Generator::generate();

    QHash<QString, QList<const AbstractMetaClass*> > packHash;
    for (int i = 0; i < m_classes.size(); ++i) {
        const AbstractMetaClass *cls = m_classes.at(i);
        packHash[cls->package()].append(cls);
    }

    // package pages
    QHash<QString, QList<const AbstractMetaClass*> >::const_iterator it;
    for (it = packHash.constBegin(); it != packHash.constEnd(); ++it) {
        QString package = it.key();
        QList<const AbstractMetaClass*> classesInPackage = it.value();
        qSort(classesInPackage.begin(), classesInPackage.end(), classLessThan);

        FileOut file(m_out_dir + "/doc/" + package.split(".").join("_") + ".html");

        writeDocumentHeader(file.stream, package + " Package");

        file.stream << "<h1 align=\"center\">" << package << " Package</h1>" << endl;

        file.stream << "<h2>Classes</h2>" << endl
                    << "<p><table width=\"100%\" class=\"annotated\" cellpadding=\"2\" cellspacing=\"1\" border=\"0\">" << endl;

        for (int i = 0; i < classesInPackage.size(); ++i) {
            const AbstractMetaClass *cls = classesInPackage.at(i);
            if (cls->name() == "Global")
                continue; /// ### fixme
            file.stream << "<tr valign=\"top\" class=\"";
            if (i & 1)
                file.stream << "odd";
            else
                file.stream << "even";
            file.stream << "\"><th><a href=\"" << fileNameForClass(cls) << "\">" << cls->name()
                        << "</a></th></tr>" << endl;
        }

        file.stream << "</table></p>" << endl;

        writeDocumentFooter(file.stream);
    }

    // all classes page
    {
        FileOut file(m_out_dir + "/doc/classes.html");

        writeDocumentHeader(file.stream, "Classes");

        file.stream << "<h1 align=\"center\">Classes</h1>" << endl
                    << "<p><table width=\"100%\" class=\"annotated\" cellpadding=\"2\" cellspacing=\"1\" border=\"0\">" << endl;

        AbstractMetaClassList sortedClasses = m_classes;
        qSort(sortedClasses.begin(), sortedClasses.end(), classLessThan);

        for (int i = 0; i < sortedClasses.size(); ++i) {
            const AbstractMetaClass *cls = sortedClasses.at(i);
            if (cls->name() == "Global")
                continue; /// ### fixme
            file.stream << "<tr valign=\"top\" class=\"";
            if (i & 1)
                file.stream << "odd";
            else
                file.stream << "even";
            file.stream << "\"><th><a href=\"" << fileNameForClass(cls) << "\">" << cls->name()
                        << "</a></th></tr>" << endl;
        }

        file.stream << "</table></p>" << endl;

        writeDocumentFooter(file.stream);
    }

    // index.html
    {
        FileOut file(m_out_dir + "/doc/index.html");

        writeDocumentHeader(file.stream, "Qt Bindings Reference Documentation");

        file.stream << "<h1 align=\"center\">Qt Script Qt Bindings Reference Documentation</h1>" << endl;

        file.stream << "<h3>Packages</h3>" << endl;
        file.stream << "<ul>" << endl;
        QStringList sortedPackages = packHash.keys();
        qSort(sortedPackages.begin(), sortedPackages.end());
        for (int i = 0; i < sortedPackages.size(); ++i) {
            QString pkg = sortedPackages.at(i);
            file.stream << "<li><b><a href=\"" << pkg.split(".").join("_") << ".html\">"
                        << pkg << "</a></b></li>" << endl;
        }
        file.stream << "</ul>" << endl;

        file.stream << "<h3><a href=\"classes.html\">All Classes</a></h3>" << endl;

        file.stream << "<h3><a href=\"../examples\">Examples</a></h3>" << endl;

        file.stream << "<h3>Getting Started</h3>" << endl
                    << "<p>Using the Qt API in Qt Script is very similar to C++." << endl
                    << "<pre>var f = new QFile(\"foo.txt\");</pre>" << endl
                    << "C++ enum values are mapped to properties of the script constructor function; e.g. " << endl
                    << "QIODevice::ReadOnly becomes QIODevice.ReadOnly.</p>" << endl
                    << "<pre>f.open(new QIODevice.OpenMode(QIODevice.ReadOnly));</pre>" << endl
                    << "<p>Each C++ flag type is mapped to a property of the script constructor function; e.g. " << endl
                    << "QIODevice::OpenMode becomes QIODevice.OpenMode. Such a property is a constructor function " << endl
                    << "that takes one or more enum values and constructs a flags instance by OR'ing the arguments " << endl
                    << "together.</p>" << endl
                    << "<pre>var ts = new QTextStream(f);" << endl
                    << "ts.writeString(\"Boo\");</pre>" << endl
                    << "<p>C++ streaming operators are normally mapped to readT() and writeT() functions.</p>" << endl
                    << "<pre>f.close();</pre>" << endl
                    << "<p>In Qt Script, all objects are allocated on the heap; objects that are no longer " << endl
                    << "referenced are garbage collected sometime in the future; therefore, make sure to " << endl
                    << "explicitly free up resources if you can. (Without the call to close(), the underlying " << endl
                    << "file would remain open until the file object is garbage collected.)</p>" << endl
            ;

        file.stream << "<h3><a href=\"http://doc.trolltech.com/latest\">Qt Reference Documentation</a></h3>" << endl;

        writeDocumentFooter(file.stream);
    }
}

static bool shouldIgnoreEnum(const AbstractMetaEnum *enom)
{
    return !enom->wasPublic() || (enom->name() == "enum_1");
}

// in classgenerator.cpp
void findPrototypeAndStaticFunctions(
    const AbstractMetaClass *meta_class,
    QMap<QString, AbstractMetaFunctionList> &nameToPrototypeFunctions,
    QMap<QString, AbstractMetaFunctionList> &nameToStaticFunctions);
QList<int> uniqueEnumValueIndexes(const AbstractMetaEnumValueList &values);

static void writeFunction(QTextStream &s, const AbstractMetaFunction *fun)
{
    s << "<li><div class=\"fn\"/><b>" << fun->targetLangSignature() << "</b></li>" << endl;
}

void DocGenerator::write(QTextStream &s, const AbstractMetaClass *meta_class)
{
    QString title = meta_class->name();
    title.append(" ");
    if (meta_class->isNamespace())
        title.append("Namespace");
    else
        title.append("Class");
    title.append(" Reference");
    writeDocumentHeader(s, title);

    s << "<h1 align=\"center\">" << title << "</h1>" << endl;

    s << "<h3 align=\"center\">[<a href=\"";
    s << meta_class->package().split(".").join("_") << ".html";
    s << "\">";
    s << meta_class->package();
    s << "</a> package]</h3>" << endl;

    if (meta_class->baseClass()) {
        s << "<p>Inherits <a href=\"" << fileNameForClass(meta_class->baseClass()) << "\">"
          << meta_class->baseClass()->name() << "</a>.</p>" << endl;
    } else if (!meta_class->interfaces().isEmpty()) {
        AbstractMetaClass *iface = meta_class->interfaces().first();
        AbstractMetaClass *impl = iface->primaryInterfaceImplementor();
        if (impl != meta_class) {
            s << "<p>Inherits <a href=\"" << fileNameForClass(impl) << "\">"
              << impl->name() << "</a>.</p>" << endl;
        }
    }

    AbstractMetaFunctionList ctors;
    ctors = meta_class->queryFunctions(AbstractMetaClass::Constructors
                                       | AbstractMetaClass::WasPublic
                                       | AbstractMetaClass::NotRemovedFromTargetLang);
    QMap<QString, AbstractMetaFunctionList> nameToPrototypeFunctions;
    QMap<QString, AbstractMetaFunctionList> nameToStaticFunctions;
    findPrototypeAndStaticFunctions(meta_class, nameToPrototypeFunctions, nameToStaticFunctions);

    s << "<h3>Constructor</h3>" << endl;
    if (!ctors.isEmpty()) {
        s << "<ul>" << endl;
        for (int i = 0; i < ctors.size(); ++i) {
            writeFunction(s, ctors.at(i));
        }
        s << "</ul>" << endl;
    } else {
        s << "<p>This class has no public constructors. Calling the constructor function will cause a TypeError.</p>";
    }

    s << "<h3>Constructor Properties</h3>" << endl;
    s << "<ul>" << endl;
    s << "<li><b>prototype</b>: The " << meta_class->name() << " prototype object</li>" << endl;
    if (!nameToStaticFunctions.isEmpty()) {
        QMap<QString, AbstractMetaFunctionList>::const_iterator it;
        for (it = nameToStaticFunctions.constBegin(); it != nameToStaticFunctions.constEnd(); ++it) {
            writeFunction(s, it.value().first());
        }
    }
    {
        AbstractMetaEnumList enums = meta_class->enums();
        for (int i = 0; i < enums.size(); ++i) {
            const AbstractMetaEnum *enom = enums.at(i);
            if (shouldIgnoreEnum(enom))
                continue;
            AbstractMetaEnumValueList values = enom->values();
            QList<int> indexes = uniqueEnumValueIndexes(values);
            for (int j = 0; j < indexes.size(); ++j) {
                AbstractMetaEnumValue *val = values.at(indexes.at(j));
                s << "<li><b>" << val->name();
                if (!val->stringValue().isEmpty())
                    s << " = " << val->stringValue();
                s << "</b></li>" << endl;
            }
            s << "<li><b>" << enom->name() << "( value )</b></li>" << endl;
            FlagsTypeEntry *flags = enom->typeEntry()->flags();
            if (flags)
                s << "<li><b>" << flags->flagsName() << "( value1, value2, ... )</b></li>" << endl;
        }
    }
    s << "</ul>" << endl;

    if (!nameToPrototypeFunctions.isEmpty()) {
        s << "<h3>Prototype Object Properties</h3>" << endl;
        if (meta_class->baseClass()) {
            s << "<p>The " << meta_class->name() << " prototype object inherits properties from the "
              << "<a href=\"" << fileNameForClass(meta_class->baseClass()) << "\">"
              << meta_class->baseClass()->name() << "</a> prototype object and "
              << "also has the following properties.</p>" << endl;
        }
        s << "<ul>" << endl;
        QMap<QString, AbstractMetaFunctionList>::const_iterator it;
        for (it = nameToPrototypeFunctions.constBegin(); it != nameToPrototypeFunctions.constEnd(); ++it) {
            writeFunction(s, it.value().first());
        }
        s << "</ul>" << endl;
    }

    if (!meta_class->isNamespace()) {
        s << "<h3>Instance Properties</h3>" << endl;
        {
            QList<QPropertySpec *> props = meta_class->propertySpecs();
            if (!props.isEmpty()) {
                s << "<p>" << meta_class->name() << " objects inherit properties from the "
                  << meta_class->name() << " prototype object and also have the following properties.</p>" << endl;
                s << "<ul>" << endl;
                for (int i = 0; i < props.size(); ++i) {
                    s << "<li><div class=\"fn\"/><b>" << props.at(i)->name() << "</b></li>" << endl;
                }
                s << "</ul>" << endl;
            } else {
                s << "<p>" << meta_class->name() << " objects have no special properties beyond those "
                  << "inherited from the " << meta_class->name() << " prototype object.</p>" << endl;
            }
        }
    }

    writeDocumentFooter(s);
}
