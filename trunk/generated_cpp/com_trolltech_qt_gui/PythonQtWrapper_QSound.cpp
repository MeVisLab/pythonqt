#include "PythonQtWrapper_QSound.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

QSound* PythonQtWrapper_QSound::new_QSound(const QString&  filename, QObject*  parent)
{ 
return new QSound(filename, parent); }

QString  PythonQtWrapper_QSound::fileName(QSound* theWrappedObject) const
{
return theWrappedObject->fileName();
}

bool  PythonQtWrapper_QSound::static_QSound_isAvailable()
{
return QSound::isAvailable();
}

bool  PythonQtWrapper_QSound::isFinished(QSound* theWrappedObject) const
{
return theWrappedObject->isFinished();
}

int  PythonQtWrapper_QSound::loops(QSound* theWrappedObject) const
{
return theWrappedObject->loops();
}

int  PythonQtWrapper_QSound::loopsRemaining(QSound* theWrappedObject) const
{
return theWrappedObject->loopsRemaining();
}

void PythonQtWrapper_QSound::static_QSound_play(const QString&  filename)
{
QSound::play(filename);
}

void PythonQtWrapper_QSound::setLoops(QSound* theWrappedObject, int  arg__1)
{
theWrappedObject->setLoops(arg__1);
}

