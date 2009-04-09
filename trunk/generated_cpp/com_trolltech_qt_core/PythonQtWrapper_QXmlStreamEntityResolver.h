#ifndef PYTHONQTWRAPPER_QXMLSTREAMENTITYRESOLVER_H
#define PYTHONQTWRAPPER_QXMLSTREAMENTITYRESOLVER_H

#include <qxmlstream.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QXmlStreamEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityResolver* new_QXmlStreamEntityResolver();
void delete_QXmlStreamEntityResolver(QXmlStreamEntityResolver* obj) { delete obj; } 
   QString  resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId);
   QString  resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name);
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMENTITYRESOLVER_H
