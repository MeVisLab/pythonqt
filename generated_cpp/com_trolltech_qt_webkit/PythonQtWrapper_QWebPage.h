#ifndef PYTHONQTWRAPPER_QWEBPAGE_H
#define PYTHONQTWRAPPER_QWEBPAGE_H

#include <qwebpage.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QWebPage : public QWebPage
{
public:
    PythonQtShell_QWebPage(QObject*  parent = 0):QWebPage(parent),_wrapper(NULL) {};

virtual bool  acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
virtual void childEvent(QChildEvent*  arg__1);
virtual QString  chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile);
virtual QObject*  createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
virtual QWebPage*  createWindow(QWebPage::WebWindowType  type);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg);
virtual bool  javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg);
virtual void javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID);
virtual bool  javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
virtual bool  supportsExtension(QWebPage::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void triggerAction(QWebPage::WebAction  action, bool  checked = false);
virtual QString  userAgentForUrl(const QUrl&  url) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebPage : public QWebPage
{ public:
inline bool  promoted_acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type) { return QWebPage::acceptNavigationRequest(frame, request, type); }
inline bool  promoted_javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result) { return QWebPage::javaScriptPrompt(originatingFrame, msg, defaultValue, result); }
inline QString  promoted_userAgentForUrl(const QUrl&  url) const { return QWebPage::userAgentForUrl(url); }
inline void promoted_triggerAction(QWebPage::WebAction  action, bool  checked = false) { QWebPage::triggerAction(action, checked); }
inline void promoted_javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg) { QWebPage::javaScriptAlert(originatingFrame, msg); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebPage::event(arg__1); }
inline bool  promoted_javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg) { return QWebPage::javaScriptConfirm(originatingFrame, msg); }
inline QString  promoted_chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile) { return QWebPage::chooseFile(originatingFrame, oldFile); }
inline QWebPage*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebPage::createWindow(type); }
inline bool  promoted_supportsExtension(QWebPage::Extension  extension) const { return QWebPage::supportsExtension(extension); }
inline QObject*  promoted_createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues) { return QWebPage::createPlugin(classid, url, paramNames, paramValues); }
inline void promoted_javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID) { QWebPage::javaScriptConsoleMessage(message, lineNumber, sourceID); }
};

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
   QWebFrame*  mainFrame(QWebPage* theWrappedObject) const;
   bool  acceptNavigationRequest(QWebPage* theWrappedObject, QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
   QAction*  action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const;
   QNetworkAccessManager*  networkAccessManager(QWebPage* theWrappedObject) const;
   void setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory);
   void setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward);
   bool  javaScriptPrompt(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
   QString  userAgentForUrl(QWebPage* theWrappedObject, const QUrl&  url) const;
   void triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   void setView(QWebPage* theWrappedObject, QWidget*  view);
   void updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos);
   quint64  bytesReceived(QWebPage* theWrappedObject) const;
   QWebFrame*  currentFrame(QWebPage* theWrappedObject) const;
   void setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const;
   QWebHistory*  history(QWebPage* theWrappedObject) const;
   void javaScriptAlert(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   bool  event(QWebPage* theWrappedObject, QEvent*  arg__1);
   void setPalette(QWebPage* theWrappedObject, const QPalette&  palette);
   quint64  totalBytes(QWebPage* theWrappedObject) const;
   QWebPage::LinkDelegationPolicy  linkDelegationPolicy(QWebPage* theWrappedObject) const;
   bool  isModified(QWebPage* theWrappedObject) const;
   bool  swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event);
   void setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager);
   bool  javaScriptConfirm(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   QString  chooseFile(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  oldFile);
   QWebPage*  createWindow(QWebPage* theWrappedObject, QWebPage::WebWindowType  type);
   void setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy);
   QString  selectedText(QWebPage* theWrappedObject) const;
   QVariant  inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const;
   bool  supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const;
   bool  findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   QSize  viewportSize(QWebPage* theWrappedObject) const;
   QObject*  createPlugin(QWebPage* theWrappedObject, const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
   QWebPluginFactory*  pluginFactory(QWebPage* theWrappedObject) const;
   bool  focusNextPrevChild(QWebPage* theWrappedObject, bool  next);
   QWebSettings*  settings(QWebPage* theWrappedObject) const;
   QWidget*  view(QWebPage* theWrappedObject) const;
   QPalette  palette(QWebPage* theWrappedObject) const;
   bool  forwardUnsupportedContent(QWebPage* theWrappedObject) const;
   QUndoStack*  undoStack(QWebPage* theWrappedObject) const;
   void javaScriptConsoleMessage(QWebPage* theWrappedObject, const QString&  message, int  lineNumber, const QString&  sourceID);
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_H
