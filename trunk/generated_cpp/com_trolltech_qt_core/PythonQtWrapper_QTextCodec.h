#ifndef PYTHONQTWRAPPER_QTEXTCODEC_H
#define PYTHONQTWRAPPER_QTEXTCODEC_H

#include <qtextcodec.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qtextcodec.h>

class PythonQtShell_QTextCodec : public QTextCodec
{
public:
    PythonQtShell_QTextCodec():QTextCodec(),_wrapper(NULL) {};

virtual QList<QByteArray >  aliases() const;
virtual QByteArray  convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual QString  convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual int  mibEnum() const;
virtual QByteArray  name() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCodec : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ConversionFlag )
enum ConversionFlag{
  DefaultConversion = QTextCodec::DefaultConversion,   ConvertInvalidToNull = QTextCodec::ConvertInvalidToNull,   IgnoreHeader = QTextCodec::IgnoreHeader};
public slots:
   void static_QTextCodec_setCodecForLocale(QTextCodec*  c);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec);
   bool  canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const;
   QTextCodec*  static_QTextCodec_codecForLocale();
   QList<QByteArray >  static_QTextCodec_availableCodecs();
   QTextCodec*  static_QTextCodec_codecForCStrings();
   QTextCodec*  static_QTextCodec_codecForName(const QByteArray&  name);
   QList<int >  static_QTextCodec_availableMibs();
   void static_QTextCodec_setCodecForCStrings(QTextCodec*  c);
   QByteArray  fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const;
   QString  toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const;
   QTextEncoder*  makeEncoder(QTextCodec* theWrappedObject) const;
   QList<QByteArray >  aliases(QTextCodec* theWrappedObject) const;
   void static_QTextCodec_setCodecForTr(QTextCodec*  c);
   QTextCodec*  static_QTextCodec_codecForName(const char*  name);
   QTextDecoder*  makeDecoder(QTextCodec* theWrappedObject) const;
   QTextCodec*  static_QTextCodec_codecForMib(int  mib);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba);
   bool  canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QTEXTCODEC_H
