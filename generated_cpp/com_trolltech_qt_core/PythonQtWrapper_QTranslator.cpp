#include "PythonQtWrapper_QTranslator.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtranslator.h>

QTranslator* PythonQtWrapper_QTranslator::new_QTranslator(QObject*  parent)
{ 
return new QTranslator(parent); }

bool  PythonQtWrapper_QTranslator::isEmpty(QTranslator* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory, const QString&  search_delimiters, const QString&  suffix)
{
return theWrappedObject->load(filename, directory, search_delimiters, suffix);
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const uchar*  data, int  len)
{
return theWrappedObject->load(data, len);
}

QString  PythonQtWrapper_QTranslator::translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  comment) const
{
return theWrappedObject->translate(context, sourceText, comment);
}

