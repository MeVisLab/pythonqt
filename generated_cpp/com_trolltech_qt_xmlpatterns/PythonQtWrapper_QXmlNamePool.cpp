#include "PythonQtWrapper_QXmlNamePool.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qxmlnamepool.h>

QXmlNamePool* PythonQtWrapper_QXmlNamePool::new_QXmlNamePool()
{ 
return new QXmlNamePool(); }

QXmlNamePool* PythonQtWrapper_QXmlNamePool::new_QXmlNamePool(const QXmlNamePool&  other)
{ 
return new QXmlNamePool(other); }

