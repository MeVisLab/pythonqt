#ifndef PYTHONQTWRAPPER_QTEXTDECODER_H
#define PYTHONQTWRAPPER_QTEXTDECODER_H

#include <qtextcodec.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

class PythonQtWrapper_QTextDecoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextDecoder* new_QTextDecoder(const QTextCodec*  codec);
void delete_QTextDecoder(QTextDecoder* obj) { delete obj; } 
   QString  toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba);
   bool  hasFailure(QTextDecoder* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTDECODER_H
