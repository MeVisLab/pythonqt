#ifndef PYTHONQTWRAPPER_QMIMEDATA_H
#define PYTHONQTWRAPPER_QMIMEDATA_H

#include <qmimedata.h>
#include <QObject>

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

class PythonQtWrapper_QMimeData : public QObject
{ Q_OBJECT
public:
public slots:
QMimeData* new_QMimeData();
void delete_QMimeData(QMimeData* obj) { delete obj; } 
   void clear(QMimeData* theWrappedObject);
   QVariant  colorData(QMimeData* theWrappedObject) const;
   QByteArray  data(QMimeData* theWrappedObject, const QString&  mimetype) const;
   QStringList  formats(QMimeData* theWrappedObject) const;
   bool  hasColor(QMimeData* theWrappedObject) const;
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  hasHtml(QMimeData* theWrappedObject) const;
   bool  hasImage(QMimeData* theWrappedObject) const;
   bool  hasText(QMimeData* theWrappedObject) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   QString  html(QMimeData* theWrappedObject) const;
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   void setColorData(QMimeData* theWrappedObject, const QVariant&  color);
   void setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data);
   void setHtml(QMimeData* theWrappedObject, const QString&  html);
   void setImageData(QMimeData* theWrappedObject, const QVariant&  image);
   void setText(QMimeData* theWrappedObject, const QString&  text);
   void setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls);
   QString  text(QMimeData* theWrappedObject) const;
   QList<QUrl >  urls(QMimeData* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QMIMEDATA_H
