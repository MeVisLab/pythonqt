#ifndef PYTHONQTWRAPPER_QITEMEDITORCREATORBASE_H
#define PYTHONQTWRAPPER_QITEMEDITORCREATORBASE_H

#include <qitemeditorfactory.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qwidget.h>

class PythonQtWrapper_QItemEditorCreatorBase : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QItemEditorCreatorBase(QItemEditorCreatorBase* obj) { delete obj; } 
   QWidget*  createWidget(QItemEditorCreatorBase* theWrappedObject, QWidget*  parent) const;
   QByteArray  valuePropertyName(QItemEditorCreatorBase* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QITEMEDITORCREATORBASE_H
