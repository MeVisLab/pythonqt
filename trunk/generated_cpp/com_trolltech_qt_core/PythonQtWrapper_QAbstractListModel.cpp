#include "PythonQtWrapper_QAbstractListModel.h"

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

bool  PythonQtWrapper_QAbstractListModel::dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
return theWrappedObject->dropMimeData(data, action, row, column, parent);
}

QModelIndex  PythonQtWrapper_QAbstractListModel::index(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
return theWrappedObject->index(row, column, parent);
}

