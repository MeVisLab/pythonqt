#ifndef PYTHONQTWRAPPER_QHOSTINFO_H
#define PYTHONQTWRAPPER_QHOSTINFO_H

#include <qhostinfo.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtWrapper_QHostInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HostInfoError )
enum HostInfoError{
  NoError = QHostInfo::NoError,   HostNotFound = QHostInfo::HostNotFound,   UnknownError = QHostInfo::UnknownError};
public slots:
QHostInfo* new_QHostInfo(const QHostInfo&  d);
QHostInfo* new_QHostInfo(int  lookupId = -1);
void delete_QHostInfo(QHostInfo* obj) { delete obj; } 
   QString  static_QHostInfo_localHostName();
   void static_QHostInfo_abortHostLookup(int  lookupId);
   void setErrorString(QHostInfo* theWrappedObject, const QString&  errorString);
   QHostInfo  static_QHostInfo_fromName(const QString&  name);
   int  lookupId(QHostInfo* theWrappedObject) const;
   QString  hostName(QHostInfo* theWrappedObject) const;
   void setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses);
   void setLookupId(QHostInfo* theWrappedObject, int  id);
   QList<QHostAddress >  addresses(QHostInfo* theWrappedObject) const;
   void setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error);
   void setHostName(QHostInfo* theWrappedObject, const QString&  name);
   int  static_QHostInfo_lookupHost(const QString&  name, QObject*  receiver, const char*  member);
   QHostInfo::HostInfoError  error(QHostInfo* theWrappedObject) const;
   QString  errorString(QHostInfo* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHOSTINFO_H
