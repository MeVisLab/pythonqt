#ifndef PYTHONQTWRAPPER_QFONT_H
#define PYTHONQTWRAPPER_QFONT_H

#include <qfont.h>
#include <QObject>

#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qfont.h>
#include <qpaintdevice.h>
#include <qstringlist.h>

class PythonQtWrapper_QFont : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SpacingType StyleHint Weight Capitalization Stretch Style )
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
   bool  bold(QFont* theWrappedObject) const;
   void static_QFont_cacheStatistics();
   QFont::Capitalization  capitalization(QFont* theWrappedObject) const;
   void static_QFont_cleanup();
   QString  defaultFamily(QFont* theWrappedObject) const;
   bool  exactMatch(QFont* theWrappedObject) const;
   QString  family(QFont* theWrappedObject) const;
   bool  fixedPitch(QFont* theWrappedObject) const;
   bool  fromString(QFont* theWrappedObject, const QString&  arg__1);
   Qt::HANDLE  handle(QFont* theWrappedObject) const;
   void static_QFont_initialize();
   void static_QFont_insertSubstitution(const QString&  arg__1, const QString&  arg__2);
   void static_QFont_insertSubstitutions(const QString&  arg__1, const QStringList&  arg__2);
   bool  isCopyOf(QFont* theWrappedObject, const QFont&  arg__1) const;
   bool  italic(QFont* theWrappedObject) const;
   bool  kerning(QFont* theWrappedObject) const;
   QString  key(QFont* theWrappedObject) const;
   QString  lastResortFamily(QFont* theWrappedObject) const;
   QString  lastResortFont(QFont* theWrappedObject) const;
   qreal  letterSpacing(QFont* theWrappedObject) const;
   QFont::SpacingType  letterSpacingType(QFont* theWrappedObject) const;
   bool  operator_less(QFont* theWrappedObject, const QFont&  arg__1) const;
   void writeTo(QFont* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QFont* theWrappedObject, const QFont&  arg__1) const;
   void readFrom(QFont* theWrappedObject, QDataStream&  arg__1);
   bool  overline(QFont* theWrappedObject) const;
   int  pixelSize(QFont* theWrappedObject) const;
   int  pointSize(QFont* theWrappedObject) const;
   qreal  pointSizeF(QFont* theWrappedObject) const;
   bool  rawMode(QFont* theWrappedObject) const;
   QString  rawName(QFont* theWrappedObject) const;
   void static_QFont_removeSubstitution(const QString&  arg__1);
   uint  resolve(QFont* theWrappedObject) const;
   QFont  resolve(QFont* theWrappedObject, const QFont&  arg__1) const;
   void resolve(QFont* theWrappedObject, uint  mask);
   void setBold(QFont* theWrappedObject, bool  arg__1);
   void setCapitalization(QFont* theWrappedObject, QFont::Capitalization  arg__1);
   void setFamily(QFont* theWrappedObject, const QString&  arg__1);
   void setFixedPitch(QFont* theWrappedObject, bool  arg__1);
   void setItalic(QFont* theWrappedObject, bool  b);
   void setKerning(QFont* theWrappedObject, bool  arg__1);
   void setLetterSpacing(QFont* theWrappedObject, QFont::SpacingType  type, qreal  spacing);
   void setOverline(QFont* theWrappedObject, bool  arg__1);
   void setPixelSize(QFont* theWrappedObject, int  arg__1);
   void setPointSize(QFont* theWrappedObject, int  arg__1);
   void setPointSizeF(QFont* theWrappedObject, qreal  arg__1);
   void setRawMode(QFont* theWrappedObject, bool  arg__1);
   void setRawName(QFont* theWrappedObject, const QString&  arg__1);
   void setStretch(QFont* theWrappedObject, int  arg__1);
   void setStrikeOut(QFont* theWrappedObject, bool  arg__1);
   void setStyle(QFont* theWrappedObject, QFont::Style  style);
   void setStyleHint(QFont* theWrappedObject, QFont::StyleHint  arg__1, QFont::StyleStrategy  arg__2 = QFont::PreferDefault);
   void setStyleStrategy(QFont* theWrappedObject, QFont::StyleStrategy  s);
   void setUnderline(QFont* theWrappedObject, bool  arg__1);
   void setWeight(QFont* theWrappedObject, int  arg__1);
   void setWordSpacing(QFont* theWrappedObject, qreal  spacing);
   int  stretch(QFont* theWrappedObject) const;
   bool  strikeOut(QFont* theWrappedObject) const;
   QFont::Style  style(QFont* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFont* theWrappedObject) const;
   QFont::StyleStrategy  styleStrategy(QFont* theWrappedObject) const;
   QString  static_QFont_substitute(const QString&  arg__1);
   QStringList  static_QFont_substitutes(const QString&  arg__1);
   QStringList  static_QFont_substitutions();
   QString  toString(QFont* theWrappedObject) const;
   bool  underline(QFont* theWrappedObject) const;
   int  weight(QFont* theWrappedObject) const;
   qreal  wordSpacing(QFont* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFONT_H
