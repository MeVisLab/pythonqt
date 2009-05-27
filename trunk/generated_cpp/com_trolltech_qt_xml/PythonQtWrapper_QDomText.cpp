#include "PythonQtWrapper_QDomText.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomText* PythonQtWrapper_QDomText::new_QDomText()
{ 
return new QDomText(); }

QDomText* PythonQtWrapper_QDomText::new_QDomText(const QDomText&  x)
{ 
return new QDomText(x); }

QDomText  PythonQtWrapper_QDomText::splitText(QDomText* theWrappedObject, int  offset)
{
  return ( theWrappedObject->splitText(offset));
}

