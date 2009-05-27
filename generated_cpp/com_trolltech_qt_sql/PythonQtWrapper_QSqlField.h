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
   bool  isGenerated(QSqlField* theWrappedObject) const;
   bool  isValid(QSqlField* theWrappedObject) const;
   int  length(QSqlField* theWrappedObject) const;
   bool  operator_equal(QSqlField* theWrappedObject, const QSqlField&  other) const;
   void setReadOnly(QSqlField* theWrappedObject, bool  readOnly);
   void clear(QSqlField* theWrappedObject);
   void setAutoValue(QSqlField* theWrappedObject, bool  autoVal);
   int  precision(QSqlField* theWrappedObject) const;
   void setGenerated(QSqlField* theWrappedObject, bool  gen);
   void setType(QSqlField* theWrappedObject, QVariant::Type  type);
   bool  isReadOnly(QSqlField* theWrappedObject) const;
   QVariant  value(QSqlField* theWrappedObject) const;
   bool  isNull(QSqlField* theWrappedObject) const;
   QVariant::Type  type(QSqlField* theWrappedObject) const;
   void setRequired(QSqlField* theWrappedObject, bool  required);
   int  typeID(QSqlField* theWrappedObject) const;
   QString  name(QSqlField* theWrappedObject) const;
   QSqlField::RequiredStatus  requiredStatus(QSqlField* theWrappedObject) const;
   bool  isAutoValue(QSqlField* theWrappedObject) const;
   void setPrecision(QSqlField* theWrappedObject, int  precision);
   void setValue(QSqlField* theWrappedObject, const QVariant&  value);
   QVariant  defaultValue(QSqlField* theWrappedObject) const;
   void setName(QSqlField* theWrappedObject, const QString&  name);
   void setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value);
   void setLength(QSqlField* theWrappedObject, int  fieldLength);
   void setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status);
   void setSqlType(QSqlField* theWrappedObject, int  type);
    QString toString(QSqlField*);
};

#endif // PYTHONQTWRAPPER_QSQLFIELD_H
