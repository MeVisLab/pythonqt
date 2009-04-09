#include "PythonQtWrapper_QPrinter.h"

#include <QPrinterInfo>
#include <QVariant>
#include <qlist.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qprintengine.h>
#include <qprinter.h>
#include <qrect.h>
#include <qsize.h>

QPrinter* PythonQtWrapper_QPrinter::new_QPrinter(QPrinter::PrinterMode  mode)
{ 
return new QPrinter(mode); }

QPrinter* PythonQtWrapper_QPrinter::new_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode)
{ 
return new QPrinter(printer, mode); }

bool  PythonQtWrapper_QPrinter::abort(QPrinter* theWrappedObject)
{
return theWrappedObject->abort();
}

bool  PythonQtWrapper_QPrinter::collateCopies(QPrinter* theWrappedObject) const
{
return theWrappedObject->collateCopies();
}

QPrinter::ColorMode  PythonQtWrapper_QPrinter::colorMode(QPrinter* theWrappedObject) const
{
return theWrappedObject->colorMode();
}

QString  PythonQtWrapper_QPrinter::creator(QPrinter* theWrappedObject) const
{
return theWrappedObject->creator();
}

int  PythonQtWrapper_QPrinter::depth(QPrinter* theWrappedObject) const
{
return theWrappedObject->depth();
}

int  PythonQtWrapper_QPrinter::devType(QPrinter* theWrappedObject) const
{
return theWrappedObject->devType();
}

QString  PythonQtWrapper_QPrinter::docName(QPrinter* theWrappedObject) const
{
return theWrappedObject->docName();
}

bool  PythonQtWrapper_QPrinter::doubleSidedPrinting(QPrinter* theWrappedObject) const
{
return theWrappedObject->doubleSidedPrinting();
}

QPrinter::DuplexMode  PythonQtWrapper_QPrinter::duplex(QPrinter* theWrappedObject) const
{
return theWrappedObject->duplex();
}

bool  PythonQtWrapper_QPrinter::fontEmbeddingEnabled(QPrinter* theWrappedObject) const
{
return theWrappedObject->fontEmbeddingEnabled();
}

int  PythonQtWrapper_QPrinter::fromPage(QPrinter* theWrappedObject) const
{
return theWrappedObject->fromPage();
}

bool  PythonQtWrapper_QPrinter::fullPage(QPrinter* theWrappedObject) const
{
return theWrappedObject->fullPage();
}

void PythonQtWrapper_QPrinter::getPageMargins(QPrinter* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom, QPrinter::Unit  unit) const
{
theWrappedObject->getPageMargins(left, top, right, bottom, unit);
}

int  PythonQtWrapper_QPrinter::height(QPrinter* theWrappedObject) const
{
return theWrappedObject->height();
}

int  PythonQtWrapper_QPrinter::heightMM(QPrinter* theWrappedObject) const
{
return theWrappedObject->heightMM();
}

bool  PythonQtWrapper_QPrinter::isValid(QPrinter* theWrappedObject) const
{
return theWrappedObject->isValid();
}

int  PythonQtWrapper_QPrinter::logicalDpiX(QPrinter* theWrappedObject) const
{
return theWrappedObject->logicalDpiX();
}

int  PythonQtWrapper_QPrinter::logicalDpiY(QPrinter* theWrappedObject) const
{
return theWrappedObject->logicalDpiY();
}

bool  PythonQtWrapper_QPrinter::newPage(QPrinter* theWrappedObject)
{
return theWrappedObject->newPage();
}

int  PythonQtWrapper_QPrinter::numColors(QPrinter* theWrappedObject) const
{
return theWrappedObject->numColors();
}

int  PythonQtWrapper_QPrinter::numCopies(QPrinter* theWrappedObject) const
{
return theWrappedObject->numCopies();
}

QPrinter::Orientation  PythonQtWrapper_QPrinter::orientation(QPrinter* theWrappedObject) const
{
return theWrappedObject->orientation();
}

QString  PythonQtWrapper_QPrinter::outputFileName(QPrinter* theWrappedObject) const
{
return theWrappedObject->outputFileName();
}

QPrinter::OutputFormat  PythonQtWrapper_QPrinter::outputFormat(QPrinter* theWrappedObject) const
{
return theWrappedObject->outputFormat();
}

QPrinter::PageOrder  PythonQtWrapper_QPrinter::pageOrder(QPrinter* theWrappedObject) const
{
return theWrappedObject->pageOrder();
}

QRect  PythonQtWrapper_QPrinter::pageRect(QPrinter* theWrappedObject) const
{
return theWrappedObject->pageRect();
}

QRectF  PythonQtWrapper_QPrinter::pageRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const
{
return theWrappedObject->pageRect(arg__1);
}

QPrinter::PageSize  PythonQtWrapper_QPrinter::pageSize(QPrinter* theWrappedObject) const
{
return theWrappedObject->pageSize();
}

QPaintEngine*  PythonQtWrapper_QPrinter::paintEngine(QPrinter* theWrappedObject) const
{
return theWrappedObject->paintEngine();
}

bool  PythonQtWrapper_QPrinter::paintingActive(QPrinter* theWrappedObject) const
{
return theWrappedObject->paintingActive();
}

QRect  PythonQtWrapper_QPrinter::paperRect(QPrinter* theWrappedObject) const
{
return theWrappedObject->paperRect();
}

QRectF  PythonQtWrapper_QPrinter::paperRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const
{
return theWrappedObject->paperRect(arg__1);
}

QPrinter::PageSize  PythonQtWrapper_QPrinter::paperSize(QPrinter* theWrappedObject) const
{
return theWrappedObject->paperSize();
}

QSizeF  PythonQtWrapper_QPrinter::paperSize(QPrinter* theWrappedObject, QPrinter::Unit  unit) const
{
return theWrappedObject->paperSize(unit);
}

QPrinter::PaperSource  PythonQtWrapper_QPrinter::paperSource(QPrinter* theWrappedObject) const
{
return theWrappedObject->paperSource();
}

int  PythonQtWrapper_QPrinter::physicalDpiX(QPrinter* theWrappedObject) const
{
return theWrappedObject->physicalDpiX();
}

int  PythonQtWrapper_QPrinter::physicalDpiY(QPrinter* theWrappedObject) const
{
return theWrappedObject->physicalDpiY();
}

QPrintEngine*  PythonQtWrapper_QPrinter::printEngine(QPrinter* theWrappedObject) const
{
return theWrappedObject->printEngine();
}

QString  PythonQtWrapper_QPrinter::printProgram(QPrinter* theWrappedObject) const
{
return theWrappedObject->printProgram();
}

QPrinter::PrintRange  PythonQtWrapper_QPrinter::printRange(QPrinter* theWrappedObject) const
{
return theWrappedObject->printRange();
}

QString  PythonQtWrapper_QPrinter::printerName(QPrinter* theWrappedObject) const
{
return theWrappedObject->printerName();
}

QPrinter::PrinterState  PythonQtWrapper_QPrinter::printerState(QPrinter* theWrappedObject) const
{
return theWrappedObject->printerState();
}

int  PythonQtWrapper_QPrinter::resolution(QPrinter* theWrappedObject) const
{
return theWrappedObject->resolution();
}

void PythonQtWrapper_QPrinter::setCollateCopies(QPrinter* theWrappedObject, bool  collate)
{
theWrappedObject->setCollateCopies(collate);
}

void PythonQtWrapper_QPrinter::setColorMode(QPrinter* theWrappedObject, QPrinter::ColorMode  arg__1)
{
theWrappedObject->setColorMode(arg__1);
}

void PythonQtWrapper_QPrinter::setCreator(QPrinter* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setCreator(arg__1);
}

void PythonQtWrapper_QPrinter::setDocName(QPrinter* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setDocName(arg__1);
}

void PythonQtWrapper_QPrinter::setDoubleSidedPrinting(QPrinter* theWrappedObject, bool  enable)
{
theWrappedObject->setDoubleSidedPrinting(enable);
}

void PythonQtWrapper_QPrinter::setDuplex(QPrinter* theWrappedObject, QPrinter::DuplexMode  duplex)
{
theWrappedObject->setDuplex(duplex);
}

void PythonQtWrapper_QPrinter::setFontEmbeddingEnabled(QPrinter* theWrappedObject, bool  enable)
{
theWrappedObject->setFontEmbeddingEnabled(enable);
}

void PythonQtWrapper_QPrinter::setFromTo(QPrinter* theWrappedObject, int  fromPage, int  toPage)
{
theWrappedObject->setFromTo(fromPage, toPage);
}

void PythonQtWrapper_QPrinter::setFullPage(QPrinter* theWrappedObject, bool  arg__1)
{
theWrappedObject->setFullPage(arg__1);
}

void PythonQtWrapper_QPrinter::setNumCopies(QPrinter* theWrappedObject, int  arg__1)
{
theWrappedObject->setNumCopies(arg__1);
}

void PythonQtWrapper_QPrinter::setOrientation(QPrinter* theWrappedObject, QPrinter::Orientation  arg__1)
{
theWrappedObject->setOrientation(arg__1);
}

void PythonQtWrapper_QPrinter::setOutputFileName(QPrinter* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setOutputFileName(arg__1);
}

void PythonQtWrapper_QPrinter::setOutputFormat(QPrinter* theWrappedObject, QPrinter::OutputFormat  format)
{
theWrappedObject->setOutputFormat(format);
}

void PythonQtWrapper_QPrinter::setPageMargins(QPrinter* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom, QPrinter::Unit  unit)
{
theWrappedObject->setPageMargins(left, top, right, bottom, unit);
}

void PythonQtWrapper_QPrinter::setPageOrder(QPrinter* theWrappedObject, QPrinter::PageOrder  arg__1)
{
theWrappedObject->setPageOrder(arg__1);
}

void PythonQtWrapper_QPrinter::setPageSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1)
{
theWrappedObject->setPageSize(arg__1);
}

void PythonQtWrapper_QPrinter::setPaperSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1)
{
theWrappedObject->setPaperSize(arg__1);
}

void PythonQtWrapper_QPrinter::setPaperSize(QPrinter* theWrappedObject, const QSizeF&  paperSize, QPrinter::Unit  unit)
{
theWrappedObject->setPaperSize(paperSize, unit);
}

void PythonQtWrapper_QPrinter::setPaperSource(QPrinter* theWrappedObject, QPrinter::PaperSource  arg__1)
{
theWrappedObject->setPaperSource(arg__1);
}

void PythonQtWrapper_QPrinter::setPrintProgram(QPrinter* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setPrintProgram(arg__1);
}

void PythonQtWrapper_QPrinter::setPrintRange(QPrinter* theWrappedObject, QPrinter::PrintRange  range)
{
theWrappedObject->setPrintRange(range);
}

void PythonQtWrapper_QPrinter::setPrinterName(QPrinter* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setPrinterName(arg__1);
}

void PythonQtWrapper_QPrinter::setResolution(QPrinter* theWrappedObject, int  arg__1)
{
theWrappedObject->setResolution(arg__1);
}

QList<int >  PythonQtWrapper_QPrinter::supportedResolutions(QPrinter* theWrappedObject) const
{
return theWrappedObject->supportedResolutions();
}

int  PythonQtWrapper_QPrinter::toPage(QPrinter* theWrappedObject) const
{
return theWrappedObject->toPage();
}

int  PythonQtWrapper_QPrinter::width(QPrinter* theWrappedObject) const
{
return theWrappedObject->width();
}

int  PythonQtWrapper_QPrinter::widthMM(QPrinter* theWrappedObject) const
{
return theWrappedObject->widthMM();
}

