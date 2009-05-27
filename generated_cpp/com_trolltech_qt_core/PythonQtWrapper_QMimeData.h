#ifndef PYTHONQTWRAPPER_QMIMEDATA_H
#define PYTHONQTWRAPPER_QMIMEDATA_H

#include <qmimedata.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qurl.h>

class PythonQtShell_QMimeData : public QMimeData
{
public:
    PythonQtShell_QMimeData():QMimeData(),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QStringList  formats() const;
virtual bool  hasFormat(const QString&  mimetype) const;
virtual QVariant  retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMimeData : public QMimeData
{ public:
inline QStringList  promoted_formats() const { return QMimeData::formats(); }
inline bool  promoted_hasFormat(const QString&  mimetype) const { return QMimeData::hasFormat(mimetype); }
inline QVariant  promoted_retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const { return QMimeData::retrieveData(mimetype, preferredType); }
};

class PythonQtWrapper_QMimeData : public QObject
{ Q_OBJECT
public:
public slots:
QMimeData* new_QMimeData();
void delete_QMimeData(QMimeData* obj) { delete obj; } 
   void setColorData(QMimeData* theWrappedObject, const QVariant&  color);
   bool  hasImage(QMimeData* theWrappedObject) const;
   QString  text(QMimeData* theWrappedObject) const;
   void setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data);
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   QVariant  colorData(QMimeData* theWrappedObject) const;
   bool  hasColor(QMimeData* theWrappedObject) const;
   void setImageData(QMimeData* theWrappedObject, const QVariant&  image);
   QStringList  formats(QMimeData* theWrappedObject) const;
   bool  hasText(QMimeData* theWrappedObject) const;
   void setText(QMimeData* theWrappedObject, const QString&  text);
   QList<QUrl >  urls(QMimeData* theWrappedObject) const;
   QByteArray  data(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  hasHtml(QMimeData* theWrappedObject) const;
   void clear(QMimeData* theWrappedObject);
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void setHtml(QMimeData* theWrappedObject, const QString&  html);
   void setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls);
   QVariant  retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const;
   QString  html(QMimeData* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QMIMEDATA_H
