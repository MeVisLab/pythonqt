#include <PythonQt.h>
#include <QObject>
#include <QTextCursor>
#include <QTextFrame>
#include <QTextLayout>
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
#include <qline.h>
#include <qlineedit.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrawfont.h>
#include <qrect.h>
#include <qregion.h>
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
#include <qtoolbar.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qtooltip.h>
#include <qtouchdevice.h>
#include <qtransform.h>
#include <qtreeview.h>
#include <qtreewidget.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qvector.h>
#include <qvector2d.h>
#include <qwidget.h>
#include <qwindow.h>



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
    PythonQtShell_QTextItem():QTextItem(),_wrapper(NULL) {};

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
    PythonQtShell_QTextLayout__FormatRange():QTextLayout::FormatRange(),_wrapper(NULL) {};

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
    PythonQtShell_QTextList(QTextDocument*  doc):QTextList(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextList();

virtual void blockFormatChanged(const QTextBlock&  block);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockRemoved(const QTextBlock&  block);
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
    PythonQtShell_QTextListFormat():QTextListFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextListFormat(const QTextFormat&  fmt):QTextListFormat(fmt),_wrapper(NULL) {};

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
    PythonQtShell_QTextObject(QTextDocument*  doc):QTextObject(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextObject();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
    PythonQtShell_QTextOption__Tab():QTextOption::Tab(),_wrapper(NULL) {};
    PythonQtShell_QTextOption__Tab(qreal  pos, QTextOption::TabType  tabType, QChar  delim = QChar()):QTextOption::Tab(pos, tabType, delim),_wrapper(NULL) {};

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
    PythonQtShell_QTextTable(QTextDocument*  doc):QTextTable(doc),_wrapper(NULL) {};

   ~PythonQtShell_QTextTable();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
    PythonQtShell_QTextTableCellFormat():QTextTableCellFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableCellFormat(const QTextFormat&  fmt):QTextTableCellFormat(fmt),_wrapper(NULL) {};

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
   qreal  bottomPadding(QTextTableCellFormat* theWrappedObject) const;
   bool  isValid(QTextTableCellFormat* theWrappedObject) const;
   qreal  leftPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  rightPadding(QTextTableCellFormat* theWrappedObject) const;
   void setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  topPadding(QTextTableCellFormat* theWrappedObject) const;
    bool __nonzero__(QTextTableCellFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QTextTableFormat : public QTextTableFormat
{
public:
    PythonQtShell_QTextTableFormat():QTextTableFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableFormat(const QTextFormat&  fmt):QTextTableFormat(fmt),_wrapper(NULL) {};

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
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
   QVector<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   int  columns(QTextTableFormat* theWrappedObject) const;
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
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
    PythonQtShell_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule):QTileRules(horizontalRule, verticalRule),_wrapper(NULL) {};
    PythonQtShell_QTileRules(Qt::TileRule  rule = Qt::StretchTile):QTileRules(rule),_wrapper(NULL) {};

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
    PythonQtShell_QTimeEdit(QWidget*  parent = nullptr):QTimeEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QTimeEdit(const QTime&  time, QWidget*  parent = nullptr):QTimeEdit(time, parent),_wrapper(NULL) {};

   ~PythonQtShell_QTimeEdit();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void fixup(QString&  input) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void stepBy(int  steps);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
    PythonQtShell_QToolBar(QWidget*  parent = nullptr):QToolBar(parent),_wrapper(NULL) {};
    PythonQtShell_QToolBar(const QString&  title, QWidget*  parent = nullptr):QToolBar(title, parent),_wrapper(NULL) {};

   ~PythonQtShell_QToolBar();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
    PythonQtShell_QToolBox(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QToolBox(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QToolBox();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void itemInserted(int  index);
virtual void itemRemoved(int  index);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  e);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
    PythonQtShell_QToolButton(QWidget*  parent = nullptr):QToolButton(parent),_wrapper(NULL) {};

   ~PythonQtShell_QToolButton();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void checkStateSet();
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void nextCheckState();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
    PythonQtShell_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = nullptr, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = Qt::TouchPointStates(), const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>()):QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints),_wrapper(NULL) {};

   ~PythonQtShell_QTouchEvent();


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





class PythonQtWrapper_QTransform : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransformationType )
enum TransformationType{
  TxNone = QTransform::TxNone,   TxTranslate = QTransform::TxTranslate,   TxScale = QTransform::TxScale,   TxRotate = QTransform::TxRotate,   TxShear = QTransform::TxShear,   TxProject = QTransform::TxProject};
public slots:
QTransform* new_QTransform();
QTransform* new_QTransform(const QMatrix&  mtx);
QTransform* new_QTransform(const QTransform&  other);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33 = 1.0);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h21, qreal  h22, qreal  dx, qreal  dy);
void delete_QTransform(QTransform* obj) { delete obj; } 
   QTransform  adjoint(QTransform* theWrappedObject) const;
   qreal  det(QTransform* theWrappedObject) const;
   qreal  determinant(QTransform* theWrappedObject) const;
   qreal  dx(QTransform* theWrappedObject) const;
   qreal  dy(QTransform* theWrappedObject) const;
   QTransform  static_QTransform_fromScale(qreal  dx, qreal  dy);
   QTransform  static_QTransform_fromTranslate(qreal  dx, qreal  dy);
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = nullptr) const;
   bool  isAffine(QTransform* theWrappedObject) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   bool  isInvertible(QTransform* theWrappedObject) const;
   bool  isRotating(QTransform* theWrappedObject) const;
   bool  isScaling(QTransform* theWrappedObject) const;
   bool  isTranslating(QTransform* theWrappedObject) const;
   qreal  m11(QTransform* theWrappedObject) const;
   qreal  m12(QTransform* theWrappedObject) const;
   qreal  m13(QTransform* theWrappedObject) const;
   qreal  m21(QTransform* theWrappedObject) const;
   qreal  m22(QTransform* theWrappedObject) const;
   qreal  m23(QTransform* theWrappedObject) const;
   qreal  m31(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   qreal  m33(QTransform* theWrappedObject) const;
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   bool  __ne__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   QTransform  __mul__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __imul__(QTransform* theWrappedObject, const QTransform&  arg__1);
   QTransform*  __imul__(QTransform* theWrappedObject, qreal  div);
   QTransform  __add__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __iadd__(QTransform* theWrappedObject, qreal  div);
   QTransform  __sub__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __isub__(QTransform* theWrappedObject, qreal  div);
   QTransform  __div__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __idiv__(QTransform* theWrappedObject, qreal  div);
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   void reset(QTransform* theWrappedObject);
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   QTransform*  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   const QMatrix*  toAffine(QTransform* theWrappedObject) const;
   QTransform*  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   QTransform  transposed(QTransform* theWrappedObject) const;
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
    QString py_toString(QTransform*);
};





class PythonQtShell_QTreeView : public QTreeView
{
public:
    PythonQtShell_QTreeView(QWidget*  parent = nullptr):QTreeView(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTreeView();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
virtual void dropEvent(QDropEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setVisible(bool  visible);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
   void sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order);
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





class PythonQtShell_QTreeWidget : public QTreeWidget
{
public:
    PythonQtShell_QTreeWidget(QWidget*  parent = nullptr):QTreeWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTreeWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
virtual void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
virtual void dropEvent(QDropEvent*  event);
virtual bool  dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QMimeData*  mimeData(const QList<QTreeWidgetItem* >  items) const;
virtual QStringList  mimeTypes() const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setVisible(bool  visible);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual Qt::DropActions  supportedDropActions() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidget : public QTreeWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action) { return this->dropMimeData(parent, index, data, action); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QModelIndex  promoted_indexFromItem(QTreeWidgetItem*  item, int  column = 0) const { return this->indexFromItem(item, column); }
inline QModelIndex  promoted_indexFromItem(const QTreeWidgetItem*  item, int  column = 0) const { return this->indexFromItem(item, column); }
inline QTreeWidgetItem*  promoted_itemFromIndex(const QModelIndex&  index) const { return this->itemFromIndex(index); }
inline QMimeData*  promoted_mimeData(const QList<QTreeWidgetItem* >  items) const { return this->mimeData(items); }
inline QStringList  promoted_mimeTypes() const { return this->mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return this->supportedDropActions(); }
inline void py_q_dropEvent(QDropEvent*  event) { QTreeWidget::dropEvent(event); }
inline bool  py_q_dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action) { return QTreeWidget::dropMimeData(parent, index, data, action); }
inline bool  py_q_event(QEvent*  e) { return QTreeWidget::event(e); }
inline QMimeData*  py_q_mimeData(const QList<QTreeWidgetItem* >  items) const { return QTreeWidget::mimeData(items); }
inline QStringList  py_q_mimeTypes() const { return QTreeWidget::mimeTypes(); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeWidget::setSelectionModel(selectionModel); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QTreeWidget::supportedDropActions(); }
};

class PythonQtWrapper_QTreeWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTreeWidget* new_QTreeWidget(QWidget*  parent = nullptr);
void delete_QTreeWidget(QTreeWidget* obj) { delete obj; } 
   void addTopLevelItem(QTreeWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  item);
   void addTopLevelItems(QTreeWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  items);
   void closePersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   int  columnCount(QTreeWidget* theWrappedObject) const;
   int  currentColumn(QTreeWidget* theWrappedObject) const;
   QTreeWidgetItem*  currentItem(QTreeWidget* theWrappedObject) const;
   void py_q_dropEvent(QTreeWidget* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  dropMimeData(QTreeWidget* theWrappedObject, QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
   bool  py_q_dropMimeData(QTreeWidget* theWrappedObject, QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action){  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_dropMimeData(parent, index, data, action));}
   void editItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   bool  py_q_event(QTreeWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_event(e));}
   QList<QTreeWidgetItem* >  findItems(QTreeWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column = 0) const;
   QTreeWidgetItem*  headerItem(QTreeWidget* theWrappedObject) const;
   QModelIndex  indexFromItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0) const;
   QModelIndex  indexFromItem(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, int  column = 0) const;
   int  indexOfTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item) const;
   void insertTopLevelItem(QTreeWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  item);
   void insertTopLevelItems(QTreeWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  items);
   QTreeWidgetItem*  invisibleRootItem(QTreeWidget* theWrappedObject) const;
   bool  isFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   bool  isPersistentEditorOpen(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0) const;
   QTreeWidgetItem*  itemAbove(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, const QPoint&  p) const;
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, int  x, int  y) const;
   QTreeWidgetItem*  itemBelow(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   QTreeWidgetItem*  itemFromIndex(QTreeWidget* theWrappedObject, const QModelIndex&  index) const;
   QWidget*  itemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column) const;
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >  items) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >  items) const{  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_mimeData(items));}
   QStringList  mimeTypes(QTreeWidget* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QTreeWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_mimeTypes());}
   void openPersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   void removeItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   QList<QTreeWidgetItem* >  selectedItems(QTreeWidget* theWrappedObject) const;
   void setColumnCount(QTreeWidget* theWrappedObject, int  columns);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QItemSelectionModel::SelectionFlags  command);
   void setFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, bool  span);
   void setHeaderItem(QTreeWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  item);
   void setHeaderLabel(QTreeWidget* theWrappedObject, const QString&  label);
   void setHeaderLabels(QTreeWidget* theWrappedObject, const QStringList&  labels);
   void setItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QWidget*  widget);
   void py_q_setSelectionModel(QTreeWidget* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   int  sortColumn(QTreeWidget* theWrappedObject) const;
   void sortItems(QTreeWidget* theWrappedObject, int  column, Qt::SortOrder  order);
   Qt::DropActions  supportedDropActions(QTreeWidget* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QTreeWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QTreeWidgetItem*  > takeTopLevelItem(QTreeWidget* theWrappedObject, int  index);
   QTreeWidgetItem*  topLevelItem(QTreeWidget* theWrappedObject, int  index) const;
   int  topLevelItemCount(QTreeWidget* theWrappedObject) const;
   QRect  visualItemRect(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
};





class PythonQtShell_QTreeWidgetItem : public QTreeWidgetItem
{
public:
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(view, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type):QTreeWidgetItem(view, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, int  type = Type):QTreeWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(parent, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type):QTreeWidgetItem(parent, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type):QTreeWidgetItem(parent, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(const QStringList&  strings, int  type = Type):QTreeWidgetItem(strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(int  type = Type):QTreeWidgetItem(type),_wrapper(NULL) {};

   ~PythonQtShell_QTreeWidgetItem();

virtual QTreeWidgetItem*  clone() const;
virtual QVariant  data(int  column, int  role) const;
virtual void read(QDataStream&  in);
virtual void setData(int  column, int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidgetItem : public QTreeWidgetItem
{ public:
inline void promoted_emitDataChanged() { this->emitDataChanged(); }
inline QTreeWidgetItem*  py_q_clone() const { return QTreeWidgetItem::clone(); }
inline QVariant  py_q_data(int  column, int  role) const { return QTreeWidgetItem::data(column, role); }
inline void py_q_read(QDataStream&  in) { QTreeWidgetItem::read(in); }
inline void py_q_setData(int  column, int  role, const QVariant&  value) { QTreeWidgetItem::setData(column, role, value); }
inline void py_q_write(QDataStream&  out) const { QTreeWidgetItem::write(out); }
};

class PythonQtWrapper_QTreeWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChildIndicatorPolicy ItemType )
enum ChildIndicatorPolicy{
  ShowIndicator = QTreeWidgetItem::ShowIndicator,   DontShowIndicator = QTreeWidgetItem::DontShowIndicator,   DontShowIndicatorWhenChildless = QTreeWidgetItem::DontShowIndicatorWhenChildless};
enum ItemType{
  Type = QTreeWidgetItem::Type,   UserType = QTreeWidgetItem::UserType};
public slots:
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  view, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  view, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  view, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(int  type = Type);
void delete_QTreeWidgetItem(QTreeWidgetItem* obj) { delete obj; } 
   void addChild(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  child);
   void addChildren(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  children);
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  py_q_clone(QTreeWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_clone());}
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   QVariant  py_q_data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const{  return (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_data(column, role));}
   void emitDataChanged(QTreeWidgetItem* theWrappedObject);
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  child);
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  children);
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   void read(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QTreeWidgetItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_read(in));}
   void removeChild(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToPython<QTreeWidgetItem* >  child);
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   void py_q_setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value){  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_setData(column, role, value));}
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   PythonQtPassOwnershipToPython<QTreeWidgetItem*  > takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* >  > takeChildren(QTreeWidgetItem* theWrappedObject);
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   int  type(QTreeWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
   void write(QTreeWidgetItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QTreeWidgetItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtShell_QUndoCommand : public QUndoCommand
{
public:
    PythonQtShell_QUndoCommand(QUndoCommand*  parent = nullptr):QUndoCommand(parent),_wrapper(NULL) {};
    PythonQtShell_QUndoCommand(const QString&  text, QUndoCommand*  parent = nullptr):QUndoCommand(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QUndoCommand();

virtual int  id() const;
virtual bool  mergeWith(const QUndoCommand*  other);
virtual void redo();
virtual void undo();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QUndoCommand : public QUndoCommand
{ public:
inline int  py_q_id() const { return QUndoCommand::id(); }
inline bool  py_q_mergeWith(const QUndoCommand*  other) { return QUndoCommand::mergeWith(other); }
inline void py_q_redo() { QUndoCommand::redo(); }
inline void py_q_undo() { QUndoCommand::undo(); }
};

class PythonQtWrapper_QUndoCommand : public QObject
{ Q_OBJECT
public:
public slots:
QUndoCommand* new_QUndoCommand(QUndoCommand*  parent = nullptr);
QUndoCommand* new_QUndoCommand(const QString&  text, QUndoCommand*  parent = nullptr);
void delete_QUndoCommand(QUndoCommand* obj) { delete obj; } 
   QString  actionText(QUndoCommand* theWrappedObject) const;
   const QUndoCommand*  child(QUndoCommand* theWrappedObject, int  index) const;
   int  childCount(QUndoCommand* theWrappedObject) const;
   int  id(QUndoCommand* theWrappedObject) const;
   int  py_q_id(QUndoCommand* theWrappedObject) const{  return (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_id());}
   bool  isObsolete(QUndoCommand* theWrappedObject) const;
   bool  mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other);
   bool  py_q_mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other){  return (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_mergeWith(other));}
   void redo(QUndoCommand* theWrappedObject);
   void py_q_redo(QUndoCommand* theWrappedObject){  (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_redo());}
   void setObsolete(QUndoCommand* theWrappedObject, bool  obsolete);
   void setText(QUndoCommand* theWrappedObject, const QString&  text);
   QString  text(QUndoCommand* theWrappedObject) const;
   void undo(QUndoCommand* theWrappedObject);
   void py_q_undo(QUndoCommand* theWrappedObject){  (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_undo());}
};





class PythonQtShell_QUndoGroup : public QUndoGroup
{
public:
    PythonQtShell_QUndoGroup(QObject*  parent = nullptr):QUndoGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QUndoGroup();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoGroup : public QObject
{ Q_OBJECT
public:
public slots:
QUndoGroup* new_QUndoGroup(QObject*  parent = nullptr);
void delete_QUndoGroup(QUndoGroup* obj) { delete obj; } 
   QUndoStack*  activeStack(QUndoGroup* theWrappedObject) const;
   void addStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   bool  canRedo(QUndoGroup* theWrappedObject) const;
   bool  canUndo(QUndoGroup* theWrappedObject) const;
   QAction*  createRedoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   QAction*  createUndoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   bool  isClean(QUndoGroup* theWrappedObject) const;
   QString  redoText(QUndoGroup* theWrappedObject) const;
   void removeStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   QList<QUndoStack* >  stacks(QUndoGroup* theWrappedObject) const;
   QString  undoText(QUndoGroup* theWrappedObject) const;
};


