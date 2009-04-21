#ifndef PYTHONQTWRAPPER_QTEXTFORMAT_H
#define PYTHONQTWRAPPER_QTEXTFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtWrapper_QTextFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Property FormatType ObjectTypes PageBreakFlag )
enum Property{
  ObjectIndex = QTextFormat::ObjectIndex,   CssFloat = QTextFormat::CssFloat,   LayoutDirection = QTextFormat::LayoutDirection,   OutlinePen = QTextFormat::OutlinePen,   BackgroundBrush = QTextFormat::BackgroundBrush,   ForegroundBrush = QTextFormat::ForegroundBrush,   BackgroundImageUrl = QTextFormat::BackgroundImageUrl,   BlockAlignment = QTextFormat::BlockAlignment,   BlockTopMargin = QTextFormat::BlockTopMargin,   BlockBottomMargin = QTextFormat::BlockBottomMargin,   BlockLeftMargin = QTextFormat::BlockLeftMargin,   BlockRightMargin = QTextFormat::BlockRightMargin,   TextIndent = QTextFormat::TextIndent,   TabPositions = QTextFormat::TabPositions,   BlockIndent = QTextFormat::BlockIndent,   BlockNonBreakableLines = QTextFormat::BlockNonBreakableLines,   BlockTrailingHorizontalRulerWidth = QTextFormat::BlockTrailingHorizontalRulerWidth,   FirstFontProperty = QTextFormat::FirstFontProperty,   FontCapitalization = QTextFormat::FontCapitalization,   FontLetterSpacing = QTextFormat::FontLetterSpacing,   FontWordSpacing = QTextFormat::FontWordSpacing,   FontFamily = QTextFormat::FontFamily,   FontPointSize = QTextFormat::FontPointSize,   FontSizeAdjustment = QTextFormat::FontSizeAdjustment,   FontSizeIncrement = QTextFormat::FontSizeIncrement,   FontWeight = QTextFormat::FontWeight,   FontItalic = QTextFormat::FontItalic,   FontUnderline = QTextFormat::FontUnderline,   FontOverline = QTextFormat::FontOverline,   FontStrikeOut = QTextFormat::FontStrikeOut,   FontFixedPitch = QTextFormat::FontFixedPitch,   FontPixelSize = QTextFormat::FontPixelSize,   LastFontProperty = QTextFormat::LastFontProperty,   TextUnderlineColor = QTextFormat::TextUnderlineColor,   TextVerticalAlignment = QTextFormat::TextVerticalAlignment,   TextOutline = QTextFormat::TextOutline,   TextUnderlineStyle = QTextFormat::TextUnderlineStyle,   TextToolTip = QTextFormat::TextToolTip,   IsAnchor = QTextFormat::IsAnchor,   AnchorHref = QTextFormat::AnchorHref,   AnchorName = QTextFormat::AnchorName,   ObjectType = QTextFormat::ObjectType,   ListStyle = QTextFormat::ListStyle,   ListIndent = QTextFormat::ListIndent,   FrameBorder = QTextFormat::FrameBorder,   FrameMargin = QTextFormat::FrameMargin,   FramePadding = QTextFormat::FramePadding,   FrameWidth = QTextFormat::FrameWidth,   FrameHeight = QTextFormat::FrameHeight,   FrameTopMargin = QTextFormat::FrameTopMargin,   FrameBottomMargin = QTextFormat::FrameBottomMargin,   FrameLeftMargin = QTextFormat::FrameLeftMargin,   FrameRightMargin = QTextFormat::FrameRightMargin,   FrameBorderBrush = QTextFormat::FrameBorderBrush,   FrameBorderStyle = QTextFormat::FrameBorderStyle,   TableColumns = QTextFormat::TableColumns,   TableColumnWidthConstraints = QTextFormat::TableColumnWidthConstraints,   TableCellSpacing = QTextFormat::TableCellSpacing,   TableCellPadding = QTextFormat::TableCellPadding,   TableHeaderRowCount = QTextFormat::TableHeaderRowCount,   TableCellRowSpan = QTextFormat::TableCellRowSpan,   TableCellColumnSpan = QTextFormat::TableCellColumnSpan,   TableCellTopPadding = QTextFormat::TableCellTopPadding,   TableCellBottomPadding = QTextFormat::TableCellBottomPadding,   TableCellLeftPadding = QTextFormat::TableCellLeftPadding,   TableCellRightPadding = QTextFormat::TableCellRightPadding,   ImageName = QTextFormat::ImageName,   ImageWidth = QTextFormat::ImageWidth,   ImageHeight = QTextFormat::ImageHeight,   FullWidthSelection = QTextFormat::FullWidthSelection,   PageBreakPolicy = QTextFormat::PageBreakPolicy,   UserProperty = QTextFormat::UserProperty};
enum FormatType{
  InvalidFormat = QTextFormat::InvalidFormat,   BlockFormat = QTextFormat::BlockFormat,   CharFormat = QTextFormat::CharFormat,   ListFormat = QTextFormat::ListFormat,   TableFormat = QTextFormat::TableFormat,   FrameFormat = QTextFormat::FrameFormat,   UserFormat = QTextFormat::UserFormat};
enum ObjectTypes{
  NoObject = QTextFormat::NoObject,   ImageObject = QTextFormat::ImageObject,   TableObject = QTextFormat::TableObject,   TableCellObject = QTextFormat::TableCellObject,   UserObject = QTextFormat::UserObject};
enum PageBreakFlag{
  PageBreak_Auto = QTextFormat::PageBreak_Auto,   PageBreak_AlwaysBefore = QTextFormat::PageBreak_AlwaysBefore,   PageBreak_AlwaysAfter = QTextFormat::PageBreak_AlwaysAfter};
public slots:
QTextFormat* new_QTextFormat();
QTextFormat* new_QTextFormat(const QTextFormat&  rhs);
QTextFormat* new_QTextFormat(int  type);
void delete_QTextFormat(QTextFormat* obj) { delete obj; } 
   bool  boolProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value);
   QTextFrameFormat  toFrameFormat(QTextFormat* theWrappedObject) const;
   void clearForeground(QTextFormat* theWrappedObject);
   QTextListFormat  toListFormat(QTextFormat* theWrappedObject) const;
   void setObjectIndex(QTextFormat* theWrappedObject, int  object);
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVector<QTextLength >&  lengths);
   bool  hasProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QPen  penProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isCharFormat(QTextFormat* theWrappedObject) const;
   bool  isImageFormat(QTextFormat* theWrappedObject) const;
   void setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction);
   QBrush  brushProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QTextLength  lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void setObjectType(QTextFormat* theWrappedObject, int  type);
   bool  isValid(QTextFormat* theWrappedObject) const;
   int  objectType(QTextFormat* theWrappedObject) const;
   int  intProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QTextTableFormat  toTableFormat(QTextFormat* theWrappedObject) const;
   qreal  doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QVariant  property(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  operator_equal(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const;
   QMap<int , QVariant >  properties(QTextFormat* theWrappedObject) const;
   QBrush  background(QTextFormat* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QTextFormat* theWrappedObject) const;
   void setBackground(QTextFormat* theWrappedObject, const QBrush&  brush);
   QTextTableCellFormat  toTableCellFormat(QTextFormat* theWrappedObject) const;
   QBrush  foreground(QTextFormat* theWrappedObject) const;
   QString  stringProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isBlockFormat(QTextFormat* theWrappedObject) const;
   void readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   int  propertyCount(QTextFormat* theWrappedObject) const;
   void clearBackground(QTextFormat* theWrappedObject);
   void clearProperty(QTextFormat* theWrappedObject, int  propertyId);
   void writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   int  objectIndex(QTextFormat* theWrappedObject) const;
   QTextCharFormat  toCharFormat(QTextFormat* theWrappedObject) const;
   QVector<QTextLength >  lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isTableFormat(QTextFormat* theWrappedObject) const;
   int  type(QTextFormat* theWrappedObject) const;
   void merge(QTextFormat* theWrappedObject, const QTextFormat&  other);
   QColor  colorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isTableCellFormat(QTextFormat* theWrappedObject) const;
   QTextImageFormat  toImageFormat(QTextFormat* theWrappedObject) const;
   bool  isFrameFormat(QTextFormat* theWrappedObject) const;
   void setForeground(QTextFormat* theWrappedObject, const QBrush&  brush);
   QTextBlockFormat  toBlockFormat(QTextFormat* theWrappedObject) const;
   bool  isListFormat(QTextFormat* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTFORMAT_H
