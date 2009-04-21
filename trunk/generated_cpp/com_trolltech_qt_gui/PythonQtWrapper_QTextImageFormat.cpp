#include "PythonQtWrapper_QTextImageFormat.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvector.h>

QTextImageFormat* PythonQtWrapper_QTextImageFormat::new_QTextImageFormat()
{ 
return new PythonQtShell_QTextImageFormat(); }

qreal  PythonQtWrapper_QTextImageFormat::width(QTextImageFormat* theWrappedObject) const
{
return  theWrappedObject->width();
}

QString  PythonQtWrapper_QTextImageFormat::name(QTextImageFormat* theWrappedObject) const
{
return  theWrappedObject->name();
}

qreal  PythonQtWrapper_QTextImageFormat::height(QTextImageFormat* theWrappedObject) const
{
return  theWrappedObject->height();
}

void PythonQtWrapper_QTextImageFormat::setWidth(QTextImageFormat* theWrappedObject, qreal  width)
{
 theWrappedObject->setWidth(width);
}

bool  PythonQtWrapper_QTextImageFormat::isValid(QTextImageFormat* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

void PythonQtWrapper_QTextImageFormat::setName(QTextImageFormat* theWrappedObject, const QString&  name)
{
 theWrappedObject->setName(name);
}

void PythonQtWrapper_QTextImageFormat::setHeight(QTextImageFormat* theWrappedObject, qreal  height)
{
 theWrappedObject->setHeight(height);
}

