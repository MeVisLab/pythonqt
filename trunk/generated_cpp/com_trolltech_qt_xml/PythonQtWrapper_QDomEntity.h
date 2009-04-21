#ifndef PYTHONQTWRAPPER_QDOMENTITY_H
#define PYTHONQTWRAPPER_QDOMENTITY_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomEntity : public QObject
{ Q_OBJECT
public:
public slots:
QDomEntity* new_QDomEntity();
QDomEntity* new_QDomEntity(const QDomEntity&  x);
void delete_QDomEntity(QDomEntity* obj) { delete obj; } 
   QString  publicId(QDomEntity* theWrappedObject) const;
   QString  notationName(QDomEntity* theWrappedObject) const;
   QString  systemId(QDomEntity* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDOMENTITY_H
