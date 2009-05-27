#include "PythonQtWrapper_QTextDecoder.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

QTextDecoder* PythonQtWrapper_QTextDecoder::new_QTextDecoder(const QTextCodec*  codec)
{ 
return new QTextDecoder(codec); }

bool  PythonQtWrapper_QTextDecoder::hasFailure(QTextDecoder* theWrappedObject) const
{
  return ( theWrappedObject->hasFailure());
}

QString  PythonQtWrapper_QTextDecoder::toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba)
{
  return ( theWrappedObject->toUnicode(ba));
}

