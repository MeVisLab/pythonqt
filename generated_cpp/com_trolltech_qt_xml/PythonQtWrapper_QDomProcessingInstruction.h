#ifndef PYTHONQTWRAPPER_QDOMPROCESSINGINSTRUCTION_H
#define PYTHONQTWRAPPER_QDOMPROCESSINGINSTRUCTION_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomProcessingInstruction : public QObject
{ Q_OBJECT
public:
public slots:
QDomProcessingInstruction* new_QDomProcessingInstruction();
QDomProcessingInstruction* new_QDomProcessingInstruction(const QDomProcessingInstruction&  x);
void delete_QDomProcessingInstruction(QDomProcessingInstruction* obj) { delete obj; } 
   QString  data(QDomProcessingInstruction* theWrappedObject) const;
   void setData(QDomProcessingInstruction* theWrappedObject, const QString&  d);
   QString  target(QDomProcessingInstruction* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDOMPROCESSINGINSTRUCTION_H
