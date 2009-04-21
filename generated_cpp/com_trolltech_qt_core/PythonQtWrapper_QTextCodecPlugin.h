#ifndef PYTHONQTWRAPPER_QTEXTCODECPLUGIN_H
#define PYTHONQTWRAPPER_QTEXTCODECPLUGIN_H

#include <qtextcodecplugin.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtextcodec.h>

class PythonQtShell_QTextCodecPlugin : public QTextCodecPlugin
{
public:
    PythonQtShell_QTextCodecPlugin(QObject*  parent = 0):QTextCodecPlugin(parent),_wrapper(NULL) {};

virtual QList<QByteArray >  aliases() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual QTextCodec*  createForMib(int  mib);
virtual QTextCodec*  createForName(const QByteArray&  name);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QList<int >  mibEnums() const;
virtual QList<QByteArray >  names() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCodecPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QTextCodecPlugin* new_QTextCodecPlugin(QObject*  parent = 0);
void delete_QTextCodecPlugin(QTextCodecPlugin* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QTEXTCODECPLUGIN_H
