#ifndef PYTHONQTWRAPPER_QDOMNODELIST_H
#define PYTHONQTWRAPPER_QDOMNODELIST_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>

class PythonQtWrapper_QDomNodeList : public QObject
{ Q_OBJECT
public:
public slots:
QDomNodeList* new_QDomNodeList();
QDomNodeList* new_QDomNodeList(const QDomNodeList&  arg__1);
void delete_QDomNodeList(QDomNodeList* obj) { delete obj; } 
   uint  length(QDomNodeList* theWrappedObject) const;
   bool  operator_equal(QDomNodeList* theWrappedObject, const QDomNodeList&  arg__1) const;
   QDomNode  item(QDomNodeList* theWrappedObject, int  index) const;
   bool  isEmpty(QDomNodeList* theWrappedObject) const;
   QDomNode  at(QDomNodeList* theWrappedObject, int  index) const;
   int  count(QDomNodeList* theWrappedObject) const;
   int  size(QDomNodeList* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDOMNODELIST_H
