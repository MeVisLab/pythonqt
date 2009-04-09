#include "PythonQtWrapper_QComboBox.h"

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcombobox.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

QComboBox* PythonQtWrapper_QComboBox::new_QComboBox(QWidget*  parent)
{ 
return new QComboBox(parent); }

void PythonQtWrapper_QComboBox::addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData)
{
theWrappedObject->addItem(icon, text, userData);
}

void PythonQtWrapper_QComboBox::addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData)
{
theWrappedObject->addItem(text, userData);
}

void PythonQtWrapper_QComboBox::addItems(QComboBox* theWrappedObject, const QStringList&  texts)
{
theWrappedObject->addItems(texts);
}

QCompleter*  PythonQtWrapper_QComboBox::completer(QComboBox* theWrappedObject) const
{
return theWrappedObject->completer();
}

int  PythonQtWrapper_QComboBox::count(QComboBox* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QComboBox::currentIndex(QComboBox* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

QString  PythonQtWrapper_QComboBox::currentText(QComboBox* theWrappedObject) const
{
return theWrappedObject->currentText();
}

bool  PythonQtWrapper_QComboBox::duplicatesEnabled(QComboBox* theWrappedObject) const
{
return theWrappedObject->duplicatesEnabled();
}

bool  PythonQtWrapper_QComboBox::event(QComboBox* theWrappedObject, QEvent*  event)
{
return theWrappedObject->event(event);
}

int  PythonQtWrapper_QComboBox::findData(QComboBox* theWrappedObject, const QVariant&  data, int  role, Qt::MatchFlags  flags) const
{
return theWrappedObject->findData(data, role, flags);
}

int  PythonQtWrapper_QComboBox::findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const
{
return theWrappedObject->findText(text, flags);
}

bool  PythonQtWrapper_QComboBox::hasFrame(QComboBox* theWrappedObject) const
{
return theWrappedObject->hasFrame();
}

void PythonQtWrapper_QComboBox::hidePopup(QComboBox* theWrappedObject)
{
theWrappedObject->hidePopup();
}

QSize  PythonQtWrapper_QComboBox::iconSize(QComboBox* theWrappedObject) const
{
return theWrappedObject->iconSize();
}

void PythonQtWrapper_QComboBox::insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData)
{
theWrappedObject->insertItem(index, icon, text, userData);
}

void PythonQtWrapper_QComboBox::insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData)
{
theWrappedObject->insertItem(index, text, userData);
}

void PythonQtWrapper_QComboBox::insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts)
{
theWrappedObject->insertItems(index, texts);
}

QComboBox::InsertPolicy  PythonQtWrapper_QComboBox::insertPolicy(QComboBox* theWrappedObject) const
{
return theWrappedObject->insertPolicy();
}

void PythonQtWrapper_QComboBox::insertSeparator(QComboBox* theWrappedObject, int  index)
{
theWrappedObject->insertSeparator(index);
}

bool  PythonQtWrapper_QComboBox::isEditable(QComboBox* theWrappedObject) const
{
return theWrappedObject->isEditable();
}

QVariant  PythonQtWrapper_QComboBox::itemData(QComboBox* theWrappedObject, int  index, int  role) const
{
return theWrappedObject->itemData(index, role);
}

QAbstractItemDelegate*  PythonQtWrapper_QComboBox::itemDelegate(QComboBox* theWrappedObject) const
{
return theWrappedObject->itemDelegate();
}

QIcon  PythonQtWrapper_QComboBox::itemIcon(QComboBox* theWrappedObject, int  index) const
{
return theWrappedObject->itemIcon(index);
}

QString  PythonQtWrapper_QComboBox::itemText(QComboBox* theWrappedObject, int  index) const
{
return theWrappedObject->itemText(index);
}

QLineEdit*  PythonQtWrapper_QComboBox::lineEdit(QComboBox* theWrappedObject) const
{
return theWrappedObject->lineEdit();
}

int  PythonQtWrapper_QComboBox::maxCount(QComboBox* theWrappedObject) const
{
return theWrappedObject->maxCount();
}

int  PythonQtWrapper_QComboBox::maxVisibleItems(QComboBox* theWrappedObject) const
{
return theWrappedObject->maxVisibleItems();
}

int  PythonQtWrapper_QComboBox::minimumContentsLength(QComboBox* theWrappedObject) const
{
return theWrappedObject->minimumContentsLength();
}

QSize  PythonQtWrapper_QComboBox::minimumSizeHint(QComboBox* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

QAbstractItemModel*  PythonQtWrapper_QComboBox::model(QComboBox* theWrappedObject) const
{
return theWrappedObject->model();
}

int  PythonQtWrapper_QComboBox::modelColumn(QComboBox* theWrappedObject) const
{
return theWrappedObject->modelColumn();
}

void PythonQtWrapper_QComboBox::removeItem(QComboBox* theWrappedObject, int  index)
{
theWrappedObject->removeItem(index);
}

QModelIndex  PythonQtWrapper_QComboBox::rootModelIndex(QComboBox* theWrappedObject) const
{
return theWrappedObject->rootModelIndex();
}

void PythonQtWrapper_QComboBox::setCompleter(QComboBox* theWrappedObject, QCompleter*  c)
{
theWrappedObject->setCompleter(c);
}

void PythonQtWrapper_QComboBox::setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable)
{
theWrappedObject->setDuplicatesEnabled(enable);
}

void PythonQtWrapper_QComboBox::setEditable(QComboBox* theWrappedObject, bool  editable)
{
theWrappedObject->setEditable(editable);
}

void PythonQtWrapper_QComboBox::setFrame(QComboBox* theWrappedObject, bool  arg__1)
{
theWrappedObject->setFrame(arg__1);
}

void PythonQtWrapper_QComboBox::setIconSize(QComboBox* theWrappedObject, const QSize&  size)
{
theWrappedObject->setIconSize(size);
}

void PythonQtWrapper_QComboBox::setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy)
{
theWrappedObject->setInsertPolicy(policy);
}

void PythonQtWrapper_QComboBox::setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role)
{
theWrappedObject->setItemData(index, value, role);
}

void PythonQtWrapper_QComboBox::setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate)
{
theWrappedObject->setItemDelegate(delegate);
}

void PythonQtWrapper_QComboBox::setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon)
{
theWrappedObject->setItemIcon(index, icon);
}

void PythonQtWrapper_QComboBox::setItemText(QComboBox* theWrappedObject, int  index, const QString&  text)
{
theWrappedObject->setItemText(index, text);
}

void PythonQtWrapper_QComboBox::setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit)
{
theWrappedObject->setLineEdit(edit);
}

void PythonQtWrapper_QComboBox::setMaxCount(QComboBox* theWrappedObject, int  max)
{
theWrappedObject->setMaxCount(max);
}

void PythonQtWrapper_QComboBox::setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems)
{
theWrappedObject->setMaxVisibleItems(maxItems);
}

void PythonQtWrapper_QComboBox::setMinimumContentsLength(QComboBox* theWrappedObject, int  characters)
{
theWrappedObject->setMinimumContentsLength(characters);
}

void PythonQtWrapper_QComboBox::setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model)
{
theWrappedObject->setModel(model);
}

void PythonQtWrapper_QComboBox::setModelColumn(QComboBox* theWrappedObject, int  visibleColumn)
{
theWrappedObject->setModelColumn(visibleColumn);
}

void PythonQtWrapper_QComboBox::setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index)
{
theWrappedObject->setRootModelIndex(index);
}

void PythonQtWrapper_QComboBox::setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy)
{
theWrappedObject->setSizeAdjustPolicy(policy);
}

void PythonQtWrapper_QComboBox::setValidator(QComboBox* theWrappedObject, const QValidator*  v)
{
theWrappedObject->setValidator(v);
}

void PythonQtWrapper_QComboBox::setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView)
{
theWrappedObject->setView(itemView);
}

void PythonQtWrapper_QComboBox::showPopup(QComboBox* theWrappedObject)
{
theWrappedObject->showPopup();
}

QComboBox::SizeAdjustPolicy  PythonQtWrapper_QComboBox::sizeAdjustPolicy(QComboBox* theWrappedObject) const
{
return theWrappedObject->sizeAdjustPolicy();
}

QSize  PythonQtWrapper_QComboBox::sizeHint(QComboBox* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

const QValidator*  PythonQtWrapper_QComboBox::validator(QComboBox* theWrappedObject) const
{
return theWrappedObject->validator();
}

QAbstractItemView*  PythonQtWrapper_QComboBox::view(QComboBox* theWrappedObject) const
{
return theWrappedObject->view();
}

