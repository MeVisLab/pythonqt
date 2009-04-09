#ifndef PYTHONQTWRAPPER_QSQLFIELD_H
#define PYTHONQTWRAPPER_QSQLFIELD_H

#include <qsqlfield.h>
#include <QObject>

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
   void clear(QSqlField* theWrappedObject);
   QVariant  defaultValue(QSqlField* theWrappedObject) const;
   bool  isAutoValue(QSqlField* theWrappedObject) const;
   bool  isGenerated(QSqlField* theWrappedObject) const;
   bool  isNull(QSqlField* theWrappedObject) const;
   bool  isReadOnly(QSqlField* theWrappedObject) const;
   bool  isValid(QSqlField* theWrappedObject) const;
   int  length(QSqlField* theWrappedObject) const;
   QString  name(QSqlField* theWrappedObject) const;
   bool  operator_equal(QSqlField* theWrappedObject, const QSqlField&  other) const;
   int  precision(QSqlField* theWrappedObject) const;
   QSqlField::RequiredStatus  requiredStatus(QSqlField* theWrappedObject) const;
   void setAutoValue(QSqlField* theWrappedObject, bool  autoVal);
   void setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value);
   void setGenerated(QSqlField* theWrappedObject, bool  gen);
   void setLength(QSqlField* theWrappedObject, int  fieldLength);
   void setName(QSqlField* theWrappedObject, const QString&  name);
   void setPrecision(QSqlField* theWrappedObject, int  precision);
   void setReadOnly(QSqlField* theWrappedObject, bool  readOnly);
   void setRequired(QSqlField* theWrappedObject, bool  required);
   void setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status);
   void setSqlType(QSqlField* theWrappedObject, int  type);
   void setType(QSqlField* theWrappedObject, QVariant::Type  type);
   void setValue(QSqlField* theWrappedObject, const QVariant&  value);
   QVariant::Type  type(QSqlField* theWrappedObject) const;
   int  typeID(QSqlField* theWrappedObject) const;
   QVariant  value(QSqlField* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLFIELD_H
