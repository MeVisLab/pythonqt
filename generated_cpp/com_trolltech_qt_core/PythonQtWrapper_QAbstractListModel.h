#ifndef PYTHONQTWRAPPER_QABSTRACTLISTMODEL_H
#define PYTHONQTWRAPPER_QABSTRACTLISTMODEL_H

#include <qabstractitemmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QSize>
#include <QStringList>
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

class PythonQtShell_QAbstractListModel : public QAbstractListModel
{
public:
    PythonQtShell_QAbstractListModel(QObject*  parent = 0):QAbstractListModel(parent),_wrapper(NULL) {};

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
virtual QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent);
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent);
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QStringList  mimeTypes() const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent);
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent);
virtual void revert();
virtual int  rowCount(const QModelIndex&  parent) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual void sort(int  column, Qt::SortOrder  order);
virtual QSize  span(const QModelIndex&  index) const;
virtual bool  submit();
virtual Qt::DropActions  supportedDropActions() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractListModel : public QAbstractListModel
{ public:
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractListModel::dropMimeData(data, action, row, column, parent); }
inline QModelIndex  promoted_index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const { return QAbstractListModel::index(row, column, parent); }
};

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractListModel* new_QAbstractListModel(QObject*  parent = 0);
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; } 
   bool  dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   QModelIndex  index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTLISTMODEL_H
