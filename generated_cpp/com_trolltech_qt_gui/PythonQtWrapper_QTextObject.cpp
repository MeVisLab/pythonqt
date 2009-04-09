#include "PythonQtWrapper_QTextObject.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>

QTextDocument*  PythonQtWrapper_QTextObject::document(QTextObject* theWrappedObject) const
{
return theWrappedObject->document();
}

QTextFormat  PythonQtWrapper_QTextObject::format(QTextObject* theWrappedObject) const
{
return theWrappedObject->format();
}

int  PythonQtWrapper_QTextObject::formatIndex(QTextObject* theWrappedObject) const
{
return theWrappedObject->formatIndex();
}

int  PythonQtWrapper_QTextObject::objectIndex(QTextObject* theWrappedObject) const
{
return theWrappedObject->objectIndex();
}

