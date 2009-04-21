#ifndef PYTHONQTWRAPPER_QSOUND_H
#define PYTHONQTWRAPPER_QSOUND_H

#include <qsound.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QSound : public QSound
{
public:
    PythonQtShell_QSound(const QString&  filename, QObject*  parent = 0):QSound(filename, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSound : public QObject
{ Q_OBJECT
public:
public slots:
QSound* new_QSound(const QString&  filename, QObject*  parent = 0);
void delete_QSound(QSound* obj) { delete obj; } 
   void static_QSound_play(const QString&  filename);
   int  loops(QSound* theWrappedObject) const;
   bool  isFinished(QSound* theWrappedObject) const;
   bool  static_QSound_isAvailable();
   QString  fileName(QSound* theWrappedObject) const;
   int  loopsRemaining(QSound* theWrappedObject) const;
   void setLoops(QSound* theWrappedObject, int  arg__1);
};

#endif // PYTHONQTWRAPPER_QSOUND_H
