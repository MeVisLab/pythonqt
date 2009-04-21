#ifndef PYTHONQTWRAPPER_QXMLSTREAMNAMESPACEDECLARATION_H
#define PYTHONQTWRAPPER_QXMLSTREAMNAMESPACEDECLARATION_H

#include <qxmlstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxmlstream.h>

class PythonQtWrapper_QXmlStreamNamespaceDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration();
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri);
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration&  arg__1);
void delete_QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration* obj) { delete obj; } 
   QStringRef  prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
   QStringRef  namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
   bool  operator_equal(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const;
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMNAMESPACEDECLARATION_H
