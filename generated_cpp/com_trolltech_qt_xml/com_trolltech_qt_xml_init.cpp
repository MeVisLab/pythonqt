#include <PythonQt.h>
#include "com_trolltech_qt_xml0.h"
#include "com_trolltech_qt_xml1.h"


void PythonQt_init_QtXml(PyObject* module) {
PythonQt::priv()->registerCPPClass("QDomText", "QDomCharacterData", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomText>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlAttributes", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlAttributes>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlAttributes>, module);
PythonQt::priv()->registerCPPClass("QDomNodeList", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNodeList>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlEntityResolver", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlEntityResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlEntityResolver>, module);
PythonQt::priv()->registerCPPClass("QDomNotation", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNotation>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomDocumentFragment", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocumentFragment>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomElement", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomElement>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlContentHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlContentHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlContentHandler>, module);
PythonQt::priv()->registerCPPClass("QXmlStreamNamespaceDeclaration", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamNamespaceDeclaration>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomNamedNodeMap", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNamedNodeMap>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomAttr", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomAttr>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlStreamNotationDeclaration", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamNotationDeclaration>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlLexicalHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlLexicalHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlLexicalHandler>, module);
PythonQt::priv()->registerCPPClass("QDomCDATASection", "QDomText", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomCDATASection>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomNode", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNode>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlInputSource", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlInputSource>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlInputSource>, module);
PythonQt::priv()->registerCPPClass("QDomEntity", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomEntity>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomImplementation", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomImplementation>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomDocumentType", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocumentType>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlStreamAttribute", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamAttribute>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlReader", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlReader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlReader>, module);
PythonQt::priv()->registerCPPClass("QDomCharacterData", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomCharacterData>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomProcessingInstruction", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomProcessingInstruction>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomComment", "QDomCharacterData", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomComment>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomEntityReference", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomEntityReference>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlStreamAttributes", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamAttributes>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlStreamAttributes>, module);
PythonQt::priv()->registerCPPClass("QXmlDefaultHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDefaultHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlDefaultHandler>, module);
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlContentHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlContentHandler>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlErrorHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlErrorHandler>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlDTDHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlDTDHandler>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlEntityResolver",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlEntityResolver>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlLexicalHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlLexicalHandler>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlDeclHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlDeclHandler>());
PythonQt::priv()->registerCPPClass("QXmlStreamEntityDeclaration", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamEntityDeclaration>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlStreamReader", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamReader>, NULL, module);
PythonQt::priv()->registerCPPClass("QDomDocument", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocument>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlErrorHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlErrorHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlErrorHandler>, module);
PythonQt::priv()->registerCPPClass("QXmlStreamWriter", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlStreamWriter>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlLocator", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlLocator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlLocator>, module);
PythonQt::priv()->registerCPPClass("QXmlDTDHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDTDHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlDTDHandler>, module);
PythonQt::priv()->registerCPPClass("QXmlParseException", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlParseException>, NULL, module);
PythonQt::priv()->registerCPPClass("QXmlSimpleReader", "QXmlReader", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlSimpleReader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlSimpleReader>, module);
PythonQt::priv()->registerCPPClass("QXmlDeclHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDeclHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlDeclHandler>, module);

}
