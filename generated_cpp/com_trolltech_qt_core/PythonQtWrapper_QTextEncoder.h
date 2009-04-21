#ifndef PYTHONQTWRAPPER_QTEXTENCODER_H
#define PYTHONQTWRAPPER_QTEXTENCODER_H

#include <qtextcodec.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

class PythonQtWrapper_QTextEncoder : public QObject
{ Q_OBJECT
public:
public slots:
QTextEncoder* new_QTextEncoder(const QTextCodec*  codec);
void delete_QTextEncoder(QTextEncoder* obj) { delete obj; } 
   QByteArray  fromUnicode(QTextEncoder* theWrappedObject, const QString&  str);
};

#endif // PYTHONQTWRAPPER_QTEXTENCODER_H
