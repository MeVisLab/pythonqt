#include <PythonQt.h>
#include "PythonQtWrapper_QDomNode.h"
#include "PythonQtWrapper_QXmlReader.h"
#include "PythonQtWrapper_QXmlLexicalHandler.h"
#include "PythonQtWrapper_QXmlLocator.h"
#include "PythonQtWrapper_QXmlDTDHandler.h"
#include "PythonQtWrapper_QXmlContentHandler.h"
#include "PythonQtWrapper_QXmlDeclHandler.h"
#include "PythonQtWrapper_QXmlInputSource.h"
#include "PythonQtWrapper_QDomNodeList.h"
#include "PythonQtWrapper_QDomNamedNodeMap.h"
#include "PythonQtWrapper_QDomImplementation.h"
#include "PythonQtWrapper_QXmlParseException.h"
#include "PythonQtWrapper_QXmlAttributes.h"
#include "PythonQtWrapper_QXmlEntityResolver.h"
#include "PythonQtWrapper_QXmlErrorHandler.h"
#include "PythonQtWrapper_QDomDocumentType.h"
#include "PythonQtWrapper_QDomEntityReference.h"
#include "PythonQtWrapper_QXmlSimpleReader.h"
#include "PythonQtWrapper_QDomNotation.h"
#include "PythonQtWrapper_QDomEntity.h"
#include "PythonQtWrapper_QDomDocument.h"
#include "PythonQtWrapper_QDomProcessingInstruction.h"
#include "PythonQtWrapper_QDomAttr.h"
#include "PythonQtWrapper_QDomCharacterData.h"
#include "PythonQtWrapper_QXmlDefaultHandler.h"
#include "PythonQtWrapper_QDomElement.h"
#include "PythonQtWrapper_QDomDocumentFragment.h"
#include "PythonQtWrapper_QDomText.h"
#include "PythonQtWrapper_QDomComment.h"
#include "PythonQtWrapper_QDomCDATASection.h"

void PythonQt_init_QtXml() {
PythonQt::self()->registerCPPClass("QDomNode", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNode>);
PythonQt::self()->registerCPPClass("QXmlReader", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlReader>);
PythonQt::self()->registerCPPClass("QXmlLexicalHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlLexicalHandler>);
PythonQt::self()->registerCPPClass("QXmlLocator", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlLocator>);
PythonQt::self()->registerCPPClass("QXmlDTDHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDTDHandler>);
PythonQt::self()->registerCPPClass("QXmlContentHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlContentHandler>);
PythonQt::self()->registerCPPClass("QXmlDeclHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDeclHandler>);
PythonQt::self()->registerCPPClass("QXmlInputSource", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlInputSource>);
PythonQt::self()->registerCPPClass("QDomNodeList", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNodeList>);
PythonQt::self()->registerCPPClass("QDomNamedNodeMap", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNamedNodeMap>);
PythonQt::self()->registerCPPClass("QDomImplementation", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomImplementation>);
PythonQt::self()->registerCPPClass("QXmlParseException", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlParseException>);
PythonQt::self()->registerCPPClass("QXmlAttributes", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlAttributes>);
PythonQt::self()->registerCPPClass("QXmlEntityResolver", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlEntityResolver>);
PythonQt::self()->registerCPPClass("QXmlErrorHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlErrorHandler>);
PythonQt::self()->registerCPPClass("QDomDocumentType", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocumentType>);
PythonQt::self()->registerCPPClass("QDomEntityReference", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomEntityReference>);
PythonQt::self()->registerCPPClass("QXmlSimpleReader", "QXmlReader", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlSimpleReader>);
PythonQt::self()->registerCPPClass("QDomNotation", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomNotation>);
PythonQt::self()->registerCPPClass("QDomEntity", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomEntity>);
PythonQt::self()->registerCPPClass("QDomDocument", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocument>);
PythonQt::self()->registerCPPClass("QDomProcessingInstruction", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomProcessingInstruction>);
PythonQt::self()->registerCPPClass("QDomAttr", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomAttr>);
PythonQt::self()->registerCPPClass("QDomCharacterData", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomCharacterData>);
PythonQt::self()->registerCPPClass("QXmlDefaultHandler", "", "QtXml", PythonQtCreateObject<PythonQtWrapper_QXmlDefaultHandler>);
PythonQt::self()->registerCPPClass("QDomElement", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomElement>);
PythonQt::self()->registerCPPClass("QDomDocumentFragment", "QDomNode", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomDocumentFragment>);
PythonQt::self()->registerCPPClass("QDomText", "QDomCharacterData", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomText>);
PythonQt::self()->registerCPPClass("QDomComment", "QDomCharacterData", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomComment>);
PythonQt::self()->registerCPPClass("QDomCDATASection", "QDomText", "QtXml", PythonQtCreateObject<PythonQtWrapper_QDomCDATASection>);

}
