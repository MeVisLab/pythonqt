#ifndef PYTHONQTWRAPPER_QHTTPHEADER_H
#define PYTHONQTWRAPPER_QHTTPHEADER_H

#include <qhttp.h>
#include <QObject>

#include <QVariant>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class PythonQtWrapper_QHttpHeader : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QHttpHeader(QHttpHeader* obj) { delete obj; } 
   void addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   QStringList  allValues(QHttpHeader* theWrappedObject, const QString&  key) const;
   uint  contentLength(QHttpHeader* theWrappedObject) const;
   QString  contentType(QHttpHeader* theWrappedObject) const;
   bool  hasContentLength(QHttpHeader* theWrappedObject) const;
   bool  hasContentType(QHttpHeader* theWrappedObject) const;
   bool  hasKey(QHttpHeader* theWrappedObject, const QString&  key) const;
   bool  isValid(QHttpHeader* theWrappedObject) const;
   QStringList  keys(QHttpHeader* theWrappedObject) const;
   int  majorVersion(QHttpHeader* theWrappedObject) const;
   int  minorVersion(QHttpHeader* theWrappedObject) const;
   void removeAllValues(QHttpHeader* theWrappedObject, const QString&  key);
   void removeValue(QHttpHeader* theWrappedObject, const QString&  key);
   void setContentLength(QHttpHeader* theWrappedObject, int  len);
   void setContentType(QHttpHeader* theWrappedObject, const QString&  type);
   void setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   void setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values);
   QString  toString(QHttpHeader* theWrappedObject) const;
   QString  value(QHttpHeader* theWrappedObject, const QString&  key) const;
   QList<QPair<QString , QString >  >  values(QHttpHeader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHTTPHEADER_H
