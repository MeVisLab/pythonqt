#ifndef PYTHONQTWRAPPER_QDOMCHARACTERDATA_H
#define PYTHONQTWRAPPER_QDOMCHARACTERDATA_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomCharacterData : public QObject
{ Q_OBJECT
public:
public slots:
QDomCharacterData* new_QDomCharacterData();
QDomCharacterData* new_QDomCharacterData(const QDomCharacterData&  x);
void delete_QDomCharacterData(QDomCharacterData* obj) { delete obj; } 
   void insertData(QDomCharacterData* theWrappedObject, unsigned long  offset, const QString&  arg);
   void deleteData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count);
   void replaceData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count, const QString&  arg);
   void appendData(QDomCharacterData* theWrappedObject, const QString&  arg);
   void setData(QDomCharacterData* theWrappedObject, const QString&  arg__1);
   uint  length(QDomCharacterData* theWrappedObject) const;
   QString  substringData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count);
   QString  data(QDomCharacterData* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDOMCHARACTERDATA_H
