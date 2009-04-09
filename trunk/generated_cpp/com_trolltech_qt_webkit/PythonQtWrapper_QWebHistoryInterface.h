#ifndef PYTHONQTWRAPPER_QWEBHISTORYINTERFACE_H
#define PYTHONQTWRAPPER_QWEBHISTORYINTERFACE_H

#include <qwebhistoryinterface.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qwebhistoryinterface.h>

class PythonQtWrapper_QWebHistoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebHistoryInterface(QWebHistoryInterface* obj) { delete obj; } 
   void addHistoryEntry(QWebHistoryInterface* theWrappedObject, const QString&  url);
   QWebHistoryInterface*  static_QWebHistoryInterface_defaultInterface();
   bool  historyContains(QWebHistoryInterface* theWrappedObject, const QString&  url) const;
   void static_QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface*  defaultInterface);
};

#endif // PYTHONQTWRAPPER_QWEBHISTORYINTERFACE_H
