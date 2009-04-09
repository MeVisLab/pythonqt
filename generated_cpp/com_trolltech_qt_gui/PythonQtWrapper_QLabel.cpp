#include "PythonQtWrapper_QLabel.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QLabel* PythonQtWrapper_QLabel::new_QLabel(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QLabel(parent, f); }

QLabel* PythonQtWrapper_QLabel::new_QLabel(const QString&  text, QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QLabel(text, parent, f); }

Qt::Alignment  PythonQtWrapper_QLabel::alignment(QLabel* theWrappedObject) const
{
return theWrappedObject->alignment();
}

QWidget*  PythonQtWrapper_QLabel::buddy(QLabel* theWrappedObject) const
{
return theWrappedObject->buddy();
}

bool  PythonQtWrapper_QLabel::hasScaledContents(QLabel* theWrappedObject) const
{
return theWrappedObject->hasScaledContents();
}

int  PythonQtWrapper_QLabel::heightForWidth(QLabel* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

int  PythonQtWrapper_QLabel::indent(QLabel* theWrappedObject) const
{
return theWrappedObject->indent();
}

int  PythonQtWrapper_QLabel::margin(QLabel* theWrappedObject) const
{
return theWrappedObject->margin();
}

QSize  PythonQtWrapper_QLabel::minimumSizeHint(QLabel* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

QMovie*  PythonQtWrapper_QLabel::movie(QLabel* theWrappedObject) const
{
return theWrappedObject->movie();
}

bool  PythonQtWrapper_QLabel::openExternalLinks(QLabel* theWrappedObject) const
{
return theWrappedObject->openExternalLinks();
}

const QPicture*  PythonQtWrapper_QLabel::picture(QLabel* theWrappedObject) const
{
return theWrappedObject->picture();
}

const QPixmap*  PythonQtWrapper_QLabel::pixmap(QLabel* theWrappedObject) const
{
return theWrappedObject->pixmap();
}

void PythonQtWrapper_QLabel::setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1)
{
theWrappedObject->setAlignment(arg__1);
}

void PythonQtWrapper_QLabel::setBuddy(QLabel* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->setBuddy(arg__1);
}

void PythonQtWrapper_QLabel::setIndent(QLabel* theWrappedObject, int  arg__1)
{
theWrappedObject->setIndent(arg__1);
}

void PythonQtWrapper_QLabel::setMargin(QLabel* theWrappedObject, int  arg__1)
{
theWrappedObject->setMargin(arg__1);
}

void PythonQtWrapper_QLabel::setOpenExternalLinks(QLabel* theWrappedObject, bool  open)
{
theWrappedObject->setOpenExternalLinks(open);
}

void PythonQtWrapper_QLabel::setScaledContents(QLabel* theWrappedObject, bool  arg__1)
{
theWrappedObject->setScaledContents(arg__1);
}

void PythonQtWrapper_QLabel::setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1)
{
theWrappedObject->setTextFormat(arg__1);
}

void PythonQtWrapper_QLabel::setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags)
{
theWrappedObject->setTextInteractionFlags(flags);
}

void PythonQtWrapper_QLabel::setWordWrap(QLabel* theWrappedObject, bool  on)
{
theWrappedObject->setWordWrap(on);
}

QSize  PythonQtWrapper_QLabel::sizeHint(QLabel* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QString  PythonQtWrapper_QLabel::text(QLabel* theWrappedObject) const
{
return theWrappedObject->text();
}

Qt::TextFormat  PythonQtWrapper_QLabel::textFormat(QLabel* theWrappedObject) const
{
return theWrappedObject->textFormat();
}

Qt::TextInteractionFlags  PythonQtWrapper_QLabel::textInteractionFlags(QLabel* theWrappedObject) const
{
return theWrappedObject->textInteractionFlags();
}

bool  PythonQtWrapper_QLabel::wordWrap(QLabel* theWrappedObject) const
{
return theWrappedObject->wordWrap();
}

