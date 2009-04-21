#ifndef PYTHONQTWRAPPER_QXMLLOCATOR_H
#define PYTHONQTWRAPPER_QXMLLOCATOR_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QXmlLocator : public QXmlLocator
{
public:
    PythonQtShell_QXmlLocator():QXmlLocator(),_wrapper(NULL) {};

virtual int  columnNumber() const;
virtual int  lineNumber() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlLocator : public QObject
{ Q_OBJECT
public:
public slots:
QXmlLocator* new_QXmlLocator();
void delete_QXmlLocator(QXmlLocator* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QXMLLOCATOR_H
