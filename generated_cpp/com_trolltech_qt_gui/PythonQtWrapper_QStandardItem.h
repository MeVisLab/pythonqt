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

class PythonQtPublicPromoter_QStandardItem : public QStandardItem
{ public:
inline void promoted_setData(const QVariant&  value, int  role = Qt::UserRole + 1) { QStandardItem::setData(value, role); }
inline int  promoted_type() const { return QStandardItem::type(); }
inline QStandardItem*  promoted_clone() const { return QStandardItem::clone(); }
inline QVariant  promoted_data(int  role = Qt::UserRole + 1) const { return QStandardItem::data(role); }
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
   QStandardItem*  child(QStandardItem* theWrappedObject, int  row, int  column = 0) const;
   void insertColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint);
   QFont  font(QStandardItem* theWrappedObject) const;
   void setCheckable(QStandardItem* theWrappedObject, bool  checkable);
   void setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment);
   QString  accessibleDescription(QStandardItem* theWrappedObject) const;
   void setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags);
   bool  hasChildren(QStandardItem* theWrappedObject) const;
   void setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText);
   void setEditable(QStandardItem* theWrappedObject, bool  editable);
   QBrush  foreground(QStandardItem* theWrappedObject) const;
   QSize  sizeHint(QStandardItem* theWrappedObject) const;
   void removeColumn(QStandardItem* theWrappedObject, int  column);
   void setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole + 1);
   QModelIndex  index(QStandardItem* theWrappedObject) const;
   int  type(QStandardItem* theWrappedObject) const;
   void insertRows(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   int  column(QStandardItem* theWrappedObject) const;
   void appendRow(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   void insertRow(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   void insertColumn(QStandardItem* theWrappedObject, int  column, const QList<QStandardItem* >&  items);
   void insertRows(QStandardItem* theWrappedObject, int  row, int  count);
   void setChild(QStandardItem* theWrappedObject, int  row, int  column, QStandardItem*  item);
   Qt::Alignment  textAlignment(QStandardItem* theWrappedObject) const;
   void setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis);
   void setFont(QStandardItem* theWrappedObject, const QFont&  font);
   void setEnabled(QStandardItem* theWrappedObject, bool  enabled);
   void setRowCount(QStandardItem* theWrappedObject, int  rows);
   void removeRow(QStandardItem* theWrappedObject, int  row);
   void setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip);
   QStandardItemModel*  model(QStandardItem* theWrappedObject) const;
   void setTristate(QStandardItem* theWrappedObject, bool  tristate);
   int  columnCount(QStandardItem* theWrappedObject) const;
   void setSelectable(QStandardItem* theWrappedObject, bool  selectable);
   void setText(QStandardItem* theWrappedObject, const QString&  text);
   QIcon  icon(QStandardItem* theWrappedObject) const;
   bool  isEditable(QStandardItem* theWrappedObject) const;
   void sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   QString  accessibleText(QStandardItem* theWrappedObject) const;
   void appendRows(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   bool  isSelectable(QStandardItem* theWrappedObject) const;
   bool  isDropEnabled(QStandardItem* theWrappedObject) const;
   QString  toolTip(QStandardItem* theWrappedObject) const;
   void writeTo(QStandardItem* theWrappedObject, QDataStream&  out);
   void setChild(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   void insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   int  row(QStandardItem* theWrappedObject) const;
   QString  whatsThis(QStandardItem* theWrappedObject) const;
   QString  statusTip(QStandardItem* theWrappedObject) const;
   void removeRows(QStandardItem* theWrappedObject, int  row, int  count);
   void setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled);
   void setBackground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void appendColumn(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   void setForeground(QStandardItem* theWrappedObject, const QBrush&  brush);
   QBrush  background(QStandardItem* theWrappedObject) const;
   int  rowCount(QStandardItem* theWrappedObject) const;
   void readFrom(QStandardItem* theWrappedObject, QDataStream&  in);
   Qt::ItemFlags  flags(QStandardItem* theWrappedObject) const;
   void setColumnCount(QStandardItem* theWrappedObject, int  columns);
   QStandardItem*  clone(QStandardItem* theWrappedObject) const;
   QStandardItem*  parent(QStandardItem* theWrappedObject) const;
   bool  isTristate(QStandardItem* theWrappedObject) const;
   void appendRow(QStandardItem* theWrappedObject, QStandardItem*  item);
   bool  isEnabled(QStandardItem* theWrappedObject) const;
   QString  text(QStandardItem* theWrappedObject) const;
   QList<QStandardItem* >  takeColumn(QStandardItem* theWrappedObject, int  column);
   void setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState);
   QStandardItem*  takeChild(QStandardItem* theWrappedObject, int  row, int  column = 0);
   void setIcon(QStandardItem* theWrappedObject, const QIcon&  icon);
   void setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip);
   bool  isDragEnabled(QStandardItem* theWrappedObject) const;
   QVariant  data(QStandardItem* theWrappedObject, int  role = Qt::UserRole + 1) const;
   void removeColumns(QStandardItem* theWrappedObject, int  column, int  count);
   Qt::CheckState  checkState(QStandardItem* theWrappedObject) const;
   void setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription);
   bool  isCheckable(QStandardItem* theWrappedObject) const;
   QList<QStandardItem* >  takeRow(QStandardItem* theWrappedObject, int  row);
   void setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled);
};

#endif // PYTHONQTWRAPPER_QSTANDARDITEM_H
