#include "PythonQtWrapper_QIconEngine.h"

#include <QVariant>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>

QSize  PythonQtWrapper_QIconEngine::actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
return theWrappedObject->actualSize(size, mode, state);
}

void PythonQtWrapper_QIconEngine::addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
theWrappedObject->addFile(fileName, size, mode, state);
}

void PythonQtWrapper_QIconEngine::addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state)
{
theWrappedObject->addPixmap(pixmap, mode, state);
}

void PythonQtWrapper_QIconEngine::paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state)
{
theWrappedObject->paint(painter, rect, mode, state);
}

QPixmap  PythonQtWrapper_QIconEngine::pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
return theWrappedObject->pixmap(size, mode, state);
}

