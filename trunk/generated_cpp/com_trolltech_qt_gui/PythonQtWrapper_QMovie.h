#ifndef PYTHONQTWRAPPER_QMOVIE_H
#define PYTHONQTWRAPPER_QMOVIE_H

#include <qmovie.h>
#include <QObject>

#include <PythonQt.h>

#include <QColor>
#include <QImage>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QMovie : public QMovie
{
public:
    PythonQtShell_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = 0):QMovie(device, format, parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(QObject*  parent = 0):QMovie(parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = 0):QMovie(fileName, format, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMovie : public QObject
{ Q_OBJECT
public:
public slots:
QMovie* new_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = 0);
QMovie* new_QMovie(QObject*  parent = 0);
QMovie* new_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = 0);
void delete_QMovie(QMovie* obj) { delete obj; } 
   QMovie::CacheMode  cacheMode(QMovie* theWrappedObject) const;
   bool  jumpToFrame(QMovie* theWrappedObject, int  frameNumber);
   int  frameCount(QMovie* theWrappedObject) const;
   QMovie::MovieState  state(QMovie* theWrappedObject) const;
   QImage  currentImage(QMovie* theWrappedObject) const;
   int  speed(QMovie* theWrappedObject) const;
   void setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode);
   QSize  scaledSize(QMovie* theWrappedObject);
   void setFileName(QMovie* theWrappedObject, const QString&  fileName);
   QIODevice*  device(QMovie* theWrappedObject) const;
   void setScaledSize(QMovie* theWrappedObject, const QSize&  size);
   int  currentFrameNumber(QMovie* theWrappedObject) const;
   int  nextFrameDelay(QMovie* theWrappedObject) const;
   int  loopCount(QMovie* theWrappedObject) const;
   QString  fileName(QMovie* theWrappedObject) const;
   bool  isValid(QMovie* theWrappedObject) const;
   QList<QByteArray >  static_QMovie_supportedFormats();
   QRect  frameRect(QMovie* theWrappedObject) const;
   void setBackgroundColor(QMovie* theWrappedObject, const QColor&  color);
   QPixmap  currentPixmap(QMovie* theWrappedObject) const;
   QByteArray  format(QMovie* theWrappedObject) const;
   QColor  backgroundColor(QMovie* theWrappedObject) const;
   void setDevice(QMovie* theWrappedObject, QIODevice*  device);
   void setFormat(QMovie* theWrappedObject, const QByteArray&  format);
};

#endif // PYTHONQTWRAPPER_QMOVIE_H
