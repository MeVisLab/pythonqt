#ifndef PYTHONQTWRAPPER_QITEMEDITORCREATORBASE_H
#define PYTHONQTWRAPPER_QITEMEDITORCREATORBASE_H

#include <qitemeditorfactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qwidget.h>

class PythonQtShell_QItemEditorCreatorBase : public QItemEditorCreatorBase
{
public:
    PythonQtShell_QItemEditorCreatorBase():QItemEditorCreatorBase(),_wrapper(NULL) {};

virtual QWidget*  createWidget(QWidget*  parent) const;
virtual QByteArray  valuePropertyName() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorCreatorBase* new_QItemEditorCreatorBase();
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QITEMEDITORCREATORBASE_H
