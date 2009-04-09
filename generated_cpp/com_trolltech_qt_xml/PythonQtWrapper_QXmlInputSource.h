#ifndef PYTHONQTWRAPPER_QXMLINPUTSOURCE_H
#define PYTHONQTWRAPPER_QXMLINPUTSOURCE_H

#include <qxml.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>

class PythonQtWrapper_QXmlInputSource : public QObject
{ Q_OBJECT
public:
public slots:
QXmlInputSource* new_QXmlInputSource();
QXmlInputSource* new_QXmlInputSource(QIODevice*  dev);
void delete_QXmlInputSource(QXmlInputSource* obj) { delete obj; } 
   QString  data(QXmlInputSource* theWrappedObject) const;
   void fetchData(QXmlInputSource* theWrappedObject);
   QChar  next(QXmlInputSource* theWrappedObject);
   void reset(QXmlInputSource* theWrappedObject);
   void setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat);
   void setData(QXmlInputSource* theWrappedObject, const QString&  dat);
};

#endif // PYTHONQTWRAPPER_QXMLINPUTSOURCE_H
