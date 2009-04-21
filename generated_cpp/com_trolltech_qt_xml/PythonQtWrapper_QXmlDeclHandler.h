#ifndef PYTHONQTWRAPPER_QXMLDECLHANDLER_H
#define PYTHONQTWRAPPER_QXMLDECLHANDLER_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QXmlDeclHandler : public QXmlDeclHandler
{
public:
    PythonQtShell_QXmlDeclHandler():QXmlDeclHandler(),_wrapper(NULL) {};

virtual bool  attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
virtual QString  errorString() const;
virtual bool  externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  internalEntityDecl(const QString&  name, const QString&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlDeclHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDeclHandler* new_QXmlDeclHandler();
void delete_QXmlDeclHandler(QXmlDeclHandler* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QXMLDECLHANDLER_H
