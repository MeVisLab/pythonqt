#include <PythonQt.h>
#include "com_trolltech_qt_webkit0.h"


void PythonQt_init_QtWebKit() {
PythonQt::self()->registerCPPClass("QWebSettings", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebSettings>);
PythonQt::self()->registerClass(&QWebPluginFactory::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory>);
PythonQt::self()->registerClass(&QWebView::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebView>);
PythonQt::self()->registerClass(&QWebFrame::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebFrame>);
PythonQt::self()->registerCPPClass("QWebHitTestResult", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebHitTestResult>);
PythonQt::self()->registerClass(&QWebPage::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage>);
PythonQt::self()->registerClass(&QWebHistoryInterface::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebHistoryInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebHistoryInterface>);

}
