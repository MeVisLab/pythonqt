#ifndef PYTHONQTWRAPPER_QICON_H
#define PYTHONQTWRAPPER_QICON_H

#include <qicon.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QIcon : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode State )
enum Mode{
  Normal = QIcon::Normal,   Disabled = QIcon::Disabled,   Active = QIcon::Active,   Selected = QIcon::Selected};
enum State{
  On = QIcon::On,   Off = QIcon::Off};
public slots:
QIcon* new_QIcon();
QIcon* new_QIcon(QIconEngine*  engine);
QIcon* new_QIcon(QIconEngineV2*  engine);
QIcon* new_QIcon(const QIcon&  other);
QIcon* new_QIcon(const QPixmap&  pixmap);
QIcon* new_QIcon(const QString&  fileName);
void delete_QIcon(QIcon* obj) { delete obj; } 
   bool  isNull(QIcon* theWrappedObject) const;
   void paint(QIcon* theWrappedObject, QPainter*  painter, const QRect&  rect, Qt::Alignment  alignment = Qt::AlignCenter, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void paint(QIcon* theWrappedObject, QPainter*  painter, int  x, int  y, int  w, int  h, Qt::Alignment  alignment = Qt::AlignCenter, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void addFile(QIcon* theWrappedObject, const QString&  fileName, const QSize&  size = QSize(), QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   QSize  actualSize(QIcon* theWrappedObject, const QSize&  size, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void writeTo(QIcon* theWrappedObject, QDataStream&  arg__1);
   QPixmap  pixmap(QIcon* theWrappedObject, const QSize&  size, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void addPixmap(QIcon* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   void readFrom(QIcon* theWrappedObject, QDataStream&  arg__1);
   QPixmap  pixmap(QIcon* theWrappedObject, int  extent, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QPixmap  pixmap(QIcon* theWrappedObject, int  w, int  h, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   qint64  cacheKey(QIcon* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QICON_H
