#ifndef PYTHONQTWRAPPER_QHTTPRESPONSEHEADER_H
#define PYTHONQTWRAPPER_QHTTPRESPONSEHEADER_H

#include <qhttp.h>
#include <QObject>

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class PythonQtWrapper_QHttpResponseHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpResponseHeader* new_QHttpResponseHeader();
QHttpResponseHeader* new_QHttpResponseHeader(const QHttpResponseHeader&  header);
QHttpResponseHeader* new_QHttpResponseHeader(const QString&  str);
QHttpResponseHeader* new_QHttpResponseHeader(int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1);
void delete_QHttpResponseHeader(QHttpResponseHeader* obj) { delete obj; } 
   int  majorVersion(QHttpResponseHeader* theWrappedObject) const;
   int  minorVersion(QHttpResponseHeader* theWrappedObject) const;
   QString  reasonPhrase(QHttpResponseHeader* theWrappedObject) const;
   void setStatusLine(QHttpResponseHeader* theWrappedObject, int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1);
   int  statusCode(QHttpResponseHeader* theWrappedObject) const;
   QString  toString(QHttpResponseHeader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHTTPRESPONSEHEADER_H
