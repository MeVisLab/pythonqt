#ifndef PYTHONQTWRAPPER_QHTTPREQUESTHEADER_H
#define PYTHONQTWRAPPER_QHTTPREQUESTHEADER_H

#include <qhttp.h>
#include <QObject>

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class PythonQtWrapper_QHttpRequestHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpRequestHeader* new_QHttpRequestHeader();
QHttpRequestHeader* new_QHttpRequestHeader(const QHttpRequestHeader&  header);
QHttpRequestHeader* new_QHttpRequestHeader(const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1);
QHttpRequestHeader* new_QHttpRequestHeader(const QString&  str);
void delete_QHttpRequestHeader(QHttpRequestHeader* obj) { delete obj; } 
   int  majorVersion(QHttpRequestHeader* theWrappedObject) const;
   QString  method(QHttpRequestHeader* theWrappedObject) const;
   int  minorVersion(QHttpRequestHeader* theWrappedObject) const;
   QString  path(QHttpRequestHeader* theWrappedObject) const;
   void setRequest(QHttpRequestHeader* theWrappedObject, const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1);
   QString  toString(QHttpRequestHeader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHTTPREQUESTHEADER_H
