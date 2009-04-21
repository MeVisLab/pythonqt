#ifndef PYTHONQTWRAPPER_QXMLINPUTSOURCE_H
#define PYTHONQTWRAPPER_QXMLINPUTSOURCE_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>

class PythonQtShell_QXmlInputSource : public QXmlInputSource
{
public:
    PythonQtShell_QXmlInputSource():QXmlInputSource(),_wrapper(NULL) {};
    PythonQtShell_QXmlInputSource(QIODevice*  dev):QXmlInputSource(dev),_wrapper(NULL) {};

virtual QString  data() const;
virtual void fetchData();
virtual QString  fromRawData(const QByteArray&  data, bool  beginning = false);
virtual QChar  next();
virtual void reset();
virtual void setData(const QByteArray&  dat);
virtual void setData(const QString&  dat);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlInputSource : public QXmlInputSource
{ public:
inline QString  fromRawData(const QByteArray&  data, bool  beginning = false) { return QXmlInputSource::fromRawData(data, beginning); }
};

class PythonQtWrapper_QXmlInputSource : public QObject
{ Q_OBJECT
public:
public slots:
QXmlInputSource* new_QXmlInputSource();
QXmlInputSource* new_QXmlInputSource(QIODevice*  dev);
void delete_QXmlInputSource(QXmlInputSource* obj) { delete obj; } 
   void reset(QXmlInputSource* theWrappedObject);
   void setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat);
   void fetchData(QXmlInputSource* theWrappedObject);
   QChar  next(QXmlInputSource* theWrappedObject);
   QString  fromRawData(QXmlInputSource* theWrappedObject, const QByteArray&  data, bool  beginning = false);
   void setData(QXmlInputSource* theWrappedObject, const QString&  dat);
   QString  data(QXmlInputSource* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLINPUTSOURCE_H
