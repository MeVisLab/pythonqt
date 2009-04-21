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
   QSqlField  field(QSqlRecord* theWrappedObject, int  i) const;
   void insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   bool  isNull(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  operator_equal(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const;
   QSqlField  field(QSqlRecord* theWrappedObject, const QString&  name) const;
   int  indexOf(QSqlRecord* theWrappedObject, const QString&  name) const;
   bool  isGenerated(QSqlRecord* theWrappedObject, int  i) const;
   int  count(QSqlRecord* theWrappedObject) const;
   void setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated);
   void setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated);
   void setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val);
   void clear(QSqlRecord* theWrappedObject);
   void setNull(QSqlRecord* theWrappedObject, const QString&  name);
   bool  isEmpty(QSqlRecord* theWrappedObject) const;
   void append(QSqlRecord* theWrappedObject, const QSqlField&  field);
   void setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val);
   bool  isNull(QSqlRecord* theWrappedObject, int  i) const;
   bool  contains(QSqlRecord* theWrappedObject, const QString&  name) const;
   QString  fieldName(QSqlRecord* theWrappedObject, int  i) const;
   void setNull(QSqlRecord* theWrappedObject, int  i);
   QVariant  value(QSqlRecord* theWrappedObject, const QString&  name) const;
   void clearValues(QSqlRecord* theWrappedObject);
   void remove(QSqlRecord* theWrappedObject, int  pos);
   QVariant  value(QSqlRecord* theWrappedObject, int  i) const;
   void replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
};

#endif // PYTHONQTWRAPPER_QSQLRECORD_H
