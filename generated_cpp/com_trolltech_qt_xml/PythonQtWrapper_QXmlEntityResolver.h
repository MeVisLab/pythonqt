#ifndef PYTHONQTWRAPPER_QXMLENTITYRESOLVER_H
#define PYTHONQTWRAPPER_QXMLENTITYRESOLVER_H

#include <qxml.h>
#include <QObject>

#include <QVariant>
#include <qxml.h>

class PythonQtWrapper_QXmlEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlEntityResolver(QXmlEntityResolver* obj) { delete obj; } 
   QString  errorString(QXmlEntityResolver* theWrappedObject) const;
   bool  resolveEntity(QXmlEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);
};

#endif // PYTHONQTWRAPPER_QXMLENTITYRESOLVER_H
