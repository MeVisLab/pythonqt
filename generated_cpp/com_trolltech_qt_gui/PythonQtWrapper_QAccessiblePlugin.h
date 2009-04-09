#ifndef PYTHONQTWRAPPER_QACCESSIBLEPLUGIN_H
#define PYTHONQTWRAPPER_QACCESSIBLEPLUGIN_H

#include <qaccessibleplugin.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtWrapper_QAccessiblePlugin : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAccessiblePlugin(QAccessiblePlugin* obj) { delete obj; } 
   QAccessibleInterface*  create(QAccessiblePlugin* theWrappedObject, const QString&  key, QObject*  object);
   QStringList  keys(QAccessiblePlugin* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QACCESSIBLEPLUGIN_H
