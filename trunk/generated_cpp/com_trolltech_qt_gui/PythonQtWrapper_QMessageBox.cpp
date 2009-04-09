#include "PythonQtWrapper_QMessageBox.h"

#include <QPixmap>
#include <QVariant>
#include <qabstractbutton.h>
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
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmessagebox.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QMessageBox* PythonQtWrapper_QMessageBox::new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QMessageBox(icon, title, text, buttons, parent, f); }

QMessageBox* PythonQtWrapper_QMessageBox::new_QMessageBox(QWidget*  parent)
{ 
return new QMessageBox(parent); }

void PythonQtWrapper_QMessageBox::static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text)
{
QMessageBox::about(parent, title, text);
}

void PythonQtWrapper_QMessageBox::static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title)
{
QMessageBox::aboutQt(parent, title);
}

void PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role)
{
theWrappedObject->addButton(button, role);
}

QPushButton*  PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
return theWrappedObject->addButton(button);
}

QPushButton*  PythonQtWrapper_QMessageBox::addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role)
{
return theWrappedObject->addButton(text, role);
}

QAbstractButton*  PythonQtWrapper_QMessageBox::button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const
{
return theWrappedObject->button(which);
}

QAbstractButton*  PythonQtWrapper_QMessageBox::clickedButton(QMessageBox* theWrappedObject) const
{
return theWrappedObject->clickedButton();
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
return QMessageBox::critical(parent, title, text, buttons, defaultButton);
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
return QMessageBox::critical(parent, title, text, button0, button1);
}

QPushButton*  PythonQtWrapper_QMessageBox::defaultButton(QMessageBox* theWrappedObject) const
{
return theWrappedObject->defaultButton();
}

QString  PythonQtWrapper_QMessageBox::detailedText(QMessageBox* theWrappedObject) const
{
return theWrappedObject->detailedText();
}

QAbstractButton*  PythonQtWrapper_QMessageBox::escapeButton(QMessageBox* theWrappedObject) const
{
return theWrappedObject->escapeButton();
}

QMessageBox::Icon  PythonQtWrapper_QMessageBox::icon(QMessageBox* theWrappedObject) const
{
return theWrappedObject->icon();
}

QPixmap  PythonQtWrapper_QMessageBox::iconPixmap(QMessageBox* theWrappedObject) const
{
return theWrappedObject->iconPixmap();
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
return QMessageBox::information(parent, title, text, buttons, defaultButton);
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
return QMessageBox::information(parent, title, text, button0, button1);
}

QString  PythonQtWrapper_QMessageBox::informativeText(QMessageBox* theWrappedObject) const
{
return theWrappedObject->informativeText();
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
return QMessageBox::question(parent, title, text, buttons, defaultButton);
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
return QMessageBox::question(parent, title, text, button0, button1);
}

void PythonQtWrapper_QMessageBox::removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button)
{
theWrappedObject->removeButton(button);
}

void PythonQtWrapper_QMessageBox::setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
theWrappedObject->setDefaultButton(button);
}

void PythonQtWrapper_QMessageBox::setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button)
{
theWrappedObject->setDefaultButton(button);
}

void PythonQtWrapper_QMessageBox::setDetailedText(QMessageBox* theWrappedObject, const QString&  text)
{
theWrappedObject->setDetailedText(text);
}

void PythonQtWrapper_QMessageBox::setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button)
{
theWrappedObject->setEscapeButton(button);
}

void PythonQtWrapper_QMessageBox::setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button)
{
theWrappedObject->setEscapeButton(button);
}

void PythonQtWrapper_QMessageBox::setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1)
{
theWrappedObject->setIcon(arg__1);
}

void PythonQtWrapper_QMessageBox::setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap)
{
theWrappedObject->setIconPixmap(pixmap);
}

void PythonQtWrapper_QMessageBox::setInformativeText(QMessageBox* theWrappedObject, const QString&  text)
{
theWrappedObject->setInformativeText(text);
}

void PythonQtWrapper_QMessageBox::setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons)
{
theWrappedObject->setStandardButtons(buttons);
}

void PythonQtWrapper_QMessageBox::setText(QMessageBox* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

void PythonQtWrapper_QMessageBox::setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format)
{
theWrappedObject->setTextFormat(format);
}

QSize  PythonQtWrapper_QMessageBox::sizeHint(QMessageBox* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const
{
return theWrappedObject->standardButton(button);
}

QMessageBox::StandardButtons  PythonQtWrapper_QMessageBox::standardButtons(QMessageBox* theWrappedObject) const
{
return theWrappedObject->standardButtons();
}

QString  PythonQtWrapper_QMessageBox::text(QMessageBox* theWrappedObject) const
{
return theWrappedObject->text();
}

Qt::TextFormat  PythonQtWrapper_QMessageBox::textFormat(QMessageBox* theWrappedObject) const
{
return theWrappedObject->textFormat();
}

QMessageBox::StandardButton  PythonQtWrapper_QMessageBox::static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons, QMessageBox::StandardButton  defaultButton)
{
return QMessageBox::warning(parent, title, text, buttons, defaultButton);
}

int  PythonQtWrapper_QMessageBox::static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1)
{
return QMessageBox::warning(parent, title, text, button0, button1);
}

