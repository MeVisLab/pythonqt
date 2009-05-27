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
inline void promoted_fetchData() { QXmlInputSource::fetchData(); }
inline void promoted_setData(const QByteArray&  dat) { QXmlInputSource::setData(dat); }
inline void promoted_setData(const QString&  dat) { QXmlInputSource::setData(dat); }
inline QChar  promoted_next() { return QXmlInputSource::next(); }
inline QString  promoted_fromRawData(const QByteArray&  data, bool  beginning = false) { return QXmlInputSource::fromRawData(data, beginning); }
inline QString  promoted_data() const { return QXmlInputSource::data(); }
inline void promoted_reset() { QXmlInputSource::reset(); }
};

class PythonQtWrapper_QXmlInputSource : public QObject
{ Q_OBJECT
public:
public slots:
QXmlInputSource* new_QXmlInputSource();
QXmlInputSource* new_QXmlInputSource(QIODevice*  dev);
void delete_QXmlInputSource(QXmlInputSource* obj) { delete obj; } 
   void fetchData(QXmlInputSource* theWrappedObject);
   void setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat);
   void setData(QXmlInputSource* theWrappedObject, const QString&  dat);
   QChar  next(QXmlInputSource* theWrappedObject);
   QString  fromRawData(QXmlInputSource* theWrappedObject, const QByteArray&  data, bool  beginning = false);
   QString  data(QXmlInputSource* theWrappedObject) const;
   void reset(QXmlInputSource* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QXMLINPUTSOURCE_H
