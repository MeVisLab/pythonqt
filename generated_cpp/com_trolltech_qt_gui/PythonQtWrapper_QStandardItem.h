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
inline QStandardItem*  promoted_clone() const { return QStandardItem::clone(); }
inline QVariant  promoted_data(int  role = Qt::UserRole + 1) const { return QStandardItem::data(role); }
inline int  promoted_type() const { return QStandardItem::type(); }
inline void promoted_setData(const QVariant&  value, int  role = Qt::UserRole + 1) { QStandardItem::setData(value, role); }
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
   QStandardItem*  clone(QStandardItem* theWrappedObject) const;
   QStandardItem*  parent(QStandardItem* theWrappedObject) const;
   void setCheckable(QStandardItem* theWrappedObject, bool  checkable);
   void setRowCount(QStandardItem* theWrappedObject, int  rows);
   bool  isDropEnabled(QStandardItem* theWrappedObject) const;
   bool  isTristate(QStandardItem* theWrappedObject) const;
   bool  isEnabled(QStandardItem* theWrappedObject) const;
   bool  hasChildren(QStandardItem* theWrappedObject) const;
   QStandardItem*  takeChild(QStandardItem* theWrappedObject, int  row, int  column = 0);
   void appendRow(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   void removeRow(QStandardItem* theWrappedObject, int  row);
   void setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription);
   void setIcon(QStandardItem* theWrappedObject, const QIcon&  icon);
   QVariant  data(QStandardItem* theWrappedObject, int  role = Qt::UserRole + 1) const;
   QList<QStandardItem* >  takeColumn(QStandardItem* theWrappedObject, int  column);
   QIcon  icon(QStandardItem* theWrappedObject) const;
   void removeColumns(QStandardItem* theWrappedObject, int  column, int  count);
   int  column(QStandardItem* theWrappedObject) const;
   QSize  sizeHint(QStandardItem* theWrappedObject) const;
   QString  accessibleDescription(QStandardItem* theWrappedObject) const;
   QList<QStandardItem* >  takeRow(QStandardItem* theWrappedObject, int  row);
   QFont  font(QStandardItem* theWrappedObject) const;
   void setColumnCount(QStandardItem* theWrappedObject, int  columns);
   void setEnabled(QStandardItem* theWrappedObject, bool  enabled);
   QStandardItem*  child(QStandardItem* theWrappedObject, int  row, int  column = 0) const;
   void setSelectable(QStandardItem* theWrappedObject, bool  selectable);
   QBrush  foreground(QStandardItem* theWrappedObject) const;
   void setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint);
   void setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled);
   void setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment);
   QModelIndex  index(QStandardItem* theWrappedObject) const;
   void readFrom(QStandardItem* theWrappedObject, QDataStream&  in);
   void setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip);
   void appendRow(QStandardItem* theWrappedObject, QStandardItem*  item);
   void insertRows(QStandardItem* theWrappedObject, int  row, int  count);
   void insertRows(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   Qt::CheckState  checkState(QStandardItem* theWrappedObject) const;
   int  columnCount(QStandardItem* theWrappedObject) const;
   bool  isSelectable(QStandardItem* theWrappedObject) const;
   void setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText);
   bool  isDragEnabled(QStandardItem* theWrappedObject) const;
   int  type(QStandardItem* theWrappedObject) const;
   void setEditable(QStandardItem* theWrappedObject, bool  editable);
   void setForeground(QStandardItem* theWrappedObject, const QBrush&  brush);
   QString  accessibleText(QStandardItem* theWrappedObject) const;
   void removeColumn(QStandardItem* theWrappedObject, int  column);
   QString  whatsThis(QStandardItem* theWrappedObject) const;
   bool  isEditable(QStandardItem* theWrappedObject) const;
   void setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags);
   void setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled);
   void setChild(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   void insertRow(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   void appendColumn(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   void setBackground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void insertColumn(QStandardItem* theWrappedObject, int  column, const QList<QStandardItem* >&  items);
   void setText(QStandardItem* theWrappedObject, const QString&  text);
   void writeTo(QStandardItem* theWrappedObject, QDataStream&  out);
   QStandardItemModel*  model(QStandardItem* theWrappedObject) const;
   void setTristate(QStandardItem* theWrappedObject, bool  tristate);
   void setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState);
   void setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip);
   void sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void appendRows(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   QString  toolTip(QStandardItem* theWrappedObject) const;
   void removeRows(QStandardItem* theWrappedObject, int  row, int  count);
   Qt::Alignment  textAlignment(QStandardItem* theWrappedObject) const;
   void setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole + 1);
   void insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   int  row(QStandardItem* theWrappedObject) const;
   QString  statusTip(QStandardItem* theWrappedObject) const;
   QString  text(QStandardItem* theWrappedObject) const;
   void insertColumns(QStandardItem* theWrappedObject, int  column, int  count);
   bool  isCheckable(QStandardItem* theWrappedObject) const;
   void setChild(QStandardItem* theWrappedObject, int  row, int  column, QStandardItem*  item);
   QBrush  background(QStandardItem* theWrappedObject) const;
   void setFont(QStandardItem* theWrappedObject, const QFont&  font);
   int  rowCount(QStandardItem* theWrappedObject) const;
   Qt::ItemFlags  flags(QStandardItem* theWrappedObject) const;
   void setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis);
};

#endif // PYTHONQTWRAPPER_QSTANDARDITEM_H
