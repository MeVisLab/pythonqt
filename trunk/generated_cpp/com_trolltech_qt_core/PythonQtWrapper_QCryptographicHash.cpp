#include "PythonQtWrapper_QCryptographicHash.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcryptographichash.h>

QCryptographicHash* PythonQtWrapper_QCryptographicHash::new_QCryptographicHash(QCryptographicHash::Algorithm  method)
{ 
return new QCryptographicHash(method); }

void PythonQtWrapper_QCryptographicHash::addData(QCryptographicHash* theWrappedObject, const QByteArray&  data)
{
theWrappedObject->addData(data);
}

QByteArray  PythonQtWrapper_QCryptographicHash::static_QCryptographicHash_hash(const QByteArray&  data, QCryptographicHash::Algorithm  method)
{
return QCryptographicHash::hash(data, method);
}

void PythonQtWrapper_QCryptographicHash::reset(QCryptographicHash* theWrappedObject)
{
theWrappedObject->reset();
}

QByteArray  PythonQtWrapper_QCryptographicHash::result(QCryptographicHash* theWrappedObject) const
{
return theWrappedObject->result();
}

