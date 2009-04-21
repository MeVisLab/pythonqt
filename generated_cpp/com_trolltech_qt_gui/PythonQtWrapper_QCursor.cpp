#include "PythonQtWrapper_QCursor.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QPixmap>
#include <QVariant>
#include <qbitmap.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qpixmap.h>
#include <qpoint.h>

QCursor* PythonQtWrapper_QCursor::new_QCursor()
{ 
return new QCursor(); }

QCursor* PythonQtWrapper_QCursor::new_QCursor(Qt::CursorShape  shape)
{ 
return new QCursor(shape); }

QCursor* PythonQtWrapper_QCursor::new_QCursor(const QBitmap&  bitmap, const QBitmap&  mask, int  hotX, int  hotY)
{ 
return new QCursor(bitmap, mask, hotX, hotY); }

QCursor* PythonQtWrapper_QCursor::new_QCursor(const QCursor&  cursor)
{ 
return new QCursor(cursor); }

QCursor* PythonQtWrapper_QCursor::new_QCursor(const QPixmap&  pixmap, int  hotX, int  hotY)
{ 
return new QCursor(pixmap, hotX, hotY); }

QPoint  PythonQtWrapper_QCursor::hotSpot(QCursor* theWrappedObject) const
{
return  theWrappedObject->hotSpot();
}

const QBitmap*  PythonQtWrapper_QCursor::mask(QCursor* theWrappedObject) const
{
return  theWrappedObject->mask();
}

void PythonQtWrapper_QCursor::readFrom(QCursor* theWrappedObject, QDataStream&  inS)
{
inS >>  (*theWrappedObject);
}

void PythonQtWrapper_QCursor::setShape(QCursor* theWrappedObject, Qt::CursorShape  newShape)
{
 theWrappedObject->setShape(newShape);
}

void PythonQtWrapper_QCursor::static_QCursor_setPos(int  x, int  y)
{
QCursor::setPos(x, y);
}

void PythonQtWrapper_QCursor::static_QCursor_setPos(const QPoint&  p)
{
QCursor::setPos(p);
}

Qt::CursorShape  PythonQtWrapper_QCursor::shape(QCursor* theWrappedObject) const
{
return  theWrappedObject->shape();
}

QPixmap  PythonQtWrapper_QCursor::pixmap(QCursor* theWrappedObject) const
{
return  theWrappedObject->pixmap();
}

const QBitmap*  PythonQtWrapper_QCursor::bitmap(QCursor* theWrappedObject) const
{
return  theWrappedObject->bitmap();
}

void PythonQtWrapper_QCursor::writeTo(QCursor* theWrappedObject, QDataStream&  outS)
{
outS <<  (*theWrappedObject);
}

QPoint  PythonQtWrapper_QCursor::static_QCursor_pos()
{
return QCursor::pos();
}

