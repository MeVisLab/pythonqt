#ifndef PYTHONQTWRAPPER_QWEBPAGE_H
#define PYTHONQTWRAPPER_QWEBPAGE_H

#include <qwebpage.h>
#include <QObject>

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

class PythonQtWrapper_QWebPage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WebWindowType FindFlag Extension )
enum WebWindowType{
  WebBrowserWindow = QWebPage::WebBrowserWindow,   WebModalDialog = QWebPage::WebModalDialog};
enum FindFlag{
  FindBackward = QWebPage::FindBackward,   FindCaseSensitively = QWebPage::FindCaseSensitively,   FindWrapsAroundDocument = QWebPage::FindWrapsAroundDocument};
enum Extension{
};
public slots:
QWebPage* new_QWebPage(QObject*  parent = 0);
void delete_QWebPage(QWebPage* obj) { delete obj; } 
   QAction*  action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const;
   quint64  bytesReceived(QWebPage* theWrappedObject) const;
   QWebFrame*  currentFrame(QWebPage* theWrappedObject) const;
   bool  event(QWebPage* theWrappedObject, QEvent*  arg__1);
   bool  findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   bool  focusNextPrevChild(QWebPage* theWrappedObject, bool  next);
   bool  forwardUnsupportedContent(QWebPage* theWrappedObject) const;
   QWebHistory*  history(QWebPage* theWrappedObject) const;
   QVariant  inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const;
   bool  isModified(QWebPage* theWrappedObject) const;
   QWebPage::LinkDelegationPolicy  linkDelegationPolicy(QWebPage* theWrappedObject) const;
   QWebFrame*  mainFrame(QWebPage* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QWebPage* theWrappedObject) const;
   QPalette  palette(QWebPage* theWrappedObject) const;
   QWebPluginFactory*  pluginFactory(QWebPage* theWrappedObject) const;
   QString  selectedText(QWebPage* theWrappedObject) const;
   void setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward);
   void setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy);
   void setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager);
   void setPalette(QWebPage* theWrappedObject, const QPalette&  palette);
   void setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory);
   void setView(QWebPage* theWrappedObject, QWidget*  view);
   void setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const;
   QWebSettings*  settings(QWebPage* theWrappedObject) const;
   bool  supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const;
   bool  swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event);
   quint64  totalBytes(QWebPage* theWrappedObject) const;
   void triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   QUndoStack*  undoStack(QWebPage* theWrappedObject) const;
   void updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos);
   QWidget*  view(QWebPage* theWrappedObject) const;
   QSize  viewportSize(QWebPage* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_H
