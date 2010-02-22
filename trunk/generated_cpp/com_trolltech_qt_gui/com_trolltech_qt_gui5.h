#include <PythonQt.h>
#include <QAbstractTextDocumentLayout>
#include <QObject>
#include <QPainterPath>
#include <QPixmap>
#include <QPrinterInfo>
#include <QTextEdit>
#include <QVariant>
#include <QWidget>
#include <qabstractprintdialog.h>
#include <qaction.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdialog.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpictureformatplugin.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qplaintextedit.h>
#include <qplastiquestyle.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprintdialog.h>
#include <qprintengine.h>
#include <qprinter.h>
#include <qprintpreviewdialog.h>
#include <qprintpreviewwidget.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qpushbutton.h>
#include <qradiobutton.h>
#include <qreadwritelock.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qrubberband.h>
#include <qscrollarea.h>
#include <qscrollbar.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QPaintEngineState : public QPaintEngineState
{
public:
    PythonQtShell_QPaintEngineState():QPaintEngineState(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEngineState : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEngineState* new_QPaintEngineState();
void delete_QPaintEngineState(QPaintEngineState* obj) { delete obj; } 
   QBrush  backgroundBrush(QPaintEngineState* theWrappedObject) const;
   Qt::ClipOperation  clipOperation(QPaintEngineState* theWrappedObject) const;
   QTransform  transform(QPaintEngineState* theWrappedObject) const;
   QPaintEngine::DirtyFlags  state(QPaintEngineState* theWrappedObject) const;
   bool  penNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QFont  font(QPaintEngineState* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPaintEngineState* theWrappedObject) const;
   QPainter*  painter(QPaintEngineState* theWrappedObject) const;
   qreal  opacity(QPaintEngineState* theWrappedObject) const;
   QRegion  clipRegion(QPaintEngineState* theWrappedObject) const;
   QBrush  brush(QPaintEngineState* theWrappedObject) const;
   QPainterPath  clipPath(QPaintEngineState* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPaintEngineState* theWrappedObject) const;
   QPointF  brushOrigin(QPaintEngineState* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPaintEngineState* theWrappedObject) const;
   bool  isClipEnabled(QPaintEngineState* theWrappedObject) const;
   QPen  pen(QPaintEngineState* theWrappedObject) const;
   bool  brushNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QMatrix  matrix(QPaintEngineState* theWrappedObject) const;
};





class PythonQtShell_QPaintEvent : public QPaintEvent
{
public:
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(NULL) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; } 
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
};





class PythonQtWrapper_QPainter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompositionMode RenderHint )
Q_FLAGS(RenderHints )
enum CompositionMode{
  CompositionMode_SourceOver = QPainter::CompositionMode_SourceOver,   CompositionMode_DestinationOver = QPainter::CompositionMode_DestinationOver,   CompositionMode_Clear = QPainter::CompositionMode_Clear,   CompositionMode_Source = QPainter::CompositionMode_Source,   CompositionMode_Destination = QPainter::CompositionMode_Destination,   CompositionMode_SourceIn = QPainter::CompositionMode_SourceIn,   CompositionMode_DestinationIn = QPainter::CompositionMode_DestinationIn,   CompositionMode_SourceOut = QPainter::CompositionMode_SourceOut,   CompositionMode_DestinationOut = QPainter::CompositionMode_DestinationOut,   CompositionMode_SourceAtop = QPainter::CompositionMode_SourceAtop,   CompositionMode_DestinationAtop = QPainter::CompositionMode_DestinationAtop,   CompositionMode_Xor = QPainter::CompositionMode_Xor,   CompositionMode_Plus = QPainter::CompositionMode_Plus,   CompositionMode_Multiply = QPainter::CompositionMode_Multiply,   CompositionMode_Screen = QPainter::CompositionMode_Screen,   CompositionMode_Overlay = QPainter::CompositionMode_Overlay,   CompositionMode_Darken = QPainter::CompositionMode_Darken,   CompositionMode_Lighten = QPainter::CompositionMode_Lighten,   CompositionMode_ColorDodge = QPainter::CompositionMode_ColorDodge,   CompositionMode_ColorBurn = QPainter::CompositionMode_ColorBurn,   CompositionMode_HardLight = QPainter::CompositionMode_HardLight,   CompositionMode_SoftLight = QPainter::CompositionMode_SoftLight,   CompositionMode_Difference = QPainter::CompositionMode_Difference,   CompositionMode_Exclusion = QPainter::CompositionMode_Exclusion};
enum RenderHint{
  Antialiasing = QPainter::Antialiasing,   TextAntialiasing = QPainter::TextAntialiasing,   SmoothPixmapTransform = QPainter::SmoothPixmapTransform,   HighQualityAntialiasing = QPainter::HighQualityAntialiasing,   NonCosmeticDefaultPen = QPainter::NonCosmeticDefaultPen};
Q_DECLARE_FLAGS(RenderHints, RenderHint)
public slots:
QPainter* new_QPainter();
void delete_QPainter(QPainter* obj) { delete obj; } 
   QPainter::RenderHints  renderHints(QPainter* theWrappedObject) const;
   void drawPath(QPainter* theWrappedObject, const QPainterPath&  path);
   void setPen(QPainter* theWrappedObject, const QColor&  color);
   QTransform  combinedTransform(QPainter* theWrappedObject) const;
   void drawPoint(QPainter* theWrappedObject, int  x, int  y);
   void setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction);
   void drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void setBrush(QPainter* theWrappedObject, const QBrush&  brush);
   void drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles);
   void scale(QPainter* theWrappedObject, qreal  sx, qreal  sy);
   const QMatrix*  deviceMatrix(QPainter* theWrappedObject) const;
   void drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles);
   void setWindow(QPainter* theWrappedObject, const QRect&  window);
   void setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine = false);
   Qt::LayoutDirection  layoutDirection(QPainter* theWrappedObject) const;
   void drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void shear(QPainter* theWrappedObject, qreal  sh, qreal  sv);
   void drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void translate(QPainter* theWrappedObject, const QPoint&  offset);
   void translate(QPainter* theWrappedObject, qreal  dx, qreal  dy);
   bool  testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const;
   void translate(QPainter* theWrappedObject, const QPointF&  offset);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon);
   void setOpacity(QPainter* theWrappedObject, qreal  opacity);
   bool  worldMatrixEnabled(QPainter* theWrappedObject) const;
   void resetMatrix(QPainter* theWrappedObject);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon);
   qreal  opacity(QPainter* theWrappedObject) const;
   void drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs);
   void setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1);
   const QTransform*  deviceTransform(QPainter* theWrappedObject) const;
   void drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs);
   void drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines);
   void resetTransform(QPainter* theWrappedObject);
   void drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   QRect  boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text);
   QPainter::CompositionMode  compositionMode(QPainter* theWrappedObject) const;
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text);
   void save(QPainter* theWrappedObject);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o = QTextOption());
   void setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   QRect  boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text);
   const QPen*  pen(QPainter* theWrappedObject) const;
   void drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx = 0, int  sy = 0);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3 = QPoint());
   void drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset = QPointF());
   QRegion  clipRegion(QPainter* theWrappedObject) const;
   void strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen);
   QRect  viewport(QPainter* theWrappedObject) const;
   void setBrushOrigin(QPainter* theWrappedObject, int  x, int  y);
   void setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1);
   void setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on = true);
   Qt::BGMode  backgroundMode(QPainter* theWrappedObject) const;
   void setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   QPaintEngine*  paintEngine(QPainter* theWrappedObject) const;
   const QBrush*  brush(QPainter* theWrappedObject) const;
   void setViewport(QPainter* theWrappedObject, const QRect&  viewport);
   void drawPoints(QPainter* theWrappedObject, const QPolygon&  points);
   QPaintDevice*  device(QPainter* theWrappedObject) const;
   void drawPoints(QPainter* theWrappedObject, const QPolygonF&  points);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect);
   void restore(QPainter* theWrappedObject);
   void drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti);
   void setViewTransformEnabled(QPainter* theWrappedObject, bool  enable);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o = QTextOption());
   void drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti);
   void setBackground(QPainter* theWrappedObject, const QBrush&  bg);
   void drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br = 0);
   void drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br = 0);
   void drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br = 0);
   void drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s);
   void drawLine(QPainter* theWrappedObject, const QLine&  line);
   void drawLine(QPainter* theWrappedObject, const QLineF&  line);
   QPainterPath  clipPath(QPainter* theWrappedObject) const;
   const QFont*  font(QPainter* theWrappedObject) const;
   void drawPoint(QPainter* theWrappedObject, const QPoint&  p);
   void setBrush(QPainter* theWrappedObject, Qt::BrushStyle  style);
   bool  hasClipping(QPainter* theWrappedObject) const;
   const QTransform*  worldTransform(QPainter* theWrappedObject) const;
   void drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s);
   bool  isActive(QPainter* theWrappedObject) const;
   void drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture);
   const QBrush*  background(QPainter* theWrappedObject) const;
   QMatrix  combinedMatrix(QPainter* theWrappedObject) const;
   void drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   void drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture);
   bool  viewTransformEnabled(QPainter* theWrappedObject) const;
   void drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture);
   void drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   const QMatrix*  worldMatrix(QPainter* theWrappedObject) const;
   void drawPoint(QPainter* theWrappedObject, const QPointF&  pt);
   QPaintDevice*  static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset = 0);
   void setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on = true);
   void rotate(QPainter* theWrappedObject, qreal  a);
   void static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset = QPoint());
   void initFrom(QPainter* theWrappedObject, const QWidget*  widget);
   void drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void setFont(QPainter* theWrappedObject, const QFont&  f);
   const QTransform*  transform(QPainter* theWrappedObject) const;
   bool  begin(QPainter* theWrappedObject, QPaintDevice*  arg__1);
   void drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx = 0, int  sy = 0, int  sw = -1, int  sh = -1, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image);
   void setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2);
   void drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void setPen(QPainter* theWrappedObject, const QPen&  pen);
   void drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image);
   void drawRect(QPainter* theWrappedObject, const QRect&  rect);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5);
   void setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2);
   void drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry);
   void drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline);
   void drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled);
   void drawEllipse(QPainter* theWrappedObject, const QRect&  r);
   void drawEllipse(QPainter* theWrappedObject, const QRectF&  r);
   void drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setPen(QPainter* theWrappedObject, Qt::PenStyle  style);
   QPoint  brushOrigin(QPainter* theWrappedObject) const;
   void setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode);
   void drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h);
   void setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode);
   void eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void eraseRect(QPainter* theWrappedObject, const QRect&  arg__1);
   void drawRect(QPainter* theWrappedObject, const QRectF&  rect);
   void static_QPainter_restoreRedirected(const QPaintDevice*  device);
   void setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op = Qt::ReplaceClip);
   void fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush);
   bool  end(QPainter* theWrappedObject);
   void eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1);
   void setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround = 25, int  yround = 25);
   void drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   QRect  window(QPainter* theWrappedObject) const;
   void drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5 = 25, int  arg__6 = 25);
   void setClipping(QPainter* theWrappedObject, bool  enable);
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
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   qreal  length(QPainterPath* theWrappedObject) const;
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   const QPainterPath::Element*  elementAt(QPainterPath* theWrappedObject, int  i) const;
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   bool  operator_equal(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   int  elementCount(QPainterPath* theWrappedObject) const;
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   void closeSubpath(QPainterPath* theWrappedObject);
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QTransform&  m);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QMatrix&  m);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
    QString toString(QPainterPath*);
};





class PythonQtWrapper_QPainterPathStroker : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPathStroker* new_QPainterPathStroker();
void delete_QPainterPathStroker(QPainterPathStroker* obj) { delete obj; } 
   Qt::PenJoinStyle  joinStyle(QPainterPathStroker* theWrappedObject) const;
   qreal  curveThreshold(QPainterPathStroker* theWrappedObject) const;
   QVector<qreal >  dashPattern(QPainterPathStroker* theWrappedObject) const;
   void setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length);
   QPainterPath  createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const;
   void setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset);
   void setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style);
   void setWidth(QPainterPathStroker* theWrappedObject, qreal  width);
   qreal  dashOffset(QPainterPathStroker* theWrappedObject) const;
   void setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style);
   qreal  miterLimit(QPainterPathStroker* theWrappedObject) const;
   Qt::PenCapStyle  capStyle(QPainterPathStroker* theWrappedObject) const;
   void setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold);
   qreal  width(QPainterPathStroker* theWrappedObject) const;
   void setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern);
   void setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1);
};





class PythonQtShell_QPicture : public QPicture
{
public:
    PythonQtShell_QPicture(const QPicture&  arg__1):QPicture(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPicture(int  formatVersion = -1):QPicture(formatVersion),_wrapper(NULL) {};

virtual int  metric(QPaintDevice::PaintDeviceMetric  m) const;
virtual void setData(const char*  data, uint  size);
virtual QPaintEngine*  paintEngine() const;
virtual int  devType() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPicture : public QPicture
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  m) const { return QPicture::metric(m); }
inline QPaintEngine*  promoted_paintEngine() const { return QPicture::paintEngine(); }
inline int  promoted_devType() const { return QPicture::devType(); }
};

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public slots:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; } 
   int  metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const;
   bool  play(QPicture* theWrappedObject, QPainter*  p);
   const char*  data(QPicture* theWrappedObject) const;
   void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
   bool  load(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   bool  load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  isNull(QPicture* theWrappedObject) const;
   bool  save(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   bool  save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   QPaintEngine*  paintEngine(QPicture* theWrappedObject) const;
   QRect  boundingRect(QPicture* theWrappedObject) const;
   uint  size(QPicture* theWrappedObject) const;
   int  devType(QPicture* theWrappedObject) const;
   void writeTo(QPicture* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPicture* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtShell_QPictureFormatPlugin : public QPictureFormatPlugin
{
public:
    PythonQtShell_QPictureFormatPlugin(QObject*  parent = 0):QPictureFormatPlugin(parent),_wrapper(NULL) {};

virtual bool  savePicture(const QString&  format, const QString&  filename, const QPicture&  pic);
virtual QStringList  keys() const;
virtual bool  installIOHandler(const QString&  format);
virtual bool  loadPicture(const QString&  format, const QString&  filename, QPicture*  pic);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPictureFormatPlugin : public QPictureFormatPlugin
{ public:
inline bool  promoted_savePicture(const QString&  format, const QString&  filename, const QPicture&  pic) { return QPictureFormatPlugin::savePicture(format, filename, pic); }
inline bool  promoted_loadPicture(const QString&  format, const QString&  filename, QPicture*  pic) { return QPictureFormatPlugin::loadPicture(format, filename, pic); }
};

class PythonQtWrapper_QPictureFormatPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QPictureFormatPlugin* new_QPictureFormatPlugin(QObject*  parent = 0);
void delete_QPictureFormatPlugin(QPictureFormatPlugin* obj) { delete obj; } 
   bool  savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic);
   bool  loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic);
};





class PythonQtWrapper_QPictureIO : public QObject
{ Q_OBJECT
public:
public slots:
QPictureIO* new_QPictureIO();
QPictureIO* new_QPictureIO(QIODevice*  ioDevice, const char*  format);
QPictureIO* new_QPictureIO(const QString&  fileName, const char*  format);
void delete_QPictureIO(QPictureIO* obj) { delete obj; } 
   QString  fileName(QPictureIO* theWrappedObject) const;
   QIODevice*  ioDevice(QPictureIO* theWrappedObject) const;
   void setQuality(QPictureIO* theWrappedObject, int  arg__1);
   QList<QByteArray >  static_QPictureIO_inputFormats();
   float  gamma(QPictureIO* theWrappedObject) const;
   const char*  parameters(QPictureIO* theWrappedObject) const;
   const char*  format(QPictureIO* theWrappedObject) const;
   void setFileName(QPictureIO* theWrappedObject, const QString&  arg__1);
   QString  description(QPictureIO* theWrappedObject) const;
   int  status(QPictureIO* theWrappedObject) const;
   QByteArray  static_QPictureIO_pictureFormat(QIODevice*  arg__1);
   void setParameters(QPictureIO* theWrappedObject, const char*  arg__1);
   void setGamma(QPictureIO* theWrappedObject, float  arg__1);
   QByteArray  static_QPictureIO_pictureFormat(const QString&  fileName);
   int  quality(QPictureIO* theWrappedObject) const;
   bool  write(QPictureIO* theWrappedObject);
   void setFormat(QPictureIO* theWrappedObject, const char*  arg__1);
   void setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1);
   bool  read(QPictureIO* theWrappedObject);
   QList<QByteArray >  static_QPictureIO_outputFormats();
   void setDescription(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1);
   void setStatus(QPictureIO* theWrappedObject, int  arg__1);
   const QPicture*  picture(QPictureIO* theWrappedObject) const;
};





class PythonQtShell_QPixmapCache : public QPixmapCache
{
public:
    PythonQtShell_QPixmapCache():QPixmapCache(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; } 
   int  static_QPixmapCache_cacheLimit();
   void static_QPixmapCache_setCacheLimit(int  arg__1);
   void static_QPixmapCache_remove(const QString&  key);
   void static_QPixmapCache_clear();
   bool  static_QPixmapCache_find(const QString&  key, QPixmap&  arg__2);
   bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  arg__2);
};





class PythonQtShell_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{
public:
    PythonQtShell_QPlainTextDocumentLayout(QTextDocument*  document):QPlainTextDocumentLayout(document),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPlainTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextDocumentLayout* new_QPlainTextDocumentLayout(QTextDocument*  document);
void delete_QPlainTextDocumentLayout(QPlainTextDocumentLayout* obj) { delete obj; } 
   void ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   int  cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const;
   int  hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const;
   void setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width);
   QSizeF  documentSize(QPlainTextDocumentLayout* theWrappedObject) const;
   void draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2);
   QRectF  blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   QRectF  frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const;
   void requestUpdate(QPlainTextDocumentLayout* theWrappedObject);
   int  pageCount(QPlainTextDocumentLayout* theWrappedObject) const;
};





class PythonQtShell_QPlainTextEdit : public QPlainTextEdit
{
public:
    PythonQtShell_QPlainTextEdit(QWidget*  parent = 0):QPlainTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QPlainTextEdit(const QString&  text, QWidget*  parent = 0):QPlainTextEdit(text, parent),_wrapper(NULL) {};

virtual void showEvent(QShowEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void paintEvent(QPaintEvent*  e);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  event(QEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual QPaintEngine*  paintEngine() const;
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlainTextEdit : public QPlainTextEdit
{ public:
inline void promoted_showEvent(QShowEvent*  arg__1) { QPlainTextEdit::showEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QPlainTextEdit::focusInEvent(e); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QPlainTextEdit::canInsertFromMimeData(source); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QPlainTextEdit::mouseReleaseEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QPlainTextEdit::createMimeDataFromSelection(); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QPlainTextEdit::keyPressEvent(e); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QPlainTextEdit::mousePressEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QPlainTextEdit::mouseDoubleClickEvent(e); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QPlainTextEdit::inputMethodQuery(property); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QPlainTextEdit::insertFromMimeData(source); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QPlainTextEdit::dragEnterEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QPlainTextEdit::dropEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QPlainTextEdit::resizeEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QPlainTextEdit::dragMoveEvent(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QPlainTextEdit::mouseMoveEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QPlainTextEdit::changeEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QPlainTextEdit::dragLeaveEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QPlainTextEdit::keyReleaseEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QPlainTextEdit::inputMethodEvent(arg__1); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QPlainTextEdit::loadResource(type, name); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QPlainTextEdit::scrollContentsBy(dx, dy); }
inline void promoted_paintEvent(QPaintEvent*  e) { QPlainTextEdit::paintEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QPlainTextEdit::contextMenuEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QPlainTextEdit::wheelEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QPlainTextEdit::focusOutEvent(e); }
inline void promoted_timerEvent(QTimerEvent*  e) { QPlainTextEdit::timerEvent(e); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QPlainTextEdit::focusNextPrevChild(next); }
inline bool  promoted_event(QEvent*  e) { return QPlainTextEdit::event(e); }
};

class PythonQtWrapper_QPlainTextEdit : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextEdit* new_QPlainTextEdit(QWidget*  parent = 0);
QPlainTextEdit* new_QPlainTextEdit(const QString&  text, QWidget*  parent = 0);
void delete_QPlainTextEdit(QPlainTextEdit* obj) { delete obj; } 
   void setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum);
   void showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1);
   void focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
   QRect  cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   QRect  cursorRect(QPlainTextEdit* theWrappedObject) const;
   void setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   QList<QTextEdit::ExtraSelection >  extraSelections(QPlainTextEdit* theWrappedObject) const;
   bool  canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const;
   QTextCursor  cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   QTextOption::WrapMode  wordWrapMode(QPlainTextEdit* theWrappedObject) const;
   void mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   int  maximumBlockCount(QPlainTextEdit* theWrappedObject) const;
   void ensureCursorVisible(QPlainTextEdit* theWrappedObject);
   void mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   QMimeData*  createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const;
   void keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
   void setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document);
   void setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible);
   void setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode);
   void mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   void setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite);
   int  tabStopWidth(QPlainTextEdit* theWrappedObject) const;
   void setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable);
   int  cursorWidth(QPlainTextEdit* theWrappedObject) const;
   void mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   QPlainTextEdit::LineWrapMode  lineWrapMode(QPlainTextEdit* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QPlainTextEdit* theWrappedObject) const;
   QString  documentTitle(QPlainTextEdit* theWrappedObject) const;
   int  blockCount(QPlainTextEdit* theWrappedObject) const;
   void setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   QTextCharFormat  currentCharFormat(QPlainTextEdit* theWrappedObject) const;
   void setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   void setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source);
   void dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e);
   void dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e);
   void resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e);
   bool  canPaste(QPlainTextEdit* theWrappedObject) const;
   QTextCursor  textCursor(QPlainTextEdit* theWrappedObject) const;
   void setCursorWidth(QPlainTextEdit* theWrappedObject, int  width);
   bool  tabChangesFocus(QPlainTextEdit* theWrappedObject) const;
   void dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e);
   bool  overwriteMode(QPlainTextEdit* theWrappedObject) const;
   void setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title);
   void mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   bool  backgroundVisible(QPlainTextEdit* theWrappedObject) const;
   void changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e);
   void dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   void keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject);
   bool  find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   void print(QPlainTextEdit* theWrappedObject, QPrinter*  printer) const;
   void inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   QVariant  loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name);
   bool  isReadOnly(QPlainTextEdit* theWrappedObject) const;
   bool  centerOnScroll(QPlainTextEdit* theWrappedObject) const;
   void setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro);
   void scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy);
   void setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b);
   void setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width);
   void paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e);
   QTextDocument*  document(QPlainTextEdit* theWrappedObject) const;
   QString  toPlainText(QPlainTextEdit* theWrappedObject) const;
   void setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled);
   void contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e);
   bool  isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const;
   void wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e);
   void focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
   void timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e);
   bool  focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next);
   bool  event(QPlainTextEdit* theWrappedObject, QEvent*  e);
};





class PythonQtShell_QPlastiqueStyle : public QPlastiqueStyle
{
public:
    PythonQtShell_QPlastiqueStyle():QPlastiqueStyle(),_wrapper(NULL) {};

virtual QPalette  standardPalette() const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
virtual QSize  sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
virtual void unpolish(QWidget*  widget);
virtual void unpolish(QApplication*  app);
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const;
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
virtual void polish(QPalette&  pal);
virtual void polish(QApplication*  app);
virtual void polish(QWidget*  widget);
virtual QRect  subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const;
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlastiqueStyle : public QPlastiqueStyle
{ public:
inline QPalette  promoted_standardPalette() const { return QPlastiqueStyle::standardPalette(); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QPlastiqueStyle::styleHint(hint, option, widget, returnData); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const { return QPlastiqueStyle::subControlRect(cc, opt, sc, widget); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const { return QPlastiqueStyle::sizeFromContents(type, option, size, widget); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const { QPlastiqueStyle::drawControl(element, option, painter, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QPlastiqueStyle::pixelMetric(metric, option, widget); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const { QPlastiqueStyle::drawPrimitive(element, option, painter, widget); }
inline void promoted_unpolish(QWidget*  widget) { QPlastiqueStyle::unpolish(widget); }
inline void promoted_unpolish(QApplication*  app) { QPlastiqueStyle::unpolish(app); }
inline QStyle::SubControl  promoted_hitTestComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const { return QPlastiqueStyle::hitTestComplexControl(control, option, pos, widget); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QPlastiqueStyle::eventFilter(watched, event); }
inline void promoted_timerEvent(QTimerEvent*  event) { QPlastiqueStyle::timerEvent(event); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const { QPlastiqueStyle::drawComplexControl(control, option, painter, widget); }
inline void promoted_polish(QPalette&  pal) { QPlastiqueStyle::polish(pal); }
inline void promoted_polish(QApplication*  app) { QPlastiqueStyle::polish(app); }
inline void promoted_polish(QWidget*  widget) { QPlastiqueStyle::polish(widget); }
inline QRect  promoted_subElementRect(QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const { return QPlastiqueStyle::subElementRect(element, option, widget); }
};

class PythonQtWrapper_QPlastiqueStyle : public QObject
{ Q_OBJECT
public:
public slots:
QPlastiqueStyle* new_QPlastiqueStyle();
void delete_QPlastiqueStyle(QPlastiqueStyle* obj) { delete obj; } 
   QPalette  standardPalette(QPlastiqueStyle* theWrappedObject) const;
   int  styleHint(QPlastiqueStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   QRect  subControlRect(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
   QSize  sizeFromContents(QPlastiqueStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
   void drawControl(QPlastiqueStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
   int  pixelMetric(QPlastiqueStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   void drawPrimitive(QPlastiqueStyle* theWrappedObject, QStyle::PrimitiveElement  element, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
   void unpolish(QPlastiqueStyle* theWrappedObject, QWidget*  widget);
   void unpolish(QPlastiqueStyle* theWrappedObject, QApplication*  app);
   QStyle::SubControl  hitTestComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, const QPoint&  pos, const QWidget*  widget = 0) const;
   bool  eventFilter(QPlastiqueStyle* theWrappedObject, QObject*  watched, QEvent*  event);
   void timerEvent(QPlastiqueStyle* theWrappedObject, QTimerEvent*  event);
   void drawComplexControl(QPlastiqueStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
   void polish(QPlastiqueStyle* theWrappedObject, QPalette&  pal);
   void polish(QPlastiqueStyle* theWrappedObject, QApplication*  app);
   void polish(QPlastiqueStyle* theWrappedObject, QWidget*  widget);
   QRect  subElementRect(QPlastiqueStyle* theWrappedObject, QStyle::SubElement  element, const QStyleOption*  option, const QWidget*  widget) const;
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
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   bool  isClosed(QPolygonF* theWrappedObject) const;
   void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
   void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void append(QPolygonF* theWrappedObject, const QPointF&  t);
   QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
   void squeeze(QPolygonF* theWrappedObject);
   int  size(QPolygonF* theWrappedObject) const;
   void setSharable(QPolygonF* theWrappedObject, bool  sharable);
   void reserve(QPolygonF* theWrappedObject, int  size);
   void replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t);
   void remove(QPolygonF* theWrappedObject, int  i, int  n);
   void remove(QPolygonF* theWrappedObject, int  i);
   void push_front(QPolygonF* theWrappedObject, const QPointF&  t);
   const QPointF*  first(QPolygonF* theWrappedObject) const;
   bool  empty(QPolygonF* theWrappedObject) const;
   int  count(QPolygonF* theWrappedObject) const;
   bool  contains(QPolygonF* theWrappedObject, const QPointF&  t) const;
   const QPointF*  at(QPolygonF* theWrappedObject, int  i) const;
   int  lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   int  capacity(QPolygonF* theWrappedObject) const;
   void clear(QPolygonF* theWrappedObject);
   int  count(QPolygonF* theWrappedObject, const QPointF&  t) const;
   QVector<QPointF >*  fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size);
   bool  isEmpty(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  static_QPolygonF_fromList(const QList<QPointF >&  list);
   void push_back(QPolygonF* theWrappedObject, const QPointF&  t);
   int  indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   void prepend(QPolygonF* theWrappedObject, const QPointF&  t);
   void pop_front(QPolygonF* theWrappedObject);
   const QPointF*  last(QPolygonF* theWrappedObject) const;
   bool  operator_equal(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   QVector<QPointF >  mid(QPolygonF* theWrappedObject, int  pos, int  length) const;
   void pop_back(QPolygonF* theWrappedObject);
   QPointF  value(QPolygonF* theWrappedObject, int  i) const;
   void resize(QPolygonF* theWrappedObject, int  size);
   QPointF  value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const;
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QTransform&  m);
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QMatrix&  m);
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
    QString toString(QPolygonF*);
};





class PythonQtShell_QPrintDialog : public QPrintDialog
{
public:
    PythonQtShell_QPrintDialog(QPrinter*  printer, QWidget*  parent = 0):QPrintDialog(printer, parent),_wrapper(NULL) {};

virtual void closeEvent(QCloseEvent*  arg__1);
virtual int  exec();
virtual void accept();
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void reject();
virtual void done(int  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPrintDialog : public QPrintDialog
{ public:
inline int  promoted_exec() { return QPrintDialog::exec(); }
};

class PythonQtWrapper_QPrintDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPrintDialog* new_QPrintDialog(QPrinter*  printer, QWidget*  parent = 0);
void delete_QPrintDialog(QPrintDialog* obj) { delete obj; } 
   int  exec(QPrintDialog* theWrappedObject);
};





class PythonQtShell_QPrintEngine : public QPrintEngine
{
public:
    PythonQtShell_QPrintEngine():QPrintEngine(),_wrapper(NULL) {};

virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPrinter::PrinterState  printerState() const;
virtual bool  newPage();
virtual bool  abort();
virtual QVariant  property(QPrintEngine::PrintEnginePropertyKey  key) const;
virtual void setProperty(QPrintEngine::PrintEnginePropertyKey  key, const QVariant&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPrintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PrintEnginePropertyKey )
enum PrintEnginePropertyKey{
  PPK_CollateCopies = QPrintEngine::PPK_CollateCopies,   PPK_ColorMode = QPrintEngine::PPK_ColorMode,   PPK_Creator = QPrintEngine::PPK_Creator,   PPK_DocumentName = QPrintEngine::PPK_DocumentName,   PPK_FullPage = QPrintEngine::PPK_FullPage,   PPK_NumberOfCopies = QPrintEngine::PPK_NumberOfCopies,   PPK_Orientation = QPrintEngine::PPK_Orientation,   PPK_OutputFileName = QPrintEngine::PPK_OutputFileName,   PPK_PageOrder = QPrintEngine::PPK_PageOrder,   PPK_PageRect = QPrintEngine::PPK_PageRect,   PPK_PageSize = QPrintEngine::PPK_PageSize,   PPK_PaperRect = QPrintEngine::PPK_PaperRect,   PPK_PaperSource = QPrintEngine::PPK_PaperSource,   PPK_PrinterName = QPrintEngine::PPK_PrinterName,   PPK_PrinterProgram = QPrintEngine::PPK_PrinterProgram,   PPK_Resolution = QPrintEngine::PPK_Resolution,   PPK_SelectionOption = QPrintEngine::PPK_SelectionOption,   PPK_SupportedResolutions = QPrintEngine::PPK_SupportedResolutions,   PPK_WindowsPageSize = QPrintEngine::PPK_WindowsPageSize,   PPK_FontEmbedding = QPrintEngine::PPK_FontEmbedding,   PPK_SuppressSystemPrintStatus = QPrintEngine::PPK_SuppressSystemPrintStatus,   PPK_Duplex = QPrintEngine::PPK_Duplex,   PPK_PaperSources = QPrintEngine::PPK_PaperSources,   PPK_CustomPaperSize = QPrintEngine::PPK_CustomPaperSize,   PPK_PageMargins = QPrintEngine::PPK_PageMargins,   PPK_PaperSize = QPrintEngine::PPK_PaperSize,   PPK_CustomBase = QPrintEngine::PPK_CustomBase};
public slots:
QPrintEngine* new_QPrintEngine();
void delete_QPrintEngine(QPrintEngine* obj) { delete obj; } 
};





class PythonQtShell_QPrintPreviewDialog : public QPrintPreviewDialog
{
public:
    PythonQtShell_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewDialog(printer, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QPrintPreviewDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewDialog(parent, flags),_wrapper(NULL) {};

virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void accept();
virtual void reject();
virtual void done(int  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPrintPreviewDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPrintPreviewDialog* new_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QPrintPreviewDialog* new_QPrintPreviewDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QPrintPreviewDialog(QPrintPreviewDialog* obj) { delete obj; } 
};





class PythonQtShell_QPrintPreviewWidget : public QPrintPreviewWidget
{
public:
    PythonQtShell_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewWidget(printer, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QPrintPreviewWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewWidget(parent, flags),_wrapper(NULL) {};

virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void changeEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void languageChange();
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual QSize  sizeHint() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPrintPreviewWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ZoomMode ViewMode )
enum ZoomMode{
  CustomZoom = QPrintPreviewWidget::CustomZoom,   FitToWidth = QPrintPreviewWidget::FitToWidth,   FitInView = QPrintPreviewWidget::FitInView};
enum ViewMode{
  SinglePageView = QPrintPreviewWidget::SinglePageView,   FacingPagesView = QPrintPreviewWidget::FacingPagesView,   AllPagesView = QPrintPreviewWidget::AllPagesView};
public slots:
QPrintPreviewWidget* new_QPrintPreviewWidget(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QPrintPreviewWidget* new_QPrintPreviewWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QPrintPreviewWidget(QPrintPreviewWidget* obj) { delete obj; } 
   qreal  zoomFactor(QPrintPreviewWidget* theWrappedObject) const;
   QPrintPreviewWidget::ZoomMode  zoomMode(QPrintPreviewWidget* theWrappedObject) const;
   int  currentPage(QPrintPreviewWidget* theWrappedObject) const;
   int  numPages(QPrintPreviewWidget* theWrappedObject) const;
   void setVisible(QPrintPreviewWidget* theWrappedObject, bool  visible);
   QPrintPreviewWidget::ViewMode  viewMode(QPrintPreviewWidget* theWrappedObject) const;
   QPrinter::Orientation  orientation(QPrintPreviewWidget* theWrappedObject) const;
};





class PythonQtShell_QPrinter : public QPrinter
{
public:
    PythonQtShell_QPrinter(QPrinter::PrinterMode  mode = QPrinter::ScreenResolution):QPrinter(mode),_wrapper(NULL) {};
    PythonQtShell_QPrinter(const QPrinterInfo&  printer, QPrinter::PrinterMode  mode = QPrinter::ScreenResolution):QPrinter(printer, mode),_wrapper(NULL) {};

virtual QPaintEngine*  paintEngine() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  devType() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPrinter : public QPrinter
{ public:
inline QPaintEngine*  promoted_paintEngine() const { return QPrinter::paintEngine(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QPrinter::metric(arg__1); }
inline int  promoted_devType() const { return QPrinter::devType(); }
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
   bool  abort(QPrinter* theWrappedObject);
   void setPageSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1);
   QString  printerName(QPrinter* theWrappedObject) const;
   QRect  pageRect(QPrinter* theWrappedObject) const;
   QString  outputFileName(QPrinter* theWrappedObject) const;
   QRectF  pageRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const;
   bool  fontEmbeddingEnabled(QPrinter* theWrappedObject) const;
   QPrinter::DuplexMode  duplex(QPrinter* theWrappedObject) const;
   bool  newPage(QPrinter* theWrappedObject);
   void setColorMode(QPrinter* theWrappedObject, QPrinter::ColorMode  arg__1);
   void setDuplex(QPrinter* theWrappedObject, QPrinter::DuplexMode  duplex);
   int  fromPage(QPrinter* theWrappedObject) const;
   void setOrientation(QPrinter* theWrappedObject, QPrinter::Orientation  arg__1);
   QPrinter::Orientation  orientation(QPrinter* theWrappedObject) const;
   void setFullPage(QPrinter* theWrappedObject, bool  arg__1);
   QSizeF  paperSize(QPrinter* theWrappedObject, QPrinter::Unit  unit) const;
   QPaintEngine*  paintEngine(QPrinter* theWrappedObject) const;
   void setFromTo(QPrinter* theWrappedObject, int  fromPage, int  toPage);
   QPrintEngine*  printEngine(QPrinter* theWrappedObject) const;
   QPrinter::PrinterState  printerState(QPrinter* theWrappedObject) const;
   bool  collateCopies(QPrinter* theWrappedObject) const;
   void setOutputFileName(QPrinter* theWrappedObject, const QString&  arg__1);
   QPrinter::PrintRange  printRange(QPrinter* theWrappedObject) const;
   void setDocName(QPrinter* theWrappedObject, const QString&  arg__1);
   int  metric(QPrinter* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   void setCreator(QPrinter* theWrappedObject, const QString&  arg__1);
   QRect  paperRect(QPrinter* theWrappedObject) const;
   QRectF  paperRect(QPrinter* theWrappedObject, QPrinter::Unit  arg__1) const;
   void setOutputFormat(QPrinter* theWrappedObject, QPrinter::OutputFormat  format);
   QPrinter::PageSize  paperSize(QPrinter* theWrappedObject) const;
   void setPrintProgram(QPrinter* theWrappedObject, const QString&  arg__1);
   QPrinter::ColorMode  colorMode(QPrinter* theWrappedObject) const;
   void setPageMargins(QPrinter* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom, QPrinter::Unit  unit);
   int  numCopies(QPrinter* theWrappedObject) const;
   QList<int >  supportedResolutions(QPrinter* theWrappedObject) const;
   void setFontEmbeddingEnabled(QPrinter* theWrappedObject, bool  enable);
   void getPageMargins(QPrinter* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom, QPrinter::Unit  unit) const;
   void setPaperSource(QPrinter* theWrappedObject, QPrinter::PaperSource  arg__1);
   void setNumCopies(QPrinter* theWrappedObject, int  arg__1);
   QString  docName(QPrinter* theWrappedObject) const;
   QString  creator(QPrinter* theWrappedObject) const;
   void setResolution(QPrinter* theWrappedObject, int  arg__1);
   void setPageOrder(QPrinter* theWrappedObject, QPrinter::PageOrder  arg__1);
   void setPrinterName(QPrinter* theWrappedObject, const QString&  arg__1);
   bool  doubleSidedPrinting(QPrinter* theWrappedObject) const;
   void setPaperSize(QPrinter* theWrappedObject, const QSizeF&  paperSize, QPrinter::Unit  unit);
   void setPaperSize(QPrinter* theWrappedObject, QPrinter::PageSize  arg__1);
   bool  isValid(QPrinter* theWrappedObject) const;
   QPrinter::OutputFormat  outputFormat(QPrinter* theWrappedObject) const;
   bool  fullPage(QPrinter* theWrappedObject) const;
   QString  printProgram(QPrinter* theWrappedObject) const;
   int  devType(QPrinter* theWrappedObject) const;
   QPrinter::PaperSource  paperSource(QPrinter* theWrappedObject) const;
   QPrinter::PageOrder  pageOrder(QPrinter* theWrappedObject) const;
   QPrinter::PageSize  pageSize(QPrinter* theWrappedObject) const;
   int  resolution(QPrinter* theWrappedObject) const;
   int  toPage(QPrinter* theWrappedObject) const;
   void setDoubleSidedPrinting(QPrinter* theWrappedObject, bool  enable);
   void setCollateCopies(QPrinter* theWrappedObject, bool  collate);
   void setPrintRange(QPrinter* theWrappedObject, QPrinter::PrintRange  range);
};





class PythonQtShell_QProgressBar : public QProgressBar
{
public:
    PythonQtShell_QProgressBar(QWidget*  parent = 0):QProgressBar(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual QString  text() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressBar : public QProgressBar
{ public:
inline bool  promoted_event(QEvent*  e) { return QProgressBar::event(e); }
inline QString  promoted_text() const { return QProgressBar::text(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QProgressBar::paintEvent(arg__1); }
};

class PythonQtWrapper_QProgressBar : public QObject
{ Q_OBJECT
public:
public slots:
QProgressBar* new_QProgressBar(QWidget*  parent = 0);
void delete_QProgressBar(QProgressBar* obj) { delete obj; } 
   int  minimum(QProgressBar* theWrappedObject) const;
   QProgressBar::Direction  textDirection(QProgressBar* theWrappedObject);
   int  value(QProgressBar* theWrappedObject) const;
   QString  format(QProgressBar* theWrappedObject) const;
   bool  invertedAppearance(QProgressBar* theWrappedObject);
   Qt::Alignment  alignment(QProgressBar* theWrappedObject) const;
   void setAlignment(QProgressBar* theWrappedObject, Qt::Alignment  alignment);
   bool  isTextVisible(QProgressBar* theWrappedObject) const;
   void setTextDirection(QProgressBar* theWrappedObject, QProgressBar::Direction  textDirection);
   bool  event(QProgressBar* theWrappedObject, QEvent*  e);
   QString  text(QProgressBar* theWrappedObject) const;
   Qt::Orientation  orientation(QProgressBar* theWrappedObject) const;
   void setFormat(QProgressBar* theWrappedObject, const QString&  format);
   QSize  sizeHint(QProgressBar* theWrappedObject) const;
   void setTextVisible(QProgressBar* theWrappedObject, bool  visible);
   void setInvertedAppearance(QProgressBar* theWrappedObject, bool  invert);
   int  maximum(QProgressBar* theWrappedObject) const;
   QSize  minimumSizeHint(QProgressBar* theWrappedObject) const;
   void paintEvent(QProgressBar* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtShell_QProgressDialog : public QProgressDialog
{
public:
    PythonQtShell_QProgressDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QProgressDialog(parent, f),_wrapper(NULL) {};
    PythonQtShell_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = 0, Qt::WindowFlags  f = 0):QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, f),_wrapper(NULL) {};

virtual void closeEvent(QCloseEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void accept();
virtual void reject();
virtual void done(int  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProgressDialog : public QProgressDialog
{ public:
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QProgressDialog::closeEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QProgressDialog::changeEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QProgressDialog::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  e) { QProgressDialog::showEvent(e); }
};

class PythonQtWrapper_QProgressDialog : public QObject
{ Q_OBJECT
public:
public slots:
QProgressDialog* new_QProgressDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
QProgressDialog* new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QProgressDialog(QProgressDialog* obj) { delete obj; } 
   void setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button);
   void setLabel(QProgressDialog* theWrappedObject, QLabel*  label);
   int  minimumDuration(QProgressDialog* theWrappedObject) const;
   void closeEvent(QProgressDialog* theWrappedObject, QCloseEvent*  arg__1);
   void changeEvent(QProgressDialog* theWrappedObject, QEvent*  arg__1);
   void setAutoClose(QProgressDialog* theWrappedObject, bool  b);
   void setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar);
   void resizeEvent(QProgressDialog* theWrappedObject, QResizeEvent*  arg__1);
   int  value(QProgressDialog* theWrappedObject) const;
   QString  labelText(QProgressDialog* theWrappedObject) const;
   void showEvent(QProgressDialog* theWrappedObject, QShowEvent*  e);
   bool  autoReset(QProgressDialog* theWrappedObject) const;
   int  minimum(QProgressDialog* theWrappedObject) const;
   QSize  sizeHint(QProgressDialog* theWrappedObject) const;
   int  maximum(QProgressDialog* theWrappedObject) const;
   bool  autoClose(QProgressDialog* theWrappedObject) const;
   bool  wasCanceled(QProgressDialog* theWrappedObject) const;
   void setAutoReset(QProgressDialog* theWrappedObject, bool  b);
};





class PythonQtShell_QPushButton : public QPushButton
{
public:
    PythonQtShell_QPushButton(QWidget*  parent = 0):QPushButton(parent),_wrapper(NULL) {};
    PythonQtShell_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = 0):QPushButton(icon, text, parent),_wrapper(NULL) {};
    PythonQtShell_QPushButton(const QString&  text, QWidget*  parent = 0):QPushButton(text, parent),_wrapper(NULL) {};

virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void nextCheckState();
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual bool  hitButton(const QPoint&  pos) const;
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPushButton : public QPushButton
{ public:
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QPushButton::focusInEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QPushButton::paintEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QPushButton::event(e); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QPushButton::focusOutEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QPushButton::keyPressEvent(arg__1); }
};

class PythonQtWrapper_QPushButton : public QObject
{ Q_OBJECT
public:
public slots:
QPushButton* new_QPushButton(QWidget*  parent = 0);
QPushButton* new_QPushButton(const QIcon&  icon, const QString&  text, QWidget*  parent = 0);
QPushButton* new_QPushButton(const QString&  text, QWidget*  parent = 0);
void delete_QPushButton(QPushButton* obj) { delete obj; } 
   QMenu*  menu(QPushButton* theWrappedObject) const;
   void focusInEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1);
   void paintEvent(QPushButton* theWrappedObject, QPaintEvent*  arg__1);
   void setFlat(QPushButton* theWrappedObject, bool  arg__1);
   bool  isDefault(QPushButton* theWrappedObject) const;
   void setMenu(QPushButton* theWrappedObject, QMenu*  menu);
   bool  event(QPushButton* theWrappedObject, QEvent*  e);
   bool  autoDefault(QPushButton* theWrappedObject) const;
   bool  isFlat(QPushButton* theWrappedObject) const;
   void focusOutEvent(QPushButton* theWrappedObject, QFocusEvent*  arg__1);
   QSize  sizeHint(QPushButton* theWrappedObject) const;
   void keyPressEvent(QPushButton* theWrappedObject, QKeyEvent*  arg__1);
   QSize  minimumSizeHint(QPushButton* theWrappedObject) const;
   void setAutoDefault(QPushButton* theWrappedObject, bool  arg__1);
   void setDefault(QPushButton* theWrappedObject, bool  arg__1);
};





class PythonQtWrapper_QRadialGradient : public QObject
{ Q_OBJECT
public:
public slots:
QRadialGradient* new_QRadialGradient();
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy);
QRadialGradient* new_QRadialGradient(const QRadialGradient& other) {
QRadialGradient* a = new QRadialGradient();
*((QRadialGradient*)a) = other;
return a; }
void delete_QRadialGradient(QRadialGradient* obj) { delete obj; } 
   void setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setRadius(QRadialGradient* theWrappedObject, qreal  radius);
   QPointF  focalPoint(QRadialGradient* theWrappedObject) const;
   QPointF  center(QRadialGradient* theWrappedObject) const;
   qreal  radius(QRadialGradient* theWrappedObject) const;
   void setCenter(QRadialGradient* theWrappedObject, const QPointF&  center);
   void setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint);
};





class PythonQtShell_QRadioButton : public QRadioButton
{
public:
    PythonQtShell_QRadioButton(QWidget*  parent = 0):QRadioButton(parent),_wrapper(NULL) {};
    PythonQtShell_QRadioButton(const QString&  text, QWidget*  parent = 0):QRadioButton(text, parent),_wrapper(NULL) {};

virtual bool  hitButton(const QPoint&  arg__1) const;
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  e);
virtual void nextCheckState();
virtual void changeEvent(QEvent*  e);
virtual void checkStateSet();
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRadioButton : public QRadioButton
{ public:
inline bool  promoted_hitButton(const QPoint&  arg__1) const { return QRadioButton::hitButton(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QRadioButton::mouseMoveEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QRadioButton::event(e); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QRadioButton::paintEvent(arg__1); }
};

class PythonQtWrapper_QRadioButton : public QObject
{ Q_OBJECT
public:
public slots:
QRadioButton* new_QRadioButton(QWidget*  parent = 0);
QRadioButton* new_QRadioButton(const QString&  text, QWidget*  parent = 0);
void delete_QRadioButton(QRadioButton* obj) { delete obj; } 
   QSize  sizeHint(QRadioButton* theWrappedObject) const;
   bool  hitButton(QRadioButton* theWrappedObject, const QPoint&  arg__1) const;
   void mouseMoveEvent(QRadioButton* theWrappedObject, QMouseEvent*  arg__1);
   bool  event(QRadioButton* theWrappedObject, QEvent*  e);
   void paintEvent(QRadioButton* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
QReadWriteLock* new_QReadWriteLock();
QReadWriteLock* new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode);
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; } 
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   void lockForRead(QReadWriteLock* theWrappedObject);
   void lockForWrite(QReadWriteLock* theWrappedObject);
   void unlock(QReadWriteLock* theWrappedObject);
};





class PythonQtShell_QRegExpValidator : public QRegExpValidator
{
public:
    PythonQtShell_QRegExpValidator(QObject*  parent):QRegExpValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QRegExpValidator(const QRegExp&  rx, QObject*  parent):QRegExpValidator(rx, parent),_wrapper(NULL) {};

virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void fixup(QString&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
QRegExpValidator* new_QRegExpValidator(QObject*  parent);
QRegExpValidator* new_QRegExpValidator(const QRegExp&  rx, QObject*  parent);
void delete_QRegExpValidator(QRegExpValidator* obj) { delete obj; } 
   const QRegExp*  regExp(QRegExpValidator* theWrappedObject) const;
   QValidator::State  validate(QRegExpValidator* theWrappedObject, QString&  input, int&  pos) const;
   void setRegExp(QRegExpValidator* theWrappedObject, const QRegExp&  rx);
};





class PythonQtShell_QResizeEvent : public QResizeEvent
{
public:
    PythonQtShell_QResizeEvent(const QSize&  size, const QSize&  oldSize):QResizeEvent(size, oldSize),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QResizeEvent* new_QResizeEvent(const QSize&  size, const QSize&  oldSize);
void delete_QResizeEvent(QResizeEvent* obj) { delete obj; } 
   const QSize*  size(QResizeEvent* theWrappedObject) const;
   const QSize*  oldSize(QResizeEvent* theWrappedObject) const;
};





class PythonQtShell_QRubberBand : public QRubberBand
{
public:
    PythonQtShell_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2 = 0):QRubberBand(arg__1, arg__2),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void changeEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual QSize  sizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QRubberBand : public QRubberBand
{ public:
inline bool  promoted_event(QEvent*  e) { return QRubberBand::event(e); }
inline void promoted_changeEvent(QEvent*  arg__1) { QRubberBand::changeEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QRubberBand::moveEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QRubberBand::showEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QRubberBand::resizeEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QRubberBand::paintEvent(arg__1); }
};

class PythonQtWrapper_QRubberBand : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Shape )
enum Shape{
  Line = QRubberBand::Line,   Rectangle = QRubberBand::Rectangle};
public slots:
QRubberBand* new_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2 = 0);
void delete_QRubberBand(QRubberBand* obj) { delete obj; } 
   bool  event(QRubberBand* theWrappedObject, QEvent*  e);
   void resize(QRubberBand* theWrappedObject, const QSize&  s);
   void resize(QRubberBand* theWrappedObject, int  w, int  h);
   void setGeometry(QRubberBand* theWrappedObject, int  x, int  y, int  w, int  h);
   void setGeometry(QRubberBand* theWrappedObject, const QRect&  r);
   void changeEvent(QRubberBand* theWrappedObject, QEvent*  arg__1);
   void moveEvent(QRubberBand* theWrappedObject, QMoveEvent*  arg__1);
   void move(QRubberBand* theWrappedObject, const QPoint&  p);
   void move(QRubberBand* theWrappedObject, int  x, int  y);
   QRubberBand::Shape  shape(QRubberBand* theWrappedObject) const;
   void showEvent(QRubberBand* theWrappedObject, QShowEvent*  arg__1);
   void resizeEvent(QRubberBand* theWrappedObject, QResizeEvent*  arg__1);
   void paintEvent(QRubberBand* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtShell_QScrollArea : public QScrollArea
{
public:
    PythonQtShell_QScrollArea(QWidget*  parent = 0):QScrollArea(parent),_wrapper(NULL) {};

virtual void scrollContentsBy(int  dx, int  dy);
virtual bool  event(QEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QScrollArea : public QScrollArea
{ public:
inline void promoted_scrollContentsBy(int  dx, int  dy) { QScrollArea::scrollContentsBy(dx, dy); }
inline bool  promoted_event(QEvent*  arg__1) { return QScrollArea::event(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QScrollArea::focusNextPrevChild(next); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QScrollArea::eventFilter(arg__1, arg__2); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QScrollArea::resizeEvent(arg__1); }
};

class PythonQtWrapper_QScrollArea : public QObject
{ Q_OBJECT
public:
public slots:
QScrollArea* new_QScrollArea(QWidget*  parent = 0);
void delete_QScrollArea(QScrollArea* obj) { delete obj; } 
   void scrollContentsBy(QScrollArea* theWrappedObject, int  dx, int  dy);
   bool  widgetResizable(QScrollArea* theWrappedObject) const;
   void setWidgetResizable(QScrollArea* theWrappedObject, bool  resizable);
   void setAlignment(QScrollArea* theWrappedObject, Qt::Alignment  arg__1);
   bool  event(QScrollArea* theWrappedObject, QEvent*  arg__1);
   void ensureWidgetVisible(QScrollArea* theWrappedObject, QWidget*  childWidget, int  xmargin = 50, int  ymargin = 50);
   Qt::Alignment  alignment(QScrollArea* theWrappedObject) const;
   QWidget*  widget(QScrollArea* theWrappedObject) const;
   bool  focusNextPrevChild(QScrollArea* theWrappedObject, bool  next);
   QSize  sizeHint(QScrollArea* theWrappedObject) const;
   bool  eventFilter(QScrollArea* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void ensureVisible(QScrollArea* theWrappedObject, int  x, int  y, int  xmargin = 50, int  ymargin = 50);
   void resizeEvent(QScrollArea* theWrappedObject, QResizeEvent*  arg__1);
   QWidget*  takeWidget(QScrollArea* theWrappedObject);
   void setWidget(QScrollArea* theWrappedObject, QWidget*  widget);
};





class PythonQtShell_QScrollBar : public QScrollBar
{
public:
    PythonQtShell_QScrollBar(QWidget*  parent = 0):QScrollBar(parent),_wrapper(NULL) {};
    PythonQtShell_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = 0):QScrollBar(arg__1, parent),_wrapper(NULL) {};

virtual void hideEvent(QHideEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void wheelEvent(QWheelEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QScrollBar : public QScrollBar
{ public:
inline void promoted_hideEvent(QHideEvent*  arg__1) { QScrollBar::hideEvent(arg__1); }
inline bool  promoted_event(QEvent*  event) { return QScrollBar::event(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QScrollBar::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QScrollBar::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QScrollBar::mouseReleaseEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QScrollBar::contextMenuEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QScrollBar::paintEvent(arg__1); }
};

class PythonQtWrapper_QScrollBar : public QObject
{ Q_OBJECT
public:
public slots:
QScrollBar* new_QScrollBar(QWidget*  parent = 0);
QScrollBar* new_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent = 0);
void delete_QScrollBar(QScrollBar* obj) { delete obj; } 
   void hideEvent(QScrollBar* theWrappedObject, QHideEvent*  arg__1);
   bool  event(QScrollBar* theWrappedObject, QEvent*  event);
   void mouseMoveEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
   QSize  sizeHint(QScrollBar* theWrappedObject) const;
   void mouseReleaseEvent(QScrollBar* theWrappedObject, QMouseEvent*  arg__1);
   void contextMenuEvent(QScrollBar* theWrappedObject, QContextMenuEvent*  arg__1);
   void paintEvent(QScrollBar* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtWrapper_QSessionManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RestartHint )
enum RestartHint{
  RestartIfRunning = QSessionManager::RestartIfRunning,   RestartAnyway = QSessionManager::RestartAnyway,   RestartImmediately = QSessionManager::RestartImmediately,   RestartNever = QSessionManager::RestartNever};
public slots:
   QSessionManager::RestartHint  restartHint(QSessionManager* theWrappedObject) const;
   void setRestartHint(QSessionManager* theWrappedObject, QSessionManager::RestartHint  arg__1);
   QStringList  restartCommand(QSessionManager* theWrappedObject) const;
   QStringList  discardCommand(QSessionManager* theWrappedObject) const;
   void setDiscardCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
   bool  allowsInteraction(QSessionManager* theWrappedObject);
   void setRestartCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1);
   bool  isPhase2(QSessionManager* theWrappedObject) const;
   void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QStringList&  value);
   void requestPhase2(QSessionManager* theWrappedObject);
   void cancel(QSessionManager* theWrappedObject);
   void release(QSessionManager* theWrappedObject);
   QString  sessionId(QSessionManager* theWrappedObject) const;
   void setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QString&  value);
   bool  allowsErrorInteraction(QSessionManager* theWrappedObject);
   QString  sessionKey(QSessionManager* theWrappedObject) const;
};


