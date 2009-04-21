#include "PythonQtWrapper_QTextFormat.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat()
{ 
return new QTextFormat(); }

QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat(const QTextFormat&  rhs)
{ 
return new QTextFormat(rhs); }

QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat(int  type)
{ 
return new QTextFormat(type); }

bool  PythonQtWrapper_QTextFormat::boolProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->boolProperty(propertyId);
}

void PythonQtWrapper_QTextFormat::setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value)
{
 theWrappedObject->setProperty(propertyId, value);
}

QTextFrameFormat  PythonQtWrapper_QTextFormat::toFrameFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->toFrameFormat();
}

void PythonQtWrapper_QTextFormat::clearForeground(QTextFormat* theWrappedObject)
{
 theWrappedObject->clearForeground();
}

QTextListFormat  PythonQtWrapper_QTextFormat::toListFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->toListFormat();
}

void PythonQtWrapper_QTextFormat::setObjectIndex(QTextFormat* theWrappedObject, int  object)
{
 theWrappedObject->setObjectIndex(object);
}

void PythonQtWrapper_QTextFormat::setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVector<QTextLength >&  lengths)
{
 theWrappedObject->setProperty(propertyId, lengths);
}

bool  PythonQtWrapper_QTextFormat::hasProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->hasProperty(propertyId);
}

QPen  PythonQtWrapper_QTextFormat::penProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->penProperty(propertyId);
}

bool  PythonQtWrapper_QTextFormat::isCharFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->isCharFormat();
}

bool  PythonQtWrapper_QTextFormat::isImageFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->isImageFormat();
}

void PythonQtWrapper_QTextFormat::setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction)
{
 theWrappedObject->setLayoutDirection(direction);
}

QBrush  PythonQtWrapper_QTextFormat::brushProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->brushProperty(propertyId);
}

QTextLength  PythonQtWrapper_QTextFormat::lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->lengthProperty(propertyId);
}

void PythonQtWrapper_QTextFormat::setObjectType(QTextFormat* theWrappedObject, int  type)
{
 theWrappedObject->setObjectType(type);
}

bool  PythonQtWrapper_QTextFormat::isValid(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

int  PythonQtWrapper_QTextFormat::objectType(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->objectType();
}

int  PythonQtWrapper_QTextFormat::intProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->intProperty(propertyId);
}

QTextTableFormat  PythonQtWrapper_QTextFormat::toTableFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->toTableFormat();
}

qreal  PythonQtWrapper_QTextFormat::doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->doubleProperty(propertyId);
}

QVariant  PythonQtWrapper_QTextFormat::property(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->property(propertyId);
}

bool  PythonQtWrapper_QTextFormat::operator_equal(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const
{
return  (*theWrappedObject)== rhs;
}

QMap<int , QVariant >  PythonQtWrapper_QTextFormat::properties(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->properties();
}

QBrush  PythonQtWrapper_QTextFormat::background(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->background();
}

Qt::LayoutDirection  PythonQtWrapper_QTextFormat::layoutDirection(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->layoutDirection();
}

void PythonQtWrapper_QTextFormat::setBackground(QTextFormat* theWrappedObject, const QBrush&  brush)
{
 theWrappedObject->setBackground(brush);
}

QTextTableCellFormat  PythonQtWrapper_QTextFormat::toTableCellFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->toTableCellFormat();
}

QBrush  PythonQtWrapper_QTextFormat::foreground(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->foreground();
}

QString  PythonQtWrapper_QTextFormat::stringProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->stringProperty(propertyId);
}

bool  PythonQtWrapper_QTextFormat::isBlockFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->isBlockFormat();
}

void PythonQtWrapper_QTextFormat::readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

int  PythonQtWrapper_QTextFormat::propertyCount(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->propertyCount();
}

void PythonQtWrapper_QTextFormat::clearBackground(QTextFormat* theWrappedObject)
{
 theWrappedObject->clearBackground();
}

void PythonQtWrapper_QTextFormat::clearProperty(QTextFormat* theWrappedObject, int  propertyId)
{
 theWrappedObject->clearProperty(propertyId);
}

void PythonQtWrapper_QTextFormat::writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

int  PythonQtWrapper_QTextFormat::objectIndex(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->objectIndex();
}

QTextCharFormat  PythonQtWrapper_QTextFormat::toCharFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->toCharFormat();
}

QVector<QTextLength >  PythonQtWrapper_QTextFormat::lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->lengthVectorProperty(propertyId);
}

bool  PythonQtWrapper_QTextFormat::isTableFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->isTableFormat();
}

int  PythonQtWrapper_QTextFormat::type(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->type();
}

void PythonQtWrapper_QTextFormat::merge(QTextFormat* theWrappedObject, const QTextFormat&  other)
{
 theWrappedObject->merge(other);
}

QColor  PythonQtWrapper_QTextFormat::colorProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
return  theWrappedObject->colorProperty(propertyId);
}

bool  PythonQtWrapper_QTextFormat::isTableCellFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->isTableCellFormat();
}

QTextImageFormat  PythonQtWrapper_QTextFormat::toImageFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->toImageFormat();
}

bool  PythonQtWrapper_QTextFormat::isFrameFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->isFrameFormat();
}

void PythonQtWrapper_QTextFormat::setForeground(QTextFormat* theWrappedObject, const QBrush&  brush)
{
 theWrappedObject->setForeground(brush);
}

QTextBlockFormat  PythonQtWrapper_QTextFormat::toBlockFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->toBlockFormat();
}

bool  PythonQtWrapper_QTextFormat::isListFormat(QTextFormat* theWrappedObject) const
{
return  theWrappedObject->isListFormat();
}

