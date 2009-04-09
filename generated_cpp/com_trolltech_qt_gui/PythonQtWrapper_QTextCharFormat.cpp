#include "PythonQtWrapper_QTextCharFormat.h"

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvector.h>

QTextCharFormat* PythonQtWrapper_QTextCharFormat::new_QTextCharFormat()
{ 
return new QTextCharFormat(); }

QString  PythonQtWrapper_QTextCharFormat::anchorHref(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->anchorHref();
}

QStringList  PythonQtWrapper_QTextCharFormat::anchorNames(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->anchorNames();
}

QFont  PythonQtWrapper_QTextCharFormat::font(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->font();
}

QFont::Capitalization  PythonQtWrapper_QTextCharFormat::fontCapitalization(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontCapitalization();
}

QString  PythonQtWrapper_QTextCharFormat::fontFamily(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontFamily();
}

bool  PythonQtWrapper_QTextCharFormat::fontFixedPitch(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontFixedPitch();
}

bool  PythonQtWrapper_QTextCharFormat::fontItalic(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontItalic();
}

qreal  PythonQtWrapper_QTextCharFormat::fontLetterSpacing(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontLetterSpacing();
}

bool  PythonQtWrapper_QTextCharFormat::fontOverline(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontOverline();
}

qreal  PythonQtWrapper_QTextCharFormat::fontPointSize(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontPointSize();
}

bool  PythonQtWrapper_QTextCharFormat::fontStrikeOut(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontStrikeOut();
}

bool  PythonQtWrapper_QTextCharFormat::fontUnderline(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontUnderline();
}

int  PythonQtWrapper_QTextCharFormat::fontWeight(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontWeight();
}

qreal  PythonQtWrapper_QTextCharFormat::fontWordSpacing(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->fontWordSpacing();
}

bool  PythonQtWrapper_QTextCharFormat::isAnchor(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->isAnchor();
}

bool  PythonQtWrapper_QTextCharFormat::isValid(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->isValid();
}

void PythonQtWrapper_QTextCharFormat::setAnchor(QTextCharFormat* theWrappedObject, bool  anchor)
{
theWrappedObject->setAnchor(anchor);
}

void PythonQtWrapper_QTextCharFormat::setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value)
{
theWrappedObject->setAnchorHref(value);
}

void PythonQtWrapper_QTextCharFormat::setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names)
{
theWrappedObject->setAnchorNames(names);
}

void PythonQtWrapper_QTextCharFormat::setFont(QTextCharFormat* theWrappedObject, const QFont&  font)
{
theWrappedObject->setFont(font);
}

void PythonQtWrapper_QTextCharFormat::setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization)
{
theWrappedObject->setFontCapitalization(capitalization);
}

void PythonQtWrapper_QTextCharFormat::setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family)
{
theWrappedObject->setFontFamily(family);
}

void PythonQtWrapper_QTextCharFormat::setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch)
{
theWrappedObject->setFontFixedPitch(fixedPitch);
}

void PythonQtWrapper_QTextCharFormat::setFontItalic(QTextCharFormat* theWrappedObject, bool  italic)
{
theWrappedObject->setFontItalic(italic);
}

void PythonQtWrapper_QTextCharFormat::setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing)
{
theWrappedObject->setFontLetterSpacing(spacing);
}

void PythonQtWrapper_QTextCharFormat::setFontOverline(QTextCharFormat* theWrappedObject, bool  overline)
{
theWrappedObject->setFontOverline(overline);
}

void PythonQtWrapper_QTextCharFormat::setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size)
{
theWrappedObject->setFontPointSize(size);
}

void PythonQtWrapper_QTextCharFormat::setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut)
{
theWrappedObject->setFontStrikeOut(strikeOut);
}

void PythonQtWrapper_QTextCharFormat::setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline)
{
theWrappedObject->setFontUnderline(underline);
}

void PythonQtWrapper_QTextCharFormat::setFontWeight(QTextCharFormat* theWrappedObject, int  weight)
{
theWrappedObject->setFontWeight(weight);
}

void PythonQtWrapper_QTextCharFormat::setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing)
{
theWrappedObject->setFontWordSpacing(spacing);
}

void PythonQtWrapper_QTextCharFormat::setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan)
{
theWrappedObject->setTableCellColumnSpan(tableCellColumnSpan);
}

void PythonQtWrapper_QTextCharFormat::setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan)
{
theWrappedObject->setTableCellRowSpan(tableCellRowSpan);
}

void PythonQtWrapper_QTextCharFormat::setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen)
{
theWrappedObject->setTextOutline(pen);
}

void PythonQtWrapper_QTextCharFormat::setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip)
{
theWrappedObject->setToolTip(tip);
}

void PythonQtWrapper_QTextCharFormat::setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color)
{
theWrappedObject->setUnderlineColor(color);
}

void PythonQtWrapper_QTextCharFormat::setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style)
{
theWrappedObject->setUnderlineStyle(style);
}

void PythonQtWrapper_QTextCharFormat::setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment)
{
theWrappedObject->setVerticalAlignment(alignment);
}

int  PythonQtWrapper_QTextCharFormat::tableCellColumnSpan(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->tableCellColumnSpan();
}

int  PythonQtWrapper_QTextCharFormat::tableCellRowSpan(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->tableCellRowSpan();
}

QPen  PythonQtWrapper_QTextCharFormat::textOutline(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->textOutline();
}

QString  PythonQtWrapper_QTextCharFormat::toolTip(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

QColor  PythonQtWrapper_QTextCharFormat::underlineColor(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->underlineColor();
}

QTextCharFormat::UnderlineStyle  PythonQtWrapper_QTextCharFormat::underlineStyle(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->underlineStyle();
}

QTextCharFormat::VerticalAlignment  PythonQtWrapper_QTextCharFormat::verticalAlignment(QTextCharFormat* theWrappedObject) const
{
return theWrappedObject->verticalAlignment();
}

