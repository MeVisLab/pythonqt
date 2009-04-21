#include <PythonQt.h>
#include "PythonQtWrapper_QWebHitTestResult.h"
#include "PythonQtWrapper_QWebSettings.h"
#include "PythonQtWrapper_QWebFrame.h"
#include "PythonQtWrapper_QWebPluginFactory.h"
#include "PythonQtWrapper_QWebHistoryInterface.h"
#include "PythonQtWrapper_QWebPage.h"
#include "PythonQtWrapper_QWebView.h"

void PythonQt_init_QtWebKit() {
PythonQt::self()->registerCPPClass("QWebHitTestResult", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebHitTestResult>);
PythonQt::self()->registerCPPClass("QWebSettings", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebSettings>);
PythonQt::self()->registerClass(&QWebFrame::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebFrame>);
PythonQt::self()->registerClass(&QWebPluginFactory::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory>);
PythonQt::self()->registerClass(&QWebHistoryInterface::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebHistoryInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebHistoryInterface>);
PythonQt::self()->registerClass(&QWebPage::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage>);
PythonQt::self()->registerClass(&QWebView::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebView>);

}
