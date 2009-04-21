#ifndef PYTHONQTWRAPPER_QINPUTCONTEXT_H
#define PYTHONQTWRAPPER_QINPUTCONTEXT_H

#include <qinputcontext.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextFormat>
#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextformat.h>
#include <qwidget.h>

class PythonQtShell_QInputContext : public QInputContext
{
public:
    PythonQtShell_QInputContext(QObject*  parent = 0):QInputContext(parent),_wrapper(NULL) {};

virtual QList<QAction* >  actions();
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  filterEvent(const QEvent*  event);
virtual QFont  font() const;
virtual QString  identifierName();
virtual bool  isComposing() const;
virtual QString  language();
virtual void mouseHandler(int  x, QMouseEvent*  event);
virtual void reset();
virtual void setFocusWidget(QWidget*  w);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void update();
virtual void widgetDestroyed(QWidget*  w);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QInputContext : public QInputContext
{ public:
inline void promoted_widgetDestroyed(QWidget*  w) { QInputContext::widgetDestroyed(w); }
inline bool  promoted_filterEvent(const QEvent*  event) { return QInputContext::filterEvent(event); }
inline QFont  promoted_font() const { return QInputContext::font(); }
inline void promoted_mouseHandler(int  x, QMouseEvent*  event) { QInputContext::mouseHandler(x, event); }
inline QList<QAction* >  promoted_actions() { return QInputContext::actions(); }
inline void promoted_update() { QInputContext::update(); }
};

class PythonQtWrapper_QInputContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StandardFormat )
enum StandardFormat{
  PreeditFormat = QInputContext::PreeditFormat,   SelectionFormat = QInputContext::SelectionFormat};
public slots:
QInputContext* new_QInputContext(QObject*  parent = 0);
void delete_QInputContext(QInputContext* obj) { delete obj; } 
   void sendEvent(QInputContext* theWrappedObject, const QInputMethodEvent&  event);
   void widgetDestroyed(QInputContext* theWrappedObject, QWidget*  w);
   QTextFormat  standardFormat(QInputContext* theWrappedObject, QInputContext::StandardFormat  s) const;
   QWidget*  focusWidget(QInputContext* theWrappedObject) const;
   bool  filterEvent(QInputContext* theWrappedObject, const QEvent*  event);
   QFont  font(QInputContext* theWrappedObject) const;
   void mouseHandler(QInputContext* theWrappedObject, int  x, QMouseEvent*  event);
   QList<QAction* >  actions(QInputContext* theWrappedObject);
   void update(QInputContext* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QINPUTCONTEXT_H
