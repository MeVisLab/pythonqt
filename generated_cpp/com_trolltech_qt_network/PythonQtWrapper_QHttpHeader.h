#ifndef PYTHONQTWRAPPER_QHTTPHEADER_H
#define PYTHONQTWRAPPER_QHTTPHEADER_H

#include <qhttp.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class PythonQtShell_QHttpHeader : public QHttpHeader
{
public:
    PythonQtShell_QHttpHeader():QHttpHeader(),_wrapper(NULL) {};
    PythonQtShell_QHttpHeader(const QString&  str):QHttpHeader(str),_wrapper(NULL) {};

virtual int  majorVersion() const;
virtual int  minorVersion() const;
virtual bool  parseLine(const QString&  line, int  number);
virtual QString  toString() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHttpHeader : public QHttpHeader
{ public:
inline bool  promoted_parseLine(const QString&  line, int  number) { return QHttpHeader::parseLine(line, number); }
inline QString  promoted_toString() const { return QHttpHeader::toString(); }
};

class PythonQtWrapper_QHttpHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpHeader* new_QHttpHeader();
QHttpHeader* new_QHttpHeader(const QString&  str);
void delete_QHttpHeader(QHttpHeader* obj) { delete obj; } 
   bool  hasContentLength(QHttpHeader* theWrappedObject) const;
   QStringList  keys(QHttpHeader* theWrappedObject) const;
   bool  hasContentType(QHttpHeader* theWrappedObject) const;
   void setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   void removeAllValues(QHttpHeader* theWrappedObject, const QString&  key);
   void setContentType(QHttpHeader* theWrappedObject, const QString&  type);
   void addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   QList<QPair<QString , QString >  >  values(QHttpHeader* theWrappedObject) const;
   void removeValue(QHttpHeader* theWrappedObject, const QString&  key);
   void setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values);
   bool  hasKey(QHttpHeader* theWrappedObject, const QString&  key) const;
   bool  isValid(QHttpHeader* theWrappedObject) const;
   QStringList  allValues(QHttpHeader* theWrappedObject, const QString&  key) const;
   bool  parseLine(QHttpHeader* theWrappedObject, const QString&  line, int  number);
   uint  contentLength(QHttpHeader* theWrappedObject) const;
   QString  contentType(QHttpHeader* theWrappedObject) const;
   QString  toString(QHttpHeader* theWrappedObject) const;
   QString  value(QHttpHeader* theWrappedObject, const QString&  key) const;
   void setContentLength(QHttpHeader* theWrappedObject, int  len);
};

#endif // PYTHONQTWRAPPER_QHTTPHEADER_H
