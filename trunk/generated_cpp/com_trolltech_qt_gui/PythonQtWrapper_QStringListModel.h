#ifndef PYTHONQTWRAPPER_QSTRINGLISTMODEL_H
#define PYTHONQTWRAPPER_QSTRINGLISTMODEL_H

#include <qstringlistmodel.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QStringListModel : public QStringListModel
{
public:
    PythonQtShell_QStringListModel(QObject*  parent = 0):QStringListModel(parent),_wrapper(NULL) {};
    PythonQtShell_QStringListModel(const QStringList&  strings, QObject*  parent = 0):QStringListModel(strings, parent),_wrapper(NULL) {};

virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual QVariant  data(const QModelIndex&  index, int  role) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fetchMore(const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent);
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent);
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual void revert();
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStringListModel : public QStringListModel
{ public:
inline QVariant  promoted_data(const QModelIndex&  index, int  role) const { return QStringListModel::data(index, role); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QStringListModel::supportedDropActions(); }
inline void promoted_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QStringListModel::sort(column, order); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QStringListModel::flags(index); }
inline bool  promoted_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QStringListModel::setData(index, value, role); }
inline bool  promoted_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStringListModel::removeRows(row, count, parent); }
inline int  promoted_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QStringListModel::rowCount(parent); }
inline bool  promoted_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStringListModel::insertRows(row, count, parent); }
};

class PythonQtWrapper_QStringListModel : public QObject
{ Q_OBJECT
public:
public slots:
QStringListModel* new_QStringListModel(QObject*  parent = 0);
QStringListModel* new_QStringListModel(const QStringList&  strings, QObject*  parent = 0);
void delete_QStringListModel(QStringListModel* obj) { delete obj; } 
   QStringList  stringList(QStringListModel* theWrappedObject) const;
   QVariant  data(QStringListModel* theWrappedObject, const QModelIndex&  index, int  role) const;
   Qt::DropActions  supportedDropActions(QStringListModel* theWrappedObject) const;
   void sort(QStringListModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   Qt::ItemFlags  flags(QStringListModel* theWrappedObject, const QModelIndex&  index) const;
   bool  setData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   bool  removeRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   int  rowCount(QStringListModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   bool  insertRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   void setStringList(QStringListModel* theWrappedObject, const QStringList&  strings);
};

#endif // PYTHONQTWRAPPER_QSTRINGLISTMODEL_H
