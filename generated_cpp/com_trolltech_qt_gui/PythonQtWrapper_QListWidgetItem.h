#ifndef PYTHONQTWRAPPER_QLISTWIDGETITEM_H
#define PYTHONQTWRAPPER_QLISTWIDGETITEM_H

#include <qlistwidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlistwidget.h>
#include <qsize.h>

class PythonQtShell_QListWidgetItem : public QListWidgetItem
{
public:
    PythonQtShell_QListWidgetItem(QListWidget*  view = 0, int  type = Type):QListWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view = 0, int  type = Type):QListWidgetItem(icon, text, view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QString&  text, QListWidget*  view = 0, int  type = Type):QListWidgetItem(text, view, type),_wrapper(NULL) {};

virtual QListWidgetItem*  clone() const;
virtual QVariant  data(int  role) const;
virtual bool  operator_less(const QListWidgetItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setBackgroundColor(const QColor&  color);
virtual void setData(int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListWidgetItem : public QListWidgetItem
{ public:
inline void promoted_setData(int  role, const QVariant&  value) { QListWidgetItem::setData(role, value); }
inline QListWidgetItem*  promoted_clone() const { return QListWidgetItem::clone(); }
inline QVariant  promoted_data(int  role) const { return QListWidgetItem::data(role); }
};

class PythonQtWrapper_QListWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QListWidgetItem::Type,   UserType = QListWidgetItem::UserType};
public slots:
QListWidgetItem* new_QListWidgetItem(QListWidget*  view = 0, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view = 0, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QString&  text, QListWidget*  view = 0, int  type = Type);
void delete_QListWidgetItem(QListWidgetItem* obj) { delete obj; } 
   Qt::ItemFlags  flags(QListWidgetItem* theWrappedObject) const;
   void setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip);
   void setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip);
   int  textAlignment(QListWidgetItem* theWrappedObject) const;
   void setSelected(QListWidgetItem* theWrappedObject, bool  select);
   QFont  font(QListWidgetItem* theWrappedObject) const;
   void setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon);
   void setText(QListWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment);
   QString  text(QListWidgetItem* theWrappedObject) const;
   QListWidget*  listWidget(QListWidgetItem* theWrappedObject) const;
   void setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis);
   QString  toolTip(QListWidgetItem* theWrappedObject) const;
   void setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   QBrush  background(QListWidgetItem* theWrappedObject) const;
   void setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in);
   QListWidgetItem*  clone(QListWidgetItem* theWrappedObject) const;
   QString  statusTip(QListWidgetItem* theWrappedObject) const;
   void setFont(QListWidgetItem* theWrappedObject, const QFont&  font);
   int  type(QListWidgetItem* theWrappedObject) const;
   QString  whatsThis(QListWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QListWidgetItem* theWrappedObject) const;
   bool  isSelected(QListWidgetItem* theWrappedObject) const;
   void setHidden(QListWidgetItem* theWrappedObject, bool  hide);
   void setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   QIcon  icon(QListWidgetItem* theWrappedObject) const;
   void writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out);
   QSize  sizeHint(QListWidgetItem* theWrappedObject) const;
   QVariant  data(QListWidgetItem* theWrappedObject, int  role) const;
   QBrush  foreground(QListWidgetItem* theWrappedObject) const;
   bool  isHidden(QListWidgetItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLISTWIDGETITEM_H
