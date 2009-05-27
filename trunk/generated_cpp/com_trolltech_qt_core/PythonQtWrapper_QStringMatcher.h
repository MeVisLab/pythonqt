#ifndef PYTHONQTWRAPPER_QSTRINGMATCHER_H
#define PYTHONQTWRAPPER_QSTRINGMATCHER_H

#include <qstringmatcher.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstringmatcher.h>

class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; } 
   int  indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from = 0) const;
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
   QString  pattern(QStringMatcher* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSTRINGMATCHER_H
