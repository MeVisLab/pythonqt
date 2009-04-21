#ifndef PYTHONQTWRAPPER_QSQLRECORD_H
#define PYTHONQTWRAPPER_QSQLRECORD_H

#include <qsqlrecord.h>
#include <QObject>

#include <PythonQt.h>

#include <QSqlField>
#include <QVariant>
#include <qsqlfield.h>
#include <qsqlrecord.h>

class PythonQtWrapper_QSqlRecord : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRecord* new_QSqlRecord();
QSqlRecord* new_QSqlRecord(const QSqlRecord&  other);
void delete_QSqlRecord(QSqlRecord* obj) { delete obj; } 
   bool  isNull(QSqlRecord* theWrappedObject, int  i) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const;
   void setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val);
   void clear(QSqlRecord* theWrappedObject);
   bool  isGenerated(QSqlRecord* theWrappedObject, int  i) const;
   QSqlField  field(QSqlRecord* theWrappedObject, int  i) const;
   bool  isEmpty(QSqlRecord* theWrappedObject) const;
   void setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated);
   void setNull(QSqlRecord* theWrappedObject, int  i);
   void setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val);
   void remove(QSqlRecord* theWrappedObject, int  pos);
   int  indexOf(QSqlRecord* theWrappedObject, const QString&  name) const;
   void setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated);
   void replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   void append(QSqlRecord* theWrappedObject, const QSqlField&  field);
   int  count(QSqlRecord* theWrappedObject) const;
   QVariant  value(QSqlRecord* theWrappedObject, const QString&  name) const;
   void setNull(QSqlRecord* theWrappedObject, const QString&  name);
   void clearValues(QSqlRecord* theWrappedObject);
   QVariant  value(QSqlRecord* theWrappedObject, int  i) const;
   bool  contains(QSqlRecord* theWrappedObject, const QString&  name) const;
   QSqlField  field(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  operator_equal(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   void insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   QString  fieldName(QSqlRecord* theWrappedObject, int  i) const;
   bool  isNull(QSqlRecord* theWrappedObject, const QString&  name) const;
};

#endif // PYTHONQTWRAPPER_QSQLRECORD_H
