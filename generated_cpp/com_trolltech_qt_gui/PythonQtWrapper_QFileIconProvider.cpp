#include "PythonQtWrapper_QFileIconProvider.h"

#include <QVariant>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qicon.h>

QFileIconProvider* PythonQtWrapper_QFileIconProvider::new_QFileIconProvider()
{ 
return new QFileIconProvider(); }

QIcon  PythonQtWrapper_QFileIconProvider::icon(QFileIconProvider* theWrappedObject, QFileIconProvider::IconType  type) const
{
return theWrappedObject->icon(type);
}

QIcon  PythonQtWrapper_QFileIconProvider::icon(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const
{
return theWrappedObject->icon(info);
}

QString  PythonQtWrapper_QFileIconProvider::type(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const
{
return theWrappedObject->type(info);
}

