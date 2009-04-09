#ifndef PYTHONQTWRAPPER_QBUFFER_H
#define PYTHONQTWRAPPER_QBUFFER_H

#include <qbuffer.h>
#include <QObject>

#include <QVariant>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtWrapper_QBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QBuffer* new_QBuffer(QByteArray*  buf, QObject*  parent = 0);
QBuffer* new_QBuffer(QObject*  parent = 0);
void delete_QBuffer(QBuffer* obj) { delete obj; } 
   bool  atEnd(QBuffer* theWrappedObject) const;
   bool  canReadLine(QBuffer* theWrappedObject) const;
   void close(QBuffer* theWrappedObject);
   bool  open(QBuffer* theWrappedObject, QIODevice::OpenMode  openMode);
   qint64  pos(QBuffer* theWrappedObject) const;
   bool  seek(QBuffer* theWrappedObject, qint64  off);
   void setBuffer(QBuffer* theWrappedObject, QByteArray*  a);
   void setData(QBuffer* theWrappedObject, const QByteArray&  data);
   qint64  size(QBuffer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QBUFFER_H
