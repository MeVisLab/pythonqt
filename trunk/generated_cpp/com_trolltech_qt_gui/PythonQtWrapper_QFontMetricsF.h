#ifndef PYTHONQTWRAPPER_QFONTMETRICSF_H
#define PYTHONQTWRAPPER_QFONTMETRICSF_H

#include <qfontmetrics.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qfont.h>
#include <qpaintdevice.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QFontMetricsF : public QObject
{ Q_OBJECT
public:
public slots:
QFontMetricsF* new_QFontMetricsF(const QFont&  arg__1);
QFontMetricsF* new_QFontMetricsF(const QFont&  arg__1, QPaintDevice*  pd);
void delete_QFontMetricsF(QFontMetricsF* obj) { delete obj; } 
   qreal  width(QFontMetricsF* theWrappedObject, const QString&  string) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QString&  string) const;
   qreal  ascent(QFontMetricsF* theWrappedObject) const;
   qreal  maxWidth(QFontMetricsF* theWrappedObject) const;
   qreal  averageCharWidth(QFontMetricsF* theWrappedObject) const;
   qreal  lineWidth(QFontMetricsF* theWrappedObject) const;
   qreal  xHeight(QFontMetricsF* theWrappedObject) const;
   qreal  strikeOutPos(QFontMetricsF* theWrappedObject) const;
   qreal  rightBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   QString  elidedText(QFontMetricsF* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, qreal  width, int  flags = 0) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  minRightBearing(QFontMetricsF* theWrappedObject) const;
   qreal  height(QFontMetricsF* theWrappedObject) const;
   qreal  minLeftBearing(QFontMetricsF* theWrappedObject) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QRectF&  r, int  flags, const QString&  string, int  tabstops = 0, int*  tabarray = 0) const;
   bool  inFont(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  leading(QFontMetricsF* theWrappedObject) const;
   qreal  descent(QFontMetricsF* theWrappedObject) const;
   qreal  leftBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   QSizeF  size(QFontMetricsF* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = 0) const;
   qreal  lineSpacing(QFontMetricsF* theWrappedObject) const;
   qreal  overlinePos(QFontMetricsF* theWrappedObject) const;
   qreal  width(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   QRectF  tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text) const;
   qreal  underlinePos(QFontMetricsF* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFONTMETRICSF_H
