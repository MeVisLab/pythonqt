#ifndef PYTHONQTWRAPPER_QBYTEARRAYMATCHER_H
#define PYTHONQTWRAPPER_QBYTEARRAYMATCHER_H

#include <qbytearraymatcher.h>
#include <QObject>

#include <QVariant>
#include <qbytearray.h>
#include <qbytearraymatcher.h>

class PythonQtWrapper_QByteArrayMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QByteArrayMatcher* new_QByteArrayMatcher();
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArray&  pattern);
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArrayMatcher&  other);
void delete_QByteArrayMatcher(QByteArrayMatcher* obj) { delete obj; } 
   int  indexIn(QByteArrayMatcher* theWrappedObject, const QByteArray&  ba, int  from = 0) const;
   QByteArray  pattern(QByteArrayMatcher* theWrappedObject) const;
   void setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern);
};

#endif // PYTHONQTWRAPPER_QBYTEARRAYMATCHER_H
