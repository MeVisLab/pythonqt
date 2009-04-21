#include "PythonQtWrapper_QTextEncoder.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

QTextEncoder* PythonQtWrapper_QTextEncoder::new_QTextEncoder(const QTextCodec*  codec)
{ 
return new QTextEncoder(codec); }

QByteArray  PythonQtWrapper_QTextEncoder::fromUnicode(QTextEncoder* theWrappedObject, const QString&  str)
{
return  theWrappedObject->fromUnicode(str);
}

