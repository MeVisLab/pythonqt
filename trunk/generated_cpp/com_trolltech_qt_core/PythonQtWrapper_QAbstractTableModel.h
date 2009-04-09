#ifndef PYTHONQTWRAPPER_QABSTRACTTABLEMODEL_H
#define PYTHONQTWRAPPER_QABSTRACTTABLEMODEL_H

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

class PythonQtWrapper_QAbstractTableModel : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractTableModel(QAbstractTableModel* obj) { delete obj; } 
   bool  dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   QModelIndex  index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTTABLEMODEL_H
