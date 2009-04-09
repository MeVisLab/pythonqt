#include "PythonQtWrapper_QWebHistoryInterface.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qwebhistoryinterface.h>

void PythonQtWrapper_QWebHistoryInterface::addHistoryEntry(QWebHistoryInterface* theWrappedObject, const QString&  url)
{
theWrappedObject->addHistoryEntry(url);
}

QWebHistoryInterface*  PythonQtWrapper_QWebHistoryInterface::static_QWebHistoryInterface_defaultInterface()
{
return QWebHistoryInterface::defaultInterface();
}

bool  PythonQtWrapper_QWebHistoryInterface::historyContains(QWebHistoryInterface* theWrappedObject, const QString&  url) const
{
return theWrappedObject->historyContains(url);
}

void PythonQtWrapper_QWebHistoryInterface::static_QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface*  defaultInterface)
{
QWebHistoryInterface::setDefaultInterface(defaultInterface);
}

