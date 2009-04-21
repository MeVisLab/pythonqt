#include "PythonQtWrapper_QDomProcessingInstruction.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomProcessingInstruction* PythonQtWrapper_QDomProcessingInstruction::new_QDomProcessingInstruction()
{ 
return new QDomProcessingInstruction(); }

QDomProcessingInstruction* PythonQtWrapper_QDomProcessingInstruction::new_QDomProcessingInstruction(const QDomProcessingInstruction&  x)
{ 
return new QDomProcessingInstruction(x); }

QString  PythonQtWrapper_QDomProcessingInstruction::data(QDomProcessingInstruction* theWrappedObject) const
{
return  (*theWrappedObject).data();
}

void PythonQtWrapper_QDomProcessingInstruction::setData(QDomProcessingInstruction* theWrappedObject, const QString&  d)
{
 (*theWrappedObject).setData(d);
}

QString  PythonQtWrapper_QDomProcessingInstruction::target(QDomProcessingInstruction* theWrappedObject) const
{
return  (*theWrappedObject).target();
}

