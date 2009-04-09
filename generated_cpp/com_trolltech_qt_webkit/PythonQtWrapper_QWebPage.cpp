#include "PythonQtWrapper_QWebPage.h"

#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qundostack.h>
#include <qurl.h>
#include <qwebframe.h>
#include <qwebpage.h>
#include <qwebpluginfactory.h>
#include <qwebsettings.h>
#include <qwidget.h>

QWebPage* PythonQtWrapper_QWebPage::new_QWebPage(QObject*  parent)
{ 
return new QWebPage(parent); }

QAction*  PythonQtWrapper_QWebPage::action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const
{
return theWrappedObject->action(action);
}

quint64  PythonQtWrapper_QWebPage::bytesReceived(QWebPage* theWrappedObject) const
{
return theWrappedObject->bytesReceived();
}

QWebFrame*  PythonQtWrapper_QWebPage::currentFrame(QWebPage* theWrappedObject) const
{
return theWrappedObject->currentFrame();
}

bool  PythonQtWrapper_QWebPage::event(QWebPage* theWrappedObject, QEvent*  arg__1)
{
return theWrappedObject->event(arg__1);
}

bool  PythonQtWrapper_QWebPage::findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
return theWrappedObject->findText(subString, options);
}

bool  PythonQtWrapper_QWebPage::focusNextPrevChild(QWebPage* theWrappedObject, bool  next)
{
return theWrappedObject->focusNextPrevChild(next);
}

bool  PythonQtWrapper_QWebPage::forwardUnsupportedContent(QWebPage* theWrappedObject) const
{
return theWrappedObject->forwardUnsupportedContent();
}

QWebHistory*  PythonQtWrapper_QWebPage::history(QWebPage* theWrappedObject) const
{
return theWrappedObject->history();
}

QVariant  PythonQtWrapper_QWebPage::inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const
{
return theWrappedObject->inputMethodQuery(property);
}

bool  PythonQtWrapper_QWebPage::isModified(QWebPage* theWrappedObject) const
{
return theWrappedObject->isModified();
}

QWebPage::LinkDelegationPolicy  PythonQtWrapper_QWebPage::linkDelegationPolicy(QWebPage* theWrappedObject) const
{
return theWrappedObject->linkDelegationPolicy();
}

QWebFrame*  PythonQtWrapper_QWebPage::mainFrame(QWebPage* theWrappedObject) const
{
return theWrappedObject->mainFrame();
}

QNetworkAccessManager*  PythonQtWrapper_QWebPage::networkAccessManager(QWebPage* theWrappedObject) const
{
return theWrappedObject->networkAccessManager();
}

QPalette  PythonQtWrapper_QWebPage::palette(QWebPage* theWrappedObject) const
{
return theWrappedObject->palette();
}

QWebPluginFactory*  PythonQtWrapper_QWebPage::pluginFactory(QWebPage* theWrappedObject) const
{
return theWrappedObject->pluginFactory();
}

QString  PythonQtWrapper_QWebPage::selectedText(QWebPage* theWrappedObject) const
{
return theWrappedObject->selectedText();
}

void PythonQtWrapper_QWebPage::setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward)
{
theWrappedObject->setForwardUnsupportedContent(forward);
}

void PythonQtWrapper_QWebPage::setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy)
{
theWrappedObject->setLinkDelegationPolicy(policy);
}

void PythonQtWrapper_QWebPage::setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager)
{
theWrappedObject->setNetworkAccessManager(manager);
}

void PythonQtWrapper_QWebPage::setPalette(QWebPage* theWrappedObject, const QPalette&  palette)
{
theWrappedObject->setPalette(palette);
}

void PythonQtWrapper_QWebPage::setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory)
{
theWrappedObject->setPluginFactory(factory);
}

void PythonQtWrapper_QWebPage::setView(QWebPage* theWrappedObject, QWidget*  view)
{
theWrappedObject->setView(view);
}

void PythonQtWrapper_QWebPage::setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const
{
theWrappedObject->setViewportSize(size);
}

QWebSettings*  PythonQtWrapper_QWebPage::settings(QWebPage* theWrappedObject) const
{
return theWrappedObject->settings();
}

bool  PythonQtWrapper_QWebPage::supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const
{
return theWrappedObject->supportsExtension(extension);
}

bool  PythonQtWrapper_QWebPage::swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event)
{
return theWrappedObject->swallowContextMenuEvent(event);
}

quint64  PythonQtWrapper_QWebPage::totalBytes(QWebPage* theWrappedObject) const
{
return theWrappedObject->totalBytes();
}

void PythonQtWrapper_QWebPage::triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
theWrappedObject->triggerAction(action, checked);
}

QUndoStack*  PythonQtWrapper_QWebPage::undoStack(QWebPage* theWrappedObject) const
{
return theWrappedObject->undoStack();
}

void PythonQtWrapper_QWebPage::updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos)
{
theWrappedObject->updatePositionDependentActions(pos);
}

QWidget*  PythonQtWrapper_QWebPage::view(QWebPage* theWrappedObject) const
{
return theWrappedObject->view();
}

QSize  PythonQtWrapper_QWebPage::viewportSize(QWebPage* theWrappedObject) const
{
return theWrappedObject->viewportSize();
}

