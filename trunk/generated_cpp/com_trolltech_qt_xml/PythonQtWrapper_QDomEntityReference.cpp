#include "PythonQtWrapper_QDomEntityReference.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomEntityReference* PythonQtWrapper_QDomEntityReference::new_QDomEntityReference()
{ 
return new QDomEntityReference(); }

QDomEntityReference* PythonQtWrapper_QDomEntityReference::new_QDomEntityReference(const QDomEntityReference&  x)
{ 
return new QDomEntityReference(x); }

