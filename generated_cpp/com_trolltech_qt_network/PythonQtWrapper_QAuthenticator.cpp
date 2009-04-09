#include "PythonQtWrapper_QAuthenticator.h"

#include <QVariant>
#include <qauthenticator.h>

QAuthenticator* PythonQtWrapper_QAuthenticator::new_QAuthenticator()
{ 
return new QAuthenticator(); }

QAuthenticator* PythonQtWrapper_QAuthenticator::new_QAuthenticator(const QAuthenticator&  other)
{ 
return new QAuthenticator(other); }

bool  PythonQtWrapper_QAuthenticator::isNull(QAuthenticator* theWrappedObject) const
{
return theWrappedObject->isNull();
}

bool  PythonQtWrapper_QAuthenticator::operator_equal(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const
{
return *theWrappedObject == other;
}

QString  PythonQtWrapper_QAuthenticator::password(QAuthenticator* theWrappedObject) const
{
return theWrappedObject->password();
}

QString  PythonQtWrapper_QAuthenticator::realm(QAuthenticator* theWrappedObject) const
{
return theWrappedObject->realm();
}

void PythonQtWrapper_QAuthenticator::setPassword(QAuthenticator* theWrappedObject, const QString&  password)
{
theWrappedObject->setPassword(password);
}

void PythonQtWrapper_QAuthenticator::setUser(QAuthenticator* theWrappedObject, const QString&  user)
{
theWrappedObject->setUser(user);
}

QString  PythonQtWrapper_QAuthenticator::user(QAuthenticator* theWrappedObject) const
{
return theWrappedObject->user();
}

