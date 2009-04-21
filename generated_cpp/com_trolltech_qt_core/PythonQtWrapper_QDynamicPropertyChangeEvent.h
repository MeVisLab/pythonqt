#ifndef PYTHONQTWRAPPER_QDYNAMICPROPERTYCHANGEEVENT_H
#define PYTHONQTWRAPPER_QDYNAMICPROPERTYCHANGEEVENT_H

#include <qcoreevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>

class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; } 
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDYNAMICPROPERTYCHANGEEVENT_H
