#ifndef PYTHONQTWRAPPER_QDOMATTR_H
#define PYTHONQTWRAPPER_QDOMATTR_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomAttr : public QObject
{ Q_OBJECT
public:
public slots:
QDomAttr* new_QDomAttr();
QDomAttr* new_QDomAttr(const QDomAttr&  x);
void delete_QDomAttr(QDomAttr* obj) { delete obj; } 
   void setValue(QDomAttr* theWrappedObject, const QString&  arg__1);
   bool  specified(QDomAttr* theWrappedObject) const;
   QString  name(QDomAttr* theWrappedObject) const;
   QString  value(QDomAttr* theWrappedObject) const;
   QDomElement  ownerElement(QDomAttr* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDOMATTR_H
