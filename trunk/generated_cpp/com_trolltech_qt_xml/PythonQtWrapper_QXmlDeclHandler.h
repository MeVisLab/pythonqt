#ifndef PYTHONQTWRAPPER_QXMLDECLHANDLER_H
#define PYTHONQTWRAPPER_QXMLDECLHANDLER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QXmlDeclHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlDeclHandler(QXmlDeclHandler* obj) { delete obj; } 
   bool  attributeDecl(QXmlDeclHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
   QString  errorString(QXmlDeclHandler* theWrappedObject) const;
   bool  externalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  internalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  value);
};

#endif // PYTHONQTWRAPPER_QXMLDECLHANDLER_H
