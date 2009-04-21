#ifndef PYTHONQTWRAPPER_QSTYLEDITEMDELEGATE_H
#define PYTHONQTWRAPPER_QSTYLEDITEMDELEGATE_H

#include <qstyleditemdelegate.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qitemeditorfactory.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpainter.h>
#include <qsize.h>
#include <qstyleditemdelegate.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyledItemDelegate : public QStyledItemDelegate
{
public:
    PythonQtShell_QStyledItemDelegate(QObject*  parent = 0):QStyledItemDelegate(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void customEvent(QEvent*  arg__1);
virtual QString  displayText(const QVariant&  value, const QLocale&  locale) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const;
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStyledItemDelegate : public QStyledItemDelegate
{ public:
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QStyledItemDelegate::editorEvent(event, model, option, index); }
inline void promoted_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QStyledItemDelegate::setModelData(editor, model, index); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::paint(painter, option, index); }
inline void promoted_initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const { QStyledItemDelegate::initStyleOption(option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QStyledItemDelegate::eventFilter(object, event); }
inline QWidget*  promoted_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::createEditor(parent, option, index); }
inline QString  promoted_displayText(const QVariant&  value, const QLocale&  locale) const { return QStyledItemDelegate::displayText(value, locale); }
inline void promoted_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QStyledItemDelegate::setEditorData(editor, index); }
inline QSize  promoted_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::sizeHint(option, index); }
inline void promoted_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QStyledItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QStyledItemDelegate* new_QStyledItemDelegate(QObject*  parent = 0);
void delete_QStyledItemDelegate(QStyledItemDelegate* obj) { delete obj; } 
   bool  editorEvent(QStyledItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   QItemEditorFactory*  itemEditorFactory(QStyledItemDelegate* theWrappedObject) const;
   void setModelData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   void paint(QStyledItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void initStyleOption(QStyledItemDelegate* theWrappedObject, QStyleOptionViewItem*  option, const QModelIndex&  index) const;
   bool  eventFilter(QStyledItemDelegate* theWrappedObject, QObject*  object, QEvent*  event);
   QWidget*  createEditor(QStyledItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   QString  displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const;
   void setItemEditorFactory(QStyledItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void setEditorData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   QSize  sizeHint(QStyledItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void updateEditorGeometry(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
};

#endif // PYTHONQTWRAPPER_QSTYLEDITEMDELEGATE_H
