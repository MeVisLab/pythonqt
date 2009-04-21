#ifndef PYTHONQTWRAPPER_QITEMEDITORFACTORY_H
#define PYTHONQTWRAPPER_QITEMEDITORFACTORY_H

#include <qitemeditorfactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qitemeditorfactory.h>
#include <qwidget.h>

class PythonQtShell_QItemEditorFactory : public QItemEditorFactory
{
public:
    PythonQtShell_QItemEditorFactory():QItemEditorFactory(),_wrapper(NULL) {};

virtual QWidget*  createEditor(QVariant::Type  type, QWidget*  parent) const;
virtual QByteArray  valuePropertyName(QVariant::Type  type) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QItemEditorFactory : public QItemEditorFactory
{ public:
inline QWidget*  promoted_createEditor(QVariant::Type  type, QWidget*  parent) const { return QItemEditorFactory::createEditor(type, parent); }
inline QByteArray  promoted_valuePropertyName(QVariant::Type  type) const { return QItemEditorFactory::valuePropertyName(type); }
};

class PythonQtWrapper_QItemEditorFactory : public QObject
{ Q_OBJECT
public:
public slots:
QItemEditorFactory* new_QItemEditorFactory();
void delete_QItemEditorFactory(QItemEditorFactory* obj) { delete obj; } 
   QWidget*  createEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QWidget*  parent) const;
   void static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory);
   const QItemEditorFactory*  static_QItemEditorFactory_defaultFactory();
   void registerEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QItemEditorCreatorBase*  creator);
   QByteArray  valuePropertyName(QItemEditorFactory* theWrappedObject, QVariant::Type  type) const;
};

#endif // PYTHONQTWRAPPER_QITEMEDITORFACTORY_H
