#ifndef PYTHONQTWRAPPER_QTEXTCHARFORMAT_H
#define PYTHONQTWRAPPER_QTEXTCHARFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtShell_QTextCharFormat : public QTextCharFormat
{
public:
    PythonQtShell_QTextCharFormat():QTextCharFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextCharFormat(const QTextFormat&  fmt):QTextCharFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCharFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(VerticalAlignment UnderlineStyle )
enum VerticalAlignment{
  AlignNormal = QTextCharFormat::AlignNormal,   AlignSuperScript = QTextCharFormat::AlignSuperScript,   AlignSubScript = QTextCharFormat::AlignSubScript,   AlignMiddle = QTextCharFormat::AlignMiddle,   AlignTop = QTextCharFormat::AlignTop,   AlignBottom = QTextCharFormat::AlignBottom};
enum UnderlineStyle{
  NoUnderline = QTextCharFormat::NoUnderline,   SingleUnderline = QTextCharFormat::SingleUnderline,   DashUnderline = QTextCharFormat::DashUnderline,   DotLine = QTextCharFormat::DotLine,   DashDotLine = QTextCharFormat::DashDotLine,   DashDotDotLine = QTextCharFormat::DashDotDotLine,   WaveUnderline = QTextCharFormat::WaveUnderline,   SpellCheckUnderline = QTextCharFormat::SpellCheckUnderline};
public slots:
QTextCharFormat* new_QTextCharFormat();
QTextCharFormat* new_QTextCharFormat(const QTextCharFormat& other) {
PythonQtShell_QTextCharFormat* a = new PythonQtShell_QTextCharFormat();
*((QTextCharFormat*)a) = other;
return a; }
void delete_QTextCharFormat(QTextCharFormat* obj) { delete obj; } 
   bool  fontItalic(QTextCharFormat* theWrappedObject) const;
   void setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut);
   void setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   qreal  fontWordSpacing(QTextCharFormat* theWrappedObject) const;
   QPen  textOutline(QTextCharFormat* theWrappedObject) const;
   bool  fontFixedPitch(QTextCharFormat* theWrappedObject) const;
   bool  fontUnderline(QTextCharFormat* theWrappedObject) const;
   void setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan);
   void setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value);
   QString  fontFamily(QTextCharFormat* theWrappedObject) const;
   void setFontItalic(QTextCharFormat* theWrappedObject, bool  italic);
   void setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen);
   int  tableCellRowSpan(QTextCharFormat* theWrappedObject) const;
   void setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style);
   void setAnchor(QTextCharFormat* theWrappedObject, bool  anchor);
   QFont  font(QTextCharFormat* theWrappedObject) const;
   void setFontOverline(QTextCharFormat* theWrappedObject, bool  overline);
   void setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization);
   void setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color);
   QStringList  anchorNames(QTextCharFormat* theWrappedObject) const;
   bool  isValid(QTextCharFormat* theWrappedObject) const;
   int  fontWeight(QTextCharFormat* theWrappedObject) const;
   void setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names);
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font);
   qreal  fontLetterSpacing(QTextCharFormat* theWrappedObject) const;
   bool  isAnchor(QTextCharFormat* theWrappedObject) const;
   void setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch);
   void setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline);
   int  tableCellColumnSpan(QTextCharFormat* theWrappedObject) const;
   void setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size);
   QTextCharFormat::VerticalAlignment  verticalAlignment(QTextCharFormat* theWrappedObject) const;
   QColor  underlineColor(QTextCharFormat* theWrappedObject) const;
   void setFontWeight(QTextCharFormat* theWrappedObject, int  weight);
   bool  fontStrikeOut(QTextCharFormat* theWrappedObject) const;
   void setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   QTextCharFormat::UnderlineStyle  underlineStyle(QTextCharFormat* theWrappedObject) const;
   QString  toolTip(QTextCharFormat* theWrappedObject) const;
   qreal  fontPointSize(QTextCharFormat* theWrappedObject) const;
   void setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family);
   bool  fontOverline(QTextCharFormat* theWrappedObject) const;
   void setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment);
   QFont::Capitalization  fontCapitalization(QTextCharFormat* theWrappedObject) const;
   QString  anchorHref(QTextCharFormat* theWrappedObject) const;
   void setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan);
   void setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip);
};

#endif // PYTHONQTWRAPPER_QTEXTCHARFORMAT_H
