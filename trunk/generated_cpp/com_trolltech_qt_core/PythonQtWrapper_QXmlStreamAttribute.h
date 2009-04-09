#ifndef PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTE_H
#define PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTE_H

#include <qxmlstream.h>
#include <QObject>

#include <QVariant>
#include <qxmlstream.h>

class PythonQtWrapper_QXmlStreamAttribute : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttribute* new_QXmlStreamAttribute();
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QXmlStreamAttribute&  arg__1);
void delete_QXmlStreamAttribute(QXmlStreamAttribute* obj) { delete obj; } 
   bool  isDefault(QXmlStreamAttribute* theWrappedObject) const;
   QStringRef  name(QXmlStreamAttribute* theWrappedObject) const;
   QStringRef  namespaceUri(QXmlStreamAttribute* theWrappedObject) const;
   bool  operator_equal(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const;
   QStringRef  prefix(QXmlStreamAttribute* theWrappedObject) const;
   QStringRef  qualifiedName(QXmlStreamAttribute* theWrappedObject) const;
   QStringRef  value(QXmlStreamAttribute* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTE_H
