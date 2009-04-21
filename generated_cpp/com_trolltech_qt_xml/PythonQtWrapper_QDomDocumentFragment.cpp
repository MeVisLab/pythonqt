#include "PythonQtWrapper_QDomDocumentFragment.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomDocumentFragment* PythonQtWrapper_QDomDocumentFragment::new_QDomDocumentFragment()
{ 
return new QDomDocumentFragment(); }

QDomDocumentFragment* PythonQtWrapper_QDomDocumentFragment::new_QDomDocumentFragment(const QDomDocumentFragment&  x)
{ 
return new QDomDocumentFragment(x); }

