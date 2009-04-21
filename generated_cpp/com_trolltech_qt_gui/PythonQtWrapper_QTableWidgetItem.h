#ifndef PYTHONQTWRAPPER_QTABLEWIDGETITEM_H
#define PYTHONQTWRAPPER_QTABLEWIDGETITEM_H

#include <qtablewidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qsize.h>
#include <qtablewidget.h>

class PythonQtShell_QTableWidgetItem : public QTableWidgetItem
{
public:
    PythonQtShell_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type):QTableWidgetItem(icon, text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(const QString&  text, int  type = Type):QTableWidgetItem(text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(int  type = Type):QTableWidgetItem(type),_wrapper(NULL) {};

virtual QTableWidgetItem*  clone() const;
virtual QVariant  data(int  role) const;
virtual bool  operator_less(const QTableWidgetItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setData(int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTableWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QTableWidgetItem::Type,   UserType = QTableWidgetItem::UserType};
public slots:
QTableWidgetItem* new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(int  type = Type);
void delete_QTableWidgetItem(QTableWidgetItem* obj) { delete obj; } 
   void setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip);
   void setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   QBrush  foreground(QTableWidgetItem* theWrappedObject) const;
   int  type(QTableWidgetItem* theWrappedObject) const;
   void writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out);
   QSize  sizeHint(QTableWidgetItem* theWrappedObject) const;
   void readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in);
   Qt::CheckState  checkState(QTableWidgetItem* theWrappedObject) const;
   Qt::ItemFlags  flags(QTableWidgetItem* theWrappedObject) const;
   void setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size);
   QTableWidgetItem*  clone(QTableWidgetItem* theWrappedObject) const;
   void setFont(QTableWidgetItem* theWrappedObject, const QFont&  font);
   QBrush  background(QTableWidgetItem* theWrappedObject) const;
   void setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip);
   void setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis);
   QString  text(QTableWidgetItem* theWrappedObject) const;
   int  column(QTableWidgetItem* theWrappedObject) const;
   void setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state);
   QVariant  data(QTableWidgetItem* theWrappedObject, int  role) const;
   QIcon  icon(QTableWidgetItem* theWrappedObject) const;
   QString  statusTip(QTableWidgetItem* theWrappedObject) const;
   void setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment);
   bool  isSelected(QTableWidgetItem* theWrappedObject) const;
   QTableWidget*  tableWidget(QTableWidgetItem* theWrappedObject) const;
   QFont  font(QTableWidgetItem* theWrappedObject) const;
   void setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon);
   void setText(QTableWidgetItem* theWrappedObject, const QString&  text);
   QString  toolTip(QTableWidgetItem* theWrappedObject) const;
   void setSelected(QTableWidgetItem* theWrappedObject, bool  select);
   int  row(QTableWidgetItem* theWrappedObject) const;
   int  textAlignment(QTableWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTableWidgetItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTABLEWIDGETITEM_H
