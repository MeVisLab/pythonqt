#include "PythonQtWrapper_QFontComboBox.h"

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontcombobox.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
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
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

QFontComboBox* PythonQtWrapper_QFontComboBox::new_QFontComboBox(QWidget*  parent)
{ 
return new QFontComboBox(parent); }

QFont  PythonQtWrapper_QFontComboBox::currentFont(QFontComboBox* theWrappedObject) const
{
return theWrappedObject->currentFont();
}

QFontComboBox::FontFilters  PythonQtWrapper_QFontComboBox::fontFilters(QFontComboBox* theWrappedObject) const
{
return theWrappedObject->fontFilters();
}

void PythonQtWrapper_QFontComboBox::setFontFilters(QFontComboBox* theWrappedObject, QFontComboBox::FontFilters  filters)
{
theWrappedObject->setFontFilters(filters);
}

void PythonQtWrapper_QFontComboBox::setWritingSystem(QFontComboBox* theWrappedObject, QFontDatabase::WritingSystem  arg__1)
{
theWrappedObject->setWritingSystem(arg__1);
}

QSize  PythonQtWrapper_QFontComboBox::sizeHint(QFontComboBox* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QFontDatabase::WritingSystem  PythonQtWrapper_QFontComboBox::writingSystem(QFontComboBox* theWrappedObject) const
{
return theWrappedObject->writingSystem();
}

