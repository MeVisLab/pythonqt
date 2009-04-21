#ifndef PYTHONQTWRAPPER_QBYTEARRAYMATCHER_H
#define PYTHONQTWRAPPER_QBYTEARRAYMATCHER_H

#include <qbytearraymatcher.h>
#include <QObject>

#include <PythonQt.h>

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
   void setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern);
   int  indexIn(QByteArrayMatcher* theWrappedObject, const QByteArray&  ba, int  from = 0) const;
   QByteArray  pattern(QByteArrayMatcher* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QBYTEARRAYMATCHER_H
