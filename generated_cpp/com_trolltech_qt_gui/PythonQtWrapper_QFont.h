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
   QFont::Style  style(QFont* theWrappedObject) const;
   void setStyle(QFont* theWrappedObject, QFont::Style  style);
   QStringList  static_QFont_substitutes(const QString&  arg__1);
   void static_QFont_removeSubstitution(const QString&  arg__1);
   QString  toString(QFont* theWrappedObject) const;
   QString  rawName(QFont* theWrappedObject) const;
   int  stretch(QFont* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFont* theWrappedObject) const;
   void setRawName(QFont* theWrappedObject, const QString&  arg__1);
   QString  lastResortFont(QFont* theWrappedObject) const;
   bool  rawMode(QFont* theWrappedObject) const;
   Qt::HANDLE  handle(QFont* theWrappedObject) const;
   bool  bold(QFont* theWrappedObject) const;
   void setStrikeOut(QFont* theWrappedObject, bool  arg__1);
   void static_QFont_insertSubstitution(const QString&  arg__1, const QString&  arg__2);
   void setStyleHint(QFont* theWrappedObject, QFont::StyleHint  arg__1, QFont::StyleStrategy  arg__2 = QFont::PreferDefault);
   QStringList  static_QFont_substitutions();
   void static_QFont_initialize();
   void resolve(QFont* theWrappedObject, uint  mask);
   qreal  letterSpacing(QFont* theWrappedObject) const;
   bool  underline(QFont* theWrappedObject) const;
   void static_QFont_cleanup();
   QFont::SpacingType  letterSpacingType(QFont* theWrappedObject) const;
   bool  overline(QFont* theWrappedObject) const;
   QString  family(QFont* theWrappedObject) const;
   bool  isCopyOf(QFont* theWrappedObject, const QFont&  arg__1) const;
   void setPointSize(QFont* theWrappedObject, int  arg__1);
   void setLetterSpacing(QFont* theWrappedObject, QFont::SpacingType  type, qreal  spacing);
   void setOverline(QFont* theWrappedObject, bool  arg__1);
   QString  lastResortFamily(QFont* theWrappedObject) const;
   bool  strikeOut(QFont* theWrappedObject) const;
   qreal  wordSpacing(QFont* theWrappedObject) const;
   void setBold(QFont* theWrappedObject, bool  arg__1);
   void setFixedPitch(QFont* theWrappedObject, bool  arg__1);
   bool  operator_less(QFont* theWrappedObject, const QFont&  arg__1) const;
   bool  exactMatch(QFont* theWrappedObject) const;
   void setFamily(QFont* theWrappedObject, const QString&  arg__1);
   bool  fixedPitch(QFont* theWrappedObject) const;
   void setStyleStrategy(QFont* theWrappedObject, QFont::StyleStrategy  s);
   void setWeight(QFont* theWrappedObject, int  arg__1);
   void writeTo(QFont* theWrappedObject, QDataStream&  arg__1);
   bool  fromString(QFont* theWrappedObject, const QString&  arg__1);
   QFont  resolve(QFont* theWrappedObject, const QFont&  arg__1) const;
   QFont::Capitalization  capitalization(QFont* theWrappedObject) const;
   QString  static_QFont_substitute(const QString&  arg__1);
   void setPointSizeF(QFont* theWrappedObject, qreal  arg__1);
   void setRawMode(QFont* theWrappedObject, bool  arg__1);
   void setItalic(QFont* theWrappedObject, bool  b);
   int  pointSize(QFont* theWrappedObject) const;
   void setWordSpacing(QFont* theWrappedObject, qreal  spacing);
   bool  operator_equal(QFont* theWrappedObject, const QFont&  arg__1) const;
   QFont::StyleStrategy  styleStrategy(QFont* theWrappedObject) const;
   void static_QFont_cacheStatistics();
   qreal  pointSizeF(QFont* theWrappedObject) const;
   void static_QFont_insertSubstitutions(const QString&  arg__1, const QStringList&  arg__2);
   QString  key(QFont* theWrappedObject) const;
   uint  resolve(QFont* theWrappedObject) const;
   bool  kerning(QFont* theWrappedObject) const;
   QString  defaultFamily(QFont* theWrappedObject) const;
   void setStretch(QFont* theWrappedObject, int  arg__1);
   int  weight(QFont* theWrappedObject) const;
   void setUnderline(QFont* theWrappedObject, bool  arg__1);
   void setKerning(QFont* theWrappedObject, bool  arg__1);
   void setPixelSize(QFont* theWrappedObject, int  arg__1);
   void readFrom(QFont* theWrappedObject, QDataStream&  arg__1);
   bool  italic(QFont* theWrappedObject) const;
   int  pixelSize(QFont* theWrappedObject) const;
   void setCapitalization(QFont* theWrappedObject, QFont::Capitalization  arg__1);
};

#endif // PYTHONQTWRAPPER_QFONT_H
