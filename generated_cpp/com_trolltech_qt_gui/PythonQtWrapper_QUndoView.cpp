#include "PythonQtWrapper_QUndoView.h"

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qundoview.h>
#include <qwidget.h>

QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QUndoGroup*  group, QWidget*  parent)
{ 
return new QUndoView(group, parent); }

QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QUndoStack*  stack, QWidget*  parent)
{ 
return new QUndoView(stack, parent); }

QUndoView* PythonQtWrapper_QUndoView::new_QUndoView(QWidget*  parent)
{ 
return new QUndoView(parent); }

QIcon  PythonQtWrapper_QUndoView::cleanIcon(QUndoView* theWrappedObject) const
{
return theWrappedObject->cleanIcon();
}

QString  PythonQtWrapper_QUndoView::emptyLabel(QUndoView* theWrappedObject) const
{
return theWrappedObject->emptyLabel();
}

QUndoGroup*  PythonQtWrapper_QUndoView::group(QUndoView* theWrappedObject) const
{
return theWrappedObject->group();
}

void PythonQtWrapper_QUndoView::setCleanIcon(QUndoView* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setCleanIcon(icon);
}

void PythonQtWrapper_QUndoView::setEmptyLabel(QUndoView* theWrappedObject, const QString&  label)
{
theWrappedObject->setEmptyLabel(label);
}

QUndoStack*  PythonQtWrapper_QUndoView::stack(QUndoView* theWrappedObject) const
{
return theWrappedObject->stack();
}

