#ifndef PYTHONQTWRAPPER_QTREEWIDGETITEM_H
#define PYTHONQTWRAPPER_QTREEWIDGETITEM_H

#include <qtreewidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtreewidget.h>

class PythonQtShell_QTreeWidgetItem : public QTreeWidgetItem
{
public:
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(view, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type):QTreeWidgetItem(view, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, int  type = Type):QTreeWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(parent, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type):QTreeWidgetItem(parent, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type):QTreeWidgetItem(parent, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(const QStringList&  strings, int  type = Type):QTreeWidgetItem(strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(int  type = Type):QTreeWidgetItem(type),_wrapper(NULL) {};

virtual QTreeWidgetItem*  clone() const;
virtual QVariant  data(int  column, int  role) const;
virtual bool  operator_less(const QTreeWidgetItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setData(int  column, int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidgetItem : public QTreeWidgetItem
{ public:
inline void promoted_setData(int  column, int  role, const QVariant&  value) { QTreeWidgetItem::setData(column, role, value); }
inline QVariant  promoted_data(int  column, int  role) const { return QTreeWidgetItem::data(column, role); }
inline QTreeWidgetItem*  promoted_clone() const { return QTreeWidgetItem::clone(); }
};

class PythonQtWrapper_QTreeWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType ChildIndicatorPolicy )
enum ItemType{
  Type = QTreeWidgetItem::Type,   UserType = QTreeWidgetItem::UserType};
enum ChildIndicatorPolicy{
  ShowIndicator = QTreeWidgetItem::ShowIndicator,   DontShowIndicator = QTreeWidgetItem::DontShowIndicator,   DontShowIndicatorWhenChildless = QTreeWidgetItem::DontShowIndicatorWhenChildless};
public slots:
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(int  type = Type);
void delete_QTreeWidgetItem(QTreeWidgetItem* obj) { delete obj; } 
bool hasOwner(QTreeWidgetItem* theWrappedObject) { return theWrappedObject->treeWidget()!=NULL || theWrappedObject->parent()!=NULL; }
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child);
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   void addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children);
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   QList<QTreeWidgetItem* >  takeChildren(QTreeWidgetItem* theWrappedObject);
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   void addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children);
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   int  type(QTreeWidgetItem* theWrappedObject) const;
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
};

#endif // PYTHONQTWRAPPER_QTREEWIDGETITEM_H
