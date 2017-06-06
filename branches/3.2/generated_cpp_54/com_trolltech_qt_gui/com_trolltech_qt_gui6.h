#include <PythonQt.h>
#include <QAbstractTextDocumentLayout>
#include <QObject>
#include <QPainterPath>
#include <QPixmap>
#include <QTextEdit>
#include <QVarLengthArray>
#include <QVariant>
#include <QWidget>
#include <qaction.h>
#include <qapplication.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgesture.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpagedpaintdevice.h>
#include <qpagelayout.h>
#include <qpagesize.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpdfwriter.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpictureformatplugin.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qproxystyle.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qradiobutton.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qregularexpression.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstatictext.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QPaintDevice : public QPaintDevice
{
public:
    PythonQtShell_QPaintDevice():QPaintDevice(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintDevice();

virtual int  devType() const;
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintDevice : public QPaintDevice
{ public:
inline int  promoted_devType() const { return QPaintDevice::devType(); }
inline void promoted_initPainter(QPainter*  painter) const { QPaintDevice::initPainter(painter); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDevice::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
inline QPaintDevice*  promoted_redirected(QPoint*  offset) const { return QPaintDevice::redirected(offset); }
inline QPainter*  promoted_sharedPainter() const { return QPaintDevice::sharedPainter(); }
};

class PythonQtWrapper_QPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PaintDeviceMetric )
enum PaintDeviceMetric{
  PdmWidth = QPaintDevice::PdmWidth,   PdmHeight = QPaintDevice::PdmHeight,   PdmWidthMM = QPaintDevice::PdmWidthMM,   PdmHeightMM = QPaintDevice::PdmHeightMM,   PdmNumColors = QPaintDevice::PdmNumColors,   PdmDepth = QPaintDevice::PdmDepth,   PdmDpiX = QPaintDevice::PdmDpiX,   PdmDpiY = QPaintDevice::PdmDpiY,   PdmPhysicalDpiX = QPaintDevice::PdmPhysicalDpiX,   PdmPhysicalDpiY = QPaintDevice::PdmPhysicalDpiY,   PdmDevicePixelRatio = QPaintDevice::PdmDevicePixelRatio};
public slots:
QPaintDevice* new_QPaintDevice();
void delete_QPaintDevice(QPaintDevice* obj) { delete obj; } 
   int  colorCount(QPaintDevice* theWrappedObject) const;
   int  depth(QPaintDevice* theWrappedObject) const;
   int  devType(QPaintDevice* theWrappedObject) const;
   int  devicePixelRatio(QPaintDevice* theWrappedObject) const;
   int  height(QPaintDevice* theWrappedObject) const;
   int  heightMM(QPaintDevice* theWrappedObject) const;
   void initPainter(QPaintDevice* theWrappedObject, QPainter*  painter) const;
   int  logicalDpiX(QPaintDevice* theWrappedObject) const;
   int  logicalDpiY(QPaintDevice* theWrappedObject) const;
   int  metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QPaintEngine*  paintEngine(QPaintDevice* theWrappedObject) const;
   bool  paintingActive(QPaintDevice* theWrappedObject) const;
   int  physicalDpiX(QPaintDevice* theWrappedObject) const;
   int  physicalDpiY(QPaintDevice* theWrappedObject) const;
   QPaintDevice*  redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const;
   QPainter*  sharedPainter(QPaintDevice* theWrappedObject) const;
   int  width(QPaintDevice* theWrappedObject) const;
   int  widthMM(QPaintDevice* theWrappedObject) const;
};





class PythonQtShell_QPaintEngine : public QPaintEngine
{
public:
    PythonQtShell_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = 0):QPaintEngine(features),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngine();

virtual bool  begin(QPaintDevice*  pdev);
virtual QPoint  coordinateOffset() const;
virtual void drawEllipse(const QRect&  r);
virtual void drawEllipse(const QRectF&  r);
virtual void drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
virtual void drawLines(const QLine*  lines, int  lineCount);
virtual void drawLines(const QLineF*  lines, int  lineCount);
virtual void drawPath(const QPainterPath&  path);
virtual void drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
virtual void drawPoints(const QPoint*  points, int  pointCount);
virtual void drawPoints(const QPointF*  points, int  pointCount);
virtual void drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawRects(const QRect*  rects, int  rectCount);
virtual void drawRects(const QRectF*  rects, int  rectCount);
virtual void drawTextItem(const QPointF&  p, const QTextItem&  textItem);
virtual void drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
virtual bool  end();
virtual QPaintEngine::Type  type() const;
virtual void updateState(const QPaintEngineState&  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintEngine : public QPaintEngine
{ public:
inline bool  promoted_begin(QPaintDevice*  pdev) { return this->begin(pdev); }
inline QPoint  promoted_coordinateOffset() const { return QPaintEngine::coordinateOffset(); }
inline void promoted_drawEllipse(const QRect&  r) { QPaintEngine::drawEllipse(r); }
inline void promoted_drawEllipse(const QRectF&  r) { QPaintEngine::drawEllipse(r); }
inline void promoted_drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) { QPaintEngine::drawImage(r, pm, sr, flags); }
inline void promoted_drawLines(const QLine*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void promoted_drawLines(const QLineF*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void promoted_drawPath(const QPainterPath&  path) { QPaintEngine::drawPath(path); }
inline void promoted_drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr) { this->drawPixmap(r, pm, sr); }
inline void promoted_drawPoints(const QPoint*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void promoted_drawPoints(const QPointF*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void promoted_drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void promoted_drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void promoted_drawRects(const QRect*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void promoted_drawRects(const QRectF*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void promoted_drawTextItem(const QPointF&  p, const QTextItem&  textItem) { QPaintEngine::drawTextItem(p, textItem); }
inline void promoted_drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) { QPaintEngine::drawTiledPixmap(r, pixmap, s); }
inline bool  promoted_end() { return this->end(); }
inline QPaintEngine::Type  promoted_type() const { return this->type(); }
inline void promoted_updateState(const QPaintEngineState&  state) { this->updateState(state); }
};

class PythonQtWrapper_QPaintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DirtyFlag PaintEngineFeature PolygonDrawMode Type )
Q_FLAGS(DirtyFlags PaintEngineFeatures )
enum DirtyFlag{
  DirtyPen = QPaintEngine::DirtyPen,   DirtyBrush = QPaintEngine::DirtyBrush,   DirtyBrushOrigin = QPaintEngine::DirtyBrushOrigin,   DirtyFont = QPaintEngine::DirtyFont,   DirtyBackground = QPaintEngine::DirtyBackground,   DirtyBackgroundMode = QPaintEngine::DirtyBackgroundMode,   DirtyTransform = QPaintEngine::DirtyTransform,   DirtyClipRegion = QPaintEngine::DirtyClipRegion,   DirtyClipPath = QPaintEngine::DirtyClipPath,   DirtyHints = QPaintEngine::DirtyHints,   DirtyCompositionMode = QPaintEngine::DirtyCompositionMode,   DirtyClipEnabled = QPaintEngine::DirtyClipEnabled,   DirtyOpacity = QPaintEngine::DirtyOpacity,   AllDirty = QPaintEngine::AllDirty};
enum PaintEngineFeature{
  PrimitiveTransform = QPaintEngine::PrimitiveTransform,   PatternTransform = QPaintEngine::PatternTransform,   PixmapTransform = QPaintEngine::PixmapTransform,   PatternBrush = QPaintEngine::PatternBrush,   LinearGradientFill = QPaintEngine::LinearGradientFill,   RadialGradientFill = QPaintEngine::RadialGradientFill,   ConicalGradientFill = QPaintEngine::ConicalGradientFill,   AlphaBlend = QPaintEngine::AlphaBlend,   PorterDuff = QPaintEngine::PorterDuff,   PainterPaths = QPaintEngine::PainterPaths,   Antialiasing = QPaintEngine::Antialiasing,   BrushStroke = QPaintEngine::BrushStroke,   ConstantOpacity = QPaintEngine::ConstantOpacity,   MaskedBrush = QPaintEngine::MaskedBrush,   PerspectiveTransform = QPaintEngine::PerspectiveTransform,   BlendModes = QPaintEngine::BlendModes,   ObjectBoundingModeGradients = QPaintEngine::ObjectBoundingModeGradients,   RasterOpModes = QPaintEngine::RasterOpModes,   PaintOutsidePaintEvent = QPaintEngine::PaintOutsidePaintEvent,   AllFeatures = QPaintEngine::AllFeatures};
enum PolygonDrawMode{
  OddEvenMode = QPaintEngine::OddEvenMode,   WindingMode = QPaintEngine::WindingMode,   ConvexMode = QPaintEngine::ConvexMode,   PolylineMode = QPaintEngine::PolylineMode};
enum Type{
  X11 = QPaintEngine::X11,   Windows = QPaintEngine::Windows,   QuickDraw = QPaintEngine::QuickDraw,   CoreGraphics = QPaintEngine::CoreGraphics,   MacPrinter = QPaintEngine::MacPrinter,   QWindowSystem = QPaintEngine::QWindowSystem,   PostScript = QPaintEngine::PostScript,   OpenGL = QPaintEngine::OpenGL,   Picture = QPaintEngine::Picture,   SVG = QPaintEngine::SVG,   Raster = QPaintEngine::Raster,   Direct3D = QPaintEngine::Direct3D,   Pdf = QPaintEngine::Pdf,   OpenVG = QPaintEngine::OpenVG,   OpenGL2 = QPaintEngine::OpenGL2,   PaintBuffer = QPaintEngine::PaintBuffer,   Blitter = QPaintEngine::Blitter,   Direct2D = QPaintEngine::Direct2D,   User = QPaintEngine::User,   MaxUser = QPaintEngine::MaxUser};
Q_DECLARE_FLAGS(DirtyFlags, DirtyFlag)
Q_DECLARE_FLAGS(PaintEngineFeatures, PaintEngineFeature)
public slots:
QPaintEngine* new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = 0);
void delete_QPaintEngine(QPaintEngine* obj) { delete obj; } 
   bool  begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev);
   void clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPoint  coordinateOffset(QPaintEngine* theWrappedObject) const;
   void drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r);
   void drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r);
   void drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount);
   void drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount);
   void drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path);
   void drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
   void drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount);
   void drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount);
   void drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount);
   void drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount);
   void drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem);
   void drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
   bool  end(QPaintEngine* theWrappedObject);
   bool  hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const;
   bool  isActive(QPaintEngine* theWrappedObject) const;
   bool  isExtended(QPaintEngine* theWrappedObject) const;
   QPaintDevice*  paintDevice(QPaintEngine* theWrappedObject) const;
   QPainter*  painter(QPaintEngine* theWrappedObject) const;
   void setActive(QPaintEngine* theWrappedObject, bool  newState);
   void setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip);
   void setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect);
   void syncState(QPaintEngine* theWrappedObject);
   QRegion  systemClip(QPaintEngine* theWrappedObject) const;
   QRect  systemRect(QPaintEngine* theWrappedObject) const;
   bool  testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPaintEngine::Type  type(QPaintEngine* theWrappedObject) const;
   void updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state);
};





class PythonQtShell_QPaintEngineState : public QPaintEngineState
{
public:
    PythonQtShell_QPaintEngineState():QPaintEngineState(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngineState();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEngineState : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEngineState* new_QPaintEngineState();
void delete_QPaintEngineState(QPaintEngineState* obj) { delete obj; } 
   QBrush  backgroundBrush(QPaintEngineState* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPaintEngineState* theWrappedObject) const;
   QBrush  brush(QPaintEngineState* theWrappedObject) const;
   bool  brushNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPointF  brushOrigin(QPaintEngineState* theWrappedObject) const;
   Qt::ClipOperation  clipOperation(QPaintEngineState* theWrappedObject) const;
   QPainterPath  clipPath(QPaintEngineState* theWrappedObject) const;
   QRegion  clipRegion(QPaintEngineState* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPaintEngineState* theWrappedObject) const;
   QFont  font(QPaintEngineState* theWrappedObject) const;
   bool  isClipEnabled(QPaintEngineState* theWrappedObject) const;
   QMatrix  matrix(QPaintEngineState* theWrappedObject) const;
   qreal  opacity(QPaintEngineState* theWrappedObject) const;
   QPainter*  painter(QPaintEngineState* theWrappedObject) const;
   QPen  pen(QPaintEngineState* theWrappedObject) const;
   bool  penNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPaintEngineState* theWrappedObject) const;
   QPaintEngine::DirtyFlags  state(QPaintEngineState* theWrappedObject) const;
   QTransform  transform(QPaintEngineState* theWrappedObject) const;
};





class PythonQtShell_QPaintEvent : public QPaintEvent
{
public:
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(NULL) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; } 
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
};





class PythonQtWrapper_QPainter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompositionMode PixmapFragmentHint RenderHint )
Q_FLAGS(PixmapFragmentHints RenderHints )
enum CompositionMode{
  CompositionMode_SourceOver = QPainter::CompositionMode_SourceOver,   CompositionMode_DestinationOver = QPainter::CompositionMode_DestinationOver,   CompositionMode_Clear = QPainter::CompositionMode_Clear,   CompositionMode_Source = QPainter::CompositionMode_Source,   CompositionMode_Destination = QPainter::CompositionMode_Destination,   CompositionMode_SourceIn = QPainter::CompositionMode_SourceIn,   CompositionMode_DestinationIn = QPainter::CompositionMode_DestinationIn,   CompositionMode_SourceOut = QPainter::CompositionMode_SourceOut,   CompositionMode_DestinationOut = QPainter::CompositionMode_DestinationOut,   CompositionMode_SourceAtop = QPainter::CompositionMode_SourceAtop,   CompositionMode_DestinationAtop = QPainter::CompositionMode_DestinationAtop,   CompositionMode_Xor = QPainter::CompositionMode_Xor,   CompositionMode_Plus = QPainter::CompositionMode_Plus,   CompositionMode_Multiply = QPainter::CompositionMode_Multiply,   CompositionMode_Screen = QPainter::CompositionMode_Screen,   CompositionMode_Overlay = QPainter::CompositionMode_Overlay,   CompositionMode_Darken = QPainter::CompositionMode_Darken,   CompositionMode_Lighten = QPainter::CompositionMode_Lighten,   CompositionMode_ColorDodge = QPainter::CompositionMode_ColorDodge,   CompositionMode_ColorBurn = QPainter::CompositionMode_ColorBurn,   CompositionMode_HardLight = QPainter::CompositionMode_HardLight,   CompositionMode_SoftLight = QPainter::CompositionMode_SoftLight,   CompositionMode_Difference = QPainter::CompositionMode_Difference,   CompositionMode_Exclusion = QPainter::CompositionMode_Exclusion,   RasterOp_SourceOrDestination = QPainter::RasterOp_SourceOrDestination,   RasterOp_SourceAndDestination = QPainter::RasterOp_SourceAndDestination,   RasterOp_SourceXorDestination = QPainter::RasterOp_SourceXorDestination,   RasterOp_NotSourceAndNotDestination = QPainter::RasterOp_NotSourceAndNotDestination,   RasterOp_NotSourceOrNotDestination = QPainter::RasterOp_NotSourceOrNotDestination,   RasterOp_NotSourceXorDestination = QPainter::RasterOp_NotSourceXorDestination,   RasterOp_NotSource = QPainter::RasterOp_NotSource,   RasterOp_NotSourceAndDestination = QPainter::RasterOp_NotSourceAndDestination,   RasterOp_SourceAndNotDestination = QPainter::RasterOp_SourceAndNotDestination,   RasterOp_NotSourceOrDestination = QPainter::RasterOp_NotSourceOrDestination,   RasterOp_SourceOrNotDestination = QPainter::RasterOp_SourceOrNotDestination,   RasterOp_ClearDestination = QPainter::RasterOp_ClearDestination,   RasterOp_SetDestination = QPainter::RasterOp_SetDestination,   RasterOp_NotDestination = QPainter::RasterOp_NotDestination};
enum PixmapFragmentHint{
  OpaqueHint = QPainter::OpaqueHint};
enum RenderHint{
  Antialiasing = QPainter::Antialiasing,   TextAntialiasing = QPainter::TextAntialiasing,   SmoothPixmapTransform = QPainter::SmoothPixmapTransform,   HighQualityAntialiasing = QPainter::HighQualityAntialiasing,   NonCosmeticDefaultPen = QPainter::NonCosmeticDefaultPen,   Qt4CompatiblePainting = QPainter::Qt4CompatiblePainting};
Q_DECLARE_FLAGS(PixmapFragmentHints, PixmapFragmentHint)
Q_DECLARE_FLAGS(RenderHints, RenderHint)
public slots:
QPainter* new_QPainter();
QPainter* new_QPainter(QPaintDevice*  arg__1);
void delete_QPainter(QPainter* obj) { delete obj; } 
   const QBrush*  background(QPainter* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPainter* theWrappedObject) const;
   bool  begin(QPainter* theWrappedObject, QPaintDevice*  arg__1);
   void beginNativePainting(QPainter* theWrappedObject);
   QRect  boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o = QTextOption());
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text);
   QRect  boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text);
   const QBrush*  brush(QPainter* theWrappedObject) const;
   QPoint  brushOrigin(QPainter* theWrappedObject) const;
   QRectF  clipBoundingRect(QPainter* theWrappedObject) const;
   QPainterPath  clipPath(QPainter* theWrappedObject) const;
   QRegion  clipRegion(QPainter* theWrappedObject) const;
   QMatrix  combinedMatrix(QPainter* theWrappedObject) const;
   QTransform  combinedTransform(QPainter* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPainter* theWrappedObject) const;
   QPaintDevice*  device(QPainter* theWrappedObject) const;
   const QMatrix*  deviceMatrix(QPainter* theWrappedObject) const;
   const QTransform*  deviceTransform(QPainter* theWrappedObject) const;
   void drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon);
   void drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry);
   void drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void drawEllipse(QPainter* theWrappedObject, const QRect&  r);
   void drawEllipse(QPainter* theWrappedObject, const QRectF&  r);
   void drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void drawGlyphRun(QPainter* theWrappedObject, const QPointF&  position, const QGlyphRun&  glyphRun);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx = 0, int  sy = 0, int  sw = -1, int  sh = -1, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawLine(QPainter* theWrappedObject, const QLine&  line);
   void drawLine(QPainter* theWrappedObject, const QLineF&  line);
   void drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   void drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs);
   void drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs);
   void drawPath(QPainter* theWrappedObject, const QPainterPath&  path);
   void drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture);
   void drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmapFragments(QPainter* theWrappedObject, const QPainter::PixmapFragment*  fragments, int  fragmentCount, const QPixmap&  pixmap, QPainter::PixmapFragmentHints  hints = 0);
   void drawPoint(QPainter* theWrappedObject, const QPoint&  p);
   void drawPoint(QPainter* theWrappedObject, const QPointF&  pt);
   void drawPoint(QPainter* theWrappedObject, int  x, int  y);
   void drawPoints(QPainter* theWrappedObject, const QPolygon&  points);
   void drawPoints(QPainter* theWrappedObject, const QPolygonF&  points);
   void drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline);
   void drawRect(QPainter* theWrappedObject, const QRect&  rect);
   void drawRect(QPainter* theWrappedObject, const QRectF&  rect);
   void drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h);
   void drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles);
   void drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles);
   void drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5 = 25, int  arg__6 = 25);
   void drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawStaticText(QPainter* theWrappedObject, const QPoint&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, const QPointF&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, int  left, int  top, const QStaticText&  staticText);
   void drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br = 0);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o = QTextOption());
   void drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br = 0);
   void drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s);
   void drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br = 0);
   void drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3 = QPoint());
   void drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset = QPointF());
   void drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx = 0, int  sy = 0);
   bool  end(QPainter* theWrappedObject);
   void endNativePainting(QPainter* theWrappedObject);
   void eraseRect(QPainter* theWrappedObject, const QRect&  arg__1);
   void eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1);
   void eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QColor&  color);
   const QFont*  font(QPainter* theWrappedObject) const;
   QFontInfo  fontInfo(QPainter* theWrappedObject) const;
   QFontMetrics  fontMetrics(QPainter* theWrappedObject) const;
   bool  hasClipping(QPainter* theWrappedObject) const;
   void initFrom(QPainter* theWrappedObject, const QPaintDevice*  device);
   bool  isActive(QPainter* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QPainter* theWrappedObject) const;
   qreal  opacity(QPainter* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPainter* theWrappedObject) const;
   const QPen*  pen(QPainter* theWrappedObject) const;
   QPaintDevice*  static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset = 0);
   QPainter::RenderHints  renderHints(QPainter* theWrappedObject) const;
   void resetMatrix(QPainter* theWrappedObject);
   void resetTransform(QPainter* theWrappedObject);
   void restore(QPainter* theWrappedObject);
   void static_QPainter_restoreRedirected(const QPaintDevice*  device);
   void rotate(QPainter* theWrappedObject, qreal  a);
   void save(QPainter* theWrappedObject);
   void scale(QPainter* theWrappedObject, qreal  sx, qreal  sy);
   void setBackground(QPainter* theWrappedObject, const QBrush&  bg);
   void setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode);
   void setBrush(QPainter* theWrappedObject, const QBrush&  brush);
   void setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, int  x, int  y);
   void setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipping(QPainter* theWrappedObject, bool  enable);
   void setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode);
   void setFont(QPainter* theWrappedObject, const QFont&  f);
   void setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction);
   void setOpacity(QPainter* theWrappedObject, qreal  opacity);
   void setPen(QPainter* theWrappedObject, Qt::PenStyle  style);
   void setPen(QPainter* theWrappedObject, const QColor&  color);
   void setPen(QPainter* theWrappedObject, const QPen&  pen);
   void static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset = QPoint());
   void setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on = true);
   void setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on = true);
   void setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine = false);
   void setViewTransformEnabled(QPainter* theWrappedObject, bool  enable);
   void setViewport(QPainter* theWrappedObject, const QRect&  viewport);
   void setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWindow(QPainter* theWrappedObject, const QRect&  window);
   void setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled);
   void setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void shear(QPainter* theWrappedObject, qreal  sh, qreal  sv);
   void strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen);
   bool  testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const;
   const QTransform*  transform(QPainter* theWrappedObject) const;
   void translate(QPainter* theWrappedObject, const QPoint&  offset);
   void translate(QPainter* theWrappedObject, const QPointF&  offset);
   void translate(QPainter* theWrappedObject, qreal  dx, qreal  dy);
   bool  viewTransformEnabled(QPainter* theWrappedObject) const;
   QRect  viewport(QPainter* theWrappedObject) const;
   QRect  window(QPainter* theWrappedObject) const;
   const QMatrix*  worldMatrix(QPainter* theWrappedObject) const;
   bool  worldMatrixEnabled(QPainter* theWrappedObject) const;
   const QTransform*  worldTransform(QPainter* theWrappedObject) const;
};





class PythonQtWrapper_QPainterPath : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ElementType )
enum ElementType{
  MoveToElement = QPainterPath::MoveToElement,   LineToElement = QPainterPath::LineToElement,   CurveToElement = QPainterPath::CurveToElement,   CurveToDataElement = QPainterPath::CurveToDataElement};
public slots:
QPainterPath* new_QPainterPath();
QPainterPath* new_QPainterPath(const QPainterPath&  other);
QPainterPath* new_QPainterPath(const QPointF&  startPoint);
void delete_QPainterPath(QPainterPath* obj) { delete obj; } 
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   void closeSubpath(QPainterPath* theWrappedObject);
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   QPainterPath::Element  elementAt(QPainterPath* theWrappedObject, int  i) const;
   int  elementCount(QPainterPath* theWrappedObject) const;
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   qreal  length(QPainterPath* theWrappedObject) const;
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   bool  __ne__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath  __and__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iand__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QMatrix&  m);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QTransform&  m);
   QPainterPath  __add__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iadd__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __sub__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __isub__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   QPainterPath  __or__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __ior__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void swap(QPainterPath* theWrappedObject, QPainterPath&  other);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void translate(QPainterPath* theWrappedObject, const QPointF&  offset);
   void translate(QPainterPath* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  translated(QPainterPath* theWrappedObject, const QPointF&  offset) const;
   QPainterPath  translated(QPainterPath* theWrappedObject, qreal  dx, qreal  dy) const;
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
    QString py_toString(QPainterPath*);
};





class PythonQtWrapper_QPainterPathStroker : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPathStroker* new_QPainterPathStroker();
QPainterPathStroker* new_QPainterPathStroker(const QPen&  pen);
void delete_QPainterPathStroker(QPainterPathStroker* obj) { delete obj; } 
   Qt::PenCapStyle  capStyle(QPainterPathStroker* theWrappedObject) const;
   QPainterPath  createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const;
   qreal  curveThreshold(QPainterPathStroker* theWrappedObject) const;
   qreal  dashOffset(QPainterPathStroker* theWrappedObject) const;
   QVector<qreal >  dashPattern(QPainterPathStroker* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPainterPathStroker* theWrappedObject) const;
   qreal  miterLimit(QPainterPathStroker* theWrappedObject) const;
   void setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style);
   void setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold);
   void setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset);
   void setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1);
   void setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern);
   void setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style);
   void setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length);
   void setWidth(QPainterPathStroker* theWrappedObject, qreal  width);
   qreal  width(QPainterPathStroker* theWrappedObject) const;
};





class PythonQtShell_QPainterPath__Element : public QPainterPath::Element
{
public:
    PythonQtShell_QPainterPath__Element():QPainterPath::Element(),_wrapper(NULL) {};

   ~PythonQtShell_QPainterPath__Element();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPainterPath__Element : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPath::Element* new_QPainterPath__Element();
QPainterPath::Element* new_QPainterPath__Element(const QPainterPath::Element& other) {
PythonQtShell_QPainterPath__Element* a = new PythonQtShell_QPainterPath__Element();
*((QPainterPath::Element*)a) = other;
return a; }
void delete_QPainterPath__Element(QPainterPath::Element* obj) { delete obj; } 
   bool  isCurveTo(QPainterPath::Element* theWrappedObject) const;
   bool  isLineTo(QPainterPath::Element* theWrappedObject) const;
   bool  isMoveTo(QPainterPath::Element* theWrappedObject) const;
   QPointF  operator_cast_QPointF(QPainterPath::Element* theWrappedObject) const;
   bool  __ne__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const;
   bool  __eq__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const;
void py_set_type(QPainterPath::Element* theWrappedObject, QPainterPath::ElementType  type){ theWrappedObject->type = type; }
QPainterPath::ElementType  py_get_type(QPainterPath::Element* theWrappedObject){ return theWrappedObject->type; }
void py_set_x(QPainterPath::Element* theWrappedObject, qreal  x){ theWrappedObject->x = x; }
qreal  py_get_x(QPainterPath::Element* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QPainterPath::Element* theWrappedObject, qreal  y){ theWrappedObject->y = y; }
qreal  py_get_y(QPainterPath::Element* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtShell_QPainter__PixmapFragment : public QPainter::PixmapFragment
{
public:
    PythonQtShell_QPainter__PixmapFragment():QPainter::PixmapFragment(),_wrapper(NULL) {};

   ~PythonQtShell_QPainter__PixmapFragment();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPainter__PixmapFragment : public QObject
{ Q_OBJECT
public:
public slots:
QPainter::PixmapFragment* new_QPainter__PixmapFragment();
QPainter::PixmapFragment* new_QPainter__PixmapFragment(const QPainter::PixmapFragment& other) {
PythonQtShell_QPainter__PixmapFragment* a = new PythonQtShell_QPainter__PixmapFragment();
*((QPainter::PixmapFragment*)a) = other;
return a; }
void delete_QPainter__PixmapFragment(QPainter::PixmapFragment* obj) { delete obj; } 
   QPainter::PixmapFragment  static_QPainter__PixmapFragment_create(const QPointF&  pos, const QRectF&  sourceRect, qreal  scaleX = 1, qreal  scaleY = 1, qreal  rotation = 0, qreal  opacity = 1);
void py_set_height(QPainter::PixmapFragment* theWrappedObject, qreal  height){ theWrappedObject->height = height; }
qreal  py_get_height(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->height; }
void py_set_opacity(QPainter::PixmapFragment* theWrappedObject, qreal  opacity){ theWrappedObject->opacity = opacity; }
qreal  py_get_opacity(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->opacity; }
void py_set_rotation(QPainter::PixmapFragment* theWrappedObject, qreal  rotation){ theWrappedObject->rotation = rotation; }
qreal  py_get_rotation(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->rotation; }
void py_set_scaleX(QPainter::PixmapFragment* theWrappedObject, qreal  scaleX){ theWrappedObject->scaleX = scaleX; }
qreal  py_get_scaleX(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->scaleX; }
void py_set_scaleY(QPainter::PixmapFragment* theWrappedObject, qreal  scaleY){ theWrappedObject->scaleY = scaleY; }
qreal  py_get_scaleY(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->scaleY; }
void py_set_sourceLeft(QPainter::PixmapFragment* theWrappedObject, qreal  sourceLeft){ theWrappedObject->sourceLeft = sourceLeft; }
qreal  py_get_sourceLeft(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->sourceLeft; }
void py_set_sourceTop(QPainter::PixmapFragment* theWrappedObject, qreal  sourceTop){ theWrappedObject->sourceTop = sourceTop; }
qreal  py_get_sourceTop(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->sourceTop; }
void py_set_width(QPainter::PixmapFragment* theWrappedObject, qreal  width){ theWrappedObject->width = width; }
qreal  py_get_width(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->width; }
void py_set_x(QPainter::PixmapFragment* theWrappedObject, qreal  x){ theWrappedObject->x = x; }
qreal  py_get_x(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QPainter::PixmapFragment* theWrappedObject, qreal  y){ theWrappedObject->y = y; }
qreal  py_get_y(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtShell_QPanGesture : public QPanGesture
{
public:
    PythonQtShell_QPanGesture(QObject*  parent = 0):QPanGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPanGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPanGesture : public QObject
{ Q_OBJECT
public:
public slots:
QPanGesture* new_QPanGesture(QObject*  parent = 0);
void delete_QPanGesture(QPanGesture* obj) { delete obj; } 
   qreal  acceleration(QPanGesture* theWrappedObject) const;
   QPointF  delta(QPanGesture* theWrappedObject) const;
   QPointF  lastOffset(QPanGesture* theWrappedObject) const;
   QPointF  offset(QPanGesture* theWrappedObject) const;
   void setAcceleration(QPanGesture* theWrappedObject, qreal  value);
   void setLastOffset(QPanGesture* theWrappedObject, const QPointF&  value);
   void setOffset(QPanGesture* theWrappedObject, const QPointF&  value);
};





class PythonQtShell_QPdfWriter : public QPdfWriter
{
public:
    PythonQtShell_QPdfWriter(QIODevice*  device):QPdfWriter(device),_wrapper(NULL) {};
    PythonQtShell_QPdfWriter(const QString&  filename):QPdfWriter(filename),_wrapper(NULL) {};

   ~PythonQtShell_QPdfWriter();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  id) const;
virtual bool  newPage();
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void setMargins(const QPagedPaintDevice::Margins&  m);
virtual void setPageSize(QPagedPaintDevice::PageSize  size);
virtual void setPageSizeMM(const QSizeF&  size);
virtual QPainter*  sharedPainter() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPdfWriter : public QPdfWriter
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  id) const { return QPdfWriter::metric(id); }
inline bool  promoted_newPage() { return QPdfWriter::newPage(); }
inline QPaintEngine*  promoted_paintEngine() const { return QPdfWriter::paintEngine(); }
inline void promoted_setMargins(const QPagedPaintDevice::Margins&  m) { QPdfWriter::setMargins(m); }
inline void promoted_setPageSize(QPagedPaintDevice::PageSize  size) { QPdfWriter::setPageSize(size); }
inline void promoted_setPageSizeMM(const QSizeF&  size) { QPdfWriter::setPageSizeMM(size); }
};

class PythonQtWrapper_QPdfWriter : public QObject
{ Q_OBJECT
public:
public slots:
QPdfWriter* new_QPdfWriter(QIODevice*  device);
QPdfWriter* new_QPdfWriter(const QString&  filename);
void delete_QPdfWriter(QPdfWriter* obj) { delete obj; } 
   QString  creator(QPdfWriter* theWrappedObject) const;
   int  metric(QPdfWriter* theWrappedObject, QPaintDevice::PaintDeviceMetric  id) const;
   bool  newPage(QPdfWriter* theWrappedObject);
   QPaintEngine*  paintEngine(QPdfWriter* theWrappedObject) const;
   int  resolution(QPdfWriter* theWrappedObject) const;
   void setCreator(QPdfWriter* theWrappedObject, const QString&  creator);
   void setMargins(QPdfWriter* theWrappedObject, const QPagedPaintDevice::Margins&  m);
   void setPageSize(QPdfWriter* theWrappedObject, QPagedPaintDevice::PageSize  size);
   void setPageSizeMM(QPdfWriter* theWrappedObject, const QSizeF&  size);
   void setResolution(QPdfWriter* theWrappedObject, int  resolution);
   void setTitle(QPdfWriter* theWrappedObject, const QString&  title);
   QString  title(QPdfWriter* theWrappedObject) const;
};





class PythonQtShell_QPicture : public QPicture
{
public:
    PythonQtShell_QPicture(const QPicture&  arg__1):QPicture(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPicture(int  formatVersion = -1):QPicture(formatVersion),_wrapper(NULL) {};

   ~PythonQtShell_QPicture();

virtual int  devType() const;
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  m) const;
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void setData(const char*  data, uint  size);
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPicture : public QPicture
{ public:
inline int  promoted_devType() const { return QPicture::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  m) const { return QPicture::metric(m); }
inline QPaintEngine*  promoted_paintEngine() const { return QPicture::paintEngine(); }
};

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public slots:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; } 
   QRect  boundingRect(QPicture* theWrappedObject) const;
   const char*  data(QPicture* theWrappedObject) const;
   int  devType(QPicture* theWrappedObject) const;
   bool  isNull(QPicture* theWrappedObject) const;
   bool  load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  load(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   int  metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const;
   void writeTo(QPicture* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPicture* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  paintEngine(QPicture* theWrappedObject) const;
   bool  play(QPicture* theWrappedObject, QPainter*  p);
   bool  save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  save(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
   uint  size(QPicture* theWrappedObject) const;
   void swap(QPicture* theWrappedObject, QPicture&  other);
    bool __nonzero__(QPicture* obj) { return !obj->isNull(); }
};





class PythonQtShell_QPictureFormatPlugin : public QPictureFormatPlugin
{
public:
    PythonQtShell_QPictureFormatPlugin(QObject*  parent = 0):QPictureFormatPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPictureFormatPlugin();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  installIOHandler(const QString&  format);
virtual bool  loadPicture(const QString&  format, const QString&  filename, QPicture*  pic);
virtual bool  savePicture(const QString&  format, const QString&  filename, const QPicture&  pic);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPictureFormatPlugin : public QPictureFormatPlugin
{ public:
inline bool  promoted_installIOHandler(const QString&  format) { return this->installIOHandler(format); }
inline bool  promoted_loadPicture(const QString&  format, const QString&  filename, QPicture*  pic) { return QPictureFormatPlugin::loadPicture(format, filename, pic); }
inline bool  promoted_savePicture(const QString&  format, const QString&  filename, const QPicture&  pic) { return QPictureFormatPlugin::savePicture(format, filename, pic); }
};

class PythonQtWrapper_QPictureFormatPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QPictureFormatPlugin* new_QPictureFormatPlugin(QObject*  parent = 0);
void delete_QPictureFormatPlugin(QPictureFormatPlugin* obj) { delete obj; } 
   bool  installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format);
   bool  loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic);
   bool  savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic);
};





class PythonQtWrapper_QPictureIO : public QObject
{ Q_OBJECT
public:
public slots:
QPictureIO* new_QPictureIO();
QPictureIO* new_QPictureIO(QIODevice*  ioDevice, const char*  format);
QPictureIO* new_QPictureIO(const QString&  fileName, const char*  format);
void delete_QPictureIO(QPictureIO* obj) { delete obj; } 
   QString  description(QPictureIO* theWrappedObject) const;
   QString  fileName(QPictureIO* theWrappedObject) const;
   const char*  format(QPictureIO* theWrappedObject) const;
   float  gamma(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_inputFormats();
   QIODevice*  ioDevice(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_outputFormats();
   const char*  parameters(QPictureIO* theWrappedObject) const;
   const QPicture*  picture(QPictureIO* theWrappedObject) const;
   QByteArray  static_QPictureIO_pictureFormat(QIODevice*  arg__1);
   QByteArray  static_QPictureIO_pictureFormat(const QString&  fileName);
   int  quality(QPictureIO* theWrappedObject) const;
   bool  read(QPictureIO* theWrappedObject);
   void setDescription(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setFileName(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setFormat(QPictureIO* theWrappedObject, const char*  arg__1);
   void setGamma(QPictureIO* theWrappedObject, float  arg__1);
   void setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1);
   void setParameters(QPictureIO* theWrappedObject, const char*  arg__1);
   void setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1);
   void setQuality(QPictureIO* theWrappedObject, int  arg__1);
   void setStatus(QPictureIO* theWrappedObject, int  arg__1);
   int  status(QPictureIO* theWrappedObject) const;
   bool  write(QPictureIO* theWrappedObject);
};





class PythonQtShell_QPinchGesture : public QPinchGesture
{
public:
    PythonQtShell_QPinchGesture(QObject*  parent = 0):QPinchGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPinchGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPinchGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChangeFlag )
Q_FLAGS(ChangeFlags )
enum ChangeFlag{
  ScaleFactorChanged = QPinchGesture::ScaleFactorChanged,   RotationAngleChanged = QPinchGesture::RotationAngleChanged,   CenterPointChanged = QPinchGesture::CenterPointChanged};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public slots:
QPinchGesture* new_QPinchGesture(QObject*  parent = 0);
void delete_QPinchGesture(QPinchGesture* obj) { delete obj; } 
   QPointF  centerPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  changeFlags(QPinchGesture* theWrappedObject) const;
   QPointF  lastCenterPoint(QPinchGesture* theWrappedObject) const;
   qreal  lastRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  lastScaleFactor(QPinchGesture* theWrappedObject) const;
   qreal  rotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  scaleFactor(QPinchGesture* theWrappedObject) const;
   void setCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setLastCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setLastRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setLastScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setStartCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setTotalChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setTotalRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setTotalScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   QPointF  startCenterPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  totalChangeFlags(QPinchGesture* theWrappedObject) const;
   qreal  totalRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  totalScaleFactor(QPinchGesture* theWrappedObject) const;
};





class PythonQtShell_QPixmapCache : public QPixmapCache
{
public:
    PythonQtShell_QPixmapCache():QPixmapCache(),_wrapper(NULL) {};

   ~PythonQtShell_QPixmapCache();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; } 
   int  static_QPixmapCache_cacheLimit();
   void static_QPixmapCache_clear();
   bool  static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap);
   bool  static_QPixmapCache_find(const QString&  key, QPixmap&  pixmap);
   QPixmapCache::Key  static_QPixmapCache_insert(const QPixmap&  pixmap);
   bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_remove(const QPixmapCache::Key&  key);
   void static_QPixmapCache_remove(const QString&  key);
   bool  static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_setCacheLimit(int  arg__1);
};





class PythonQtWrapper_QPixmapCache__Key : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache::Key* new_QPixmapCache__Key();
QPixmapCache::Key* new_QPixmapCache__Key(const QPixmapCache::Key&  other);
void delete_QPixmapCache__Key(QPixmapCache::Key* obj) { delete obj; } 
   bool  __ne__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
   QPixmapCache::Key*  operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other);
   bool  __eq__(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
};





class PythonQtShell_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{
public:
    PythonQtShell_QPlainTextDocumentLayout(QTextDocument*  document):QPlainTextDocumentLayout(document),_wrapper(NULL) {};

   ~PythonQtShell_QPlainTextDocumentLayout();

virtual QRectF  blockBoundingRect(const QTextBlock&  block) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void documentChanged(int  from, int  arg__2, int  charsAdded);
virtual QSizeF  documentSize() const;
virtual void draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2);
virtual void drawInlineObject(QPainter*  painter, const QRectF&  rect, QTextInlineObject  object, int  posInDocument, const QTextFormat&  format);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QRectF  frameBoundingRect(QTextFrame*  arg__1) const;
virtual int  hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const;
virtual int  pageCount() const;
virtual void positionInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
virtual void resizeInlineObject(QTextInlineObject  item, int  posInDocument, const QTextFormat&  format);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{ public:
inline QRectF  promoted_blockBoundingRect(const QTextBlock&  block) const { return QPlainTextDocumentLayout::blockBoundingRect(block); }
inline void promoted_documentChanged(int  from, int  arg__2, int  charsAdded) { QPlainTextDocumentLayout::documentChanged(from, arg__2, charsAdded); }
inline QSizeF  promoted_documentSize() const { return QPlainTextDocumentLayout::documentSize(); }
inline void promoted_draw(QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2) { QPlainTextDocumentLayout::draw(arg__1, arg__2); }
inline QRectF  promoted_frameBoundingRect(QTextFrame*  arg__1) const { return QPlainTextDocumentLayout::frameBoundingRect(arg__1); }
inline int  promoted_hitTest(const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const { return QPlainTextDocumentLayout::hitTest(arg__1, arg__2); }
inline int  promoted_pageCount() const { return QPlainTextDocumentLayout::pageCount(); }
};

class PythonQtWrapper_QPlainTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextDocumentLayout* new_QPlainTextDocumentLayout(QTextDocument*  document);
void delete_QPlainTextDocumentLayout(QPlainTextDocumentLayout* obj) { delete obj; } 
   QRectF  blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   int  cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const;
   void documentChanged(QPlainTextDocumentLayout* theWrappedObject, int  from, int  arg__2, int  charsAdded);
   QSizeF  documentSize(QPlainTextDocumentLayout* theWrappedObject) const;
   void draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2);
   void ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   QRectF  frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const;
   int  hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const;
   int  pageCount(QPlainTextDocumentLayout* theWrappedObject) const;
   void requestUpdate(QPlainTextDocumentLayout* theWrappedObject);
   void setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width);
};





class PythonQtShell_QPlainTextEdit : public QPlainTextEdit
{
public:
    PythonQtShell_QPlainTextEdit(QWidget*  parent = 0):QPlainTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QPlainTextEdit(const QString&  text, QWidget*  parent = 0):QPlainTextEdit(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPlainTextEdit();

virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void doSetTextCursor(const QTextCursor&  cursor);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlainTextEdit : public QPlainTextEdit
{ public:
inline QRectF  promoted_blockBoundingGeometry(const QTextBlock&  block) const { return QPlainTextEdit::blockBoundingGeometry(block); }
inline QRectF  promoted_blockBoundingRect(const QTextBlock&  block) const { return QPlainTextEdit::blockBoundingRect(block); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QPlainTextEdit::canInsertFromMimeData(source); }
inline void promoted_changeEvent(QEvent*  e) { QPlainTextEdit::changeEvent(e); }
inline QPointF  promoted_contentOffset() const { return QPlainTextEdit::contentOffset(); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QPlainTextEdit::contextMenuEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QPlainTextEdit::createMimeDataFromSelection(); }
inline void promoted_doSetTextCursor(const QTextCursor&  cursor) { QPlainTextEdit::doSetTextCursor(cursor); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QPlainTextEdit::dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QPlainTextEdit::dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QPlainTextEdit::dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QPlainTextEdit::dropEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QPlainTextEdit::event(e); }
inline QTextBlock  promoted_firstVisibleBlock() const { return QPlainTextEdit::firstVisibleBlock(); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QPlainTextEdit::focusInEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QPlainTextEdit::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QPlainTextEdit::focusOutEvent(e); }
inline QAbstractTextDocumentLayout::PaintContext  promoted_getPaintContext() const { return QPlainTextEdit::getPaintContext(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QPlainTextEdit::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QPlainTextEdit::inputMethodQuery(property); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QPlainTextEdit::insertFromMimeData(source); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QPlainTextEdit::keyPressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QPlainTextEdit::keyReleaseEvent(e); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QPlainTextEdit::loadResource(type, name); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QPlainTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QPlainTextEdit::mouseMoveEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QPlainTextEdit::mousePressEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QPlainTextEdit::mouseReleaseEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QPlainTextEdit::paintEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QPlainTextEdit::resizeEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QPlainTextEdit::scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QPlainTextEdit::showEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  e) { QPlainTextEdit::timerEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QPlainTextEdit::wheelEvent(e); }
inline void promoted_zoomInF(float  range) { QPlainTextEdit::zoomInF(range); }
};

class PythonQtWrapper_QPlainTextEdit : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextEdit* new_QPlainTextEdit(QWidget*  parent = 0);
QPlainTextEdit* new_QPlainTextEdit(const QString&  text, QWidget*  parent = 0);
void delete_QPlainTextEdit(QPlainTextEdit* obj) { delete obj; } 
   QString  anchorAt(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   bool  backgroundVisible(QPlainTextEdit* theWrappedObject) const;
   QRectF  blockBoundingGeometry(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const;
   QRectF  blockBoundingRect(QPlainTextEdit* theWrappedObject, const QTextBlock&  block) const;
   int  blockCount(QPlainTextEdit* theWrappedObject) const;
   bool  canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const;
   bool  canPaste(QPlainTextEdit* theWrappedObject) const;
   bool  centerOnScroll(QPlainTextEdit* theWrappedObject) const;
   void changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e);
   QPointF  contentOffset(QPlainTextEdit* theWrappedObject) const;
   void contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e);
   QMimeData*  createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject);
   QTextCharFormat  currentCharFormat(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   int  cursorWidth(QPlainTextEdit* theWrappedObject) const;
   void doSetTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   QTextDocument*  document(QPlainTextEdit* theWrappedObject) const;
   QString  documentTitle(QPlainTextEdit* theWrappedObject) const;
   void dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e);
   void dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   void dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e);
   void dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e);
   void ensureCursorVisible(QPlainTextEdit* theWrappedObject);
   bool  event(QPlainTextEdit* theWrappedObject, QEvent*  e);
   QList<QTextEdit::ExtraSelection >  extraSelections(QPlainTextEdit* theWrappedObject) const;
   bool  find(QPlainTextEdit* theWrappedObject, const QRegExp&  exp, QTextDocument::FindFlags  options = 0);
   bool  find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   QTextBlock  firstVisibleBlock(QPlainTextEdit* theWrappedObject) const;
   void focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
   bool  focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next);
   void focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
   QAbstractTextDocumentLayout::PaintContext  getPaintContext(QPlainTextEdit* theWrappedObject) const;
   void inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  query, QVariant  argument) const;
   void insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source);
   bool  isReadOnly(QPlainTextEdit* theWrappedObject) const;
   bool  isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const;
   void keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
   void keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
   QPlainTextEdit::LineWrapMode  lineWrapMode(QPlainTextEdit* theWrappedObject) const;
   QVariant  loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name);
   int  maximumBlockCount(QPlainTextEdit* theWrappedObject) const;
   void mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   void mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   void mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   void mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   void mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   void moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   bool  overwriteMode(QPlainTextEdit* theWrappedObject) const;
   void paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e);
   QString  placeholderText(QPlainTextEdit* theWrappedObject) const;
   void print(QPlainTextEdit* theWrappedObject, QPagedPaintDevice*  printer) const;
   void resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e);
   void scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy);
   void setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible);
   void setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled);
   void setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setCursorWidth(QPlainTextEdit* theWrappedObject, int  width);
   void setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document);
   void setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title);
   void setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode);
   void setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum);
   void setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite);
   void setPlaceholderText(QPlainTextEdit* theWrappedObject, const QString&  placeholderText);
   void setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro);
   void setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b);
   void setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width);
   void setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable);
   void setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1);
   bool  tabChangesFocus(QPlainTextEdit* theWrappedObject) const;
   int  tabStopWidth(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QPlainTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QPlainTextEdit* theWrappedObject) const;
   void timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e);
   QString  toPlainText(QPlainTextEdit* theWrappedObject) const;
   void wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e);
   QTextOption::WrapMode  wordWrapMode(QPlainTextEdit* theWrappedObject) const;
   void zoomInF(QPlainTextEdit* theWrappedObject, float  range);
};





class PythonQtWrapper_QPolygonF : public QObject
{ Q_OBJECT
public:
public slots:
QPolygonF* new_QPolygonF();
QPolygonF* new_QPolygonF(const QPolygon&  a);
QPolygonF* new_QPolygonF(const QPolygonF&  a);
QPolygonF* new_QPolygonF(const QRectF&  r);
QPolygonF* new_QPolygonF(const QVector<QPointF >&  v);
QPolygonF* new_QPolygonF(int  size);
void delete_QPolygonF(QPolygonF* obj) { delete obj; } 
   void append(QPolygonF* theWrappedObject, const QPointF&  t);
   const QPointF*  at(QPolygonF* theWrappedObject, int  i) const;
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   int  capacity(QPolygonF* theWrappedObject) const;
   void clear(QPolygonF* theWrappedObject);
   bool  contains(QPolygonF* theWrappedObject, const QPointF&  t) const;
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   int  count(QPolygonF* theWrappedObject) const;
   int  count(QPolygonF* theWrappedObject, const QPointF&  t) const;
   bool  empty(QPolygonF* theWrappedObject) const;
   bool  endsWith(QPolygonF* theWrappedObject, const QPointF&  t) const;
   QVector<QPointF >*  fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size = -1);
   const QPointF*  first(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  static_QPolygonF_fromList(const QList<QPointF >&  list);
   int  indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from = 0) const;
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   bool  isClosed(QPolygonF* theWrappedObject) const;
   bool  isEmpty(QPolygonF* theWrappedObject) const;
   bool  isSharedWith(QPolygonF* theWrappedObject, const QVector<QPointF >&  other) const;
   const QPointF*  last(QPolygonF* theWrappedObject) const;
   int  lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from = -1) const;
   int  length(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  mid(QPolygonF* theWrappedObject, int  pos, int  len = -1) const;
   bool  __ne__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QMatrix&  m);
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QTransform&  m);
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   bool  __eq__(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
   void pop_back(QPolygonF* theWrappedObject);
   void pop_front(QPolygonF* theWrappedObject);
   void prepend(QPolygonF* theWrappedObject, const QPointF&  t);
   void push_back(QPolygonF* theWrappedObject, const QPointF&  t);
   void push_front(QPolygonF* theWrappedObject, const QPointF&  t);
   void remove(QPolygonF* theWrappedObject, int  i);
   void remove(QPolygonF* theWrappedObject, int  i, int  n);
   int  removeAll(QPolygonF* theWrappedObject, const QPointF&  t);
   void removeAt(QPolygonF* theWrappedObject, int  i);
   void removeFirst(QPolygonF* theWrappedObject);
   void removeLast(QPolygonF* theWrappedObject);
   bool  removeOne(QPolygonF* theWrappedObject, const QPointF&  t);
   void replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t);
   void reserve(QPolygonF* theWrappedObject, int  size);
   void resize(QPolygonF* theWrappedObject, int  size);
   void setSharable(QPolygonF* theWrappedObject, bool  sharable);
   int  size(QPolygonF* theWrappedObject) const;
   void squeeze(QPolygonF* theWrappedObject);
   bool  startsWith(QPolygonF* theWrappedObject, const QPointF&  t) const;
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void swap(QPolygonF* theWrappedObject, QPolygonF&  other);
   QPointF  takeAt(QPolygonF* theWrappedObject, int  i);
   QPointF  takeFirst(QPolygonF* theWrappedObject);
   QPointF  takeLast(QPolygonF* theWrappedObject);
   QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
   void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
   QPolygonF  translated(QPolygonF* theWrappedObject, const QPointF&  offset) const;
   QPolygonF  translated(QPolygonF* theWrappedObject, qreal  dx, qreal  dy) const;
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const;
    QString py_toString(QPolygonF*);
};





class PythonQtShell_QProgressBar : public QProgressBar
{
public:
    PythonQtShell_QProgressBar(QWidget*  parent = 0):QProgressBar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QProgressBar();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual QString  text() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressBar : public QProgressBar
{ public:
inline bool  promoted_event(QEvent*  e) { return QProgressBar::event(e); }
inline void promoted_initStyleOption(QStyleOptionProgressBar*  option) const { QProgressBar::initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QProgressBar::paintEvent(arg__1); }
inline QString  promoted_text() const { return QProgressBar::text(); }
};

class PythonQtWrapper_QProgressBar : public QObject
{ Q_OBJECT
public:
public slots:
QProgressBar* new_QProgressBar(QWidget*  parent = 0);
void delete_QProgressBar(QProgressBar* obj) { delete obj; } 
   Qt::Alignment  alignment(QProgressBar* theWrappedObject) const;
   bool  event(QProgressBar* theWrappedObject, QEvent*  e);
   QString  format(QProgressBar* theWrappedObject) const;
   void initStyleOption(QProgressBar* theWrappedObject, QStyleOptionProgressBar*  option) const;
   bool  invertedAppearance(QProgressBar* theWrappedObject) const;
   bool  isTextVisible(QProgressBar* theWrappedObject) const;
   int  maximum(QProgressBar* theWrappedObject) const;
   int  minimum(QProgressBar* theWrappedObject) const;
   QSize  minimumSizeHint(QProgressBar* theWrappedObject) const;
   Qt::Orientation  orientation(QProgressBar* theWrappedObject) const;
   void paintEvent(QProgressBar* theWrappedObject, QPaintEvent*  arg__1);
   void resetFormat(QProgressBar* theWrappedObject);
   void setAlignment(QProgressBar* theWrappedObject, Qt::Alignment  alignment);
   void setFormat(QProgressBar* theWrappedObject, const QString&  format);
   void setInvertedAppearance(QProgressBar* theWrappedObject, bool  invert);
   void setTextDirection(QProgressBar* theWrappedObject, QProgressBar::Direction  textDirection);
   void setTextVisible(QProgressBar* theWrappedObject, bool  visible);
   QSize  sizeHint(QProgressBar* theWrappedObject) const;
   QString  text(QProgressBar* theWrappedObject) const;
   QProgressBar::Direction  textDirection(QProgressBar* theWrappedObject) const;
   int  value(QProgressBar* theWrappedObject) const;
};





class PythonQtShell_QProgressDialog : public QProgressDialog
{
public:
    PythonQtShell_QProgressDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QProgressDialog(parent, flags),_wrapper(NULL) {};
    PythonQtShell_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QProgressDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressDialog : public QProgressDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { QProgressDialog::changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QProgressDialog::closeEvent(event); }
inline void promoted_forceShow() { QProgressDialog::forceShow(); }
inline void promoted_open() { QProgressDialog::open(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QProgressDialog::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QProgressDialog::showEvent(event); }
};

class PythonQtWrapper_QProgressDialog : public QObject
{ Q_OBJECT
public:
public slots:
QProgressDialog* new_QProgressDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QProgressDialog* new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QProgressDialog(QProgressDialog* obj) { delete obj; } 
   bool  autoClose(QProgressDialog* theWrappedObject) const;
   bool  autoReset(QProgressDialog* theWrappedObject) const;
   void changeEvent(QProgressDialog* theWrappedObject, QEvent*  event);
   void closeEvent(QProgressDialog* theWrappedObject, QCloseEvent*  event);
   QString  labelText(QProgressDialog* theWrappedObject) const;
   int  maximum(QProgressDialog* theWrappedObject) const;
   int  minimum(QProgressDialog* theWrappedObject) const;
   int  minimumDuration(QProgressDialog* theWrappedObject) const;
   void open(QProgressDialog* theWrappedObject);
   void open(QProgressDialog* theWrappedObject, QObject*  receiver, const char*  member);
   void resizeEvent(QProgressDialog* theWrappedObject, QResizeEvent*  event);
   void setAutoClose(QProgressDialog* theWrappedObject, bool  close);
   void setAutoReset(QProgressDialog* theWrappedObject, bool  reset);
   void setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar);
   void setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button);
   void setLabel(QProgressDialog* theWrappedObject, QLabel*  label);
   void showEvent(QProgressDialog* theWrappedObject, QShowEvent*  event);
   QSize  sizeHint(QProgressDialog* theWrappedObject) const;
   int  value(QProgressDialog* theWrappedObject) const;
   bool  wasCanceled(QProgressDialog* theWrappedObject) const;
};





class PythonQtShell_QProxyStyle : public QProxyStyle
{
public:
    PythonQtShell_QProxyStyle(QStyle*  style = 0):QProxyStyle(style),_wrapper(NULL) {};
    PythonQtShell_QProxyStyle(const QString&  key):QProxyStyle(key),_wrapper(NULL) {};

   ~PythonQtShell_QProxyStyle();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = 0) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual int  layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  app);
virtual void polish(QPalette&  pal);
virtual void polish(QWidget*  widget);
virtual QSize  sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
virtual QIcon  standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
virtual QRect  subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void unpolish(QApplication*  app);
virtual void unpolish(QWidget*  widget);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProxyStyle : public QProxyStyle
{ public:
inline void promoted_drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = 0) const { QProxyStyle::drawComplexControl(control, option, painter, widget); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const { QProxyStyle::drawControl(element, option, painter, widget); }
inline void promoted_drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const { QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap); }
inline void promoted_drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const { QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const { QProxyStyle::drawPrimitive(element, option, painter, widget); }
inline bool  promoted_event(QEvent*  e) { return QProxyStyle::event(e); }
inline QPixmap  promoted_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline QStyle::SubControl  promoted_hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const { return QProxyStyle::hitTestComplexControl(control, option, pos, widget); }
inline QRect  promoted_itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const { return QProxyStyle::itemPixmapRect(r, flags, pixmap); }
inline int  promoted_layoutSpacing(QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QProxyStyle::pixelMetric(metric, option, widget); }
inline void promoted_polish(QApplication*  app) { QProxyStyle::polish(app); }
inline void promoted_polish(QPalette&  pal) { QProxyStyle::polish(pal); }
inline void promoted_polish(QWidget*  widget) { QProxyStyle::polish(widget); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const { return QProxyStyle::sizeFromContents(type, option, size, widget); }
inline QIcon  promoted_standardIcon(QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QProxyStyle::standardIcon(standardIcon, option, widget); }
inline QPalette  promoted_standardPalette() const { return QProxyStyle::standardPalette(); }
inline QPixmap  promoted_standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QProxyStyle::standardPixmap(standardPixmap, opt, widget); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QProxyStyle::styleHint(hint, option, widget, returnData); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const { return QProxyStyle::subControlRect(cc, opt, sc, widget); }
inline QRect  promoted_subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const { return QProxyStyle::subElementRect(element, option, widget); }
inline void promoted_unpolish(QApplication*  app) { QProxyStyle::unpolish(app); }
inline void promoted_unpolish(QWidget*  widget) { QProxyStyle::unpolish(widget); }
};

class PythonQtWrapper_QProxyStyle : public QObject
{ Q_OBJECT
public:
public slots:
QProxyStyle* new_QProxyStyle(QStyle*  style = 0);
QProxyStyle* new_QProxyStyle(const QString&  key);
void delete_QProxyStyle(QProxyStyle* obj) { delete obj; } 
   QStyle*  baseStyle(QProxyStyle* theWrappedObject) const;
   void drawComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget = 0) const;
   void drawControl(QProxyStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
   void drawItemPixmap(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
   void drawItemText(QProxyStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
   void drawPrimitive(QProxyStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
   bool  event(QProxyStyle* theWrappedObject, QEvent*  e);
   QPixmap  generatedIconPixmap(QProxyStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
   QStyle::SubControl  hitTestComplexControl(QProxyStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const;
   QRect  itemPixmapRect(QProxyStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const;
   QRect  itemTextRect(QProxyStyle* theWrappedObject, const QFontMetrics&  fm, const QRect&  r, int  flags, bool  enabled, const QString&  text) const;
   int  layoutSpacing(QProxyStyle* theWrappedObject, QSizePolicy::ControlType  control1, QSizePolicy::ControlType  control2, Qt::Orientation  orientation, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   int  pixelMetric(QProxyStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   void polish(QProxyStyle* theWrappedObject, QApplication*  app);
   void polish(QProxyStyle* theWrappedObject, QPalette&  pal);
   void polish(QProxyStyle* theWrappedObject, QWidget*  widget);
   void setBaseStyle(QProxyStyle* theWrappedObject, QStyle*  style);
   QSize  sizeFromContents(QProxyStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
   QIcon  standardIcon(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardIcon, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   QPalette  standardPalette(QProxyStyle* theWrappedObject) const;
   QPixmap  standardPixmap(QProxyStyle* theWrappedObject, QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   int  styleHint(QProxyStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   QRect  subControlRect(QProxyStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
   QRect  subElementRect(QProxyStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const;
   void unpolish(QProxyStyle* theWrappedObject, QApplication*  app);
   void unpolish(QProxyStyle* theWrappedObject, QWidget*  widget);
};





class PythonQtShell_QPushButton : public QPushButton
{
public:
    PythonQtShell_QPushButton(QWidget*  parent = 0):QPushButton(parent),_wrapper(NULL) {};
    PythonQtShell_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = 0):QPushButton(icon, text, parent),_wrapper(NULL) {};
    PythonQtShell_QPushButton(const QString&  text, QWidget*  parent = 0):QPushButton(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QPushButton();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPushButton : public QPushButton
{ public:
inline bool  promoted_event(QEvent*  e) { return QPushButton::event(e); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QPushButton::focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QPushButton::focusOutEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionButton*  option) const { QPushButton::initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QPushButton::keyPressEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QPushButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QPushButton : public QObject
{ Q_OBJECT
public:
public slots:
QPushButton* new_QPushButton(QWidget*  parent = 0);
QPushButton* new_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = 0);
QPushButton* new_QPushButton(const QString&  text, QWidget*  parent = 0);
void delete_QPushButton(QPushButton* obj) { delete obj; } 
   bool  autoDefault(QPushButton* theWrappedObject) const;
   bool  event(QPushButton* theWrappedObject, QEvent*  e);
   void focusInEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1);
   void focusOutEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1);
   void initStyleOption(QPushButton* theWrappedObject, QStyleOptionButton*  option) const;
   bool  isDefault(QPushButton* theWrappedObject) const;
   bool  isFlat(QPushButton* theWrappedObject) const;
   void keyPressEvent(QPushButton* theWrappedObject, QKeyEvent*  arg__1);
   QMenu*  menu(QPushButton* theWrappedObject) const;
   QSize  minimumSizeHint(QPushButton* theWrappedObject) const;
   void paintEvent(QPushButton* theWrappedObject, QPaintEvent*  arg__1);
   void setAutoDefault(QPushButton* theWrappedObject, bool  arg__1);
   void setDefault(QPushButton* theWrappedObject, bool  arg__1);
   void setFlat(QPushButton* theWrappedObject, bool  arg__1);
   void setMenu(QPushButton* theWrappedObject, QMenu*  menu);
   QSize  sizeHint(QPushButton* theWrappedObject) const;
};





class PythonQtWrapper_QQuaternion : public QObject
{ Q_OBJECT
public:
public slots:
QQuaternion* new_QQuaternion();
QQuaternion* new_QQuaternion(const QVector4D&  vector);
QQuaternion* new_QQuaternion(float  scalar, const QVector3D&  vector);
QQuaternion* new_QQuaternion(float  scalar, float  xpos, float  ypos, float  zpos);
QQuaternion* new_QQuaternion(const QQuaternion& other) {
QQuaternion* a = new QQuaternion();
*((QQuaternion*)a) = other;
return a; }
void delete_QQuaternion(QQuaternion* obj) { delete obj; } 
   QQuaternion  conjugate(QQuaternion* theWrappedObject) const;
   QQuaternion  static_QQuaternion_fromAxisAndAngle(const QVector3D&  axis, float  angle);
   QQuaternion  static_QQuaternion_fromAxisAndAngle(float  x, float  y, float  z, float  angle);
   bool  isIdentity(QQuaternion* theWrappedObject) const;
   bool  isNull(QQuaternion* theWrappedObject) const;
   float  length(QQuaternion* theWrappedObject) const;
   float  lengthSquared(QQuaternion* theWrappedObject) const;
   QQuaternion  static_QQuaternion_nlerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t);
   void normalize(QQuaternion* theWrappedObject);
   QQuaternion  normalized(QQuaternion* theWrappedObject) const;
   const QQuaternion  __mul__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   const QQuaternion  __mul__(QQuaternion* theWrappedObject, float  factor);
   QQuaternion*  __imul__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   QQuaternion*  __imul__(QQuaternion* theWrappedObject, float  factor);
   const QQuaternion  __add__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion*  __iadd__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   const QQuaternion  __sub__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion*  __isub__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   const QQuaternion  __div__(QQuaternion* theWrappedObject, float  divisor);
   QQuaternion*  __idiv__(QQuaternion* theWrappedObject, float  divisor);
   void writeTo(QQuaternion* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   void readFrom(QQuaternion* theWrappedObject, QDataStream&  arg__1);
   QVector3D  rotatedVector(QQuaternion* theWrappedObject, const QVector3D&  vector) const;
   float  scalar(QQuaternion* theWrappedObject) const;
   void setScalar(QQuaternion* theWrappedObject, float  scalar);
   void setVector(QQuaternion* theWrappedObject, const QVector3D&  vector);
   void setVector(QQuaternion* theWrappedObject, float  x, float  y, float  z);
   void setX(QQuaternion* theWrappedObject, float  x);
   void setY(QQuaternion* theWrappedObject, float  y);
   void setZ(QQuaternion* theWrappedObject, float  z);
   QQuaternion  static_QQuaternion_slerp(const QQuaternion&  q1, const QQuaternion&  q2, float  t);
   QVector4D  toVector4D(QQuaternion* theWrappedObject) const;
   QVector3D  vector(QQuaternion* theWrappedObject) const;
   float  x(QQuaternion* theWrappedObject) const;
   float  y(QQuaternion* theWrappedObject) const;
   float  z(QQuaternion* theWrappedObject) const;
    QString py_toString(QQuaternion*);
    bool __nonzero__(QQuaternion* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QRadialGradient : public QObject
{ Q_OBJECT
public:
public slots:
QRadialGradient* new_QRadialGradient();
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  centerRadius, const QPointF&  focalPoint, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  centerRadius, qreal  fx, qreal  fy, qreal  focalRadius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy);
QRadialGradient* new_QRadialGradient(const QRadialGradient& other) {
QRadialGradient* a = new QRadialGradient();
*((QRadialGradient*)a) = other;
return a; }
void delete_QRadialGradient(QRadialGradient* obj) { delete obj; } 
   QPointF  center(QRadialGradient* theWrappedObject) const;
   qreal  centerRadius(QRadialGradient* theWrappedObject) const;
   QPointF  focalPoint(QRadialGradient* theWrappedObject) const;
   qreal  focalRadius(QRadialGradient* theWrappedObject) const;
   qreal  radius(QRadialGradient* theWrappedObject) const;
   void setCenter(QRadialGradient* theWrappedObject, const QPointF&  center);
   void setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setCenterRadius(QRadialGradient* theWrappedObject, qreal  radius);
   void setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint);
   void setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setFocalRadius(QRadialGradient* theWrappedObject, qreal  radius);
   void setRadius(QRadialGradient* theWrappedObject, qreal  radius);
};





class PythonQtShell_QRadioButton : public QRadioButton
{
public:
    PythonQtShell_QRadioButton(QWidget*  parent = 0):QRadioButton(parent),_wrapper(NULL) {};
    PythonQtShell_QRadioButton(const QString&  text, QWidget*  parent = 0):QRadioButton(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRadioButton();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  hitButton(const QPoint&  arg__1) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRadioButton : public QRadioButton
{ public:
inline bool  promoted_event(QEvent*  e) { return QRadioButton::event(e); }
inline bool  promoted_hitButton(const QPoint&  arg__1) const { return QRadioButton::hitButton(arg__1); }
inline void promoted_initStyleOption(QStyleOptionButton*  button) const { QRadioButton::initStyleOption(button); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QRadioButton::mouseMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QRadioButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QRadioButton : public QObject
{ Q_OBJECT
public:
public slots:
QRadioButton* new_QRadioButton(QWidget*  parent = 0);
QRadioButton* new_QRadioButton(const QString&  text, QWidget*  parent = 0);
void delete_QRadioButton(QRadioButton* obj) { delete obj; } 
   bool  event(QRadioButton* theWrappedObject, QEvent*  e);
   bool  hitButton(QRadioButton* theWrappedObject, const QPoint&  arg__1) const;
   void initStyleOption(QRadioButton* theWrappedObject, QStyleOptionButton*  button) const;
   QSize  minimumSizeHint(QRadioButton* theWrappedObject) const;
   void mouseMoveEvent(QRadioButton* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QRadioButton* theWrappedObject, QPaintEvent*  arg__1);
   QSize  sizeHint(QRadioButton* theWrappedObject) const;
};





class PythonQtWrapper_QRawFont : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AntialiasingType LayoutFlag )
Q_FLAGS(LayoutFlags )
enum AntialiasingType{
  PixelAntialiasing = QRawFont::PixelAntialiasing,   SubPixelAntialiasing = QRawFont::SubPixelAntialiasing};
enum LayoutFlag{
  SeparateAdvances = QRawFont::SeparateAdvances,   KernedAdvances = QRawFont::KernedAdvances,   UseDesignMetrics = QRawFont::UseDesignMetrics};
Q_DECLARE_FLAGS(LayoutFlags, LayoutFlag)
public slots:
QRawFont* new_QRawFont();
QRawFont* new_QRawFont(const QByteArray&  fontData, qreal  pixelSize, QFont::HintingPreference  hintingPreference = QFont::PreferDefaultHinting);
QRawFont* new_QRawFont(const QRawFont&  other);
QRawFont* new_QRawFont(const QString&  fileName, qreal  pixelSize, QFont::HintingPreference  hintingPreference = QFont::PreferDefaultHinting);
void delete_QRawFont(QRawFont* obj) { delete obj; } 
   QVector<QPointF >  advancesForGlyphIndexes(QRawFont* theWrappedObject, const QVector<unsigned int >&  glyphIndexes) const;
   QVector<QPointF >  advancesForGlyphIndexes(QRawFont* theWrappedObject, const QVector<unsigned int >&  glyphIndexes, QRawFont::LayoutFlags  layoutFlags) const;
   bool  advancesForGlyphIndexes(QRawFont* theWrappedObject, const unsigned int*  glyphIndexes, QPointF*  advances, int  numGlyphs) const;
   bool  advancesForGlyphIndexes(QRawFont* theWrappedObject, const unsigned int*  glyphIndexes, QPointF*  advances, int  numGlyphs, QRawFont::LayoutFlags  layoutFlags) const;
   QImage  alphaMapForGlyph(QRawFont* theWrappedObject, unsigned int  glyphIndex, QRawFont::AntialiasingType  antialiasingType = QRawFont::SubPixelAntialiasing, const QTransform&  transform = QTransform()) const;
   qreal  ascent(QRawFont* theWrappedObject) const;
   qreal  averageCharWidth(QRawFont* theWrappedObject) const;
   QRectF  boundingRect(QRawFont* theWrappedObject, unsigned int  glyphIndex) const;
   qreal  descent(QRawFont* theWrappedObject) const;
   QString  familyName(QRawFont* theWrappedObject) const;
   QByteArray  fontTable(QRawFont* theWrappedObject, const char*  tagName) const;
   QRawFont  static_QRawFont_fromFont(const QFont&  font, QFontDatabase::WritingSystem  writingSystem = QFontDatabase::Any);
   bool  glyphIndexesForChars(QRawFont* theWrappedObject, const QChar*  chars, int  numChars, unsigned int*  glyphIndexes, int*  numGlyphs) const;
   QVector<unsigned int >  glyphIndexesForString(QRawFont* theWrappedObject, const QString&  text) const;
   QFont::HintingPreference  hintingPreference(QRawFont* theWrappedObject) const;
   bool  isValid(QRawFont* theWrappedObject) const;
   qreal  leading(QRawFont* theWrappedObject) const;
   qreal  lineThickness(QRawFont* theWrappedObject) const;
   void loadFromData(QRawFont* theWrappedObject, const QByteArray&  fontData, qreal  pixelSize, QFont::HintingPreference  hintingPreference);
   void loadFromFile(QRawFont* theWrappedObject, const QString&  fileName, qreal  pixelSize, QFont::HintingPreference  hintingPreference);
   qreal  maxCharWidth(QRawFont* theWrappedObject) const;
   bool  __ne__(QRawFont* theWrappedObject, const QRawFont&  other) const;
   QRawFont*  operator_assign(QRawFont* theWrappedObject, const QRawFont&  other);
   bool  __eq__(QRawFont* theWrappedObject, const QRawFont&  other) const;
   QPainterPath  pathForGlyph(QRawFont* theWrappedObject, unsigned int  glyphIndex) const;
   qreal  pixelSize(QRawFont* theWrappedObject) const;
   void setPixelSize(QRawFont* theWrappedObject, qreal  pixelSize);
   QFont::Style  style(QRawFont* theWrappedObject) const;
   QString  styleName(QRawFont* theWrappedObject) const;
   QList<QFontDatabase::WritingSystem >  supportedWritingSystems(QRawFont* theWrappedObject) const;
   bool  supportsCharacter(QRawFont* theWrappedObject, QChar  character) const;
   bool  supportsCharacter(QRawFont* theWrappedObject, uint  ucs4) const;
   void swap(QRawFont* theWrappedObject, QRawFont&  other);
   qreal  underlinePosition(QRawFont* theWrappedObject) const;
   qreal  unitsPerEm(QRawFont* theWrappedObject) const;
   int  weight(QRawFont* theWrappedObject) const;
   qreal  xHeight(QRawFont* theWrappedObject) const;
};





class PythonQtShell_QRegExpValidator : public QRegExpValidator
{
public:
    PythonQtShell_QRegExpValidator(QObject*  parent = 0):QRegExpValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QRegExpValidator(const QRegExp&  rx, QObject*  parent = 0):QRegExpValidator(rx, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRegExpValidator();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  input, int&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRegExpValidator : public QRegExpValidator
{ public:
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QRegExpValidator::validate(input, pos); }
};

class PythonQtWrapper_QRegExpValidator : public QObject
{ Q_OBJECT
public:
public slots:
QRegExpValidator* new_QRegExpValidator(QObject*  parent = 0);
QRegExpValidator* new_QRegExpValidator(const QRegExp&  rx, QObject*  parent = 0);
void delete_QRegExpValidator(QRegExpValidator* obj) { delete obj; } 
   const QRegExp*  regExp(QRegExpValidator* theWrappedObject) const;
   void setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx);
   QValidator::State  validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const;
};





class PythonQtShell_QRegularExpressionValidator : public QRegularExpressionValidator
{
public:
    PythonQtShell_QRegularExpressionValidator(QObject*  parent = 0):QRegularExpressionValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QRegularExpressionValidator(const QRegularExpression&  re, QObject*  parent = 0):QRegularExpressionValidator(re, parent),_wrapper(NULL) {};

   ~PythonQtShell_QRegularExpressionValidator();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QValidator::State  validate(QString&  input, int&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRegularExpressionValidator : public QRegularExpressionValidator
{ public:
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QRegularExpressionValidator::validate(input, pos); }
};

class PythonQtWrapper_QRegularExpressionValidator : public QObject
{ Q_OBJECT
public:
public slots:
QRegularExpressionValidator* new_QRegularExpressionValidator(QObject*  parent = 0);
QRegularExpressionValidator* new_QRegularExpressionValidator(const QRegularExpression&  re, QObject*  parent = 0);
void delete_QRegularExpressionValidator(QRegularExpressionValidator* obj) { delete obj; } 
   QRegularExpression  regularExpression(QRegularExpressionValidator* theWrappedObject) const;
   QValidator::State  validate(QRegularExpressionValidator* theWrappedObject, QString&  input, int&  pos) const;
};


