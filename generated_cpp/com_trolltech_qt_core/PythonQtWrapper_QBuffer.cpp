#include "PythonQtWrapper_QBuffer.h"

#include <QVariant>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

QBuffer* PythonQtWrapper_QBuffer::new_QBuffer(QByteArray*  buf, QObject*  parent)
{ 
return new QBuffer(buf, parent); }

QBuffer* PythonQtWrapper_QBuffer::new_QBuffer(QObject*  parent)
{ 
return new QBuffer(parent); }

bool  PythonQtWrapper_QBuffer::atEnd(QBuffer* theWrappedObject) const
{
return theWrappedObject->atEnd();
}

bool  PythonQtWrapper_QBuffer::canReadLine(QBuffer* theWrappedObject) const
{
return theWrappedObject->canReadLine();
}

void PythonQtWrapper_QBuffer::close(QBuffer* theWrappedObject)
{
theWrappedObject->close();
}

bool  PythonQtWrapper_QBuffer::open(QBuffer* theWrappedObject, QIODevice::OpenMode  openMode)
{
return theWrappedObject->open(openMode);
}

qint64  PythonQtWrapper_QBuffer::pos(QBuffer* theWrappedObject) const
{
return theWrappedObject->pos();
}

bool  PythonQtWrapper_QBuffer::seek(QBuffer* theWrappedObject, qint64  off)
{
return theWrappedObject->seek(off);
}

void PythonQtWrapper_QBuffer::setBuffer(QBuffer* theWrappedObject, QByteArray*  a)
{
theWrappedObject->setBuffer(a);
}

void PythonQtWrapper_QBuffer::setData(QBuffer* theWrappedObject, const QByteArray&  data)
{
theWrappedObject->setData(data);
}

qint64  PythonQtWrapper_QBuffer::size(QBuffer* theWrappedObject) const
{
return theWrappedObject->size();
}

