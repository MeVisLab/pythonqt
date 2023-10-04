/****************************************************************************
**
** Copyright (C) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Script Generator project on Qt Labs.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "asttoxml.h"
#include "control.h"
#include "parser.h"
#include "binder.h"


#include <QXmlStreamWriter>
#include <QTextStream>
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
#   include <QTextCodec>
#endif
#include <QFile>

void astToXML(QString name) {
    QFile file(name);

    if (!file.open(QFile::ReadOnly))
        return;

    QTextStream stream(&file);
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    stream.setCodec(QTextCodec::codecForName("UTF-8"));
#else
    /* NOTE, for Qt6:
     *
     *  stream.setEncoding(QStringConverter::Utf8)
     *
     * is the default but will be overridden if the UTF-16 BOM is seen.  This
     * is almost certainly the correct behavior because the BOM isn't valid in
     * a text stream otherwise.
     */
#endif
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
    for (NamespaceModelItem item : namespaceMap.values()) {
        writeOutNamespace(s, item);
    }

    QHash<QString, ClassModelItem> typeMap = dom->classMap();
    for (ClassModelItem item : typeMap.values()) {
        writeOutClass(s, item);
    }
    s.writeEndElement();
}


void writeOutNamespace(QXmlStreamWriter &s, NamespaceModelItem &item) {
    s.writeStartElement("namespace");
    s.writeAttribute("name", item->name());

    QHash<QString, NamespaceModelItem> namespaceMap = item->namespaceMap();
    for (NamespaceModelItem namespaceItem : namespaceMap.values()) {
        writeOutNamespace(s, namespaceItem);
    }

    QHash<QString, ClassModelItem> typeMap = item->classMap();
    for (ClassModelItem classItem : typeMap.values()) {
        writeOutClass(s, classItem);
    }

    QHash<QString, EnumModelItem> enumMap = item->enumMap();
    for (EnumModelItem enumItem : enumMap.values()) {
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

    if (!item->exception().isEmpty()) {
        s.writeStartElement("exception");
        s.writeAttribute("throw", item->exception());
        s.writeEndElement();
    }

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
    for (EnumModelItem enumItem : enumMap.values()) {
        writeOutEnum(s, enumItem);
    }

    QMultiHash<QString, FunctionModelItem> functionMap = item->functionMap();
    for (FunctionModelItem funcItem : functionMap.values()) {
        writeOutFunction(s, funcItem);
    }

    QHash<QString, ClassModelItem> typeMap = item->classMap();
    for (ClassModelItem classItem : typeMap.values()) {
        writeOutClass(s, classItem);
    }
    s.writeEndElement();
}
