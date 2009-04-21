#ifndef PYTHONQTWRAPPER_QSQLFIELD_H
#define PYTHONQTWRAPPER_QSQLFIELD_H

#include <qsqlfield.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsqlfield.h>

class PythonQtWrapper_QSqlField : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RequiredStatus )
enum RequiredStatus{
  Unknown = QSqlField::Unknown,   Optional = QSqlField::Optional,   Required = QSqlField::Required};
public slots:
QSqlField* new_QSqlField(const QSqlField&  other);
QSqlField* new_QSqlField(const QString&  fieldName = QString(), QVariant::Type  type = QVariant::Invalid);
void delete_QSqlField(QSqlField* obj) { delete obj; } 
   QString  name(QSqlField* theWrappedObject) const;
   int  precision(QSqlField* theWrappedObject) const;
   void clear(QSqlField* theWrappedObject);
   void setType(QSqlField* theWrappedObject, QVariant::Type  type);
   QVariant  value(QSqlField* theWrappedObject) const;
   bool  isNull(QSqlField* theWrappedObject) const;
   QVariant::Type  type(QSqlField* theWrappedObject) const;
   QSqlField::RequiredStatus  requiredStatus(QSqlField* theWrappedObject) const;
   void setRequired(QSqlField* theWrappedObject, bool  required);
   int  typeID(QSqlField* theWrappedObject) const;
   void setReadOnly(QSqlField* theWrappedObject, bool  readOnly);
   bool  isGenerated(QSqlField* theWrappedObject) const;
   void setName(QSqlField* theWrappedObject, const QString&  name);
   void setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status);
   bool  isAutoValue(QSqlField* theWrappedObject) const;
   void setPrecision(QSqlField* theWrappedObject, int  precision);
   void setValue(QSqlField* theWrappedObject, const QVariant&  value);
   QVariant  defaultValue(QSqlField* theWrappedObject) const;
   void setAutoValue(QSqlField* theWrappedObject, bool  autoVal);
   bool  isReadOnly(QSqlField* theWrappedObject) const;
   void setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value);
   void setSqlType(QSqlField* theWrappedObject, int  type);
   bool  isValid(QSqlField* theWrappedObject) const;
   void setGenerated(QSqlField* theWrappedObject, bool  gen);
   void setLength(QSqlField* theWrappedObject, int  fieldLength);
   int  length(QSqlField* theWrappedObject) const;
   bool  operator_equal(QSqlField* theWrappedObject, const QSqlField&  other) const;
};

#endif // PYTHONQTWRAPPER_QSQLFIELD_H
