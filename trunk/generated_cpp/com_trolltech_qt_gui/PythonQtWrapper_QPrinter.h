#ifndef PYTHONQTWRAPPER_QPRINTER_H
#define PYTHONQTWRAPPER_QPRINTER_H

#include <qprinter.h>
#include <QObject>

#include <PythonQt.h>

#include <QPrinterInfo>
#include <QVariant>
#include <qlist.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qprintengine.h>
#include <qprinter.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QPrinter : public QPrinter
{
public:
    PythonQtShell_QPrinter(QPrinter::PrinterMode  mode = QPrinter::ScreenResolution):QPrinter(mode),_wrapper(NULL) {};
    PythonQtShell_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode = QPrinter::ScreenResolution):QPrinter(printer, mode),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPrinter : public QPrinter
{ public:
inline QPaintEngine*  promoted_paintEngine() const { return QPrinter::paintEngine(); }
inline int  promoted_devType() const { return QPrinter::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QPrinter::metric(arg__1); }
};

class PythonQtWrapper_QPrinter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OutputFormat DuplexMode PrintRange Unit PrinterMode Orientation PrinterState ColorMode PaperSource PageOrder PageSize )
enum OutputFormat{
  NativeFormat = QPrinter::NativeFormat,   PdfFormat = QPrinter::PdfFormat,   PostScriptFormat = QPrinter::PostScriptFormat};
enum DuplexMode{
  DuplexNone = QPrinter::DuplexNone,   DuplexAuto = QPrinter::DuplexAuto,   DuplexLongSide = QPrinter::DuplexLongSide,   DuplexShortSide = QPrinter::DuplexShortSide};
enum PrintRange{
  AllPages = QPrinter::AllPages,   Selection = QPrinter::Selection,   PageRange = QPrinter::PageRange};
enum Unit{
  Millimeter = QPrinter::Millimeter,   Point = QPrinter::Point,   Inch = QPrinter::Inch,   Pica = QPrinter::Pica,   Didot = QPrinter::Didot,   Cicero = QPrinter::Cicero,   DevicePixel = QPrinter::DevicePixel};
enum PrinterMode{
  ScreenResolution = QPrinter::ScreenResolution,   PrinterResolution = QPrinter::PrinterResolution,   HighResolution = QPrinter::HighResolution};
enum Orientation{
  Portrait = QPrinter::Portrait,   Landscape = QPrinter::Landscape};
enum PrinterState{
  Idle = QPrinter::Idle,   Active = QPrinter::Active,   Aborted = QPrinter::Aborted,   Error = QPrinter::Error};
enum ColorMode{
  GrayScale = QPrinter::GrayScale,   Color = QPrinter::Color};
enum PaperSource{
  OnlyOne = QPrinter::OnlyOne,   Lower = QPrinter::Lower,   Middle = QPrinter::Middle,   Manual = QPrinter::Manual,   Envelope = QPrinter::Envelope,   EnvelopeManual = QPrinter::EnvelopeManual,   Auto = QPrinter::Auto,   Tractor = QPrinter::Tractor,   SmallFormat = QPrinter::SmallFormat,   LargeFormat = QPrinter::LargeFormat,   LargeCapacity = QPrinter::LargeCapacity,   Cassette = QPrinter::Cassette,   FormSource = QPrinter::FormSource,   MaxPageSource = QPrinter::MaxPageSource};
enum PageOrder{
  FirstPageFirst = QPrinter::FirstPageFirst,   LastPageFirst = QPrinter::LastPageFirst};
enum PageSize{
  A4 = QPrinter::A4,   B5 = QPrinter::B5,   Letter = QPrinter::Letter,   Legal = QPrinter::Legal,   Executive = QPrinter::Executive,   A0 = QPrinter::A0,   A1 = QPrinter::A1,   A2 = QPrinter::A2,   A3 = QPrinter::A3,   A5 = QPrinter::A5,   A6 = QPrinter::A6,   A7 = QPrinter::A7,   A8 = QPrinter::A8,   A9 = QPrinter::A9,   B0 = QPrinter::B0,   B1 = QPrinter::B1,   B10 = QPrinter::B10,   B2 = QPrinter::B2,   B3 = QPrinter::B3,   B4 = QPrinter::B4,   B6 = QPrinter::B6,   B7 = QPrinter::B7,   B8 = QPrinter::B8,   B9 = QPrinter::B9,   C5E = QPrinter::C5E,   Comm10E = QPrinter::Comm10E,   DLE = QPrinter::DLE,   Folio = QPrinter::Folio,   Ledger = QPrinter::Ledger,   Tabloid = QPrinter::Tabloid,   Custom = QPrinter::Custom,   NPageSize = QPrinter::NPageSize,   NPaperSize = QPrinter::NPaperSize};
public slots:
QPrinter* new_QPrinter(QPrinter::PrinterMode  mode = QPrinter::ScreenResolution);
QPrinter* new_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode = QPrinter::ScreenResolution);
void delete_QPrinter(QPrinter* obj) { delete obj; } 
   QString  outputFileName(QPrinter* theWrappedObject) const;
   int  toPage(QPrinter* theWrappedObject) const;
   void setFontEmbeddingEnabled(QPrinter* theWrappedObject, bool  enable);
   void setOrientation(QPrinter* theWrappedObject, QPrinter::Orientation  arg__1);
   QSizeF  paperSize(QPrinter* theWrappedObject, QPrinter::Unit  unit) const;
   QRectF  pageRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const;
   QRect  paperRect(QPrinter* theWrappedObject) const;
   void getPageMargins(QPrinter* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom, QPrinter::Unit  unit) const;
   void setPaperSource(QPrinter* theWrappedObject, QPrinter::PaperSource  arg__1);
   QPrinter::Orientation  orientation(QPrinter* theWrappedObject) const;
   QPrinter::PrinterState  printerState(QPrinter* theWrappedObject) const;
   void setPrintRange(QPrinter* theWrappedObject, QPrinter::PrintRange  range);
   QRect  pageRect(QPrinter* theWrappedObject) const;
   void setFullPage(QPrinter* theWrappedObject, bool  arg__1);
   void setOutputFileName(QPrinter* theWrappedObject, const QString&  arg__1);
   void setOutputFormat(QPrinter* theWrappedObject, QPrinter::OutputFormat  format);
   bool  fullPage(QPrinter* theWrappedObject) const;
   void setPaperSize(QPrinter* theWrappedObject, const QSizeF&  paperSize, QPrinter::Unit  unit);
   QPrinter::PaperSource  paperSource(QPrinter* theWrappedObject) const;
   void setPageSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1);
   QString  printerName(QPrinter* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPrinter* theWrappedObject) const;
   void setResolution(QPrinter* theWrappedObject, int  arg__1);
   bool  abort(QPrinter* theWrappedObject);
   QPrintEngine*  printEngine(QPrinter* theWrappedObject) const;
   bool  isValid(QPrinter* theWrappedObject) const;
   void setPrinterName(QPrinter* theWrappedObject, const QString&  arg__1);
   int  resolution(QPrinter* theWrappedObject) const;
   QString  printProgram(QPrinter* theWrappedObject) const;
   int  devType(QPrinter* theWrappedObject) const;
   int  fromPage(QPrinter* theWrappedObject) const;
   QPrinter::OutputFormat  outputFormat(QPrinter* theWrappedObject) const;
   bool  doubleSidedPrinting(QPrinter* theWrappedObject) const;
   int  metric(QPrinter* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   QPrinter::ColorMode  colorMode(QPrinter* theWrappedObject) const;
   void setDoubleSidedPrinting(QPrinter* theWrappedObject, bool  enable);
   QPrinter::PageOrder  pageOrder(QPrinter* theWrappedObject) const;
   void setFromTo(QPrinter* theWrappedObject, int  fromPage, int  toPage);
   int  numCopies(QPrinter* theWrappedObject) const;
   bool  newPage(QPrinter* theWrappedObject);
   QRectF  paperRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const;
   QPrinter::DuplexMode  duplex(QPrinter* theWrappedObject) const;
   void setColorMode(QPrinter* theWrappedObject, QPrinter::ColorMode  arg__1);
   void setDocName(QPrinter* theWrappedObject, const QString&  arg__1);
   QPrinter::PageSize  paperSize(QPrinter* theWrappedObject) const;
   void setPageMargins(QPrinter* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom, QPrinter::Unit  unit);
   QList<int >  supportedResolutions(QPrinter* theWrappedObject) const;
   QPrinter::PageSize  pageSize(QPrinter* theWrappedObject) const;
   void setPrintProgram(QPrinter* theWrappedObject, const QString&  arg__1);
   void setCreator(QPrinter* theWrappedObject, const QString&  arg__1);
   void setDuplex(QPrinter* theWrappedObject, QPrinter::DuplexMode  duplex);
   bool  collateCopies(QPrinter* theWrappedObject) const;
   void setCollateCopies(QPrinter* theWrappedObject, bool  collate);
   void setNumCopies(QPrinter* theWrappedObject, int  arg__1);
   QString  docName(QPrinter* theWrappedObject) const;
   bool  fontEmbeddingEnabled(QPrinter* theWrappedObject) const;
   void setPaperSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1);
   void setPageOrder(QPrinter* theWrappedObject, QPrinter::PageOrder  arg__1);
   QString  creator(QPrinter* theWrappedObject) const;
   QPrinter::PrintRange  printRange(QPrinter* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPRINTER_H
