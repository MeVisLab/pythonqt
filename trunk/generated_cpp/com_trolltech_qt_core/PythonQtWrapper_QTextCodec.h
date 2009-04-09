#ifndef PYTHONQTWRAPPER_QTEXTCODEC_H
#define PYTHONQTWRAPPER_QTEXTCODEC_H

#include <qtextcodec.h>
#include <QObject>

#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qtextcodec.h>

class PythonQtWrapper_QTextCodec : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ConversionFlag )
enum ConversionFlag{
  DefaultConversion = QTextCodec::DefaultConversion,   ConvertInvalidToNull = QTextCodec::ConvertInvalidToNull,   IgnoreHeader = QTextCodec::IgnoreHeader};
public slots:
   QList<QByteArray >  aliases(QTextCodec* theWrappedObject) const;
   QList<QByteArray >  static_QTextCodec_availableCodecs();
   QList<int >  static_QTextCodec_availableMibs();
   bool  canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const;
   bool  canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const;
   QTextCodec*  static_QTextCodec_codecForCStrings();
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QTextCodec*  static_QTextCodec_codecForLocale();
   QTextCodec*  static_QTextCodec_codecForMib(int  mib);
   QTextCodec*  static_QTextCodec_codecForName(const QByteArray&  name);
   QTextCodec*  static_QTextCodec_codecForName(const char*  name);
   QByteArray  fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const;
   QTextDecoder*  makeDecoder(QTextCodec* theWrappedObject) const;
   QTextEncoder*  makeEncoder(QTextCodec* theWrappedObject) const;
   int  mibEnum(QTextCodec* theWrappedObject) const;
   QByteArray  name(QTextCodec* theWrappedObject) const;
   void static_QTextCodec_setCodecForCStrings(QTextCodec*  c);
   void static_QTextCodec_setCodecForLocale(QTextCodec*  c);
   void static_QTextCodec_setCodecForTr(QTextCodec*  c);
   QString  toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QTEXTCODEC_H
