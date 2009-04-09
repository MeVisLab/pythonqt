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

#include "asttoxml.h"
#include "control.h"
#include "parser.h"
#include "binder.h"


#include <QXmlStreamWriter>
#include <QTextStream>
#include <QTextCodec>
#include <QFile>

void astToXML(QString name) {
    QFile file(name);

    if (!file.open(QFile::ReadOnly))
        return;

    QTextStream stream(&file);
    stream.setCodec(QTextCodec::codecForName("UTF-8"));
    QByteArray contents = stream.readAll().toUtf8();
    file.close();

    Control control;
    Parser p(&control);
    pool __pool;

    TranslationUnitAST *ast = p.parse(contents, contents.size(), &__pool);

    CodeModel model;
    Binder binder(&model, p.location());
    FileModelItem dom = binder.run(ast);

    QFile outputFile;
    if (!outputFile.open(stdout, QIODevice::WriteOnly))
	{
	    return;
	}

    QXmlStreamWriter s( &outputFile);
    s.setAutoFormatting( true );

    s.writeStartElement("code");

    QHash<QString, NamespaceModelItem> namespaceMap = dom->namespaceMap();
    foreach (NamespaceModelItem item, namespaceMap.values()) {
        writeOutNamespace(s, item);
    }

    QHash<QString, ClassModelItem> typeMap = dom->classMap();
    foreach (ClassModelItem item, typeMap.values()) {
        writeOutClass(s, item);
    }
    s.writeEndElement();
}


void writeOutNamespace(QXmlStreamWriter &s, NamespaceModelItem &item) {
    s.writeStartElement("namespace");
    s.writeAttribute("name", item->name());

    QHash<QString, NamespaceModelItem> namespaceMap = item->namespaceMap();
    foreach (NamespaceModelItem namespaceItem, namespaceMap.values()) {
        writeOutNamespace(s, namespaceItem);
    }

    QHash<QString, ClassModelItem> typeMap = item->classMap();
    foreach (ClassModelItem classItem, typeMap.values()) {
        writeOutClass(s, classItem);
    }

    QHash<QString, EnumModelItem> enumMap = item->enumMap();
    foreach (EnumModelItem enumItem, enumMap.values()) {
        writeOutEnum(s, enumItem);
    }

    s.writeEndElement();
}

void writeOutEnum(QXmlStreamWriter &s, EnumModelItem &item) {
    QString qualified_name = item->qualifiedName().join("::");
    s.writeStartElement("enum");
    s.writeAttribute("name", qualified_name);

    EnumeratorList enumList = item->enumerators();
    for(int i=0; i < enumList.size() ; i++) {
        s.writeStartElement("enumerator");
        if( !enumList[i]->value().isEmpty() )
            s.writeAttribute("value", enumList[i]->value());
        s.writeCharacters(enumList[i]->name());

        s.writeEndElement();
    }
    s.writeEndElement();
}

void writeOutFunction(QXmlStreamWriter &s, FunctionModelItem &item) {
    QString qualified_name = item->qualifiedName().join("::");
    s.writeStartElement("function");
    s.writeAttribute("name", qualified_name);

    ArgumentList arguments = item->arguments();
    for(int i=0; i < arguments.size() ; i++) {
        s.writeStartElement("argument");
        s.writeAttribute("type",  arguments[i]->type().qualifiedName().join("::"));
        s.writeEndElement();
    }
    s.writeEndElement();
}

void writeOutClass(QXmlStreamWriter &s, ClassModelItem &item) {
    QString qualified_name = item->qualifiedName().join("::");
    s.writeStartElement("class");
    s.writeAttribute("name", qualified_name);

    QHash<QString, EnumModelItem> enumMap = item->enumMap();
    foreach (EnumModelItem enumItem, enumMap.values()) {
        writeOutEnum(s, enumItem);
    }

    QHash<QString, FunctionModelItem> functionMap = item->functionMap();
    foreach (FunctionModelItem funcItem, functionMap.values()) {
        writeOutFunction(s, funcItem);
    }

    QHash<QString, ClassModelItem> typeMap = item->classMap();
    foreach (ClassModelItem classItem, typeMap.values()) {
        writeOutClass(s, classItem);
    }
    s.writeEndElement();
}
