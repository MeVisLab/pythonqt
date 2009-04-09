#ifndef PYTHONQTWRAPPER_QABSTRACTLISTMODEL_H
#define PYTHONQTWRAPPER_QABSTRACTLISTMODEL_H

#include <qabstractitemmodel.h>
#include <QObject>

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

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; } 
   bool  dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   QModelIndex  index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTLISTMODEL_H
