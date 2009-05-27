#ifndef PYTHONQTWRAPPER_QFONT_H
#define PYTHONQTWRAPPER_QFONT_H

#include <qfont.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qfont.h>
#include <qpaintdevice.h>
#include <qstringlist.h>

class PythonQtWrapper_QFont : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleStrategy SpacingType StyleHint Weight Capitalization Stretch Style )
enum StyleStrategy{
  PreferDefault = QFont::PreferDefault,   PreferBitmap = QFont::PreferBitmap,   PreferDevice = QFont::PreferDevice,   PreferOutline = QFont::PreferOutline,   ForceOutline = QFont::ForceOutline,   PreferMatch = QFont::PreferMatch,   PreferQuality = QFont::PreferQuality,   PreferAntialias = QFont::PreferAntialias,   NoAntialias = QFont::NoAntialias,   OpenGLCompatible = QFont::OpenGLCompatible,   NoFontMerging = QFont::NoFontMerging};
enum SpacingType{
  PercentageSpacing = QFont::PercentageSpacing,   AbsoluteSpacing = QFont::AbsoluteSpacing};
enum StyleHint{
  Helvetica = QFont::Helvetica,   SansSerif = QFont::SansSerif,   Times = QFont::Times,   Serif = QFont::Serif,   Courier = QFont::Courier,   TypeWriter = QFont::TypeWriter,   OldEnglish = QFont::OldEnglish,   Decorative = QFont::Decorative,   System = QFont::System,   AnyStyle = QFont::AnyStyle};
enum Weight{
  Light = QFont::Light,   Normal = QFont::Normal,   DemiBold = QFont::DemiBold,   Bold = QFont::Bold,   Black = QFont::Black};
enum Capitalization{
  MixedCase = QFont::MixedCase,   AllUppercase = QFont::AllUppercase,   AllLowercase = QFont::AllLowercase,   SmallCaps = QFont::SmallCaps,   Capitalize = QFont::Capitalize};
enum Stretch{
  UltraCondensed = QFont::UltraCondensed,   ExtraCondensed = QFont::ExtraCondensed,   Condensed = QFont::Condensed,   SemiCondensed = QFont::SemiCondensed,   Unstretched = QFont::Unstretched,   SemiExpanded = QFont::SemiExpanded,   Expanded = QFont::Expanded,   ExtraExpanded = QFont::ExtraExpanded,   UltraExpanded = QFont::UltraExpanded};
enum Style{
  StyleNormal = QFont::StyleNormal,   StyleItalic = QFont::StyleItalic,   StyleOblique = QFont::StyleOblique};
public slots:
QFont* new_QFont();
QFont* new_QFont(const QFont&  arg__1);
QFont* new_QFont(const QFont&  arg__1, QPaintDevice*  pd);
QFont* new_QFont(const QString&  family, int  pointSize = -1, int  weight = -1, bool  italic = false);
void delete_QFont(QFont* obj) { delete obj; } 
   void setLetterSpacing(QFont* theWrappedObject, QFont::SpacingType  type, qreal  spacing);
   void setStrikeOut(QFont* theWrappedObject, bool  arg__1);
   int  weight(QFont* theWrappedObject) const;
   void setRawMode(QFont* theWrappedObject, bool  arg__1);
   void setFixedPitch(QFont* theWrappedObject, bool  arg__1);
   bool  operator_less(QFont* theWrappedObject, const QFont&  arg__1) const;
   void setStyleStrategy(QFont* theWrappedObject, QFont::StyleStrategy  s);
   qreal  wordSpacing(QFont* theWrappedObject) const;
   void setOverline(QFont* theWrappedObject, bool  arg__1);
   qreal  letterSpacing(QFont* theWrappedObject) const;
   bool  fixedPitch(QFont* theWrappedObject) const;
   QString  key(QFont* theWrappedObject) const;
   int  pointSize(QFont* theWrappedObject) const;
   QFont  resolve(QFont* theWrappedObject, const QFont&  arg__1) const;
   void static_QFont_removeSubstitution(const QString&  arg__1);
   bool  overline(QFont* theWrappedObject) const;
   bool  fromString(QFont* theWrappedObject, const QString&  arg__1);
   qreal  pointSizeF(QFont* theWrappedObject) const;
   QString  rawName(QFont* theWrappedObject) const;
   void static_QFont_insertSubstitutions(const QString&  arg__1, const QStringList&  arg__2);
   bool  strikeOut(QFont* theWrappedObject) const;
   void writeTo(QFont* theWrappedObject, QDataStream&  arg__1);
   void static_QFont_cacheStatistics();
   uint  resolve(QFont* theWrappedObject) const;
   int  stretch(QFont* theWrappedObject) const;
   QFont::StyleStrategy  styleStrategy(QFont* theWrappedObject) const;
   QStringList  static_QFont_substitutes(const QString&  arg__1);
   QFont::Capitalization  capitalization(QFont* theWrappedObject) const;
   QString  defaultFamily(QFont* theWrappedObject) const;
   void setWordSpacing(QFont* theWrappedObject, qreal  spacing);
   void setKerning(QFont* theWrappedObject, bool  arg__1);
   QString  toString(QFont* theWrappedObject) const;
   void setStretch(QFont* theWrappedObject, int  arg__1);
   void setStyleHint(QFont* theWrappedObject, QFont::StyleHint  arg__1, QFont::StyleStrategy  arg__2 = QFont::PreferDefault);
   bool  operator_equal(QFont* theWrappedObject, const QFont&  arg__1) const;
   QString  static_QFont_substitute(const QString&  arg__1);
   Qt::HANDLE  handle(QFont* theWrappedObject) const;
   void static_QFont_insertSubstitution(const QString&  arg__1, const QString&  arg__2);
   void static_QFont_initialize();
   bool  underline(QFont* theWrappedObject) const;
   void setUnderline(QFont* theWrappedObject, bool  arg__1);
   bool  kerning(QFont* theWrappedObject) const;
   int  pixelSize(QFont* theWrappedObject) const;
   bool  rawMode(QFont* theWrappedObject) const;
   void setCapitalization(QFont* theWrappedObject, QFont::Capitalization  arg__1);
   void setItalic(QFont* theWrappedObject, bool  b);
   bool  italic(QFont* theWrappedObject) const;
   void setPointSizeF(QFont* theWrappedObject, qreal  arg__1);
   void setStyle(QFont* theWrappedObject, QFont::Style  style);
   QFont::Style  style(QFont* theWrappedObject) const;
   QString  family(QFont* theWrappedObject) const;
   void readFrom(QFont* theWrappedObject, QDataStream&  arg__1);
   void setRawName(QFont* theWrappedObject, const QString&  arg__1);
   void setBold(QFont* theWrappedObject, bool  arg__1);
   bool  bold(QFont* theWrappedObject) const;
   QStringList  static_QFont_substitutions();
   void static_QFont_cleanup();
   QFont::StyleHint  styleHint(QFont* theWrappedObject) const;
   void setFamily(QFont* theWrappedObject, const QString&  arg__1);
   QString  lastResortFamily(QFont* theWrappedObject) const;
   void resolve(QFont* theWrappedObject, uint  mask);
   void setPixelSize(QFont* theWrappedObject, int  arg__1);
   void setWeight(QFont* theWrappedObject, int  arg__1);
   QFont::SpacingType  letterSpacingType(QFont* theWrappedObject) const;
   void setPointSize(QFont* theWrappedObject, int  arg__1);
   bool  isCopyOf(QFont* theWrappedObject, const QFont&  arg__1) const;
   QString  lastResortFont(QFont* theWrappedObject) const;
   bool  exactMatch(QFont* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFONT_H
