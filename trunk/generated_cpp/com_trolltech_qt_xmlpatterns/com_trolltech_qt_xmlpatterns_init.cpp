#include <PythonQt.h>
#include "PythonQtWrapper_QXmlNodeModelIndex.h"
#include "PythonQtWrapper_QSourceLocation.h"
#include "PythonQtWrapper_QXmlNamePool.h"
#include "PythonQtWrapper_QXmlResultItems.h"
#include "PythonQtWrapper_QAbstractXmlNodeModel.h"
#include "PythonQtWrapper_QXmlQuery.h"
#include "PythonQtWrapper_QAbstractXmlReceiver.h"
#include "PythonQtWrapper_QXmlName.h"
#include "PythonQtWrapper_QXmlItem.h"
#include "PythonQtWrapper_QXmlSerializer.h"
#include "PythonQtWrapper_QAbstractUriResolver.h"
#include "PythonQtWrapper_QSimpleXmlNodeModel.h"
#include "PythonQtWrapper_QAbstractMessageHandler.h"
#include "PythonQtWrapper_QXmlFormatter.h"


void PythonQt_init_QtXmlPatterns() {
PythonQt::self()->registerCPPClass("QXmlNodeModelIndex", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlNodeModelIndex>);
PythonQt::self()->registerCPPClass("QSourceLocation", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QSourceLocation>);
PythonQt::self()->registerCPPClass("QXmlNamePool", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlNamePool>);
PythonQt::self()->registerCPPClass("QXmlResultItems", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlResultItems>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlResultItems>);
PythonQt::self()->registerCPPClass("QAbstractXmlNodeModel", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractXmlNodeModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractXmlNodeModel>);
PythonQt::self()->registerCPPClass("QXmlQuery", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlQuery>);
PythonQt::self()->registerCPPClass("QAbstractXmlReceiver", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractXmlReceiver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractXmlReceiver>);
PythonQt::self()->registerCPPClass("QXmlName", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlName>);
PythonQt::self()->registerCPPClass("QXmlItem", "", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlItem>);
PythonQt::self()->registerCPPClass("QXmlSerializer", "QAbstractXmlReceiver", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlSerializer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlSerializer>);
PythonQt::self()->registerClass(&QAbstractUriResolver::staticMetaObject, "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractUriResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractUriResolver>);
PythonQt::self()->registerCPPClass("QSimpleXmlNodeModel", "QAbstractXmlNodeModel", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QSimpleXmlNodeModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSimpleXmlNodeModel>);
PythonQt::self()->registerClass(&QAbstractMessageHandler::staticMetaObject, "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QAbstractMessageHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractMessageHandler>);
PythonQt::self()->registerCPPClass("QXmlFormatter", "QXmlSerializer", "QtXmlPatterns", PythonQtCreateObject<PythonQtWrapper_QXmlFormatter>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlFormatter>);

}
