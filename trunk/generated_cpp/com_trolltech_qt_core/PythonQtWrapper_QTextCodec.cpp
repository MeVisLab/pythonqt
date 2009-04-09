#include "PythonQtWrapper_QTextCodec.h"

#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qtextcodec.h>

QList<QByteArray >  PythonQtWrapper_QTextCodec::aliases(QTextCodec* theWrappedObject) const
{
return theWrappedObject->aliases();
}

QList<QByteArray >  PythonQtWrapper_QTextCodec::static_QTextCodec_availableCodecs()
{
return QTextCodec::availableCodecs();
}

QList<int >  PythonQtWrapper_QTextCodec::static_QTextCodec_availableMibs()
{
return QTextCodec::availableMibs();
}

bool  PythonQtWrapper_QTextCodec::canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const
{
return theWrappedObject->canEncode(arg__1);
}

bool  PythonQtWrapper_QTextCodec::canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const
{
return theWrappedObject->canEncode(arg__1);
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForCStrings()
{
return QTextCodec::codecForCStrings();
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForHtml(const QByteArray&  ba)
{
return QTextCodec::codecForHtml(ba);
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec)
{
return QTextCodec::codecForHtml(ba, defaultCodec);
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForLocale()
{
return QTextCodec::codecForLocale();
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForMib(int  mib)
{
return QTextCodec::codecForMib(mib);
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForName(const QByteArray&  name)
{
return QTextCodec::codecForName(name);
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForName(const char*  name)
{
return QTextCodec::codecForName(name);
}

QByteArray  PythonQtWrapper_QTextCodec::fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const
{
return theWrappedObject->fromUnicode(uc);
}

QTextDecoder*  PythonQtWrapper_QTextCodec::makeDecoder(QTextCodec* theWrappedObject) const
{
return theWrappedObject->makeDecoder();
}

QTextEncoder*  PythonQtWrapper_QTextCodec::makeEncoder(QTextCodec* theWrappedObject) const
{
return theWrappedObject->makeEncoder();
}

int  PythonQtWrapper_QTextCodec::mibEnum(QTextCodec* theWrappedObject) const
{
return theWrappedObject->mibEnum();
}

QByteArray  PythonQtWrapper_QTextCodec::name(QTextCodec* theWrappedObject) const
{
return theWrappedObject->name();
}

void PythonQtWrapper_QTextCodec::static_QTextCodec_setCodecForCStrings(QTextCodec*  c)
{
QTextCodec::setCodecForCStrings(c);
}

void PythonQtWrapper_QTextCodec::static_QTextCodec_setCodecForLocale(QTextCodec*  c)
{
QTextCodec::setCodecForLocale(c);
}

void PythonQtWrapper_QTextCodec::static_QTextCodec_setCodecForTr(QTextCodec*  c)
{
QTextCodec::setCodecForTr(c);
}

QString  PythonQtWrapper_QTextCodec::toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const
{
return theWrappedObject->toUnicode(arg__1);
}

