#include <PythonQt.h>
#include <QObject>
#include <QTextCursor>
#include <QTextFrame>
#include <QTextOption>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendar.h>
#include <qcalendarwidget.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdrawutil.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtexttable.h>
#include <qthread.h>
#include <qtoolbar.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qtooltip.h>
#include <qtouchdevice.h>
#include <qtransposeproxymodel.h>
#include <qtreeview.h>
#include <qvector.h>
#include <qvector2d.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtWrapper_QTextFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextFragment* new_QTextFragment();
QTextFragment* new_QTextFragment(const QTextFragment&  o);
void delete_QTextFragment(QTextFragment* obj) { delete obj; }
   QTextCharFormat  charFormat(QTextFragment* theWrappedObject) const;
   int  charFormatIndex(QTextFragment* theWrappedObject) const;
   bool  contains(QTextFragment* theWrappedObject, int  position) const;
   QList<QGlyphRun >  glyphRuns(QTextFragment* theWrappedObject, int  from = -1, int  length = -1) const;
   bool  isValid(QTextFragment* theWrappedObject) const;
   int  length(QTextFragment* theWrappedObject) const;
   bool  __ne__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  __lt__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  __eq__(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   int  position(QTextFragment* theWrappedObject) const;
   QString  text(QTextFragment* theWrappedObject) const;
    bool __nonzero__(QTextFragment* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextFrame : public QTextFrame
{
public:
    PythonQtShell_QTextFrame(QTextDocument*  doc):QTextFrame(doc),_wrapper(nullptr) {};

   ~PythonQtShell_QTextFrame() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextFrame : public QObject
{ Q_OBJECT
public:
public slots:
QTextFrame* new_QTextFrame(QTextDocument*  doc);
void delete_QTextFrame(QTextFrame* obj) { delete obj; }
   QTextFrame::iterator  begin(QTextFrame* theWrappedObject) const;
   QList<QTextFrame* >  childFrames(QTextFrame* theWrappedObject) const;
   QTextFrame::iterator  end(QTextFrame* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextFrame* theWrappedObject) const;
   int  firstPosition(QTextFrame* theWrappedObject) const;
   QTextFrameFormat  frameFormat(QTextFrame* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextFrame* theWrappedObject) const;
   int  lastPosition(QTextFrame* theWrappedObject) const;
   QTextFrame*  parentFrame(QTextFrame* theWrappedObject) const;
   void setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format);
};





class PythonQtShell_QTextFrameFormat : public QTextFrameFormat
{
public:
    PythonQtShell_QTextFrameFormat():QTextFrameFormat(),_wrapper(nullptr) {};
    PythonQtShell_QTextFrameFormat(const QTextFormat&  fmt):QTextFrameFormat(fmt),_wrapper(nullptr) {};

   ~PythonQtShell_QTextFrameFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextFrameFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BorderStyle Position )
enum BorderStyle{
  BorderStyle_None = QTextFrameFormat::BorderStyle_None,   BorderStyle_Dotted = QTextFrameFormat::BorderStyle_Dotted,   BorderStyle_Dashed = QTextFrameFormat::BorderStyle_Dashed,   BorderStyle_Solid = QTextFrameFormat::BorderStyle_Solid,   BorderStyle_Double = QTextFrameFormat::BorderStyle_Double,   BorderStyle_DotDash = QTextFrameFormat::BorderStyle_DotDash,   BorderStyle_DotDotDash = QTextFrameFormat::BorderStyle_DotDotDash,   BorderStyle_Groove = QTextFrameFormat::BorderStyle_Groove,   BorderStyle_Ridge = QTextFrameFormat::BorderStyle_Ridge,   BorderStyle_Inset = QTextFrameFormat::BorderStyle_Inset,   BorderStyle_Outset = QTextFrameFormat::BorderStyle_Outset};
enum Position{
  InFlow = QTextFrameFormat::InFlow,   FloatLeft = QTextFrameFormat::FloatLeft,   FloatRight = QTextFrameFormat::FloatRight};
public slots:
QTextFrameFormat* new_QTextFrameFormat();
QTextFrameFormat* new_QTextFrameFormat(const QTextFormat&  fmt);
QTextFrameFormat* new_QTextFrameFormat(const QTextFrameFormat& other) {
PythonQtShell_QTextFrameFormat* a = new PythonQtShell_QTextFrameFormat();
*((QTextFrameFormat*)a) = other;
return a; }
void delete_QTextFrameFormat(QTextFrameFormat* obj) { delete obj; }
   qreal  border(QTextFrameFormat* theWrappedObject) const;
   QBrush  borderBrush(QTextFrameFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  borderStyle(QTextFrameFormat* theWrappedObject) const;
   qreal  bottomMargin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  height(QTextFrameFormat* theWrappedObject) const;
   bool  isValid(QTextFrameFormat* theWrappedObject) const;
   qreal  leftMargin(QTextFrameFormat* theWrappedObject) const;
   qreal  margin(QTextFrameFormat* theWrappedObject) const;
   qreal  padding(QTextFrameFormat* theWrappedObject) const;
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextFrameFormat* theWrappedObject) const;
   QTextFrameFormat::Position  position(QTextFrameFormat* theWrappedObject) const;
   qreal  rightMargin(QTextFrameFormat* theWrappedObject) const;
   void setBorder(QTextFrameFormat* theWrappedObject, qreal  border);
   void setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush);
   void setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height);
   void setHeight(QTextFrameFormat* theWrappedObject, qreal  height);
   void setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setPadding(QTextFrameFormat* theWrappedObject, qreal  padding);
   void setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f);
   void setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin);
   void setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length);
   void setWidth(QTextFrameFormat* theWrappedObject, qreal  width);
   qreal  topMargin(QTextFrameFormat* theWrappedObject) const;
   QTextLength  width(QTextFrameFormat* theWrappedObject) const;
    bool __nonzero__(QTextFrameFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QTextImageFormat : public QTextImageFormat
{
public:
    PythonQtShell_QTextImageFormat():QTextImageFormat(),_wrapper(nullptr) {};
    PythonQtShell_QTextImageFormat(const QTextFormat&  format):QTextImageFormat(format),_wrapper(nullptr) {};

   ~PythonQtShell_QTextImageFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextImageFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextImageFormat* new_QTextImageFormat();
QTextImageFormat* new_QTextImageFormat(const QTextFormat&  format);
QTextImageFormat* new_QTextImageFormat(const QTextImageFormat& other) {
PythonQtShell_QTextImageFormat* a = new PythonQtShell_QTextImageFormat();
*((QTextImageFormat*)a) = other;
return a; }
void delete_QTextImageFormat(QTextImageFormat* obj) { delete obj; }
   qreal  height(QTextImageFormat* theWrappedObject) const;
   bool  isValid(QTextImageFormat* theWrappedObject) const;
   QString  name(QTextImageFormat* theWrappedObject) const;
   int  quality(QTextImageFormat* theWrappedObject) const;
   void setHeight(QTextImageFormat* theWrappedObject, qreal  height);
   void setName(QTextImageFormat* theWrappedObject, const QString&  name);
   void setQuality(QTextImageFormat* theWrappedObject, int  quality = 100);
   void setWidth(QTextImageFormat* theWrappedObject, qreal  width);
   qreal  width(QTextImageFormat* theWrappedObject) const;
    bool __nonzero__(QTextImageFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QTextInlineObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextInlineObject* new_QTextInlineObject();
QTextInlineObject* new_QTextInlineObject(const QTextInlineObject& other) {
QTextInlineObject* a = new QTextInlineObject();
*((QTextInlineObject*)a) = other;
return a; }
void delete_QTextInlineObject(QTextInlineObject* obj) { delete obj; }
   qreal  ascent(QTextInlineObject* theWrappedObject) const;
   qreal  descent(QTextInlineObject* theWrappedObject) const;
   QTextFormat  format(QTextInlineObject* theWrappedObject) const;
   int  formatIndex(QTextInlineObject* theWrappedObject) const;
   qreal  height(QTextInlineObject* theWrappedObject) const;
   bool  isValid(QTextInlineObject* theWrappedObject) const;
   QRectF  rect(QTextInlineObject* theWrappedObject) const;
   void setAscent(QTextInlineObject* theWrappedObject, qreal  a);
   void setDescent(QTextInlineObject* theWrappedObject, qreal  d);
   void setWidth(QTextInlineObject* theWrappedObject, qreal  w);
   Qt::LayoutDirection  textDirection(QTextInlineObject* theWrappedObject) const;
   int  textPosition(QTextInlineObject* theWrappedObject) const;
   qreal  width(QTextInlineObject* theWrappedObject) const;
    bool __nonzero__(QTextInlineObject* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextItem : public QTextItem
{
public:
    PythonQtShell_QTextItem():QTextItem(),_wrapper(nullptr) {};

   ~PythonQtShell_QTextItem();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  RightToLeft = QTextItem::RightToLeft,   Overline = QTextItem::Overline,   Underline = QTextItem::Underline,   StrikeOut = QTextItem::StrikeOut,   Dummy = QTextItem::Dummy};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QTextItem* new_QTextItem();
void delete_QTextItem(QTextItem* obj) { delete obj; }
   qreal  ascent(QTextItem* theWrappedObject) const;
   qreal  descent(QTextItem* theWrappedObject) const;
   QFont  font(QTextItem* theWrappedObject) const;
   QTextItem::RenderFlags  renderFlags(QTextItem* theWrappedObject) const;
   QString  text(QTextItem* theWrappedObject) const;
   qreal  width(QTextItem* theWrappedObject) const;
};





class PythonQtWrapper_QTextLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CursorMode )
enum CursorMode{
  SkipCharacters = QTextLayout::SkipCharacters,   SkipWords = QTextLayout::SkipWords};
public slots:
QTextLayout* new_QTextLayout();
QTextLayout* new_QTextLayout(const QString&  text);
QTextLayout* new_QTextLayout(const QString&  text, const QFont&  font, QPaintDevice*  paintdevice = nullptr);
QTextLayout* new_QTextLayout(const QTextBlock&  b);
void delete_QTextLayout(QTextLayout* obj) { delete obj; }
   QList<QTextLayout::FormatRange >  additionalFormats(QTextLayout* theWrappedObject) const;
   void beginLayout(QTextLayout* theWrappedObject);
   QRectF  boundingRect(QTextLayout* theWrappedObject) const;
   bool  cacheEnabled(QTextLayout* theWrappedObject) const;
   void clearAdditionalFormats(QTextLayout* theWrappedObject);
   void clearFormats(QTextLayout* theWrappedObject);
   void clearLayout(QTextLayout* theWrappedObject);
   QTextLine  createLine(QTextLayout* theWrappedObject);
   Qt::CursorMoveStyle  cursorMoveStyle(QTextLayout* theWrappedObject) const;
   void draw(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, const QVector<QTextLayout::FormatRange >&  selections = QVector<QTextLayout::FormatRange>(), const QRectF&  clip = QRectF()) const;
   void drawCursor(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, int  cursorPosition) const;
   void drawCursor(QTextLayout* theWrappedObject, QPainter*  p, const QPointF&  pos, int  cursorPosition, int  width) const;
   void endLayout(QTextLayout* theWrappedObject);
   QFont  font(QTextLayout* theWrappedObject) const;
   QVector<QTextLayout::FormatRange >  formats(QTextLayout* theWrappedObject) const;
   QList<QGlyphRun >  glyphRuns(QTextLayout* theWrappedObject, int  from = -1, int  length = -1) const;
   bool  isValidCursorPosition(QTextLayout* theWrappedObject, int  pos) const;
   int  leftCursorPosition(QTextLayout* theWrappedObject, int  oldPos) const;
   QTextLine  lineAt(QTextLayout* theWrappedObject, int  i) const;
   int  lineCount(QTextLayout* theWrappedObject) const;
   QTextLine  lineForTextPosition(QTextLayout* theWrappedObject, int  pos) const;
   qreal  maximumWidth(QTextLayout* theWrappedObject) const;
   qreal  minimumWidth(QTextLayout* theWrappedObject) const;
   int  nextCursorPosition(QTextLayout* theWrappedObject, int  oldPos, QTextLayout::CursorMode  mode = QTextLayout::SkipCharacters) const;
   QPointF  position(QTextLayout* theWrappedObject) const;
   int  preeditAreaPosition(QTextLayout* theWrappedObject) const;
   QString  preeditAreaText(QTextLayout* theWrappedObject) const;
   int  previousCursorPosition(QTextLayout* theWrappedObject, int  oldPos, QTextLayout::CursorMode  mode = QTextLayout::SkipCharacters) const;
   int  rightCursorPosition(QTextLayout* theWrappedObject, int  oldPos) const;
   void setAdditionalFormats(QTextLayout* theWrappedObject, const QList<QTextLayout::FormatRange >&  overrides);
   void setCacheEnabled(QTextLayout* theWrappedObject, bool  enable);
   void setCursorMoveStyle(QTextLayout* theWrappedObject, Qt::CursorMoveStyle  style);
   void setFlags(QTextLayout* theWrappedObject, int  flags);
   void setFont(QTextLayout* theWrappedObject, const QFont&  f);
   void setFormats(QTextLayout* theWrappedObject, const QVector<QTextLayout::FormatRange >&  overrides);
   void setPosition(QTextLayout* theWrappedObject, const QPointF&  p);
   void setPreeditArea(QTextLayout* theWrappedObject, int  position, const QString&  text);
   void setRawFont(QTextLayout* theWrappedObject, const QRawFont&  rawFont);
   void setText(QTextLayout* theWrappedObject, const QString&  string);
   void setTextOption(QTextLayout* theWrappedObject, const QTextOption&  option);
   QString  text(QTextLayout* theWrappedObject) const;
   const QTextOption*  textOption(QTextLayout* theWrappedObject) const;
};





class PythonQtShell_QTextLayout__FormatRange : public QTextLayout::FormatRange
{
public:
    PythonQtShell_QTextLayout__FormatRange():QTextLayout::FormatRange(),_wrapper(nullptr) {};

   ~PythonQtShell_QTextLayout__FormatRange();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextLayout__FormatRange : public QObject
{ Q_OBJECT
public:
public slots:
QTextLayout::FormatRange* new_QTextLayout__FormatRange();
QTextLayout::FormatRange* new_QTextLayout__FormatRange(const QTextLayout::FormatRange& other) {
PythonQtShell_QTextLayout__FormatRange* a = new PythonQtShell_QTextLayout__FormatRange();
*((QTextLayout::FormatRange*)a) = other;
return a; }
void delete_QTextLayout__FormatRange(QTextLayout::FormatRange* obj) { delete obj; }
void py_set_format(QTextLayout::FormatRange* theWrappedObject, QTextCharFormat  format){ theWrappedObject->format = format; }
QTextCharFormat  py_get_format(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->format; }
void py_set_length(QTextLayout::FormatRange* theWrappedObject, int  length){ theWrappedObject->length = length; }
int  py_get_length(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->length; }
void py_set_start(QTextLayout::FormatRange* theWrappedObject, int  start){ theWrappedObject->start = start; }
int  py_get_start(QTextLayout::FormatRange* theWrappedObject){ return theWrappedObject->start; }
};





class PythonQtWrapper_QTextLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CursorPosition Edge )
enum CursorPosition{
  CursorBetweenCharacters = QTextLine::CursorBetweenCharacters,   CursorOnCharacter = QTextLine::CursorOnCharacter};
enum Edge{
  Leading = QTextLine::Leading,   Trailing = QTextLine::Trailing};
public slots:
QTextLine* new_QTextLine();
QTextLine* new_QTextLine(const QTextLine& other) {
QTextLine* a = new QTextLine();
*((QTextLine*)a) = other;
return a; }
void delete_QTextLine(QTextLine* obj) { delete obj; }
   qreal  ascent(QTextLine* theWrappedObject) const;
   qreal  cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge = QTextLine::Leading) const;
   qreal  descent(QTextLine* theWrappedObject) const;
   void draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection = nullptr) const;
   QList<QGlyphRun >  glyphRuns(QTextLine* theWrappedObject, int  from = -1, int  length = -1) const;
   qreal  height(QTextLine* theWrappedObject) const;
   qreal  horizontalAdvance(QTextLine* theWrappedObject) const;
   bool  isValid(QTextLine* theWrappedObject) const;
   qreal  leading(QTextLine* theWrappedObject) const;
   bool  leadingIncluded(QTextLine* theWrappedObject) const;
   int  lineNumber(QTextLine* theWrappedObject) const;
   QRectF  naturalTextRect(QTextLine* theWrappedObject) const;
   qreal  naturalTextWidth(QTextLine* theWrappedObject) const;
   QPointF  position(QTextLine* theWrappedObject) const;
   QRectF  rect(QTextLine* theWrappedObject) const;
   void setLeadingIncluded(QTextLine* theWrappedObject, bool  included);
   void setLineWidth(QTextLine* theWrappedObject, qreal  width);
   void setNumColumns(QTextLine* theWrappedObject, int  columns);
   void setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth);
   void setPosition(QTextLine* theWrappedObject, const QPointF&  pos);
   int  textLength(QTextLine* theWrappedObject) const;
   int  textStart(QTextLine* theWrappedObject) const;
   qreal  width(QTextLine* theWrappedObject) const;
   qreal  x(QTextLine* theWrappedObject) const;
   int  xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2 = QTextLine::CursorBetweenCharacters) const;
   qreal  y(QTextLine* theWrappedObject) const;
    bool __nonzero__(QTextLine* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextList : public QTextList
{
public:
    PythonQtShell_QTextList(QTextDocument*  doc):QTextList(doc),_wrapper(nullptr) {};

   ~PythonQtShell_QTextList() override;

void blockFormatChanged(const QTextBlock&  block) override;
void blockInserted(const QTextBlock&  block) override;
void blockRemoved(const QTextBlock&  block) override;
void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextList : public QObject
{ Q_OBJECT
public:
public slots:
QTextList* new_QTextList(QTextDocument*  doc);
void delete_QTextList(QTextList* obj) { delete obj; }
   void add(QTextList* theWrappedObject, const QTextBlock&  block);
   int  count(QTextList* theWrappedObject) const;
   QTextListFormat  format(QTextList* theWrappedObject) const;
   QTextBlock  item(QTextList* theWrappedObject, int  i) const;
   int  itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   QString  itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   void remove(QTextList* theWrappedObject, const QTextBlock&  arg__1);
   void removeItem(QTextList* theWrappedObject, int  i);
   void setFormat(QTextList* theWrappedObject, const QTextListFormat&  format);
    bool __nonzero__(QTextList* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QTextListFormat : public QTextListFormat
{
public:
    PythonQtShell_QTextListFormat():QTextListFormat(),_wrapper(nullptr) {};
    PythonQtShell_QTextListFormat(const QTextFormat&  fmt):QTextListFormat(fmt),_wrapper(nullptr) {};

   ~PythonQtShell_QTextListFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextListFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Style )
enum Style{
  ListDisc = QTextListFormat::ListDisc,   ListCircle = QTextListFormat::ListCircle,   ListSquare = QTextListFormat::ListSquare,   ListDecimal = QTextListFormat::ListDecimal,   ListLowerAlpha = QTextListFormat::ListLowerAlpha,   ListUpperAlpha = QTextListFormat::ListUpperAlpha,   ListLowerRoman = QTextListFormat::ListLowerRoman,   ListUpperRoman = QTextListFormat::ListUpperRoman,   ListStyleUndefined = QTextListFormat::ListStyleUndefined};
public slots:
QTextListFormat* new_QTextListFormat();
QTextListFormat* new_QTextListFormat(const QTextFormat&  fmt);
QTextListFormat* new_QTextListFormat(const QTextListFormat& other) {
PythonQtShell_QTextListFormat* a = new PythonQtShell_QTextListFormat();
*((QTextListFormat*)a) = other;
return a; }
void delete_QTextListFormat(QTextListFormat* obj) { delete obj; }
   int  indent(QTextListFormat* theWrappedObject) const;
   bool  isValid(QTextListFormat* theWrappedObject) const;
   QString  numberPrefix(QTextListFormat* theWrappedObject) const;
   QString  numberSuffix(QTextListFormat* theWrappedObject) const;
   void setIndent(QTextListFormat* theWrappedObject, int  indent);
   void setNumberPrefix(QTextListFormat* theWrappedObject, const QString&  numberPrefix);
   void setNumberSuffix(QTextListFormat* theWrappedObject, const QString&  numberSuffix);
   void setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style);
   QTextListFormat::Style  style(QTextListFormat* theWrappedObject) const;
    bool __nonzero__(QTextListFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QTextObject : public QTextObject
{
public:
    PythonQtShell_QTextObject(QTextDocument*  doc):QTextObject(doc),_wrapper(nullptr) {};

   ~PythonQtShell_QTextObject() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTextObject : public QTextObject
{ public:
inline void promoted_setFormat(const QTextFormat&  format) { this->setFormat(format); }
};

class PythonQtWrapper_QTextObject : public QObject
{ Q_OBJECT
public:
public slots:
QTextObject* new_QTextObject(QTextDocument*  doc);
   QTextDocument*  document(QTextObject* theWrappedObject) const;
   QTextFormat  format(QTextObject* theWrappedObject) const;
   int  formatIndex(QTextObject* theWrappedObject) const;
   int  objectIndex(QTextObject* theWrappedObject) const;
   void setFormat(QTextObject* theWrappedObject, const QTextFormat&  format);
};





class PythonQtWrapper_QTextOption : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Flag TabType WrapMode )
Q_FLAGS(Flags )
enum Flag{
  ShowTabsAndSpaces = QTextOption::ShowTabsAndSpaces,   ShowLineAndParagraphSeparators = QTextOption::ShowLineAndParagraphSeparators,   AddSpaceForLineAndParagraphSeparators = QTextOption::AddSpaceForLineAndParagraphSeparators,   SuppressColors = QTextOption::SuppressColors,   ShowDocumentTerminator = QTextOption::ShowDocumentTerminator,   IncludeTrailingSpaces = QTextOption::IncludeTrailingSpaces};
enum TabType{
  LeftTab = QTextOption::LeftTab,   RightTab = QTextOption::RightTab,   CenterTab = QTextOption::CenterTab,   DelimiterTab = QTextOption::DelimiterTab};
enum WrapMode{
  NoWrap = QTextOption::NoWrap,   WordWrap = QTextOption::WordWrap,   ManualWrap = QTextOption::ManualWrap,   WrapAnywhere = QTextOption::WrapAnywhere,   WrapAtWordBoundaryOrAnywhere = QTextOption::WrapAtWordBoundaryOrAnywhere};
Q_DECLARE_FLAGS(Flags, Flag)
public slots:
QTextOption* new_QTextOption();
QTextOption* new_QTextOption(Qt::Alignment  alignment);
QTextOption* new_QTextOption(const QTextOption&  o);
void delete_QTextOption(QTextOption* obj) { delete obj; }
   Qt::Alignment  alignment(QTextOption* theWrappedObject) const;
   QTextOption::Flags  flags(QTextOption* theWrappedObject) const;
   void setAlignment(QTextOption* theWrappedObject, Qt::Alignment  alignment);
   void setFlags(QTextOption* theWrappedObject, QTextOption::Flags  flags);
   void setTabArray(QTextOption* theWrappedObject, const QList<qreal >&  tabStops);
   void setTabStop(QTextOption* theWrappedObject, qreal  tabStop);
   void setTabStopDistance(QTextOption* theWrappedObject, qreal  tabStopDistance);
   void setTabs(QTextOption* theWrappedObject, const QList<QTextOption::Tab >&  tabStops);
   void setTextDirection(QTextOption* theWrappedObject, Qt::LayoutDirection  aDirection);
   void setUseDesignMetrics(QTextOption* theWrappedObject, bool  b);
   void setWrapMode(QTextOption* theWrappedObject, QTextOption::WrapMode  wrap);
   QList<qreal >  tabArray(QTextOption* theWrappedObject) const;
   qreal  tabStop(QTextOption* theWrappedObject) const;
   qreal  tabStopDistance(QTextOption* theWrappedObject) const;
   QList<QTextOption::Tab >  tabs(QTextOption* theWrappedObject) const;
   Qt::LayoutDirection  textDirection(QTextOption* theWrappedObject) const;
   bool  useDesignMetrics(QTextOption* theWrappedObject) const;
   QTextOption::WrapMode  wrapMode(QTextOption* theWrappedObject) const;
};





class PythonQtShell_QTextOption__Tab : public QTextOption::Tab
{
public:
    PythonQtShell_QTextOption__Tab():QTextOption::Tab(),_wrapper(nullptr) {};
    PythonQtShell_QTextOption__Tab(qreal  pos, QTextOption::TabType  tabType, QChar  delim = QChar()):QTextOption::Tab(pos, tabType, delim),_wrapper(nullptr) {};

   ~PythonQtShell_QTextOption__Tab();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextOption__Tab : public QObject
{ Q_OBJECT
public:
public slots:
QTextOption::Tab* new_QTextOption__Tab();
QTextOption::Tab* new_QTextOption__Tab(qreal  pos, QTextOption::TabType  tabType, QChar  delim = QChar());
QTextOption::Tab* new_QTextOption__Tab(const QTextOption::Tab& other) {
PythonQtShell_QTextOption__Tab* a = new PythonQtShell_QTextOption__Tab();
*((QTextOption::Tab*)a) = other;
return a; }
void delete_QTextOption__Tab(QTextOption::Tab* obj) { delete obj; }
   bool  __ne__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const;
   bool  __eq__(QTextOption::Tab* theWrappedObject, const QTextOption::Tab&  other) const;
void py_set_delimiter(QTextOption::Tab* theWrappedObject, QChar  delimiter){ theWrappedObject->delimiter = delimiter; }
QChar  py_get_delimiter(QTextOption::Tab* theWrappedObject){ return theWrappedObject->delimiter; }
void py_set_position(QTextOption::Tab* theWrappedObject, qreal  position){ theWrappedObject->position = position; }
qreal  py_get_position(QTextOption::Tab* theWrappedObject){ return theWrappedObject->position; }
void py_set_type(QTextOption::Tab* theWrappedObject, QTextOption::TabType  type){ theWrappedObject->type = type; }
QTextOption::TabType  py_get_type(QTextOption::Tab* theWrappedObject){ return theWrappedObject->type; }
};





class PythonQtShell_QTextTable : public QTextTable
{
public:
    PythonQtShell_QTextTable(QTextDocument*  doc):QTextTable(doc),_wrapper(nullptr) {};

   ~PythonQtShell_QTextTable() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextTable : public QObject
{ Q_OBJECT
public:
public slots:
QTextTable* new_QTextTable(QTextDocument*  doc);
void delete_QTextTable(QTextTable* obj) { delete obj; }
   void appendColumns(QTextTable* theWrappedObject, int  count);
   void appendRows(QTextTable* theWrappedObject, int  count);
   QTextTableCell  cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  position) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  row, int  col) const;
   int  columns(QTextTable* theWrappedObject) const;
   QTextTableFormat  format(QTextTable* theWrappedObject) const;
   void insertColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void insertRows(QTextTable* theWrappedObject, int  pos, int  num);
   void mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor);
   void mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   void removeColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void removeRows(QTextTable* theWrappedObject, int  pos, int  num);
   void resize(QTextTable* theWrappedObject, int  rows, int  cols);
   QTextCursor  rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextCursor  rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   int  rows(QTextTable* theWrappedObject) const;
   void setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format);
   void splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
};





class PythonQtWrapper_QTextTableCell : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCell* new_QTextTableCell();
QTextTableCell* new_QTextTableCell(const QTextTableCell&  o);
void delete_QTextTableCell(QTextTableCell* obj) { delete obj; }
   QTextFrame::iterator  begin(QTextTableCell* theWrappedObject) const;
   int  column(QTextTableCell* theWrappedObject) const;
   int  columnSpan(QTextTableCell* theWrappedObject) const;
   QTextFrame::iterator  end(QTextTableCell* theWrappedObject) const;
   QTextCursor  firstCursorPosition(QTextTableCell* theWrappedObject) const;
   int  firstPosition(QTextTableCell* theWrappedObject) const;
   QTextCharFormat  format(QTextTableCell* theWrappedObject) const;
   bool  isValid(QTextTableCell* theWrappedObject) const;
   QTextCursor  lastCursorPosition(QTextTableCell* theWrappedObject) const;
   int  lastPosition(QTextTableCell* theWrappedObject) const;
   bool  __ne__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   bool  __eq__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const;
   int  row(QTextTableCell* theWrappedObject) const;
   int  rowSpan(QTextTableCell* theWrappedObject) const;
   void setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format);
   int  tableCellFormatIndex(QTextTableCell* theWrappedObject) const;
    bool __nonzero__(QTextTableCell* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextTableCellFormat : public QTextTableCellFormat
{
public:
    PythonQtShell_QTextTableCellFormat():QTextTableCellFormat(),_wrapper(nullptr) {};
    PythonQtShell_QTextTableCellFormat(const QTextFormat&  fmt):QTextTableCellFormat(fmt),_wrapper(nullptr) {};

   ~PythonQtShell_QTextTableCellFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextTableCellFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCellFormat* new_QTextTableCellFormat();
QTextTableCellFormat* new_QTextTableCellFormat(const QTextFormat&  fmt);
QTextTableCellFormat* new_QTextTableCellFormat(const QTextTableCellFormat& other) {
PythonQtShell_QTextTableCellFormat* a = new PythonQtShell_QTextTableCellFormat();
*((QTextTableCellFormat*)a) = other;
return a; }
void delete_QTextTableCellFormat(QTextTableCellFormat* obj) { delete obj; }
   qreal  bottomBorder(QTextTableCellFormat* theWrappedObject) const;
   QBrush  bottomBorderBrush(QTextTableCellFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  bottomBorderStyle(QTextTableCellFormat* theWrappedObject) const;
   qreal  bottomPadding(QTextTableCellFormat* theWrappedObject) const;
   bool  isValid(QTextTableCellFormat* theWrappedObject) const;
   qreal  leftBorder(QTextTableCellFormat* theWrappedObject) const;
   QBrush  leftBorderBrush(QTextTableCellFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  leftBorderStyle(QTextTableCellFormat* theWrappedObject) const;
   qreal  leftPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  rightBorder(QTextTableCellFormat* theWrappedObject) const;
   QBrush  rightBorderBrush(QTextTableCellFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  rightBorderStyle(QTextTableCellFormat* theWrappedObject) const;
   qreal  rightPadding(QTextTableCellFormat* theWrappedObject) const;
   void setBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setBottomBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setBottomBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setBottomBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setLeftBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setLeftBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setLeftBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setRightBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setRightBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setRightBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setTopBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setTopBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setTopBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  topBorder(QTextTableCellFormat* theWrappedObject) const;
   QBrush  topBorderBrush(QTextTableCellFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  topBorderStyle(QTextTableCellFormat* theWrappedObject) const;
   qreal  topPadding(QTextTableCellFormat* theWrappedObject) const;
    bool __nonzero__(QTextTableCellFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QTextTableFormat : public QTextTableFormat
{
public:
    PythonQtShell_QTextTableFormat():QTextTableFormat(),_wrapper(nullptr) {};
    PythonQtShell_QTextTableFormat(const QTextFormat&  fmt):QTextTableFormat(fmt),_wrapper(nullptr) {};

   ~PythonQtShell_QTextTableFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextTableFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableFormat* new_QTextTableFormat();
QTextTableFormat* new_QTextTableFormat(const QTextFormat&  fmt);
QTextTableFormat* new_QTextTableFormat(const QTextTableFormat& other) {
PythonQtShell_QTextTableFormat* a = new PythonQtShell_QTextTableFormat();
*((QTextTableFormat*)a) = other;
return a; }
void delete_QTextTableFormat(QTextTableFormat* obj) { delete obj; }
   Qt::Alignment  alignment(QTextTableFormat* theWrappedObject) const;
   bool  borderCollapse(QTextTableFormat* theWrappedObject) const;
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
   QVector<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   int  columns(QTextTableFormat* theWrappedObject) const;
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
   void setBorderCollapse(QTextTableFormat* theWrappedObject, bool  borderCollapse);
   void setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding);
   void setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing);
   void setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints);
   void setColumns(QTextTableFormat* theWrappedObject, int  columns);
   void setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count);
    bool __nonzero__(QTextTableFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QTileRules : public QTileRules
{
public:
    PythonQtShell_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule):QTileRules(horizontalRule, verticalRule),_wrapper(nullptr) {};
    PythonQtShell_QTileRules(Qt::TileRule  rule = Qt::StretchTile):QTileRules(rule),_wrapper(nullptr) {};

   ~PythonQtShell_QTileRules();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTileRules : public QObject
{ Q_OBJECT
public:
public slots:
QTileRules* new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule);
QTileRules* new_QTileRules(Qt::TileRule  rule = Qt::StretchTile);
void delete_QTileRules(QTileRules* obj) { delete obj; }
void py_set_horizontal(QTileRules* theWrappedObject, Qt::TileRule  horizontal){ theWrappedObject->horizontal = horizontal; }
Qt::TileRule  py_get_horizontal(QTileRules* theWrappedObject){ return theWrappedObject->horizontal; }
void py_set_vertical(QTileRules* theWrappedObject, Qt::TileRule  vertical){ theWrappedObject->vertical = vertical; }
Qt::TileRule  py_get_vertical(QTileRules* theWrappedObject){ return theWrappedObject->vertical; }
};





class PythonQtShell_QTimeEdit : public QTimeEdit
{
public:
    PythonQtShell_QTimeEdit(QWidget*  parent = nullptr):QTimeEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QTimeEdit(const QTime&  time, QWidget*  parent = nullptr):QTimeEdit(time, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTimeEdit() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void clear() override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
QDateTime  dateTimeFromText(const QString&  text) const override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fixup(QString&  input) const override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void stepBy(int  steps) override;
QAbstractSpinBox::StepEnabled  stepEnabled() const override;
void tabletEvent(QTabletEvent*  event) override;
QString  textFromDateTime(const QDateTime&  dt) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  input, int&  pos) const override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QTimeEdit* new_QTimeEdit(QWidget*  parent = nullptr);
QTimeEdit* new_QTimeEdit(const QTime&  time, QWidget*  parent = nullptr);
void delete_QTimeEdit(QTimeEdit* obj) { delete obj; }
};





class PythonQtShell_QToolBar : public QToolBar
{
public:
    PythonQtShell_QToolBar(QWidget*  parent = nullptr):QToolBar(parent),_wrapper(nullptr) {};
    PythonQtShell_QToolBar(const QString&  title, QWidget*  parent = nullptr):QToolBar(title, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QToolBar() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QToolBar : public QToolBar
{ public:
inline void promoted_actionEvent(QActionEvent*  event) { this->actionEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_initStyleOption(QStyleOptionToolBar*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void py_q_actionEvent(QActionEvent*  event) { QToolBar::actionEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QToolBar::changeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QToolBar::event(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QToolBar::paintEvent(event); }
};

class PythonQtWrapper_QToolBar : public QObject
{ Q_OBJECT
public:
public slots:
QToolBar* new_QToolBar(QWidget*  parent = nullptr);
QToolBar* new_QToolBar(const QString&  title, QWidget*  parent = nullptr);
void delete_QToolBar(QToolBar* obj) { delete obj; }
   QAction*  actionAt(QToolBar* theWrappedObject, const QPoint&  p) const;
   QAction*  actionAt(QToolBar* theWrappedObject, int  x, int  y) const;
   void py_q_actionEvent(QToolBar* theWrappedObject, QActionEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_actionEvent(event));}
   QRect  actionGeometry(QToolBar* theWrappedObject, QAction*  action) const;
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addSeparator(QToolBar* theWrappedObject);
   QAction*  addWidget(QToolBar* theWrappedObject, QWidget*  widget);
   Qt::ToolBarAreas  allowedAreas(QToolBar* theWrappedObject) const;
   void py_q_changeEvent(QToolBar* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_changeEvent(event));}
   void clear(QToolBar* theWrappedObject);
   bool  py_q_event(QToolBar* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_event(event));}
   QSize  iconSize(QToolBar* theWrappedObject) const;
   void initStyleOption(QToolBar* theWrappedObject, QStyleOptionToolBar*  option) const;
   QAction*  insertSeparator(QToolBar* theWrappedObject, QAction*  before);
   QAction*  insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget);
   bool  isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const;
   bool  isFloatable(QToolBar* theWrappedObject) const;
   bool  isFloating(QToolBar* theWrappedObject) const;
   bool  isMovable(QToolBar* theWrappedObject) const;
   Qt::Orientation  orientation(QToolBar* theWrappedObject) const;
   void py_q_paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_paintEvent(event));}
   void setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas);
   void setFloatable(QToolBar* theWrappedObject, bool  floatable);
   void setMovable(QToolBar* theWrappedObject, bool  movable);
   void setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation);
   QAction*  toggleViewAction(QToolBar* theWrappedObject) const;
   Qt::ToolButtonStyle  toolButtonStyle(QToolBar* theWrappedObject) const;
   QWidget*  widgetForAction(QToolBar* theWrappedObject, QAction*  action) const;

  QAction* addAction (QToolBar* menu, const QString & text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
  QAction* addAction (QToolBar* menu, const QIcon& icon, const QString& text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    a->setIcon(icon);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtWrapper_QToolBarChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QToolBarChangeEvent* new_QToolBarChangeEvent(bool  t);
void delete_QToolBarChangeEvent(QToolBarChangeEvent* obj) { delete obj; }
   bool  toggle(QToolBarChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QToolBox : public QToolBox
{
public:
    PythonQtShell_QToolBox(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QToolBox(parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QToolBox() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void itemInserted(int  index) override;
void itemRemoved(int  index) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  e) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QToolBox : public QToolBox
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_itemInserted(int  index) { this->itemInserted(index); }
inline void promoted_itemRemoved(int  index) { this->itemRemoved(index); }
inline void promoted_showEvent(QShowEvent*  e) { this->showEvent(e); }
inline void py_q_changeEvent(QEvent*  arg__1) { QToolBox::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QToolBox::event(e); }
inline void py_q_itemInserted(int  index) { QToolBox::itemInserted(index); }
inline void py_q_itemRemoved(int  index) { QToolBox::itemRemoved(index); }
inline void py_q_showEvent(QShowEvent*  e) { QToolBox::showEvent(e); }
};

class PythonQtWrapper_QToolBox : public QObject
{ Q_OBJECT
public:
public slots:
QToolBox* new_QToolBox(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QToolBox(QToolBox* obj) { delete obj; }
   int  addItem(QToolBox* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  text);
   int  addItem(QToolBox* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  text);
   void py_q_changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_changeEvent(arg__1));}
   int  count(QToolBox* theWrappedObject) const;
   int  currentIndex(QToolBox* theWrappedObject) const;
   QWidget*  currentWidget(QToolBox* theWrappedObject) const;
   bool  py_q_event(QToolBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_event(e));}
   int  indexOf(QToolBox* theWrappedObject, QWidget*  widget) const;
   int  insertItem(QToolBox* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  text);
   int  insertItem(QToolBox* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  text);
   bool  isItemEnabled(QToolBox* theWrappedObject, int  index) const;
   QIcon  itemIcon(QToolBox* theWrappedObject, int  index) const;
   void itemInserted(QToolBox* theWrappedObject, int  index);
   void py_q_itemInserted(QToolBox* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_itemInserted(index));}
   void itemRemoved(QToolBox* theWrappedObject, int  index);
   void py_q_itemRemoved(QToolBox* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_itemRemoved(index));}
   QString  itemText(QToolBox* theWrappedObject, int  index) const;
   QString  itemToolTip(QToolBox* theWrappedObject, int  index) const;
   void removeItem(QToolBox* theWrappedObject, int  index);
   void setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled);
   void setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon);
   void setItemText(QToolBox* theWrappedObject, int  index, const QString&  text);
   void setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip);
   void py_q_showEvent(QToolBox* theWrappedObject, QShowEvent*  e){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_showEvent(e));}
   QWidget*  widget(QToolBox* theWrappedObject, int  index) const;
};





class PythonQtShell_QToolButton : public QToolButton
{
public:
    PythonQtShell_QToolButton(QWidget*  parent = nullptr):QToolButton(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QToolButton() override;

void actionEvent(QActionEvent*  arg__1) override;
void changeEvent(QEvent*  arg__1) override;
void checkStateSet() override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  arg__1) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
bool  hitButton(const QPoint&  pos) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  arg__1) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void nextCheckState() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QToolButton : public QToolButton
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { this->actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { this->enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return this->hitButton(pos); }
inline void promoted_initStyleOption(QStyleOptionToolButton*  option) const { this->initStyleOption(option); }
inline void promoted_leaveEvent(QEvent*  arg__1) { this->leaveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_nextCheckState() { this->nextCheckState(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_actionEvent(QActionEvent*  arg__1) { QToolButton::actionEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QToolButton::changeEvent(arg__1); }
inline void py_q_enterEvent(QEvent*  arg__1) { QToolButton::enterEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QToolButton::event(e); }
inline bool  py_q_hitButton(const QPoint&  pos) const { return QToolButton::hitButton(pos); }
inline void py_q_leaveEvent(QEvent*  arg__1) { QToolButton::leaveEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QToolButton::minimumSizeHint(); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QToolButton::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QToolButton::mouseReleaseEvent(arg__1); }
inline void py_q_nextCheckState() { QToolButton::nextCheckState(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QToolButton::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QToolButton::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QToolButton::timerEvent(arg__1); }
};

class PythonQtWrapper_QToolButton : public QObject
{ Q_OBJECT
public:
public slots:
QToolButton* new_QToolButton(QWidget*  parent = nullptr);
void delete_QToolButton(QToolButton* obj) { delete obj; }
   void py_q_actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_actionEvent(arg__1));}
   Qt::ArrowType  arrowType(QToolButton* theWrappedObject) const;
   bool  autoRaise(QToolButton* theWrappedObject) const;
   void py_q_changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_changeEvent(arg__1));}
   QAction*  defaultAction(QToolButton* theWrappedObject) const;
   void py_q_enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_enterEvent(arg__1));}
   bool  py_q_event(QToolButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_event(e));}
   bool  py_q_hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const{  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_hitButton(pos));}
   void initStyleOption(QToolButton* theWrappedObject, QStyleOptionToolButton*  option) const;
   void py_q_leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_leaveEvent(arg__1));}
   QMenu*  menu(QToolButton* theWrappedObject) const;
   QSize  minimumSizeHint(QToolButton* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QToolButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_nextCheckState(QToolButton* theWrappedObject){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_nextCheckState());}
   void py_q_paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QToolButton::ToolButtonPopupMode  popupMode(QToolButton* theWrappedObject) const;
   void setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type);
   void setAutoRaise(QToolButton* theWrappedObject, bool  enable);
   void setMenu(QToolButton* theWrappedObject, QMenu*  menu);
   void setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode);
   QSize  sizeHint(QToolButton* theWrappedObject) const;
   QSize  py_q_sizeHint(QToolButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_sizeHint());}
   void py_q_timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_timerEvent(arg__1));}
   Qt::ToolButtonStyle  toolButtonStyle(QToolButton* theWrappedObject) const;
};





class PythonQtWrapper_QToolTip : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QToolTip(QToolTip* obj) { delete obj; }
   QFont  static_QToolTip_font();
   void static_QToolTip_hideText();
   bool  static_QToolTip_isVisible();
   QPalette  static_QToolTip_palette();
   void static_QToolTip_setFont(const QFont&  arg__1);
   void static_QToolTip_setPalette(const QPalette&  arg__1);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w = nullptr);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect, int  msecShowTime);
   QString  static_QToolTip_text();
};





class PythonQtWrapper_QTouchDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CapabilityFlag DeviceType )
Q_FLAGS(Capabilities )
enum CapabilityFlag{
  Position = QTouchDevice::Position,   Area = QTouchDevice::Area,   Pressure = QTouchDevice::Pressure,   Velocity = QTouchDevice::Velocity,   RawPositions = QTouchDevice::RawPositions,   NormalizedPosition = QTouchDevice::NormalizedPosition,   MouseEmulation = QTouchDevice::MouseEmulation};
enum DeviceType{
  TouchScreen = QTouchDevice::TouchScreen,   TouchPad = QTouchDevice::TouchPad};
Q_DECLARE_FLAGS(Capabilities, CapabilityFlag)
public slots:
QTouchDevice* new_QTouchDevice();
void delete_QTouchDevice(QTouchDevice* obj) { delete obj; }
   QTouchDevice::Capabilities  capabilities(QTouchDevice* theWrappedObject) const;
   QList<const QTouchDevice* >  static_QTouchDevice_devices();
   int  maximumTouchPoints(QTouchDevice* theWrappedObject) const;
   QString  name(QTouchDevice* theWrappedObject) const;
   void setCapabilities(QTouchDevice* theWrappedObject, QTouchDevice::Capabilities  caps);
   void setMaximumTouchPoints(QTouchDevice* theWrappedObject, int  max);
   void setName(QTouchDevice* theWrappedObject, const QString&  name);
   void setType(QTouchDevice* theWrappedObject, QTouchDevice::DeviceType  devType);
   QTouchDevice::DeviceType  type(QTouchDevice* theWrappedObject) const;
    QString py_toString(QTouchDevice*);
};





class PythonQtShell_QTouchEvent : public QTouchEvent
{
public:
    PythonQtShell_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = nullptr, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = Qt::TouchPointStates(), const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>()):QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints),_wrapper(nullptr) {};

   ~PythonQtShell_QTouchEvent() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTouchEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTouchEvent* new_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = nullptr, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = Qt::TouchPointStates(), const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>());
void delete_QTouchEvent(QTouchEvent* obj) { delete obj; }
   QTouchDevice*  device(QTouchEvent* theWrappedObject) const;
   void setDevice(QTouchEvent* theWrappedObject, QTouchDevice*  adevice);
   void setTarget(QTouchEvent* theWrappedObject, QObject*  atarget);
   void setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates);
   void setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints);
   void setWindow(QTouchEvent* theWrappedObject, QWindow*  awindow);
   QObject*  target(QTouchEvent* theWrappedObject) const;
   Qt::TouchPointStates  touchPointStates(QTouchEvent* theWrappedObject) const;
   const QList<QTouchEvent::TouchPoint >*  touchPoints(QTouchEvent* theWrappedObject) const;
   QWindow*  window(QTouchEvent* theWrappedObject) const;
};





class PythonQtWrapper_QTouchEvent__TouchPoint : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InfoFlag )
Q_FLAGS(InfoFlags )
enum InfoFlag{
  Pen = QTouchEvent::TouchPoint::Pen,   Token = QTouchEvent::TouchPoint::Token};
Q_DECLARE_FLAGS(InfoFlags, InfoFlag)
public slots:
QTouchEvent::TouchPoint* new_QTouchEvent__TouchPoint(const QTouchEvent::TouchPoint&  other);
QTouchEvent::TouchPoint* new_QTouchEvent__TouchPoint(int  id = -1);
void delete_QTouchEvent__TouchPoint(QTouchEvent::TouchPoint* obj) { delete obj; }
   QSizeF  ellipseDiameters(QTouchEvent::TouchPoint* theWrappedObject) const;
   QTouchEvent::TouchPoint::InfoFlags  flags(QTouchEvent::TouchPoint* theWrappedObject) const;
   int  id(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QTouchEvent::TouchPoint*  operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other);
   QPointF  pos(QTouchEvent::TouchPoint* theWrappedObject) const;
   qreal  pressure(QTouchEvent::TouchPoint* theWrappedObject) const;
   QVector<QPointF >  rawScreenPositions(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  rect(QTouchEvent::TouchPoint* theWrappedObject) const;
   qreal  rotation(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  scenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  screenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  screenRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setEllipseDiameters(QTouchEvent::TouchPoint* theWrappedObject, const QSizeF&  dia);
   void setFlags(QTouchEvent::TouchPoint* theWrappedObject, QTouchEvent::TouchPoint::InfoFlags  flags);
   void setId(QTouchEvent::TouchPoint* theWrappedObject, int  id);
   void setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos);
   void setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos);
   void setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos);
   void setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos);
   void setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos);
   void setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos);
   void setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure);
   void setRawScreenPositions(QTouchEvent::TouchPoint* theWrappedObject, const QVector<QPointF >&  positions);
   void setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect);
   void setRotation(QTouchEvent::TouchPoint* theWrappedObject, qreal  angle);
   void setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos);
   void setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect);
   void setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos);
   void setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect);
   void setStartNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startNormalizedPos);
   void setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos);
   void setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos);
   void setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos);
   void setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state);
   void setUniqueId(QTouchEvent::TouchPoint* theWrappedObject, qint64  uid);
   void setVelocity(QTouchEvent::TouchPoint* theWrappedObject, const QVector2D&  v);
   QPointF  startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   Qt::TouchPointState  state(QTouchEvent::TouchPoint* theWrappedObject) const;
   void swap(QTouchEvent::TouchPoint* theWrappedObject, QTouchEvent::TouchPoint&  other);
   QVector2D  velocity(QTouchEvent::TouchPoint* theWrappedObject) const;
    QString py_toString(QTouchEvent::TouchPoint*);
};





class PythonQtShell_QTransposeProxyModel : public QTransposeProxyModel
{
public:
    PythonQtShell_QTransposeProxyModel(QObject*  parent = nullptr):QTransposeProxyModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTransposeProxyModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const override;
QItemSelection  mapSelectionFromSource(const QItemSelection&  selection) const override;
QItemSelection  mapSelectionToSource(const QItemSelection&  selection) const override;
QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
QModelIndex  parent(const QModelIndex&  index) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
void setSourceModel(QAbstractItemModel*  newSourceModel) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTransposeProxyModel : public QTransposeProxyModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QTransposeProxyModel::columnCount(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QTransposeProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QTransposeProxyModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QTransposeProxyModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QTransposeProxyModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QTransposeProxyModel::itemData(index); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return QTransposeProxyModel::mapFromSource(sourceIndex); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return QTransposeProxyModel::mapToSource(proxyIndex); }
inline bool  py_q_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  py_q_parent(const QModelIndex&  index) const { return QTransposeProxyModel::parent(index); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QTransposeProxyModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QTransposeProxyModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QTransposeProxyModel::rowCount(parent); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QTransposeProxyModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QTransposeProxyModel::setItemData(index, roles); }
inline void py_q_setSourceModel(QAbstractItemModel*  newSourceModel) { QTransposeProxyModel::setSourceModel(newSourceModel); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QTransposeProxyModel::sort(column, order); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QTransposeProxyModel::span(index); }
};

class PythonQtWrapper_QTransposeProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QTransposeProxyModel* new_QTransposeProxyModel(QObject*  parent = nullptr);
void delete_QTransposeProxyModel(QTransposeProxyModel* obj) { delete obj; }
   int  py_q_columnCount(QTransposeProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_headerData(QTransposeProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QTransposeProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  py_q_insertColumns(QTransposeProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  py_q_insertRows(QTransposeProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QMap<int , QVariant >  py_q_itemData(QTransposeProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_itemData(index));}
   QModelIndex  py_q_mapFromSource(QTransposeProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QModelIndex  py_q_mapToSource(QTransposeProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   bool  py_q_moveColumns(QTransposeProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));}
   bool  py_q_moveRows(QTransposeProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   QModelIndex  py_q_parent(QTransposeProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_parent(index));}
   bool  py_q_removeColumns(QTransposeProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QTransposeProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QTransposeProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setHeaderData(QTransposeProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   bool  py_q_setItemData(QTransposeProxyModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   void py_q_setSourceModel(QTransposeProxyModel* theWrappedObject, QAbstractItemModel*  newSourceModel){  (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_setSourceModel(newSourceModel));}
   void py_q_sort(QTransposeProxyModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_sort(column, order));}
   QSize  py_q_span(QTransposeProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_span(index));}
};





class PythonQtShell_QTreeView : public QTreeView
{
public:
    PythonQtShell_QTreeView(QWidget*  parent = nullptr):QTreeView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTreeView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const override;
void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const override;
void dropEvent(QDropEvent*  event) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
QStyleOptionViewItem  viewOptions() const override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTreeView : public QTreeView
{ public:
inline void promoted_columnCountChanged(int  oldCount, int  newCount) { this->columnCountChanged(oldCount, newCount); }
inline void promoted_columnMoved() { this->columnMoved(); }
inline void promoted_columnResized(int  column, int  oldSize, int  newSize) { this->columnResized(column, oldSize, newSize); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { this->drawBranches(painter, rect, index); }
inline void promoted_drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { this->drawRow(painter, options, index); }
inline void promoted_drawTree(QPainter*  painter, const QRegion&  region) const { this->drawTree(painter, region); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_horizontalScrollbarAction(int  action) { this->horizontalScrollbarAction(action); }
inline int  promoted_indexRowSizeHint(const QModelIndex&  index) const { return this->indexRowSizeHint(index); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_reexpand() { this->reexpand(); }
inline int  promoted_rowHeight(const QModelIndex&  index) const { return this->rowHeight(index); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { this->rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_rowsRemoved(const QModelIndex&  parent, int  first, int  last) { this->rowsRemoved(parent, first, last); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return this->selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { this->selectionChanged(selected, deselected); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline int  promoted_sizeHintForColumn(int  column) const { return this->sizeHintForColumn(column); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline void promoted_verticalScrollbarValueChanged(int  value) { this->verticalScrollbarValueChanged(value); }
inline bool  promoted_viewportEvent(QEvent*  event) { return this->viewportEvent(event); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTreeView::currentChanged(current, previous); }
inline void py_q_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { QTreeView::dataChanged(topLeft, bottomRight, roles); }
inline void py_q_doItemsLayout() { QTreeView::doItemsLayout(); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  event) { QTreeView::dragMoveEvent(event); }
inline void py_q_drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { QTreeView::drawBranches(painter, rect, index); }
inline void py_q_drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { QTreeView::drawRow(painter, options, index); }
inline int  py_q_horizontalOffset() const { return QTreeView::horizontalOffset(); }
inline void py_q_horizontalScrollbarAction(int  action) { QTreeView::horizontalScrollbarAction(action); }
inline QModelIndex  py_q_indexAt(const QPoint&  p) const { return QTreeView::indexAt(p); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QTreeView::isIndexHidden(index); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QTreeView::keyPressEvent(event); }
inline void py_q_keyboardSearch(const QString&  search) { QTreeView::keyboardSearch(search); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  event) { QTreeView::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QTreeView::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QTreeView::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QTreeView::mouseReleaseEvent(event); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QTreeView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_paintEvent(QPaintEvent*  event) { QTreeView::paintEvent(event); }
inline void py_q_reset() { QTreeView::reset(); }
inline void py_q_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsAboutToBeRemoved(parent, start, end); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsInserted(parent, start, end); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QTreeView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTreeView::scrollTo(index, hint); }
inline void py_q_selectAll() { QTreeView::selectAll(); }
inline QList<QModelIndex >  py_q_selectedIndexes() const { return QTreeView::selectedIndexes(); }
inline void py_q_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTreeView::selectionChanged(selected, deselected); }
inline void py_q_setModel(QAbstractItemModel*  model) { QTreeView::setModel(model); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QTreeView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTreeView::setSelection(rect, command); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeView::setSelectionModel(selectionModel); }
inline int  py_q_sizeHintForColumn(int  column) const { return QTreeView::sizeHintForColumn(column); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTreeView::timerEvent(event); }
inline void py_q_updateGeometries() { QTreeView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return QTreeView::verticalOffset(); }
inline void py_q_verticalScrollbarValueChanged(int  value) { QTreeView::verticalScrollbarValueChanged(value); }
inline bool  py_q_viewportEvent(QEvent*  event) { return QTreeView::viewportEvent(event); }
inline QSize  py_q_viewportSizeHint() const { return QTreeView::viewportSizeHint(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QTreeView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QTreeView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QTreeView : public QObject
{ Q_OBJECT
public:
public slots:
QTreeView* new_QTreeView(QWidget*  parent = nullptr);
void delete_QTreeView(QTreeView* obj) { delete obj; }
   bool  allColumnsShowFocus(QTreeView* theWrappedObject) const;
   int  autoExpandDelay(QTreeView* theWrappedObject) const;
   int  columnAt(QTreeView* theWrappedObject, int  x) const;
   int  columnViewportPosition(QTreeView* theWrappedObject, int  column) const;
   int  columnWidth(QTreeView* theWrappedObject, int  column) const;
   void py_q_currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   void py_q_dataChanged(QTreeView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_dataChanged(topLeft, bottomRight, roles));}
   void py_q_doItemsLayout(QTreeView* theWrappedObject){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_doItemsLayout());}
   void py_q_dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
   void py_q_drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_drawBranches(painter, rect, index));}
   void drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
   void py_q_drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_drawRow(painter, options, index));}
   void drawTree(QTreeView* theWrappedObject, QPainter*  painter, const QRegion&  region) const;
   bool  expandsOnDoubleClick(QTreeView* theWrappedObject) const;
   QHeaderView*  header(QTreeView* theWrappedObject) const;
   int  py_q_horizontalOffset(QTreeView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_horizontalOffset());}
   void py_q_horizontalScrollbarAction(QTreeView* theWrappedObject, int  action){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_horizontalScrollbarAction(action));}
   int  indentation(QTreeView* theWrappedObject) const;
   QModelIndex  indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  py_q_indexAt(QTreeView* theWrappedObject, const QPoint&  p) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_indexAt(p));}
   QModelIndex  indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   int  indexRowSizeHint(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   bool  isAnimated(QTreeView* theWrappedObject) const;
   bool  isColumnHidden(QTreeView* theWrappedObject, int  column) const;
   bool  isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   bool  isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  isHeaderHidden(QTreeView* theWrappedObject) const;
   bool  py_q_isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  isSortingEnabled(QTreeView* theWrappedObject) const;
   bool  itemsExpandable(QTreeView* theWrappedObject) const;
   void py_q_keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_keyPressEvent(event));}
   void py_q_keyboardSearch(QTreeView* theWrappedObject, const QString&  search){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_keyboardSearch(search));}
   void py_q_mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void py_q_mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QModelIndex  py_q_moveCursor(QTreeView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   void py_q_paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_paintEvent(event));}
   void py_q_reset(QTreeView* theWrappedObject){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_reset());}
   void resetIndentation(QTreeView* theWrappedObject);
   bool  rootIsDecorated(QTreeView* theWrappedObject) const;
   int  rowHeight(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void py_q_rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_rowsAboutToBeRemoved(parent, start, end));}
   void py_q_rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   void py_q_scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   void py_q_selectAll(QTreeView* theWrappedObject){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_selectAll());}
   QList<QModelIndex >  py_q_selectedIndexes(QTreeView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_selectedIndexes());}
   void py_q_selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_selectionChanged(selected, deselected));}
   void setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable);
   void setAnimated(QTreeView* theWrappedObject, bool  enable);
   void setAutoExpandDelay(QTreeView* theWrappedObject, int  delay);
   void setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide);
   void setColumnWidth(QTreeView* theWrappedObject, int  column, int  width);
   void setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand);
   void setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable);
   void setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span);
   void setHeader(QTreeView* theWrappedObject, QHeaderView*  header);
   void setHeaderHidden(QTreeView* theWrappedObject, bool  hide);
   void setIndentation(QTreeView* theWrappedObject, int  i);
   void setItemsExpandable(QTreeView* theWrappedObject, bool  enable);
   void py_q_setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_setModel(model));}
   void py_q_setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_setRootIndex(index));}
   void setRootIsDecorated(QTreeView* theWrappedObject, bool  show);
   void setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide);
   void py_q_setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void py_q_setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   void setSortingEnabled(QTreeView* theWrappedObject, bool  enable);
   void setTreePosition(QTreeView* theWrappedObject, int  logicalIndex);
   void setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform);
   void setWordWrap(QTreeView* theWrappedObject, bool  on);
   int  py_q_sizeHintForColumn(QTreeView* theWrappedObject, int  column) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_sizeHintForColumn(column));}
   void py_q_timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_timerEvent(event));}
   int  treePosition(QTreeView* theWrappedObject) const;
   bool  uniformRowHeights(QTreeView* theWrappedObject) const;
   void py_q_updateGeometries(QTreeView* theWrappedObject){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_updateGeometries());}
   int  py_q_verticalOffset(QTreeView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_verticalOffset());}
   void py_q_verticalScrollbarValueChanged(QTreeView* theWrappedObject, int  value){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_verticalScrollbarValueChanged(value));}
   bool  py_q_viewportEvent(QTreeView* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_viewportEvent(event));}
   QSize  py_q_viewportSizeHint(QTreeView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_viewportSizeHint());}
   QRect  py_q_visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
   bool  wordWrap(QTreeView* theWrappedObject) const;
};


