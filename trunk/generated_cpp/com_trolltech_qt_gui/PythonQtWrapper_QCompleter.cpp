#include "PythonQtWrapper_QCompleter.h"

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qstringlist.h>
#include <qwidget.h>

QCompleter* PythonQtWrapper_QCompleter::new_QCompleter(QAbstractItemModel*  model, QObject*  parent)
{ 
return new QCompleter(model, parent); }

QCompleter* PythonQtWrapper_QCompleter::new_QCompleter(QObject*  parent)
{ 
return new QCompleter(parent); }

QCompleter* PythonQtWrapper_QCompleter::new_QCompleter(const QStringList&  completions, QObject*  parent)
{ 
return new QCompleter(completions, parent); }

Qt::CaseSensitivity  PythonQtWrapper_QCompleter::caseSensitivity(QCompleter* theWrappedObject) const
{
return theWrappedObject->caseSensitivity();
}

int  PythonQtWrapper_QCompleter::completionColumn(QCompleter* theWrappedObject) const
{
return theWrappedObject->completionColumn();
}

int  PythonQtWrapper_QCompleter::completionCount(QCompleter* theWrappedObject) const
{
return theWrappedObject->completionCount();
}

QCompleter::CompletionMode  PythonQtWrapper_QCompleter::completionMode(QCompleter* theWrappedObject) const
{
return theWrappedObject->completionMode();
}

QAbstractItemModel*  PythonQtWrapper_QCompleter::completionModel(QCompleter* theWrappedObject) const
{
return theWrappedObject->completionModel();
}

QString  PythonQtWrapper_QCompleter::completionPrefix(QCompleter* theWrappedObject) const
{
return theWrappedObject->completionPrefix();
}

int  PythonQtWrapper_QCompleter::completionRole(QCompleter* theWrappedObject) const
{
return theWrappedObject->completionRole();
}

QString  PythonQtWrapper_QCompleter::currentCompletion(QCompleter* theWrappedObject) const
{
return theWrappedObject->currentCompletion();
}

QModelIndex  PythonQtWrapper_QCompleter::currentIndex(QCompleter* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

int  PythonQtWrapper_QCompleter::currentRow(QCompleter* theWrappedObject) const
{
return theWrappedObject->currentRow();
}

QAbstractItemModel*  PythonQtWrapper_QCompleter::model(QCompleter* theWrappedObject) const
{
return theWrappedObject->model();
}

QCompleter::ModelSorting  PythonQtWrapper_QCompleter::modelSorting(QCompleter* theWrappedObject) const
{
return theWrappedObject->modelSorting();
}

QString  PythonQtWrapper_QCompleter::pathFromIndex(QCompleter* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->pathFromIndex(index);
}

QAbstractItemView*  PythonQtWrapper_QCompleter::popup(QCompleter* theWrappedObject) const
{
return theWrappedObject->popup();
}

void PythonQtWrapper_QCompleter::setCaseSensitivity(QCompleter* theWrappedObject, Qt::CaseSensitivity  caseSensitivity)
{
theWrappedObject->setCaseSensitivity(caseSensitivity);
}

void PythonQtWrapper_QCompleter::setCompletionColumn(QCompleter* theWrappedObject, int  column)
{
theWrappedObject->setCompletionColumn(column);
}

void PythonQtWrapper_QCompleter::setCompletionMode(QCompleter* theWrappedObject, QCompleter::CompletionMode  mode)
{
theWrappedObject->setCompletionMode(mode);
}

void PythonQtWrapper_QCompleter::setCompletionRole(QCompleter* theWrappedObject, int  role)
{
theWrappedObject->setCompletionRole(role);
}

bool  PythonQtWrapper_QCompleter::setCurrentRow(QCompleter* theWrappedObject, int  row)
{
return theWrappedObject->setCurrentRow(row);
}

void PythonQtWrapper_QCompleter::setModel(QCompleter* theWrappedObject, QAbstractItemModel*  c)
{
theWrappedObject->setModel(c);
}

void PythonQtWrapper_QCompleter::setModelSorting(QCompleter* theWrappedObject, QCompleter::ModelSorting  sorting)
{
theWrappedObject->setModelSorting(sorting);
}

void PythonQtWrapper_QCompleter::setPopup(QCompleter* theWrappedObject, QAbstractItemView*  popup)
{
theWrappedObject->setPopup(popup);
}

void PythonQtWrapper_QCompleter::setWidget(QCompleter* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setWidget(widget);
}

QStringList  PythonQtWrapper_QCompleter::splitPath(QCompleter* theWrappedObject, const QString&  path) const
{
return theWrappedObject->splitPath(path);
}

QWidget*  PythonQtWrapper_QCompleter::widget(QCompleter* theWrappedObject) const
{
return theWrappedObject->widget();
}

bool  PythonQtWrapper_QCompleter::wrapAround(QCompleter* theWrappedObject) const
{
return theWrappedObject->wrapAround();
}

