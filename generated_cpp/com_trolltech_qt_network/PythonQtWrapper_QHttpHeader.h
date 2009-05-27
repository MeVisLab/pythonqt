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
inline QString  promoted_toString() const { return QHttpHeader::toString(); }
inline bool  promoted_parseLine(const QString&  line, int  number) { return QHttpHeader::parseLine(line, number); }
};

class PythonQtWrapper_QHttpHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpHeader* new_QHttpHeader();
QHttpHeader* new_QHttpHeader(const QString&  str);
void delete_QHttpHeader(QHttpHeader* obj) { delete obj; } 
   void removeAllValues(QHttpHeader* theWrappedObject, const QString&  key);
   void setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   bool  isValid(QHttpHeader* theWrappedObject) const;
   void removeValue(QHttpHeader* theWrappedObject, const QString&  key);
   QString  toString(QHttpHeader* theWrappedObject) const;
   void setContentType(QHttpHeader* theWrappedObject, const QString&  type);
   QString  contentType(QHttpHeader* theWrappedObject) const;
   bool  hasContentLength(QHttpHeader* theWrappedObject) const;
   bool  hasContentType(QHttpHeader* theWrappedObject) const;
   void setContentLength(QHttpHeader* theWrappedObject, int  len);
   void addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   QList<QPair<QString , QString >  >  values(QHttpHeader* theWrappedObject) const;
   uint  contentLength(QHttpHeader* theWrappedObject) const;
   bool  hasKey(QHttpHeader* theWrappedObject, const QString&  key) const;
   QString  value(QHttpHeader* theWrappedObject, const QString&  key) const;
   QStringList  allValues(QHttpHeader* theWrappedObject, const QString&  key) const;
   void setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values);
   QStringList  keys(QHttpHeader* theWrappedObject) const;
   bool  parseLine(QHttpHeader* theWrappedObject, const QString&  line, int  number);
};

#endif // PYTHONQTWRAPPER_QHTTPHEADER_H
