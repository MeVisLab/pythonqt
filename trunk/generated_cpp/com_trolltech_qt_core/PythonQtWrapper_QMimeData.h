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
   QVariant  colorData(QMimeData* theWrappedObject) const;
   bool  hasImage(QMimeData* theWrappedObject) const;
   QByteArray  data(QMimeData* theWrappedObject, const QString&  mimetype) const;
   void setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls);
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void setImageData(QMimeData* theWrappedObject, const QVariant&  image);
   QStringList  formats(QMimeData* theWrappedObject) const;
   void setHtml(QMimeData* theWrappedObject, const QString&  html);
   void setText(QMimeData* theWrappedObject, const QString&  text);
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   QList<QUrl >  urls(QMimeData* theWrappedObject) const;
   void setColorData(QMimeData* theWrappedObject, const QVariant&  color);
   bool  hasHtml(QMimeData* theWrappedObject) const;
   void setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data);
   void clear(QMimeData* theWrappedObject);
   QString  html(QMimeData* theWrappedObject) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   QString  text(QMimeData* theWrappedObject) const;
   bool  hasText(QMimeData* theWrappedObject) const;
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   bool  hasColor(QMimeData* theWrappedObject) const;
   QVariant  retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const;
};

#endif // PYTHONQTWRAPPER_QMIMEDATA_H
