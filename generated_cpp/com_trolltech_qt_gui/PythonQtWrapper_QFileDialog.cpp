#include "PythonQtWrapper_QFileDialog.h"

#include <QUrl>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdir.h>
#include <qevent.h>
#include <qfiledialog.h>
#include <qfileiconprovider.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
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
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qurl.h>
#include <qwidget.h>

QFileDialog* PythonQtWrapper_QFileDialog::new_QFileDialog(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QFileDialog(parent, f); }

QFileDialog* PythonQtWrapper_QFileDialog::new_QFileDialog(QWidget*  parent, const QString&  caption, const QString&  directory, const QString&  filter)
{ 
return new QFileDialog(parent, caption, directory, filter); }

QFileDialog::AcceptMode  PythonQtWrapper_QFileDialog::acceptMode(QFileDialog* theWrappedObject) const
{
return theWrappedObject->acceptMode();
}

bool  PythonQtWrapper_QFileDialog::confirmOverwrite(QFileDialog* theWrappedObject) const
{
return theWrappedObject->confirmOverwrite();
}

QString  PythonQtWrapper_QFileDialog::defaultSuffix(QFileDialog* theWrappedObject) const
{
return theWrappedObject->defaultSuffix();
}

QDir  PythonQtWrapper_QFileDialog::directory(QFileDialog* theWrappedObject) const
{
return theWrappedObject->directory();
}

QFileDialog::FileMode  PythonQtWrapper_QFileDialog::fileMode(QFileDialog* theWrappedObject) const
{
return theWrappedObject->fileMode();
}

QDir::Filters  PythonQtWrapper_QFileDialog::filter(QFileDialog* theWrappedObject) const
{
return theWrappedObject->filter();
}

QStringList  PythonQtWrapper_QFileDialog::filters(QFileDialog* theWrappedObject) const
{
return theWrappedObject->filters();
}

QString  PythonQtWrapper_QFileDialog::static_QFileDialog_getExistingDirectory(QWidget*  parent, const QString&  caption, const QString&  dir, QFileDialog::Options  options)
{
return QFileDialog::getExistingDirectory(parent, caption, dir, options);
}

QString  PythonQtWrapper_QFileDialog::static_QFileDialog_getOpenFileName(QWidget*  parent, const QString&  caption, const QString&  dir, const QString&  filter, QString*  selectedFilter, QFileDialog::Options  options)
{
return QFileDialog::getOpenFileName(parent, caption, dir, filter, selectedFilter, options);
}

QStringList  PythonQtWrapper_QFileDialog::static_QFileDialog_getOpenFileNames(QWidget*  parent, const QString&  caption, const QString&  dir, const QString&  filter, QString*  selectedFilter, QFileDialog::Options  options)
{
return QFileDialog::getOpenFileNames(parent, caption, dir, filter, selectedFilter, options);
}

QString  PythonQtWrapper_QFileDialog::static_QFileDialog_getSaveFileName(QWidget*  parent, const QString&  caption, const QString&  dir, const QString&  filter, QString*  selectedFilter, QFileDialog::Options  options)
{
return QFileDialog::getSaveFileName(parent, caption, dir, filter, selectedFilter, options);
}

QStringList  PythonQtWrapper_QFileDialog::history(QFileDialog* theWrappedObject) const
{
return theWrappedObject->history();
}

QFileIconProvider*  PythonQtWrapper_QFileDialog::iconProvider(QFileDialog* theWrappedObject) const
{
return theWrappedObject->iconProvider();
}

bool  PythonQtWrapper_QFileDialog::isNameFilterDetailsVisible(QFileDialog* theWrappedObject) const
{
return theWrappedObject->isNameFilterDetailsVisible();
}

bool  PythonQtWrapper_QFileDialog::isReadOnly(QFileDialog* theWrappedObject) const
{
return theWrappedObject->isReadOnly();
}

QAbstractItemDelegate*  PythonQtWrapper_QFileDialog::itemDelegate(QFileDialog* theWrappedObject) const
{
return theWrappedObject->itemDelegate();
}

QString  PythonQtWrapper_QFileDialog::labelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label) const
{
return theWrappedObject->labelText(label);
}

QStringList  PythonQtWrapper_QFileDialog::nameFilters(QFileDialog* theWrappedObject) const
{
return theWrappedObject->nameFilters();
}

QAbstractProxyModel*  PythonQtWrapper_QFileDialog::proxyModel(QFileDialog* theWrappedObject) const
{
return theWrappedObject->proxyModel();
}

bool  PythonQtWrapper_QFileDialog::resolveSymlinks(QFileDialog* theWrappedObject) const
{
return theWrappedObject->resolveSymlinks();
}

bool  PythonQtWrapper_QFileDialog::restoreState(QFileDialog* theWrappedObject, const QByteArray&  state)
{
return theWrappedObject->restoreState(state);
}

QByteArray  PythonQtWrapper_QFileDialog::saveState(QFileDialog* theWrappedObject) const
{
return theWrappedObject->saveState();
}

void PythonQtWrapper_QFileDialog::selectFile(QFileDialog* theWrappedObject, const QString&  filename)
{
theWrappedObject->selectFile(filename);
}

void PythonQtWrapper_QFileDialog::selectFilter(QFileDialog* theWrappedObject, const QString&  filter)
{
theWrappedObject->selectFilter(filter);
}

void PythonQtWrapper_QFileDialog::selectNameFilter(QFileDialog* theWrappedObject, const QString&  filter)
{
theWrappedObject->selectNameFilter(filter);
}

QStringList  PythonQtWrapper_QFileDialog::selectedFiles(QFileDialog* theWrappedObject) const
{
return theWrappedObject->selectedFiles();
}

QString  PythonQtWrapper_QFileDialog::selectedFilter(QFileDialog* theWrappedObject) const
{
return theWrappedObject->selectedFilter();
}

QString  PythonQtWrapper_QFileDialog::selectedNameFilter(QFileDialog* theWrappedObject) const
{
return theWrappedObject->selectedNameFilter();
}

void PythonQtWrapper_QFileDialog::setAcceptMode(QFileDialog* theWrappedObject, QFileDialog::AcceptMode  mode)
{
theWrappedObject->setAcceptMode(mode);
}

void PythonQtWrapper_QFileDialog::setConfirmOverwrite(QFileDialog* theWrappedObject, bool  enabled)
{
theWrappedObject->setConfirmOverwrite(enabled);
}

void PythonQtWrapper_QFileDialog::setDefaultSuffix(QFileDialog* theWrappedObject, const QString&  suffix)
{
theWrappedObject->setDefaultSuffix(suffix);
}

void PythonQtWrapper_QFileDialog::setDirectory(QFileDialog* theWrappedObject, const QDir&  directory)
{
theWrappedObject->setDirectory(directory);
}

void PythonQtWrapper_QFileDialog::setDirectory(QFileDialog* theWrappedObject, const QString&  directory)
{
theWrappedObject->setDirectory(directory);
}

void PythonQtWrapper_QFileDialog::setFileMode(QFileDialog* theWrappedObject, QFileDialog::FileMode  mode)
{
theWrappedObject->setFileMode(mode);
}

void PythonQtWrapper_QFileDialog::setFilter(QFileDialog* theWrappedObject, QDir::Filters  filters)
{
theWrappedObject->setFilter(filters);
}

void PythonQtWrapper_QFileDialog::setFilter(QFileDialog* theWrappedObject, const QString&  filter)
{
theWrappedObject->setFilter(filter);
}

void PythonQtWrapper_QFileDialog::setFilters(QFileDialog* theWrappedObject, const QStringList&  filters)
{
theWrappedObject->setFilters(filters);
}

void PythonQtWrapper_QFileDialog::setHistory(QFileDialog* theWrappedObject, const QStringList&  paths)
{
theWrappedObject->setHistory(paths);
}

void PythonQtWrapper_QFileDialog::setIconProvider(QFileDialog* theWrappedObject, QFileIconProvider*  provider)
{
theWrappedObject->setIconProvider(provider);
}

void PythonQtWrapper_QFileDialog::setItemDelegate(QFileDialog* theWrappedObject, QAbstractItemDelegate*  delegate)
{
theWrappedObject->setItemDelegate(delegate);
}

void PythonQtWrapper_QFileDialog::setLabelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label, const QString&  text)
{
theWrappedObject->setLabelText(label, text);
}

void PythonQtWrapper_QFileDialog::setNameFilter(QFileDialog* theWrappedObject, const QString&  filter)
{
theWrappedObject->setNameFilter(filter);
}

void PythonQtWrapper_QFileDialog::setNameFilterDetailsVisible(QFileDialog* theWrappedObject, bool  enabled)
{
theWrappedObject->setNameFilterDetailsVisible(enabled);
}

void PythonQtWrapper_QFileDialog::setNameFilters(QFileDialog* theWrappedObject, const QStringList&  filters)
{
theWrappedObject->setNameFilters(filters);
}

void PythonQtWrapper_QFileDialog::setProxyModel(QFileDialog* theWrappedObject, QAbstractProxyModel*  model)
{
theWrappedObject->setProxyModel(model);
}

void PythonQtWrapper_QFileDialog::setReadOnly(QFileDialog* theWrappedObject, bool  enabled)
{
theWrappedObject->setReadOnly(enabled);
}

void PythonQtWrapper_QFileDialog::setResolveSymlinks(QFileDialog* theWrappedObject, bool  enabled)
{
theWrappedObject->setResolveSymlinks(enabled);
}

void PythonQtWrapper_QFileDialog::setSidebarUrls(QFileDialog* theWrappedObject, const QList<QUrl >&  urls)
{
theWrappedObject->setSidebarUrls(urls);
}

void PythonQtWrapper_QFileDialog::setViewMode(QFileDialog* theWrappedObject, QFileDialog::ViewMode  mode)
{
theWrappedObject->setViewMode(mode);
}

QList<QUrl >  PythonQtWrapper_QFileDialog::sidebarUrls(QFileDialog* theWrappedObject) const
{
return theWrappedObject->sidebarUrls();
}

QFileDialog::ViewMode  PythonQtWrapper_QFileDialog::viewMode(QFileDialog* theWrappedObject) const
{
return theWrappedObject->viewMode();
}

