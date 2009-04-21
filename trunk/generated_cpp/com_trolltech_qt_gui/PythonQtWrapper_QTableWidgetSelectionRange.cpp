#include "PythonQtWrapper_QTableWidgetSelectionRange.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qtablewidget.h>

QTableWidgetSelectionRange* PythonQtWrapper_QTableWidgetSelectionRange::new_QTableWidgetSelectionRange()
{ 
return new QTableWidgetSelectionRange(); }

QTableWidgetSelectionRange* PythonQtWrapper_QTableWidgetSelectionRange::new_QTableWidgetSelectionRange(const QTableWidgetSelectionRange&  other)
{ 
return new QTableWidgetSelectionRange(other); }

QTableWidgetSelectionRange* PythonQtWrapper_QTableWidgetSelectionRange::new_QTableWidgetSelectionRange(int  top, int  left, int  bottom, int  right)
{ 
return new QTableWidgetSelectionRange(top, left, bottom, right); }

int  PythonQtWrapper_QTableWidgetSelectionRange::rowCount(QTableWidgetSelectionRange* theWrappedObject) const
{
return  (*theWrappedObject).rowCount();
}

int  PythonQtWrapper_QTableWidgetSelectionRange::topRow(QTableWidgetSelectionRange* theWrappedObject) const
{
return  (*theWrappedObject).topRow();
}

int  PythonQtWrapper_QTableWidgetSelectionRange::leftColumn(QTableWidgetSelectionRange* theWrappedObject) const
{
return  (*theWrappedObject).leftColumn();
}

int  PythonQtWrapper_QTableWidgetSelectionRange::bottomRow(QTableWidgetSelectionRange* theWrappedObject) const
{
return  (*theWrappedObject).bottomRow();
}

int  PythonQtWrapper_QTableWidgetSelectionRange::rightColumn(QTableWidgetSelectionRange* theWrappedObject) const
{
return  (*theWrappedObject).rightColumn();
}

int  PythonQtWrapper_QTableWidgetSelectionRange::columnCount(QTableWidgetSelectionRange* theWrappedObject) const
{
return  (*theWrappedObject).columnCount();
}

