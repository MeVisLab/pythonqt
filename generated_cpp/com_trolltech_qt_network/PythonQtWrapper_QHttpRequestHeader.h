#ifndef PYTHONQTWRAPPER_QHTTPREQUESTHEADER_H
#define PYTHONQTWRAPPER_QHTTPREQUESTHEADER_H

#include <qhttp.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class PythonQtShell_QHttpRequestHeader : public QHttpRequestHeader
{
public:
    PythonQtShell_QHttpRequestHeader():QHttpRequestHeader(),_wrapper(NULL) {};
    PythonQtShell_QHttpRequestHeader(const QHttpRequestHeader&  header):QHttpRequestHeader(header),_wrapper(NULL) {};
    PythonQtShell_QHttpRequestHeader(const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1):QHttpRequestHeader(method, path, majorVer, minorVer),_wrapper(NULL) {};
    PythonQtShell_QHttpRequestHeader(const QString&  str):QHttpRequestHeader(str),_wrapper(NULL) {};

virtual int  majorVersion() const;
virtual int  minorVersion() const;
virtual bool  parseLine(const QString&  line, int  number);
virtual QString  toString() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHttpRequestHeader : public QHttpRequestHeader
{ public:
inline bool  parseLine(const QString&  line, int  number) { return QHttpRequestHeader::parseLine(line, number); }
};

class PythonQtWrapper_QHttpRequestHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpRequestHeader* new_QHttpRequestHeader();
QHttpRequestHeader* new_QHttpRequestHeader(const QHttpRequestHeader&  header);
QHttpRequestHeader* new_QHttpRequestHeader(const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1);
QHttpRequestHeader* new_QHttpRequestHeader(const QString&  str);
void delete_QHttpRequestHeader(QHttpRequestHeader* obj) { delete obj; } 
   int  minorVersion(QHttpRequestHeader* theWrappedObject) const;
   QString  path(QHttpRequestHeader* theWrappedObject) const;
   void setRequest(QHttpRequestHeader* theWrappedObject, const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1);
   QString  method(QHttpRequestHeader* theWrappedObject) const;
   int  majorVersion(QHttpRequestHeader* theWrappedObject) const;
   bool  parseLine(QHttpRequestHeader* theWrappedObject, const QString&  line, int  number);
   QString  toString(QHttpRequestHeader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHTTPREQUESTHEADER_H
