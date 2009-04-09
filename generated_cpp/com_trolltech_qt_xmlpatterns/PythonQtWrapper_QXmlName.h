#ifndef PYTHONQTWRAPPER_QXMLNAME_H
#define PYTHONQTWRAPPER_QXMLNAME_H

#include <qxmlname.h>
#include <QObject>

#include <QVariant>
#include <qxmlname.h>
#include <qxmlnamepool.h>

class PythonQtWrapper_QXmlName : public QObject
{ Q_OBJECT
public:
public slots:
QXmlName* new_QXmlName();
QXmlName* new_QXmlName(QXmlNamePool&  namePool, const QString&  localName, const QString&  namespaceURI = QString(), const QString&  prefix = QString());
void delete_QXmlName(QXmlName* obj) { delete obj; } 
   bool  static_QXmlName_isNCName(const QString&  candidate);
   bool  isNull(QXmlName* theWrappedObject) const;
   QString  localName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QString  namespaceUri(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   bool  operator_equal(QXmlName* theWrappedObject, const QXmlName&  other) const;
   QString  prefix(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QString  toClarkName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
};

#endif // PYTHONQTWRAPPER_QXMLNAME_H
