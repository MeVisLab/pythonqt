#include "PythonQtWrapper_QFontMetrics.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qfont.h>
#include <qpaintdevice.h>
#include <qrect.h>
#include <qsize.h>

QFontMetrics* PythonQtWrapper_QFontMetrics::new_QFontMetrics(const QFont&  arg__1)
{ 
return new QFontMetrics(arg__1); }

QFontMetrics* PythonQtWrapper_QFontMetrics::new_QFontMetrics(const QFont&  arg__1, QPaintDevice*  pd)
{ 
return new QFontMetrics(arg__1, pd); }

int  PythonQtWrapper_QFontMetrics::leading(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

int  PythonQtWrapper_QFontMetrics::maxWidth(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->maxWidth());
}

int  PythonQtWrapper_QFontMetrics::underlinePos(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->underlinePos());
}

int  PythonQtWrapper_QFontMetrics::xHeight(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->xHeight());
}

int  PythonQtWrapper_QFontMetrics::width(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len) const
{
  return ( theWrappedObject->width(arg__1, len));
}

int  PythonQtWrapper_QFontMetrics::overlinePos(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->overlinePos());
}

int  PythonQtWrapper_QFontMetrics::width(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->width(arg__1));
}

int  PythonQtWrapper_QFontMetrics::minRightBearing(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->minRightBearing());
}

QString  PythonQtWrapper_QFontMetrics::elidedText(QFontMetrics* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, int  width, int  flags) const
{
  return ( theWrappedObject->elidedText(text, mode, width, flags));
}

QRect  PythonQtWrapper_QFontMetrics::boundingRect(QFontMetrics* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->boundingRect(text));
}

QSize  PythonQtWrapper_QFontMetrics::size(QFontMetrics* theWrappedObject, int  flags, const QString&  str, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->size(flags, str, tabstops, tabarray));
}

QRect  PythonQtWrapper_QFontMetrics::boundingRect(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->boundingRect(arg__1));
}

int  PythonQtWrapper_QFontMetrics::height(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

QRect  PythonQtWrapper_QFontMetrics::tightBoundingRect(QFontMetrics* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->tightBoundingRect(text));
}

QRect  PythonQtWrapper_QFontMetrics::boundingRect(QFontMetrics* theWrappedObject, const QRect&  r, int  flags, const QString&  text, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->boundingRect(r, flags, text, tabstops, tabarray));
}

QRect  PythonQtWrapper_QFontMetrics::boundingRect(QFontMetrics* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->boundingRect(x, y, w, h, flags, text, tabstops, tabarray));
}

bool  PythonQtWrapper_QFontMetrics::inFont(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->inFont(arg__1));
}

int  PythonQtWrapper_QFontMetrics::rightBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->rightBearing(arg__1));
}

int  PythonQtWrapper_QFontMetrics::strikeOutPos(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->strikeOutPos());
}

int  PythonQtWrapper_QFontMetrics::averageCharWidth(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->averageCharWidth());
}

int  PythonQtWrapper_QFontMetrics::descent(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

int  PythonQtWrapper_QFontMetrics::ascent(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

int  PythonQtWrapper_QFontMetrics::charWidth(QFontMetrics* theWrappedObject, const QString&  str, int  pos) const
{
  return ( theWrappedObject->charWidth(str, pos));
}

int  PythonQtWrapper_QFontMetrics::leftBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->leftBearing(arg__1));
}

int  PythonQtWrapper_QFontMetrics::lineWidth(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->lineWidth());
}

int  PythonQtWrapper_QFontMetrics::minLeftBearing(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->minLeftBearing());
}

int  PythonQtWrapper_QFontMetrics::lineSpacing(QFontMetrics* theWrappedObject) const
{
  return ( theWrappedObject->lineSpacing());
}

