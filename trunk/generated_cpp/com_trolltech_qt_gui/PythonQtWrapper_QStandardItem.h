#ifndef PYTHONQTWRAPPER_QSTANDARDITEM_H
#define PYTHONQTWRAPPER_QSTANDARDITEM_H

#include <qstandarditemmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstandarditemmodel.h>

class PythonQtShell_QStandardItem : public QStandardItem
{
public:
    PythonQtShell_QStandardItem():QStandardItem(),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QIcon&  icon, const QString&  text):QStandardItem(icon, text),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QStandardItem&  other):QStandardItem(other),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QString&  text):QStandardItem(text),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(int  rows, int  columns = 1):QStandardItem(rows, columns),_wrapper(NULL) {};

virtual QStandardItem*  clone() const;
virtual QVariant  data(int  role = Qt::UserRole + 1) const;
virtual bool  operator_less(const QStandardItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setData(const QVariant&  value, int  role = Qt::UserRole + 1);
virtual int  type() const;
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStandardItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QStandardItem::Type,   UserType = QStandardItem::UserType};
public slots:
QStandardItem* new_QStandardItem();
QStandardItem* new_QStandardItem(const QIcon&  icon, const QString&  text);
QStandardItem* new_QStandardItem(const QString&  text);
QStandardItem* new_QStandardItem(int  rows, int  columns = 1);
void delete_QStandardItem(QStandardItem* obj) { delete obj; } 
   bool  isEnabled(QStandardItem* theWrappedObject) const;
   void setForeground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void removeRow(QStandardItem* theWrappedObject, int  row);
   void setEditable(QStandardItem* theWrappedObject, bool  editable);
   void setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip);
   QList<QStandardItem* >  takeRow(QStandardItem* theWrappedObject, int  row);
   QStandardItem*  takeChild(QStandardItem* theWrappedObject, int  row, int  column = 0);
   QStandardItemModel*  model(QStandardItem* theWrappedObject) const;
   void setIcon(QStandardItem* theWrappedObject, const QIcon&  icon);
   void setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip);
   void insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   void appendRow(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   QVariant  data(QStandardItem* theWrappedObject, int  role = Qt::UserRole + 1) const;
   Qt::ItemFlags  flags(QStandardItem* theWrappedObject) const;
   void setChild(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   void insertColumns(QStandardItem* theWrappedObject, int  column, int  count);
   QString  text(QStandardItem* theWrappedObject) const;
   void insertRows(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   void readFrom(QStandardItem* theWrappedObject, QDataStream&  in);
   QBrush  background(QStandardItem* theWrappedObject) const;
   void setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription);
   QStandardItem*  child(QStandardItem* theWrappedObject, int  row, int  column = 0) const;
   QModelIndex  index(QStandardItem* theWrappedObject) const;
   void setRowCount(QStandardItem* theWrappedObject, int  rows);
   void removeColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void removeColumn(QStandardItem* theWrappedObject, int  column);
   void setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole + 1);
   int  rowCount(QStandardItem* theWrappedObject) const;
   void setText(QStandardItem* theWrappedObject, const QString&  text);
   QString  statusTip(QStandardItem* theWrappedObject) const;
   void setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint);
   Qt::CheckState  checkState(QStandardItem* theWrappedObject) const;
   int  row(QStandardItem* theWrappedObject) const;
   void setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled);
   void appendRows(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   void setFont(QStandardItem* theWrappedObject, const QFont&  font);
   QList<QStandardItem* >  takeColumn(QStandardItem* theWrappedObject, int  column);
   QString  whatsThis(QStandardItem* theWrappedObject) const;
   void appendColumn(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   void setEnabled(QStandardItem* theWrappedObject, bool  enabled);
   int  column(QStandardItem* theWrappedObject) const;
   void writeTo(QStandardItem* theWrappedObject, QDataStream&  out);
   bool  isCheckable(QStandardItem* theWrappedObject) const;
   QString  accessibleText(QStandardItem* theWrappedObject) const;
   QString  accessibleDescription(QStandardItem* theWrappedObject) const;
   int  type(QStandardItem* theWrappedObject) const;
   bool  isEditable(QStandardItem* theWrappedObject) const;
   void setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText);
   void setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags);
   QFont  font(QStandardItem* theWrappedObject) const;
   QString  toolTip(QStandardItem* theWrappedObject) const;
   void setChild(QStandardItem* theWrappedObject, int  row, int  column, QStandardItem*  item);
   void setSelectable(QStandardItem* theWrappedObject, bool  selectable);
   void setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment);
   void sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void appendRow(QStandardItem* theWrappedObject, QStandardItem*  item);
   bool  isDragEnabled(QStandardItem* theWrappedObject) const;
   void setTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled);
   void insertRow(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   void setBackground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis);
   void setColumnCount(QStandardItem* theWrappedObject, int  columns);
   void setCheckable(QStandardItem* theWrappedObject, bool  checkable);
   QIcon  icon(QStandardItem* theWrappedObject) const;
   void setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState);
   bool  isSelectable(QStandardItem* theWrappedObject) const;
   QStandardItem*  parent(QStandardItem* theWrappedObject) const;
   QBrush  foreground(QStandardItem* theWrappedObject) const;
   bool  hasChildren(QStandardItem* theWrappedObject) const;
   bool  isTristate(QStandardItem* theWrappedObject) const;
   void insertRows(QStandardItem* theWrappedObject, int  row, int  count);
   void removeRows(QStandardItem* theWrappedObject, int  row, int  count);
   bool  isDropEnabled(QStandardItem* theWrappedObject) const;
   int  columnCount(QStandardItem* theWrappedObject) const;
   void insertColumn(QStandardItem* theWrappedObject, int  column, const QList<QStandardItem* >&  items);
   QStandardItem*  clone(QStandardItem* theWrappedObject) const;
   Qt::Alignment  textAlignment(QStandardItem* theWrappedObject) const;
   QSize  sizeHint(QStandardItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSTANDARDITEM_H
