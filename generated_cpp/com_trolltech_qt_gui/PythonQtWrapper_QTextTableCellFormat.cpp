#include "PythonQtWrapper_QTextTableCellFormat.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvector.h>

QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat()
{ 
return new PythonQtShell_QTextTableCellFormat(); }

void PythonQtWrapper_QTextTableCellFormat::setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
 (*theWrappedObject).setTopPadding(padding);
}

void PythonQtWrapper_QTextTableCellFormat::setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
 (*theWrappedObject).setLeftPadding(padding);
}

void PythonQtWrapper_QTextTableCellFormat::setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
 (*theWrappedObject).setPadding(padding);
}

bool  PythonQtWrapper_QTextTableCellFormat::isValid(QTextTableCellFormat* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

void PythonQtWrapper_QTextTableCellFormat::setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
 (*theWrappedObject).setBottomPadding(padding);
}

qreal  PythonQtWrapper_QTextTableCellFormat::topPadding(QTextTableCellFormat* theWrappedObject) const
{
return  (*theWrappedObject).topPadding();
}

qreal  PythonQtWrapper_QTextTableCellFormat::rightPadding(QTextTableCellFormat* theWrappedObject) const
{
return  (*theWrappedObject).rightPadding();
}

qreal  PythonQtWrapper_QTextTableCellFormat::leftPadding(QTextTableCellFormat* theWrappedObject) const
{
return  (*theWrappedObject).leftPadding();
}

qreal  PythonQtWrapper_QTextTableCellFormat::bottomPadding(QTextTableCellFormat* theWrappedObject) const
{
return  (*theWrappedObject).bottomPadding();
}

void PythonQtWrapper_QTextTableCellFormat::setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
 (*theWrappedObject).setRightPadding(padding);
}

