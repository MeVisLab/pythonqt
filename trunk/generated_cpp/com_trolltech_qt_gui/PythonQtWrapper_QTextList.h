#ifndef PYTHONQTWRAPPER_QTEXTLIST_H
#define PYTHONQTWRAPPER_QTEXTLIST_H

#include <qtextlist.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>

class PythonQtShell_QTextList : public QTextList
{
public:
    PythonQtShell_QTextList(QTextDocument*  doc):QTextList(doc),_wrapper(NULL) {};

virtual void blockFormatChanged(const QTextBlock&  block);
virtual void blockInserted(const QTextBlock&  block);
virtual void blockRemoved(const QTextBlock&  block);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextList : public QObject
{ Q_OBJECT
public:
public slots:
QTextList* new_QTextList(QTextDocument*  doc);
void delete_QTextList(QTextList* obj) { delete obj; } 
   void add(QTextList* theWrappedObject, const QTextBlock&  block);
   int  itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   void setFormat(QTextList* theWrappedObject, const QTextListFormat&  format);
   QString  itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const;
   QTextListFormat  format(QTextList* theWrappedObject) const;
   void remove(QTextList* theWrappedObject, const QTextBlock&  arg__1);
   int  count(QTextList* theWrappedObject) const;
   QTextBlock  item(QTextList* theWrappedObject, int  i) const;
   void removeItem(QTextList* theWrappedObject, int  i);
};

#endif // PYTHONQTWRAPPER_QTEXTLIST_H
