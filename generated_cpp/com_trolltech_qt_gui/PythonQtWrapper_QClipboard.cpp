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

bool  PythonQtWrapper_QClipboard::ownsFindBuffer(QClipboard* theWrappedObject) const
{
return  theWrappedObject->ownsFindBuffer();
}

bool  PythonQtWrapper_QClipboard::event(QClipboard* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QClipboard*)theWrappedObject)->promoted_event(arg__1);
}

QString  PythonQtWrapper_QClipboard::text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode) const
{
return  theWrappedObject->text(subtype, mode);
}

void PythonQtWrapper_QClipboard::setMimeData(QClipboard* theWrappedObject, QMimeData*  data, QClipboard::Mode  mode)
{
 theWrappedObject->setMimeData(data, mode);
}

const QMimeData*  PythonQtWrapper_QClipboard::mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
return  theWrappedObject->mimeData(mode);
}

QString  PythonQtWrapper_QClipboard::text(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
return  theWrappedObject->text(mode);
}

bool  PythonQtWrapper_QClipboard::supportsSelection(QClipboard* theWrappedObject) const
{
return  theWrappedObject->supportsSelection();
}

void PythonQtWrapper_QClipboard::setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode)
{
 theWrappedObject->setImage(arg__1, mode);
}

void PythonQtWrapper_QClipboard::setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode)
{
 theWrappedObject->setText(arg__1, mode);
}

void PythonQtWrapper_QClipboard::clear(QClipboard* theWrappedObject, QClipboard::Mode  mode)
{
 theWrappedObject->clear(mode);
}

bool  PythonQtWrapper_QClipboard::supportsFindBuffer(QClipboard* theWrappedObject) const
{
return  theWrappedObject->supportsFindBuffer();
}

QImage  PythonQtWrapper_QClipboard::image(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
return  theWrappedObject->image(mode);
}

bool  PythonQtWrapper_QClipboard::ownsClipboard(QClipboard* theWrappedObject) const
{
return  theWrappedObject->ownsClipboard();
}

bool  PythonQtWrapper_QClipboard::ownsSelection(QClipboard* theWrappedObject) const
{
return  theWrappedObject->ownsSelection();
}

void PythonQtWrapper_QClipboard::setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode)
{
 theWrappedObject->setPixmap(arg__1, mode);
}

QPixmap  PythonQtWrapper_QClipboard::pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
return  theWrappedObject->pixmap(mode);
}

