#include "PythonQtWrapper_QRect.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

QRect* PythonQtWrapper_QRect::new_QRect()
{ 
return new QRect(); }

QRect* PythonQtWrapper_QRect::new_QRect(const QPoint&  topleft, const QPoint&  bottomright)
{ 
return new QRect(topleft, bottomright); }

QRect* PythonQtWrapper_QRect::new_QRect(const QPoint&  topleft, const QSize&  size)
{ 
return new QRect(topleft, size); }

QRect* PythonQtWrapper_QRect::new_QRect(int  left, int  top, int  width, int  height)
{ 
return new QRect(left, top, width, height); }

void PythonQtWrapper_QRect::setRight(QRect* theWrappedObject, int  pos)
{
 theWrappedObject->setRight(pos);
}

void PythonQtWrapper_QRect::moveTopLeft(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->moveTopLeft(p);
}

QRect  PythonQtWrapper_QRect::translated(QRect* theWrappedObject, int  dx, int  dy) const
{
return  theWrappedObject->translated(dx, dy);
}

int  PythonQtWrapper_QRect::height(QRect* theWrappedObject) const
{
return  theWrappedObject->height();
}

void PythonQtWrapper_QRect::setTopRight(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->setTopRight(p);
}

void PythonQtWrapper_QRect::setX(QRect* theWrappedObject, int  x)
{
 theWrappedObject->setX(x);
}

void PythonQtWrapper_QRect::moveBottom(QRect* theWrappedObject, int  pos)
{
 theWrappedObject->moveBottom(pos);
}

int  PythonQtWrapper_QRect::right(QRect* theWrappedObject) const
{
return  theWrappedObject->right();
}

void PythonQtWrapper_QRect::setY(QRect* theWrappedObject, int  y)
{
 theWrappedObject->setY(y);
}

int  PythonQtWrapper_QRect::width(QRect* theWrappedObject) const
{
return  theWrappedObject->width();
}

QPoint  PythonQtWrapper_QRect::center(QRect* theWrappedObject) const
{
return  theWrappedObject->center();
}

bool  PythonQtWrapper_QRect::intersects(QRect* theWrappedObject, const QRect&  r) const
{
return  theWrappedObject->intersects(r);
}

void PythonQtWrapper_QRect::setTop(QRect* theWrappedObject, int  pos)
{
 theWrappedObject->setTop(pos);
}

void PythonQtWrapper_QRect::setSize(QRect* theWrappedObject, const QSize&  s)
{
 theWrappedObject->setSize(s);
}

QRect  PythonQtWrapper_QRect::united(QRect* theWrappedObject, const QRect&  other) const
{
return  theWrappedObject->united(other);
}

void PythonQtWrapper_QRect::setTopLeft(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->setTopLeft(p);
}

QPoint  PythonQtWrapper_QRect::bottomRight(QRect* theWrappedObject) const
{
return  theWrappedObject->bottomRight();
}

void PythonQtWrapper_QRect::readFrom(QRect* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QRect::setBottomRight(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->setBottomRight(p);
}

QRect  PythonQtWrapper_QRect::translated(QRect* theWrappedObject, const QPoint&  p) const
{
return  theWrappedObject->translated(p);
}

QPoint  PythonQtWrapper_QRect::topRight(QRect* theWrappedObject) const
{
return  theWrappedObject->topRight();
}

void PythonQtWrapper_QRect::moveRight(QRect* theWrappedObject, int  pos)
{
 theWrappedObject->moveRight(pos);
}

bool  PythonQtWrapper_QRect::operator_equal(QRect* theWrappedObject, const QRect&  arg__2)
{
return  (*theWrappedObject)== arg__2;
}

bool  PythonQtWrapper_QRect::isEmpty(QRect* theWrappedObject) const
{
return  theWrappedObject->isEmpty();
}

void PythonQtWrapper_QRect::moveBottomRight(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->moveBottomRight(p);
}

void PythonQtWrapper_QRect::setCoords(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
 theWrappedObject->setCoords(x1, y1, x2, y2);
}

int  PythonQtWrapper_QRect::x(QRect* theWrappedObject) const
{
return  theWrappedObject->x();
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, int  x, int  y) const
{
return  theWrappedObject->contains(x, y);
}

void PythonQtWrapper_QRect::moveTopRight(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->moveTopRight(p);
}

void PythonQtWrapper_QRect::writeTo(QRect* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QRect::isValid(QRect* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, int  x, int  y, bool  proper) const
{
return  theWrappedObject->contains(x, y, proper);
}

void PythonQtWrapper_QRect::moveTo(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->moveTo(p);
}

void PythonQtWrapper_QRect::setWidth(QRect* theWrappedObject, int  w)
{
 theWrappedObject->setWidth(w);
}

int  PythonQtWrapper_QRect::bottom(QRect* theWrappedObject) const
{
return  theWrappedObject->bottom();
}

QPoint  PythonQtWrapper_QRect::bottomLeft(QRect* theWrappedObject) const
{
return  theWrappedObject->bottomLeft();
}

QRect  PythonQtWrapper_QRect::normalized(QRect* theWrappedObject) const
{
return  theWrappedObject->normalized();
}

void PythonQtWrapper_QRect::moveTop(QRect* theWrappedObject, int  pos)
{
 theWrappedObject->moveTop(pos);
}

void PythonQtWrapper_QRect::setHeight(QRect* theWrappedObject, int  h)
{
 theWrappedObject->setHeight(h);
}

int  PythonQtWrapper_QRect::left(QRect* theWrappedObject) const
{
return  theWrappedObject->left();
}

void PythonQtWrapper_QRect::setBottomLeft(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->setBottomLeft(p);
}

QRect  PythonQtWrapper_QRect::adjusted(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2) const
{
return  theWrappedObject->adjusted(x1, y1, x2, y2);
}

void PythonQtWrapper_QRect::setRect(QRect* theWrappedObject, int  x, int  y, int  w, int  h)
{
 theWrappedObject->setRect(x, y, w, h);
}

int  PythonQtWrapper_QRect::top(QRect* theWrappedObject) const
{
return  theWrappedObject->top();
}

void PythonQtWrapper_QRect::moveLeft(QRect* theWrappedObject, int  pos)
{
 theWrappedObject->moveLeft(pos);
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, const QPoint&  p, bool  proper) const
{
return  theWrappedObject->contains(p, proper);
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, const QRect&  r, bool  proper) const
{
return  theWrappedObject->contains(r, proper);
}

void PythonQtWrapper_QRect::adjust(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
 theWrappedObject->adjust(x1, y1, x2, y2);
}

void PythonQtWrapper_QRect::setLeft(QRect* theWrappedObject, int  pos)
{
 theWrappedObject->setLeft(pos);
}

QPoint  PythonQtWrapper_QRect::topLeft(QRect* theWrappedObject) const
{
return  theWrappedObject->topLeft();
}

bool  PythonQtWrapper_QRect::isNull(QRect* theWrappedObject) const
{
return  theWrappedObject->isNull();
}

void PythonQtWrapper_QRect::translate(QRect* theWrappedObject, int  dx, int  dy)
{
 theWrappedObject->translate(dx, dy);
}

void PythonQtWrapper_QRect::translate(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->translate(p);
}

QRect  PythonQtWrapper_QRect::intersected(QRect* theWrappedObject, const QRect&  other) const
{
return  theWrappedObject->intersected(other);
}

void PythonQtWrapper_QRect::moveCenter(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->moveCenter(p);
}

void PythonQtWrapper_QRect::setBottom(QRect* theWrappedObject, int  pos)
{
 theWrappedObject->setBottom(pos);
}

void PythonQtWrapper_QRect::moveTo(QRect* theWrappedObject, int  x, int  t)
{
 theWrappedObject->moveTo(x, t);
}

QSize  PythonQtWrapper_QRect::size(QRect* theWrappedObject) const
{
return  theWrappedObject->size();
}

void PythonQtWrapper_QRect::moveBottomLeft(QRect* theWrappedObject, const QPoint&  p)
{
 theWrappedObject->moveBottomLeft(p);
}

int  PythonQtWrapper_QRect::y(QRect* theWrappedObject) const
{
return  theWrappedObject->y();
}

