#include <PythonQt.h>
#include "com_trolltech_qt_xml0.h"


void PythonQt_init_QtXml() {
PythonQt::self()->registerCPPClass("QDomText", "QDomCharacterData", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomText>);
PythonQt::self()->registerCPPClass("QXmlAttributes", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlAttributes>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlAttributes>);
PythonQt::self()->registerCPPClass("QDomNodeList", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNodeList>);
PythonQt::self()->registerCPPClass("QXmlEntityResolver", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlEntityResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlEntityResolver>);
PythonQt::self()->registerCPPClass("QDomNotation", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNotation>);
PythonQt::self()->registerCPPClass("QDomDocumentFragment", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocumentFragment>);
PythonQt::self()->registerCPPClass("QDomElement", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomElement>);
PythonQt::self()->registerCPPClass("QXmlContentHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlContentHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlContentHandler>);
PythonQt::self()->registerCPPClass("QDomNamedNodeMap", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNamedNodeMap>);
PythonQt::self()->registerCPPClass("QDomAttr", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomAttr>);
PythonQt::self()->registerCPPClass("QXmlLexicalHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlLexicalHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlLexicalHandler>);
PythonQt::self()->registerCPPClass("QDomCDATASection", "QDomText", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomCDATASection>);
PythonQt::self()->registerCPPClass("QDomNode", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNode>);
PythonQt::self()->registerCPPClass("QXmlInputSource", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlInputSource>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlInputSource>);
PythonQt::self()->registerCPPClass("QDomEntity", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomEntity>);
PythonQt::self()->registerCPPClass("QDomImplementation", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomImplementation>);
PythonQt::self()->registerCPPClass("QDomDocumentType", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocumentType>);
PythonQt::self()->registerCPPClass("QXmlReader", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlReader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlReader>);
PythonQt::self()->registerCPPClass("QDomCharacterData", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomCharacterData>);
PythonQt::self()->registerCPPClass("QDomProcessingInstruction", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomProcessingInstruction>);
PythonQt::self()->registerCPPClass("QDomComment", "QDomCharacterData", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomComment>);
PythonQt::self()->registerCPPClass("QDomEntityReference", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomEntityReference>);
PythonQt::self()->registerCPPClass("QXmlDefaultHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDefaultHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlDefaultHandler>);
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlContentHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlContentHandler>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlErrorHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlErrorHandler>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlDTDHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlDTDHandler>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlEntityResolver",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlEntityResolver>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlLexicalHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlLexicalHandler>());
PythonQt::self()->addParentClass("QXmlDefaultHandler", "QXmlDeclHandler",PythonQtUpcastingOffset<QXmlDefaultHandler,QXmlDeclHandler>());
PythonQt::self()->registerCPPClass("QDomDocument", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocument>);
PythonQt::self()->registerCPPClass("QXmlErrorHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlErrorHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlErrorHandler>);
PythonQt::self()->registerCPPClass("QXmlLocator", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlLocator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlLocator>);
PythonQt::self()->registerCPPClass("QXmlDTDHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDTDHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlDTDHandler>);
PythonQt::self()->registerCPPClass("QXmlParseException", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlParseException>);
PythonQt::self()->registerCPPClass("QXmlSimpleReader", "QXmlReader", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlSimpleReader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlSimpleReader>);
PythonQt::self()->registerCPPClass("QXmlDeclHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDeclHandler>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlDeclHandler>);

}
