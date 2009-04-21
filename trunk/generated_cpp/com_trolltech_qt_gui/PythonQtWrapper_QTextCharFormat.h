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
   void setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value);
   void setFontItalic(QTextCharFormat* theWrappedObject, bool  italic);
   void setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan);
   int  tableCellRowSpan(QTextCharFormat* theWrappedObject) const;
   void setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style);
   QFont  font(QTextCharFormat* theWrappedObject) const;
   void setFontOverline(QTextCharFormat* theWrappedObject, bool  overline);
   QStringList  anchorNames(QTextCharFormat* theWrappedObject) const;
   bool  isValid(QTextCharFormat* theWrappedObject) const;
   void setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names);
   void setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen);
   QString  toolTip(QTextCharFormat* theWrappedObject) const;
   bool  isAnchor(QTextCharFormat* theWrappedObject) const;
   void setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip);
   void setAnchor(QTextCharFormat* theWrappedObject, bool  anchor);
   void setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization);
   void setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size);
   QString  anchorHref(QTextCharFormat* theWrappedObject) const;
   void setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color);
   qreal  fontLetterSpacing(QTextCharFormat* theWrappedObject) const;
   bool  fontStrikeOut(QTextCharFormat* theWrappedObject) const;
   void setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch);
   QString  fontFamily(QTextCharFormat* theWrappedObject) const;
   QColor  underlineColor(QTextCharFormat* theWrappedObject) const;
   int  fontWeight(QTextCharFormat* theWrappedObject) const;
   void setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family);
   QFont::Capitalization  fontCapitalization(QTextCharFormat* theWrappedObject) const;
   int  tableCellColumnSpan(QTextCharFormat* theWrappedObject) const;
   bool  fontItalic(QTextCharFormat* theWrappedObject) const;
   void setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline);
   void setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan);
   QTextCharFormat::VerticalAlignment  verticalAlignment(QTextCharFormat* theWrappedObject) const;
   void setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment);
   void setFontWeight(QTextCharFormat* theWrappedObject, int  weight);
   void setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut);
   QPen  textOutline(QTextCharFormat* theWrappedObject) const;
   bool  fontOverline(QTextCharFormat* theWrappedObject) const;
   QTextCharFormat::UnderlineStyle  underlineStyle(QTextCharFormat* theWrappedObject) const;
   qreal  fontPointSize(QTextCharFormat* theWrappedObject) const;
   bool  fontFixedPitch(QTextCharFormat* theWrappedObject) const;
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font);
   qreal  fontWordSpacing(QTextCharFormat* theWrappedObject) const;
   bool  fontUnderline(QTextCharFormat* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTCHARFORMAT_H
