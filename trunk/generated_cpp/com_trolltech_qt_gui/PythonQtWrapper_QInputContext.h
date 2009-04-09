#ifndef PYTHONQTWRAPPER_QINPUTCONTEXT_H
#define PYTHONQTWRAPPER_QINPUTCONTEXT_H

#include <qinputcontext.h>
#include <QObject>

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

class PythonQtWrapper_QInputContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StandardFormat )
enum StandardFormat{
  PreeditFormat = QInputContext::PreeditFormat,   SelectionFormat = QInputContext::SelectionFormat};
public slots:
void delete_QInputContext(QInputContext* obj) { delete obj; } 
   QList<QAction* >  actions(QInputContext* theWrappedObject);
   bool  filterEvent(QInputContext* theWrappedObject, const QEvent*  event);
   QWidget*  focusWidget(QInputContext* theWrappedObject) const;
   QFont  font(QInputContext* theWrappedObject) const;
   QString  identifierName(QInputContext* theWrappedObject);
   bool  isComposing(QInputContext* theWrappedObject) const;
   QString  language(QInputContext* theWrappedObject);
   void mouseHandler(QInputContext* theWrappedObject, int  x, QMouseEvent*  event);
   void reset(QInputContext* theWrappedObject);
   void sendEvent(QInputContext* theWrappedObject, const QInputMethodEvent&  event);
   QTextFormat  standardFormat(QInputContext* theWrappedObject, QInputContext::StandardFormat  s) const;
   void update(QInputContext* theWrappedObject);
   void widgetDestroyed(QInputContext* theWrappedObject, QWidget*  w);
};

#endif // PYTHONQTWRAPPER_QINPUTCONTEXT_H
