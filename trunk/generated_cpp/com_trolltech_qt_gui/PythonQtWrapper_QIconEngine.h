#ifndef PYTHONQTWRAPPER_QICONENGINE_H
#define PYTHONQTWRAPPER_QICONENGINE_H

#include <qiconengine.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QIconEngine : public QIconEngine
{
public:
    PythonQtShell_QIconEngine():QIconEngine(),_wrapper(NULL) {};

virtual QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
virtual void paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
virtual QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline void promoted_addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addPixmap(pixmap, mode, state); }
inline void promoted_addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addFile(fileName, size, mode, state); }
inline QSize  promoted_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline QPixmap  promoted_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
public slots:
QIconEngine* new_QIconEngine();
void delete_QIconEngine(QIconEngine* obj) { delete obj; } 
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
};

#endif // PYTHONQTWRAPPER_QICONENGINE_H
