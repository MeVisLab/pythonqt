#ifndef PYTHONQTWRAPPER_QTEXTCODECPLUGIN_H
#define PYTHONQTWRAPPER_QTEXTCODECPLUGIN_H

#include <qtextcodecplugin.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtextcodec.h>

class PythonQtWrapper_QTextCodecPlugin : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QTextCodecPlugin(QTextCodecPlugin* obj) { delete obj; } 
   QList<QByteArray >  aliases(QTextCodecPlugin* theWrappedObject) const;
   QTextCodec*  createForMib(QTextCodecPlugin* theWrappedObject, int  mib);
   QTextCodec*  createForName(QTextCodecPlugin* theWrappedObject, const QByteArray&  name);
   QList<int >  mibEnums(QTextCodecPlugin* theWrappedObject) const;
   QList<QByteArray >  names(QTextCodecPlugin* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTCODECPLUGIN_H
