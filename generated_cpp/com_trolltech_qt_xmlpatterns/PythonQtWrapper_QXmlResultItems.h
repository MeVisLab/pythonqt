#ifndef PYTHONQTWRAPPER_QXMLRESULTITEMS_H
#define PYTHONQTWRAPPER_QXMLRESULTITEMS_H

#include <qxmlresultitems.h>
#include <QObject>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qxmlresultitems.h>

class PythonQtWrapper_QXmlResultItems : public QObject
{ Q_OBJECT
public:
public slots:
QXmlResultItems* new_QXmlResultItems();
void delete_QXmlResultItems(QXmlResultItems* obj) { delete obj; } 
   QXmlItem  current(QXmlResultItems* theWrappedObject) const;
   bool  hasError(QXmlResultItems* theWrappedObject) const;
   QXmlItem  next(QXmlResultItems* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QXMLRESULTITEMS_H
