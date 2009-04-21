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
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  type(QTreeWidgetItem* theWrappedObject) const;
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   void addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children);
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   QList<QTreeWidgetItem* >  takeChildren(QTreeWidgetItem* theWrappedObject);
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child);
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children);
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   void removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
};

#endif // PYTHONQTWRAPPER_QTREEWIDGETITEM_H
