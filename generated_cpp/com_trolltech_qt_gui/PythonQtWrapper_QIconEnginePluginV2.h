#ifndef PYTHONQTWRAPPER_QICONENGINEPLUGINV2_H
#define PYTHONQTWRAPPER_QICONENGINEPLUGINV2_H

#include <qiconengineplugin.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

class PythonQtWrapper_QIconEnginePluginV2 : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QIconEnginePluginV2(QIconEnginePluginV2* obj) { delete obj; } 
   QIconEngineV2*  create(QIconEnginePluginV2* theWrappedObject, const QString&  filename = QString());
   QStringList  keys(QIconEnginePluginV2* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QICONENGINEPLUGINV2_H
