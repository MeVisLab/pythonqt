#ifndef PYTHONQTWRAPPER_QABSTRACTXMLRECEIVER_H
#define PYTHONQTWRAPPER_QABSTRACTXMLRECEIVER_H

#include <qabstractxmlreceiver.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qxmlname.h>

class PythonQtShell_QAbstractXmlReceiver : public QAbstractXmlReceiver
{
public:
    PythonQtShell_QAbstractXmlReceiver():QAbstractXmlReceiver(),_wrapper(NULL) {};

virtual void atomicValue(const QVariant&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void characters(const QStringRef&  value);
virtual void comment(const QString&  value);
virtual void endDocument();
virtual void endElement();
virtual void endOfSequence();
virtual void namespaceBinding(const QXmlName&  name);
virtual void processingInstruction(const QXmlName&  target, const QString&  value);
virtual void startDocument();
virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractXmlReceiver : public QAbstractXmlReceiver
{ public:
inline void promoted_whitespaceOnly(const QStringRef&  value) { QAbstractXmlReceiver::whitespaceOnly(value); }
};

class PythonQtWrapper_QAbstractXmlReceiver : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractXmlReceiver* new_QAbstractXmlReceiver();
void delete_QAbstractXmlReceiver(QAbstractXmlReceiver* obj) { delete obj; } 
   void whitespaceOnly(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value);
};

#endif // PYTHONQTWRAPPER_QABSTRACTXMLRECEIVER_H
