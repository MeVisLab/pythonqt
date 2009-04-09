#ifndef PYTHONQTWRAPPER_QSQLRECORD_H
#define PYTHONQTWRAPPER_QSQLRECORD_H

#include <qsqlrecord.h>
#include <QObject>

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
   void append(QSqlRecord* theWrappedObject, const QSqlField&  field);
   void clear(QSqlRecord* theWrappedObject);
   void clearValues(QSqlRecord* theWrappedObject);
   bool  contains(QSqlRecord* theWrappedObject, const QString&  name) const;
   int  count(QSqlRecord* theWrappedObject) const;
   QSqlField  field(QSqlRecord* theWrappedObject, const QString&  name) const;
   QSqlField  field(QSqlRecord* theWrappedObject, int  i) const;
   QString  fieldName(QSqlRecord* theWrappedObject, int  i) const;
   int  indexOf(QSqlRecord* theWrappedObject, const QString&  name) const;
   void insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   bool  isEmpty(QSqlRecord* theWrappedObject) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, int  i) const;
   bool  isNull(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  isNull(QSqlRecord* theWrappedObject, int  i) const;
   bool  operator_equal(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   void remove(QSqlRecord* theWrappedObject, int  pos);
   void replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   void setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated);
   void setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated);
   void setNull(QSqlRecord* theWrappedObject, const QString&  name);
   void setNull(QSqlRecord* theWrappedObject, int  i);
   void setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val);
   void setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val);
   QVariant  value(QSqlRecord* theWrappedObject, const QString&  name) const;
   QVariant  value(QSqlRecord* theWrappedObject, int  i) const;
};

#endif // PYTHONQTWRAPPER_QSQLRECORD_H
