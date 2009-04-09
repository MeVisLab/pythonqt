#ifndef PYTHONQTWRAPPER_QSIGNALMAPPER_H
#define PYTHONQTWRAPPER_QSIGNALMAPPER_H

#include <qsignalmapper.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsignalmapper.h>

class PythonQtWrapper_QSignalMapper : public QObject
{ Q_OBJECT
public:
public slots:
QSignalMapper* new_QSignalMapper(QObject*  parent = 0);
void delete_QSignalMapper(QSignalMapper* obj) { delete obj; } 
   QObject*  mapping(QSignalMapper* theWrappedObject, QObject*  object) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, const QString&  text) const;
   QObject*  mapping(QSignalMapper* theWrappedObject, int  id) const;
   void removeMappings(QSignalMapper* theWrappedObject, QObject*  sender);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text);
   void setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id);
};

#endif // PYTHONQTWRAPPER_QSIGNALMAPPER_H
