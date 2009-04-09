#ifndef PYTHONQTWRAPPER_QSTRINGLISTMODEL_H
#define PYTHONQTWRAPPER_QSTRINGLISTMODEL_H

#include <qstringlistmodel.h>
#include <QObject>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qstringlistmodel.h>

class PythonQtWrapper_QStringListModel : public QObject
{ Q_OBJECT
public:
public slots:
QStringListModel* new_QStringListModel(QObject*  parent = 0);
QStringListModel* new_QStringListModel(const QStringList&  strings, QObject*  parent = 0);
void delete_QStringListModel(QStringListModel* obj) { delete obj; } 
   QVariant  data(QStringListModel* theWrappedObject, const QModelIndex&  index, int  role) const;
   Qt::ItemFlags  flags(QStringListModel* theWrappedObject, const QModelIndex&  index) const;
   bool  insertRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  removeRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   int  rowCount(QStringListModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  setData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   void setStringList(QStringListModel* theWrappedObject, const QStringList&  strings);
   void sort(QStringListModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   QStringList  stringList(QStringListModel* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QStringListModel* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSTRINGLISTMODEL_H
