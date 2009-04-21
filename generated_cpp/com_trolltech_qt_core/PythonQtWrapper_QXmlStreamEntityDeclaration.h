#ifndef PYTHONQTWRAPPER_QXMLSTREAMENTITYDECLARATION_H
#define PYTHONQTWRAPPER_QXMLSTREAMENTITYDECLARATION_H

#include <qxmlstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxmlstream.h>

class PythonQtWrapper_QXmlStreamEntityDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration();
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration&  arg__1);
void delete_QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration* obj) { delete obj; } 
   QStringRef  value(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringRef  notationName(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringRef  name(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QStringRef  publicId(QXmlStreamEntityDeclaration* theWrappedObject) const;
   bool  operator_equal(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const;
   QStringRef  systemId(QXmlStreamEntityDeclaration* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMENTITYDECLARATION_H
