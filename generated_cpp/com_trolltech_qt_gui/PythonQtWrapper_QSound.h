#ifndef PYTHONQTWRAPPER_QSOUND_H
#define PYTHONQTWRAPPER_QSOUND_H

#include <qsound.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtWrapper_QSound : public QObject
{ Q_OBJECT
public:
public slots:
QSound* new_QSound(const QString&  filename, QObject*  parent = 0);
void delete_QSound(QSound* obj) { delete obj; } 
   QString  fileName(QSound* theWrappedObject) const;
   bool  static_QSound_isAvailable();
   bool  isFinished(QSound* theWrappedObject) const;
   int  loops(QSound* theWrappedObject) const;
   int  loopsRemaining(QSound* theWrappedObject) const;
   void static_QSound_play(const QString&  filename);
   void setLoops(QSound* theWrappedObject, int  arg__1);
};

#endif // PYTHONQTWRAPPER_QSOUND_H
