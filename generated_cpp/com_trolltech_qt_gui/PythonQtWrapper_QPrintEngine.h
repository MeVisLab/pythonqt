#ifndef PYTHONQTWRAPPER_QPRINTENGINE_H
#define PYTHONQTWRAPPER_QPRINTENGINE_H

#include <qprintengine.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QPrintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintEnginePropertyKey )
enum PrintEnginePropertyKey{
  PPK_CollateCopies = QPrintEngine::PPK_CollateCopies,   PPK_ColorMode = QPrintEngine::PPK_ColorMode,   PPK_Creator = QPrintEngine::PPK_Creator,   PPK_DocumentName = QPrintEngine::PPK_DocumentName,   PPK_FullPage = QPrintEngine::PPK_FullPage,   PPK_NumberOfCopies = QPrintEngine::PPK_NumberOfCopies,   PPK_Orientation = QPrintEngine::PPK_Orientation,   PPK_OutputFileName = QPrintEngine::PPK_OutputFileName,   PPK_PageOrder = QPrintEngine::PPK_PageOrder,   PPK_PageRect = QPrintEngine::PPK_PageRect,   PPK_PageSize = QPrintEngine::PPK_PageSize,   PPK_PaperRect = QPrintEngine::PPK_PaperRect,   PPK_PaperSource = QPrintEngine::PPK_PaperSource,   PPK_PrinterName = QPrintEngine::PPK_PrinterName,   PPK_PrinterProgram = QPrintEngine::PPK_PrinterProgram,   PPK_Resolution = QPrintEngine::PPK_Resolution,   PPK_SelectionOption = QPrintEngine::PPK_SelectionOption,   PPK_SupportedResolutions = QPrintEngine::PPK_SupportedResolutions,   PPK_WindowsPageSize = QPrintEngine::PPK_WindowsPageSize,   PPK_FontEmbedding = QPrintEngine::PPK_FontEmbedding,   PPK_SuppressSystemPrintStatus = QPrintEngine::PPK_SuppressSystemPrintStatus,   PPK_Duplex = QPrintEngine::PPK_Duplex,   PPK_PaperSources = QPrintEngine::PPK_PaperSources,   PPK_CustomPaperSize = QPrintEngine::PPK_CustomPaperSize,   PPK_PageMargins = QPrintEngine::PPK_PageMargins,   PPK_PaperSize = QPrintEngine::PPK_PaperSize,   PPK_CustomBase = QPrintEngine::PPK_CustomBase};
public slots:
void delete_QPrintEngine(QPrintEngine* obj) { delete obj; } 
   bool  abort(QPrintEngine* theWrappedObject);
   int  metric(QPrintEngine* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   bool  newPage(QPrintEngine* theWrappedObject);
   QPrinter::PrinterState  printerState(QPrintEngine* theWrappedObject) const;
   QVariant  property(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key) const;
   void setProperty(QPrintEngine* theWrappedObject, QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value);
};

#endif // PYTHONQTWRAPPER_QPRINTENGINE_H
