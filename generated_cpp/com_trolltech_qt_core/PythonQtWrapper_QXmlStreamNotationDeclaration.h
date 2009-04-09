#ifndef PYTHONQTWRAPPER_QXMLSTREAMNOTATIONDECLARATION_H
#define PYTHONQTWRAPPER_QXMLSTREAMNOTATIONDECLARATION_H

#include <qxmlstream.h>
#include <QObject>

#include <QVariant>
#include <qxmlstream.h>

class PythonQtWrapper_QXmlStreamNotationDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration();
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration&  arg__1);
void delete_QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration* obj) { delete obj; } 
   QStringRef  name(QXmlStreamNotationDeclaration* theWrappedObject) const;
   bool  operator_equal(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const;
   QStringRef  publicId(QXmlStreamNotationDeclaration* theWrappedObject) const;
   QStringRef  systemId(QXmlStreamNotationDeclaration* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMNOTATIONDECLARATION_H
