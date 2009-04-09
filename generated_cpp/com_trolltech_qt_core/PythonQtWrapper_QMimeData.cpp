#include "PythonQtWrapper_QMimeData.h"

#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qurl.h>

QMimeData* PythonQtWrapper_QMimeData::new_QMimeData()
{ 
return new QMimeData(); }

void PythonQtWrapper_QMimeData::clear(QMimeData* theWrappedObject)
{
theWrappedObject->clear();
}

QVariant  PythonQtWrapper_QMimeData::colorData(QMimeData* theWrappedObject) const
{
return theWrappedObject->colorData();
}

QByteArray  PythonQtWrapper_QMimeData::data(QMimeData* theWrappedObject, const QString&  mimetype) const
{
return theWrappedObject->data(mimetype);
}

QStringList  PythonQtWrapper_QMimeData::formats(QMimeData* theWrappedObject) const
{
return theWrappedObject->formats();
}

bool  PythonQtWrapper_QMimeData::hasColor(QMimeData* theWrappedObject) const
{
return theWrappedObject->hasColor();
}

bool  PythonQtWrapper_QMimeData::hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const
{
return theWrappedObject->hasFormat(mimetype);
}

bool  PythonQtWrapper_QMimeData::hasHtml(QMimeData* theWrappedObject) const
{
return theWrappedObject->hasHtml();
}

bool  PythonQtWrapper_QMimeData::hasImage(QMimeData* theWrappedObject) const
{
return theWrappedObject->hasImage();
}

bool  PythonQtWrapper_QMimeData::hasText(QMimeData* theWrappedObject) const
{
return theWrappedObject->hasText();
}

bool  PythonQtWrapper_QMimeData::hasUrls(QMimeData* theWrappedObject) const
{
return theWrappedObject->hasUrls();
}

QString  PythonQtWrapper_QMimeData::html(QMimeData* theWrappedObject) const
{
return theWrappedObject->html();
}

QVariant  PythonQtWrapper_QMimeData::imageData(QMimeData* theWrappedObject) const
{
return theWrappedObject->imageData();
}

void PythonQtWrapper_QMimeData::removeFormat(QMimeData* theWrappedObject, const QString&  mimetype)
{
theWrappedObject->removeFormat(mimetype);
}

void PythonQtWrapper_QMimeData::setColorData(QMimeData* theWrappedObject, const QVariant&  color)
{
theWrappedObject->setColorData(color);
}

void PythonQtWrapper_QMimeData::setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data)
{
theWrappedObject->setData(mimetype, data);
}

void PythonQtWrapper_QMimeData::setHtml(QMimeData* theWrappedObject, const QString&  html)
{
theWrappedObject->setHtml(html);
}

void PythonQtWrapper_QMimeData::setImageData(QMimeData* theWrappedObject, const QVariant&  image)
{
theWrappedObject->setImageData(image);
}

void PythonQtWrapper_QMimeData::setText(QMimeData* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

void PythonQtWrapper_QMimeData::setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls)
{
theWrappedObject->setUrls(urls);
}

QString  PythonQtWrapper_QMimeData::text(QMimeData* theWrappedObject) const
{
return theWrappedObject->text();
}

QList<QUrl >  PythonQtWrapper_QMimeData::urls(QMimeData* theWrappedObject) const
{
return theWrappedObject->urls();
}

