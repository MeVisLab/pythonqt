#ifndef PYTHONQTWRAPPER_QSTYLEPLUGIN_H
#define PYTHONQTWRAPPER_QSTYLEPLUGIN_H

#include <qstyleplugin.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qstyle.h>

class PythonQtWrapper_QStylePlugin : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QStylePlugin(QStylePlugin* obj) { delete obj; } 
   QStyle*  create(QStylePlugin* theWrappedObject, const QString&  key);
   QStringList  keys(QStylePlugin* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSTYLEPLUGIN_H
