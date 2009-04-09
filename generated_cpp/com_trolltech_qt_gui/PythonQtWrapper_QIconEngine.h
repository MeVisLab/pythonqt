#ifndef PYTHONQTWRAPPER_QICONENGINE_H
#define PYTHONQTWRAPPER_QICONENGINE_H

#include <qiconengine.h>
#include <QObject>

#include <QVariant>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QIconEngine(QIconEngine* obj) { delete obj; } 
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
   void paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
};

#endif // PYTHONQTWRAPPER_QICONENGINE_H
