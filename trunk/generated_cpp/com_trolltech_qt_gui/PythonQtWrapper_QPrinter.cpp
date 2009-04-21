#include "PythonQtWrapper_QPrinter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QPrinterInfo>
#include <QVariant>
#include <qlist.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qprintengine.h>
#include <qprinter.h>
#include <qrect.h>
#include <qsize.h>

int  PythonQtShell_QPrinter::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPrinter::staticMetaObject,
      "devType(QPrinter*)");
      int  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QPrinter::devType();
}
int  PythonQtShell_QPrinter::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPrinter::staticMetaObject,
      "metric(QPrinter*,QPaintDevice::PaintDeviceMetric )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QPrinter::metric(arg__1);
}
QPaintEngine*  PythonQtShell_QPrinter::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPrinter::staticMetaObject,
      "paintEngine(QPrinter*)");
      QPaintEngine*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPaintEngine* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QPrinter::paintEngine();
}
QPrinter* PythonQtWrapper_QPrinter::new_QPrinter(QPrinter::PrinterMode  mode)
{ 
return new PythonQtShell_QPrinter(mode); }

QPrinter* PythonQtWrapper_QPrinter::new_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode)
{ 
return new PythonQtShell_QPrinter(printer, mode); }

QString  PythonQtWrapper_QPrinter::outputFileName(QPrinter* theWrappedObject) const
{
return  theWrappedObject->outputFileName();
}

int  PythonQtWrapper_QPrinter::toPage(QPrinter* theWrappedObject) const
{
return  theWrappedObject->toPage();
}

void PythonQtWrapper_QPrinter::setFontEmbeddingEnabled(QPrinter* theWrappedObject, bool  enable)
{
 theWrappedObject->setFontEmbeddingEnabled(enable);
}

void PythonQtWrapper_QPrinter::setOrientation(QPrinter* theWrappedObject, QPrinter::Orientation  arg__1)
{
 theWrappedObject->setOrientation(arg__1);
}

QSizeF  PythonQtWrapper_QPrinter::paperSize(QPrinter* theWrappedObject, QPrinter::Unit  unit) const
{
return  theWrappedObject->paperSize(unit);
}

QRectF  PythonQtWrapper_QPrinter::pageRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const
{
return  theWrappedObject->pageRect(arg__1);
}

QRect  PythonQtWrapper_QPrinter::paperRect(QPrinter* theWrappedObject) const
{
return  theWrappedObject->paperRect();
}

void PythonQtWrapper_QPrinter::getPageMargins(QPrinter* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom, QPrinter::Unit  unit) const
{
 theWrappedObject->getPageMargins(left, top, right, bottom, unit);
}

void PythonQtWrapper_QPrinter::setPaperSource(QPrinter* theWrappedObject, QPrinter::PaperSource  arg__1)
{
 theWrappedObject->setPaperSource(arg__1);
}

QPrinter::Orientation  PythonQtWrapper_QPrinter::orientation(QPrinter* theWrappedObject) const
{
return  theWrappedObject->orientation();
}

QPrinter::PrinterState  PythonQtWrapper_QPrinter::printerState(QPrinter* theWrappedObject) const
{
return  theWrappedObject->printerState();
}

void PythonQtWrapper_QPrinter::setPrintRange(QPrinter* theWrappedObject, QPrinter::PrintRange  range)
{
 theWrappedObject->setPrintRange(range);
}

QRect  PythonQtWrapper_QPrinter::pageRect(QPrinter* theWrappedObject) const
{
return  theWrappedObject->pageRect();
}

void PythonQtWrapper_QPrinter::setFullPage(QPrinter* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setFullPage(arg__1);
}

void PythonQtWrapper_QPrinter::setOutputFileName(QPrinter* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setOutputFileName(arg__1);
}

void PythonQtWrapper_QPrinter::setOutputFormat(QPrinter* theWrappedObject, QPrinter::OutputFormat  format)
{
 theWrappedObject->setOutputFormat(format);
}

bool  PythonQtWrapper_QPrinter::fullPage(QPrinter* theWrappedObject) const
{
return  theWrappedObject->fullPage();
}

void PythonQtWrapper_QPrinter::setPaperSize(QPrinter* theWrappedObject, const QSizeF&  paperSize, QPrinter::Unit  unit)
{
 theWrappedObject->setPaperSize(paperSize, unit);
}

QPrinter::PaperSource  PythonQtWrapper_QPrinter::paperSource(QPrinter* theWrappedObject) const
{
return  theWrappedObject->paperSource();
}

void PythonQtWrapper_QPrinter::setPageSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1)
{
 theWrappedObject->setPageSize(arg__1);
}

QString  PythonQtWrapper_QPrinter::printerName(QPrinter* theWrappedObject) const
{
return  theWrappedObject->printerName();
}

QPaintEngine*  PythonQtWrapper_QPrinter::paintEngine(QPrinter* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->promoted_paintEngine();
}

void PythonQtWrapper_QPrinter::setResolution(QPrinter* theWrappedObject, int  arg__1)
{
 theWrappedObject->setResolution(arg__1);
}

bool  PythonQtWrapper_QPrinter::abort(QPrinter* theWrappedObject)
{
return  theWrappedObject->abort();
}

QPrintEngine*  PythonQtWrapper_QPrinter::printEngine(QPrinter* theWrappedObject) const
{
return  theWrappedObject->printEngine();
}

bool  PythonQtWrapper_QPrinter::isValid(QPrinter* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

void PythonQtWrapper_QPrinter::setPrinterName(QPrinter* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setPrinterName(arg__1);
}

int  PythonQtWrapper_QPrinter::resolution(QPrinter* theWrappedObject) const
{
return  theWrappedObject->resolution();
}

QString  PythonQtWrapper_QPrinter::printProgram(QPrinter* theWrappedObject) const
{
return  theWrappedObject->printProgram();
}

int  PythonQtWrapper_QPrinter::devType(QPrinter* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->promoted_devType();
}

int  PythonQtWrapper_QPrinter::fromPage(QPrinter* theWrappedObject) const
{
return  theWrappedObject->fromPage();
}

QPrinter::OutputFormat  PythonQtWrapper_QPrinter::outputFormat(QPrinter* theWrappedObject) const
{
return  theWrappedObject->outputFormat();
}

bool  PythonQtWrapper_QPrinter::doubleSidedPrinting(QPrinter* theWrappedObject) const
{
return  theWrappedObject->doubleSidedPrinting();
}

int  PythonQtWrapper_QPrinter::metric(QPrinter* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const
{
return  ((PythonQtPublicPromoter_QPrinter*)theWrappedObject)->promoted_metric(arg__1);
}

QPrinter::ColorMode  PythonQtWrapper_QPrinter::colorMode(QPrinter* theWrappedObject) const
{
return  theWrappedObject->colorMode();
}

void PythonQtWrapper_QPrinter::setDoubleSidedPrinting(QPrinter* theWrappedObject, bool  enable)
{
 theWrappedObject->setDoubleSidedPrinting(enable);
}

QPrinter::PageOrder  PythonQtWrapper_QPrinter::pageOrder(QPrinter* theWrappedObject) const
{
return  theWrappedObject->pageOrder();
}

void PythonQtWrapper_QPrinter::setFromTo(QPrinter* theWrappedObject, int  fromPage, int  toPage)
{
 theWrappedObject->setFromTo(fromPage, toPage);
}

int  PythonQtWrapper_QPrinter::numCopies(QPrinter* theWrappedObject) const
{
return  theWrappedObject->numCopies();
}

bool  PythonQtWrapper_QPrinter::newPage(QPrinter* theWrappedObject)
{
return  theWrappedObject->newPage();
}

QRectF  PythonQtWrapper_QPrinter::paperRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const
{
return  theWrappedObject->paperRect(arg__1);
}

QPrinter::DuplexMode  PythonQtWrapper_QPrinter::duplex(QPrinter* theWrappedObject) const
{
return  theWrappedObject->duplex();
}

void PythonQtWrapper_QPrinter::setColorMode(QPrinter* theWrappedObject, QPrinter::ColorMode  arg__1)
{
 theWrappedObject->setColorMode(arg__1);
}

void PythonQtWrapper_QPrinter::setDocName(QPrinter* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setDocName(arg__1);
}

QPrinter::PageSize  PythonQtWrapper_QPrinter::paperSize(QPrinter* theWrappedObject) const
{
return  theWrappedObject->paperSize();
}

void PythonQtWrapper_QPrinter::setPageMargins(QPrinter* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom, QPrinter::Unit  unit)
{
 theWrappedObject->setPageMargins(left, top, right, bottom, unit);
}

QList<int >  PythonQtWrapper_QPrinter::supportedResolutions(QPrinter* theWrappedObject) const
{
return  theWrappedObject->supportedResolutions();
}

QPrinter::PageSize  PythonQtWrapper_QPrinter::pageSize(QPrinter* theWrappedObject) const
{
return  theWrappedObject->pageSize();
}

void PythonQtWrapper_QPrinter::setPrintProgram(QPrinter* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setPrintProgram(arg__1);
}

void PythonQtWrapper_QPrinter::setCreator(QPrinter* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setCreator(arg__1);
}

void PythonQtWrapper_QPrinter::setDuplex(QPrinter* theWrappedObject, QPrinter::DuplexMode  duplex)
{
 theWrappedObject->setDuplex(duplex);
}

bool  PythonQtWrapper_QPrinter::collateCopies(QPrinter* theWrappedObject) const
{
return  theWrappedObject->collateCopies();
}

void PythonQtWrapper_QPrinter::setCollateCopies(QPrinter* theWrappedObject, bool  collate)
{
 theWrappedObject->setCollateCopies(collate);
}

void PythonQtWrapper_QPrinter::setNumCopies(QPrinter* theWrappedObject, int  arg__1)
{
 theWrappedObject->setNumCopies(arg__1);
}

QString  PythonQtWrapper_QPrinter::docName(QPrinter* theWrappedObject) const
{
return  theWrappedObject->docName();
}

bool  PythonQtWrapper_QPrinter::fontEmbeddingEnabled(QPrinter* theWrappedObject) const
{
return  theWrappedObject->fontEmbeddingEnabled();
}

void PythonQtWrapper_QPrinter::setPaperSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1)
{
 theWrappedObject->setPaperSize(arg__1);
}

void PythonQtWrapper_QPrinter::setPageOrder(QPrinter* theWrappedObject, QPrinter::PageOrder  arg__1)
{
 theWrappedObject->setPageOrder(arg__1);
}

QString  PythonQtWrapper_QPrinter::creator(QPrinter* theWrappedObject) const
{
return  theWrappedObject->creator();
}

QPrinter::PrintRange  PythonQtWrapper_QPrinter::printRange(QPrinter* theWrappedObject) const
{
return  theWrappedObject->printRange();
}

