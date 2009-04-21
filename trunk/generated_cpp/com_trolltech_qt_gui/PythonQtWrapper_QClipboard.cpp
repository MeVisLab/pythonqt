#include "PythonQtWrapper_QClipboard.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>

QString  PythonQtWrapper_QClipboard::text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode) const
{
return  (*theWrappedObject).text(subtype, mode);
}

bool  PythonQtWrapper_QClipboard::ownsFindBuffer(QClipboard* theWrappedObject) const
{
return  (*theWrappedObject).ownsFindBuffer();
}

QPixmap  PythonQtWrapper_QClipboard::pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
return  (*theWrappedObject).pixmap(mode);
}

void PythonQtWrapper_QClipboard::setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode)
{
 (*theWrappedObject).setImage(arg__1, mode);
}

QImage  PythonQtWrapper_QClipboard::image(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
return  (*theWrappedObject).image(mode);
}

void PythonQtWrapper_QClipboard::setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode)
{
 (*theWrappedObject).setText(arg__1, mode);
}

bool  PythonQtWrapper_QClipboard::supportsFindBuffer(QClipboard* theWrappedObject) const
{
return  (*theWrappedObject).supportsFindBuffer();
}

bool  PythonQtWrapper_QClipboard::supportsSelection(QClipboard* theWrappedObject) const
{
return  (*theWrappedObject).supportsSelection();
}

void PythonQtWrapper_QClipboard::setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode)
{
 (*theWrappedObject).setPixmap(arg__1, mode);
}

bool  PythonQtWrapper_QClipboard::ownsClipboard(QClipboard* theWrappedObject) const
{
return  (*theWrappedObject).ownsClipboard();
}

QString  PythonQtWrapper_QClipboard::text(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
return  (*theWrappedObject).text(mode);
}

void PythonQtWrapper_QClipboard::clear(QClipboard* theWrappedObject, QClipboard::Mode  mode)
{
 (*theWrappedObject).clear(mode);
}

bool  PythonQtWrapper_QClipboard::ownsSelection(QClipboard* theWrappedObject) const
{
return  (*theWrappedObject).ownsSelection();
}

bool  PythonQtWrapper_QClipboard::event(QClipboard* theWrappedObject, QEvent*  arg__1)
{
return  (*((PythonQtPublicPromoter_QClipboard*)theWrappedObject)).event(arg__1);
}

const QMimeData*  PythonQtWrapper_QClipboard::mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
return  (*theWrappedObject).mimeData(mode);
}

void PythonQtWrapper_QClipboard::setMimeData(QClipboard* theWrappedObject, QMimeData*  data, QClipboard::Mode  mode)
{
 (*theWrappedObject).setMimeData(data, mode);
}

