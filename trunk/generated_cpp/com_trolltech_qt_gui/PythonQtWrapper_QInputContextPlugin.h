#ifndef PYTHONQTWRAPPER_QINPUTCONTEXTPLUGIN_H
#define PYTHONQTWRAPPER_QINPUTCONTEXTPLUGIN_H

#include <qinputcontextplugin.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtWrapper_QInputContextPlugin : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QInputContextPlugin(QInputContextPlugin* obj) { delete obj; } 
   QInputContext*  create(QInputContextPlugin* theWrappedObject, const QString&  key);
   QString  description(QInputContextPlugin* theWrappedObject, const QString&  key);
   QString  displayName(QInputContextPlugin* theWrappedObject, const QString&  key);
   QStringList  keys(QInputContextPlugin* theWrappedObject) const;
   QStringList  languages(QInputContextPlugin* theWrappedObject, const QString&  key);
};

#endif // PYTHONQTWRAPPER_QINPUTCONTEXTPLUGIN_H
