#ifndef PYTHONQTWRAPPER_QXMLRESULTITEMS_H
#define PYTHONQTWRAPPER_QXMLRESULTITEMS_H

#include <qxmlresultitems.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qxmlresultitems.h>

class PythonQtShell_QXmlResultItems : public QXmlResultItems
{
public:
    PythonQtShell_QXmlResultItems():QXmlResultItems(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlResultItems : public QObject
{ Q_OBJECT
public:
public slots:
QXmlResultItems* new_QXmlResultItems();
void delete_QXmlResultItems(QXmlResultItems* obj) { delete obj; } 
   QXmlItem  current(QXmlResultItems* theWrappedObject) const;
   QXmlItem  next(QXmlResultItems* theWrappedObject);
   bool  hasError(QXmlResultItems* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLRESULTITEMS_H
