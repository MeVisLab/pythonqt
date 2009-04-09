#include "PythonQtWrapper_QFont.h"

#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qfont.h>
#include <qpaintdevice.h>
#include <qstringlist.h>

QFont* PythonQtWrapper_QFont::new_QFont()
{ 
return new QFont(); }

QFont* PythonQtWrapper_QFont::new_QFont(const QFont&  arg__1)
{ 
return new QFont(arg__1); }

QFont* PythonQtWrapper_QFont::new_QFont(const QFont&  arg__1, QPaintDevice*  pd)
{ 
return new QFont(arg__1, pd); }

QFont* PythonQtWrapper_QFont::new_QFont(const QString&  family, int  pointSize, int  weight, bool  italic)
{ 
return new QFont(family, pointSize, weight, italic); }

bool  PythonQtWrapper_QFont::bold(QFont* theWrappedObject) const
{
return theWrappedObject->bold();
}

void PythonQtWrapper_QFont::static_QFont_cacheStatistics()
{
QFont::cacheStatistics();
}

QFont::Capitalization  PythonQtWrapper_QFont::capitalization(QFont* theWrappedObject) const
{
return theWrappedObject->capitalization();
}

void PythonQtWrapper_QFont::static_QFont_cleanup()
{
QFont::cleanup();
}

QString  PythonQtWrapper_QFont::defaultFamily(QFont* theWrappedObject) const
{
return theWrappedObject->defaultFamily();
}

bool  PythonQtWrapper_QFont::exactMatch(QFont* theWrappedObject) const
{
return theWrappedObject->exactMatch();
}

QString  PythonQtWrapper_QFont::family(QFont* theWrappedObject) const
{
return theWrappedObject->family();
}

bool  PythonQtWrapper_QFont::fixedPitch(QFont* theWrappedObject) const
{
return theWrappedObject->fixedPitch();
}

bool  PythonQtWrapper_QFont::fromString(QFont* theWrappedObject, const QString&  arg__1)
{
return theWrappedObject->fromString(arg__1);
}

Qt::HANDLE  PythonQtWrapper_QFont::handle(QFont* theWrappedObject) const
{
return theWrappedObject->handle();
}

void PythonQtWrapper_QFont::static_QFont_initialize()
{
QFont::initialize();
}

void PythonQtWrapper_QFont::static_QFont_insertSubstitution(const QString&  arg__1, const QString&  arg__2)
{
QFont::insertSubstitution(arg__1, arg__2);
}

void PythonQtWrapper_QFont::static_QFont_insertSubstitutions(const QString&  arg__1, const QStringList&  arg__2)
{
QFont::insertSubstitutions(arg__1, arg__2);
}

bool  PythonQtWrapper_QFont::isCopyOf(QFont* theWrappedObject, const QFont&  arg__1) const
{
return theWrappedObject->isCopyOf(arg__1);
}

bool  PythonQtWrapper_QFont::italic(QFont* theWrappedObject) const
{
return theWrappedObject->italic();
}

bool  PythonQtWrapper_QFont::kerning(QFont* theWrappedObject) const
{
return theWrappedObject->kerning();
}

QString  PythonQtWrapper_QFont::key(QFont* theWrappedObject) const
{
return theWrappedObject->key();
}

QString  PythonQtWrapper_QFont::lastResortFamily(QFont* theWrappedObject) const
{
return theWrappedObject->lastResortFamily();
}

QString  PythonQtWrapper_QFont::lastResortFont(QFont* theWrappedObject) const
{
return theWrappedObject->lastResortFont();
}

qreal  PythonQtWrapper_QFont::letterSpacing(QFont* theWrappedObject) const
{
return theWrappedObject->letterSpacing();
}

QFont::SpacingType  PythonQtWrapper_QFont::letterSpacingType(QFont* theWrappedObject) const
{
return theWrappedObject->letterSpacingType();
}

bool  PythonQtWrapper_QFont::operator_less(QFont* theWrappedObject, const QFont&  arg__1) const
{
return *theWrappedObject < arg__1;
}

void PythonQtWrapper_QFont::writeTo(QFont* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QFont::operator_equal(QFont* theWrappedObject, const QFont&  arg__1) const
{
return *theWrappedObject == arg__1;
}

void PythonQtWrapper_QFont::readFrom(QFont* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

bool  PythonQtWrapper_QFont::overline(QFont* theWrappedObject) const
{
return theWrappedObject->overline();
}

int  PythonQtWrapper_QFont::pixelSize(QFont* theWrappedObject) const
{
return theWrappedObject->pixelSize();
}

int  PythonQtWrapper_QFont::pointSize(QFont* theWrappedObject) const
{
return theWrappedObject->pointSize();
}

qreal  PythonQtWrapper_QFont::pointSizeF(QFont* theWrappedObject) const
{
return theWrappedObject->pointSizeF();
}

bool  PythonQtWrapper_QFont::rawMode(QFont* theWrappedObject) const
{
return theWrappedObject->rawMode();
}

QString  PythonQtWrapper_QFont::rawName(QFont* theWrappedObject) const
{
return theWrappedObject->rawName();
}

void PythonQtWrapper_QFont::static_QFont_removeSubstitution(const QString&  arg__1)
{
QFont::removeSubstitution(arg__1);
}

uint  PythonQtWrapper_QFont::resolve(QFont* theWrappedObject) const
{
return theWrappedObject->resolve();
}

QFont  PythonQtWrapper_QFont::resolve(QFont* theWrappedObject, const QFont&  arg__1) const
{
return theWrappedObject->resolve(arg__1);
}

void PythonQtWrapper_QFont::resolve(QFont* theWrappedObject, uint  mask)
{
theWrappedObject->resolve(mask);
}

void PythonQtWrapper_QFont::setBold(QFont* theWrappedObject, bool  arg__1)
{
theWrappedObject->setBold(arg__1);
}

void PythonQtWrapper_QFont::setCapitalization(QFont* theWrappedObject, QFont::Capitalization  arg__1)
{
theWrappedObject->setCapitalization(arg__1);
}

void PythonQtWrapper_QFont::setFamily(QFont* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setFamily(arg__1);
}

void PythonQtWrapper_QFont::setFixedPitch(QFont* theWrappedObject, bool  arg__1)
{
theWrappedObject->setFixedPitch(arg__1);
}

void PythonQtWrapper_QFont::setItalic(QFont* theWrappedObject, bool  b)
{
theWrappedObject->setItalic(b);
}

void PythonQtWrapper_QFont::setKerning(QFont* theWrappedObject, bool  arg__1)
{
theWrappedObject->setKerning(arg__1);
}

void PythonQtWrapper_QFont::setLetterSpacing(QFont* theWrappedObject, QFont::SpacingType  type, qreal  spacing)
{
theWrappedObject->setLetterSpacing(type, spacing);
}

void PythonQtWrapper_QFont::setOverline(QFont* theWrappedObject, bool  arg__1)
{
theWrappedObject->setOverline(arg__1);
}

void PythonQtWrapper_QFont::setPixelSize(QFont* theWrappedObject, int  arg__1)
{
theWrappedObject->setPixelSize(arg__1);
}

void PythonQtWrapper_QFont::setPointSize(QFont* theWrappedObject, int  arg__1)
{
theWrappedObject->setPointSize(arg__1);
}

void PythonQtWrapper_QFont::setPointSizeF(QFont* theWrappedObject, qreal  arg__1)
{
theWrappedObject->setPointSizeF(arg__1);
}

void PythonQtWrapper_QFont::setRawMode(QFont* theWrappedObject, bool  arg__1)
{
theWrappedObject->setRawMode(arg__1);
}

void PythonQtWrapper_QFont::setRawName(QFont* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setRawName(arg__1);
}

void PythonQtWrapper_QFont::setStretch(QFont* theWrappedObject, int  arg__1)
{
theWrappedObject->setStretch(arg__1);
}

void PythonQtWrapper_QFont::setStrikeOut(QFont* theWrappedObject, bool  arg__1)
{
theWrappedObject->setStrikeOut(arg__1);
}

void PythonQtWrapper_QFont::setStyle(QFont* theWrappedObject, QFont::Style  style)
{
theWrappedObject->setStyle(style);
}

void PythonQtWrapper_QFont::setStyleHint(QFont* theWrappedObject, QFont::StyleHint  arg__1, QFont::StyleStrategy  arg__2)
{
theWrappedObject->setStyleHint(arg__1, arg__2);
}

void PythonQtWrapper_QFont::setStyleStrategy(QFont* theWrappedObject, QFont::StyleStrategy  s)
{
theWrappedObject->setStyleStrategy(s);
}

void PythonQtWrapper_QFont::setUnderline(QFont* theWrappedObject, bool  arg__1)
{
theWrappedObject->setUnderline(arg__1);
}

void PythonQtWrapper_QFont::setWeight(QFont* theWrappedObject, int  arg__1)
{
theWrappedObject->setWeight(arg__1);
}

void PythonQtWrapper_QFont::setWordSpacing(QFont* theWrappedObject, qreal  spacing)
{
theWrappedObject->setWordSpacing(spacing);
}

int  PythonQtWrapper_QFont::stretch(QFont* theWrappedObject) const
{
return theWrappedObject->stretch();
}

bool  PythonQtWrapper_QFont::strikeOut(QFont* theWrappedObject) const
{
return theWrappedObject->strikeOut();
}

QFont::Style  PythonQtWrapper_QFont::style(QFont* theWrappedObject) const
{
return theWrappedObject->style();
}

QFont::StyleHint  PythonQtWrapper_QFont::styleHint(QFont* theWrappedObject) const
{
return theWrappedObject->styleHint();
}

QFont::StyleStrategy  PythonQtWrapper_QFont::styleStrategy(QFont* theWrappedObject) const
{
return theWrappedObject->styleStrategy();
}

QString  PythonQtWrapper_QFont::static_QFont_substitute(const QString&  arg__1)
{
return QFont::substitute(arg__1);
}

QStringList  PythonQtWrapper_QFont::static_QFont_substitutes(const QString&  arg__1)
{
return QFont::substitutes(arg__1);
}

QStringList  PythonQtWrapper_QFont::static_QFont_substitutions()
{
return QFont::substitutions();
}

QString  PythonQtWrapper_QFont::toString(QFont* theWrappedObject) const
{
return theWrappedObject->toString();
}

bool  PythonQtWrapper_QFont::underline(QFont* theWrappedObject) const
{
return theWrappedObject->underline();
}

int  PythonQtWrapper_QFont::weight(QFont* theWrappedObject) const
{
return theWrappedObject->weight();
}

qreal  PythonQtWrapper_QFont::wordSpacing(QFont* theWrappedObject) const
{
return theWrappedObject->wordSpacing();
}

