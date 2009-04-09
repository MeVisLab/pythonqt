#include "PythonQtWrapper_QDomCharacterData.h"

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomCharacterData* PythonQtWrapper_QDomCharacterData::new_QDomCharacterData()
{ 
return new QDomCharacterData(); }

QDomCharacterData* PythonQtWrapper_QDomCharacterData::new_QDomCharacterData(const QDomCharacterData&  x)
{ 
return new QDomCharacterData(x); }

void PythonQtWrapper_QDomCharacterData::appendData(QDomCharacterData* theWrappedObject, const QString&  arg)
{
theWrappedObject->appendData(arg);
}

QString  PythonQtWrapper_QDomCharacterData::data(QDomCharacterData* theWrappedObject) const
{
return theWrappedObject->data();
}

void PythonQtWrapper_QDomCharacterData::deleteData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count)
{
theWrappedObject->deleteData(offset, count);
}

void PythonQtWrapper_QDomCharacterData::insertData(QDomCharacterData* theWrappedObject, unsigned long  offset, const QString&  arg)
{
theWrappedObject->insertData(offset, arg);
}

uint  PythonQtWrapper_QDomCharacterData::length(QDomCharacterData* theWrappedObject) const
{
return theWrappedObject->length();
}

void PythonQtWrapper_QDomCharacterData::replaceData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count, const QString&  arg)
{
theWrappedObject->replaceData(offset, count, arg);
}

void PythonQtWrapper_QDomCharacterData::setData(QDomCharacterData* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setData(arg__1);
}

QString  PythonQtWrapper_QDomCharacterData::substringData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count)
{
return theWrappedObject->substringData(offset, count);
}

