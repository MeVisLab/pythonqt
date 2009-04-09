#include "PythonQtWrapper_QAbstractTableModel.h"

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

bool  PythonQtWrapper_QAbstractTableModel::dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
return theWrappedObject->dropMimeData(data, action, row, column, parent);
}

QModelIndex  PythonQtWrapper_QAbstractTableModel::index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
return theWrappedObject->index(row, column, parent);
}

