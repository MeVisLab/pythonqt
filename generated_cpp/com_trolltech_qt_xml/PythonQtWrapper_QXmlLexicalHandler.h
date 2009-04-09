#ifndef PYTHONQTWRAPPER_QXMLLEXICALHANDLER_H
#define PYTHONQTWRAPPER_QXMLLEXICALHANDLER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QXmlLexicalHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlLexicalHandler(QXmlLexicalHandler* obj) { delete obj; } 
   bool  comment(QXmlLexicalHandler* theWrappedObject, const QString&  ch);
   bool  endCDATA(QXmlLexicalHandler* theWrappedObject);
   bool  endDTD(QXmlLexicalHandler* theWrappedObject);
   bool  endEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name);
   QString  errorString(QXmlLexicalHandler* theWrappedObject) const;
   bool  startCDATA(QXmlLexicalHandler* theWrappedObject);
   bool  startDTD(QXmlLexicalHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  startEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name);
};

#endif // PYTHONQTWRAPPER_QXMLLEXICALHANDLER_H
