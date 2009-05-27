#ifndef PYTHONQTWRAPPER_QTRANSLATOR_H
#define PYTHONQTWRAPPER_QTRANSLATOR_H

#include <qtranslator.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtranslator.h>

class PythonQtShell_QTranslator : public QTranslator
{
public:
    PythonQtShell_QTranslator(QObject*  parent = 0):QTranslator(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isEmpty() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QString  translate(const char*  context, const char*  sourceText, const char*  comment = 0) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTranslator : public QTranslator
{ public:
inline bool  promoted_isEmpty() const { return QTranslator::isEmpty(); }
inline QString  promoted_translate(const char*  context, const char*  sourceText, const char*  comment = 0) const { return QTranslator::translate(context, sourceText, comment); }
};

class PythonQtWrapper_QTranslator : public QObject
{ Q_OBJECT
public:
public slots:
QTranslator* new_QTranslator(QObject*  parent = 0);
void delete_QTranslator(QTranslator* obj) { delete obj; } 
   bool  isEmpty(QTranslator* theWrappedObject) const;
   QString  translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  comment = 0) const;
   bool  load(QTranslator* theWrappedObject, const uchar*  data, int  len);
   bool  load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory = QString(), const QString&  search_delimiters = QString(), const QString&  suffix = QString());
};

#endif // PYTHONQTWRAPPER_QTRANSLATOR_H
