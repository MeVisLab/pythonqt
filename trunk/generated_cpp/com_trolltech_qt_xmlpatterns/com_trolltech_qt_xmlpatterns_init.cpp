#include <PythonQt.h>
#include "com_trolltech_qt_xmlpatterns0.h"


void PythonQt_init_QtXmlPatterns() {
PythonQt::self()->registerCPPClass("QAbstractXmlNodeModel", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractXmlNodeModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractXmlNodeModel>);
PythonQt::self()->registerCPPClass("QSimpleXmlNodeModel", "QAbstractXmlNodeModel", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QSimpleXmlNodeModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSimpleXmlNodeModel>);
PythonQt::self()->registerCPPClass("QXmlResultItems", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlResultItems>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlResultItems>);
PythonQt::self()->registerCPPClass("QXmlItem", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlItem>);
PythonQt::self()->registerClass(&QAbstractUriResolver::staticMetaObject, "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractUriResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractUriResolver>);
PythonQt::self()->registerCPPClass("QXmlNamePool", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlNamePool>);
PythonQt::self()->registerCPPClass("QAbstractXmlReceiver", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractXmlReceiver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractXmlReceiver>);
PythonQt::self()->registerCPPClass("QXmlSerializer", "QAbstractXmlReceiver", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlSerializer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlSerializer>);
PythonQt::self()->registerClass(&QAbstractMessageHandler::staticMetaObject, "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractMessageHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractMessageHandler>);
PythonQt::self()->registerCPPClass("QXmlFormatter", "QXmlSerializer", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlFormatter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlFormatter>);
PythonQt::self()->registerCPPClass("QXmlName", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlName>);
PythonQt::self()->registerCPPClass("QXmlNodeModelIndex", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlNodeModelIndex>);
PythonQt::self()->registerCPPClass("QXmlQuery", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlQuery>);
PythonQt::self()->registerCPPClass("QSourceLocation", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QSourceLocation>);

}
