#ifndef PYTHONQTWRAPPER_QXMLDTDHANDLER_H
#define PYTHONQTWRAPPER_QXMLDTDHANDLER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QXmlDTDHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlDTDHandler(QXmlDTDHandler* obj) { delete obj; } 
   QString  errorString(QXmlDTDHandler* theWrappedObject) const;
   bool  notationDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  unparsedEntityDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
};

#endif // PYTHONQTWRAPPER_QXMLDTDHANDLER_H
