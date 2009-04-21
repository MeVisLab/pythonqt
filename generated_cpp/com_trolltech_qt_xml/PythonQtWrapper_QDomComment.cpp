#include "PythonQtWrapper_QDomComment.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomComment* PythonQtWrapper_QDomComment::new_QDomComment()
{ 
return new QDomComment(); }

QDomComment* PythonQtWrapper_QDomComment::new_QDomComment(const QDomComment&  x)
{ 
return new QDomComment(x); }

