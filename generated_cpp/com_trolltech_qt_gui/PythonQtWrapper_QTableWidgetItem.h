#ifndef PYTHONQTWRAPPER_QTABLEWIDGETITEM_H
#define PYTHONQTWRAPPER_QTABLEWIDGETITEM_H

#include <qtablewidget.h>
#include <QObject>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qsize.h>
#include <qtablewidget.h>

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
   QBrush  background(QTableWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QTableWidgetItem* theWrappedObject) const;
   QTableWidgetItem*  clone(QTableWidgetItem* theWrappedObject) const;
   int  column(QTableWidgetItem* theWrappedObject) const;
   QVariant  data(QTableWidgetItem* theWrappedObject, int  role) const;
   Qt::ItemFlags  flags(QTableWidgetItem* theWrappedObject) const;
   QFont  font(QTableWidgetItem* theWrappedObject) const;
   QBrush  foreground(QTableWidgetItem* theWrappedObject) const;
   QIcon  icon(QTableWidgetItem* theWrappedObject) const;
   bool  isSelected(QTableWidgetItem* theWrappedObject) const;
   void writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in);
   int  row(QTableWidgetItem* theWrappedObject) const;
   void setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QTableWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon);
   void setSelected(QTableWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip);
   void setText(QTableWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment);
   void setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip);
   void setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QTableWidgetItem* theWrappedObject) const;
   QString  statusTip(QTableWidgetItem* theWrappedObject) const;
   QTableWidget*  tableWidget(QTableWidgetItem* theWrappedObject) const;
   QString  text(QTableWidgetItem* theWrappedObject) const;
   int  textAlignment(QTableWidgetItem* theWrappedObject) const;
   QString  toolTip(QTableWidgetItem* theWrappedObject) const;
   int  type(QTableWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTableWidgetItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTABLEWIDGETITEM_H
