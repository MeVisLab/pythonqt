#ifndef PYTHONQTWRAPPER_QTEXTBLOCKGROUP_H
#define PYTHONQTWRAPPER_QTEXTBLOCKGROUP_H

#include <qtextobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>

class PythonQtShell_QTextBlockGroup : public QTextBlockGroup
{
public:
    PythonQtShell_QTextBlockGroup(QTextDocument*  doc):QTextBlockGroup(doc),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QTextBlockGroup : public QTextBlockGroup
{ public:
inline void promoted_blockInserted(const QTextBlock&  block) { QTextBlockGroup::blockInserted(block); }
inline void promoted_blockFormatChanged(const QTextBlock&  block) { QTextBlockGroup::blockFormatChanged(block); }
inline void promoted_blockRemoved(const QTextBlock&  block) { QTextBlockGroup::blockRemoved(block); }
};

class PythonQtWrapper_QTextBlockGroup : public QObject
{ Q_OBJECT
public:
public slots:
   void blockInserted(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void blockFormatChanged(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
   void blockRemoved(QTextBlockGroup* theWrappedObject, const QTextBlock&  block);
};

#endif // PYTHONQTWRAPPER_QTEXTBLOCKGROUP_H
