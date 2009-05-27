#ifndef PYTHONQTWRAPPER_QWHATSTHIS_H
#define PYTHONQTWRAPPER_QWHATSTHIS_H

#include <qwhatsthis.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qobject.h>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QWhatsThis : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWhatsThis(QWhatsThis* obj) { delete obj; } 
   void static_QWhatsThis_hideText();
   bool  static_QWhatsThis_inWhatsThisMode();
   void static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
   QAction*  static_QWhatsThis_createAction(QObject*  parent = 0);
   void static_QWhatsThis_enterWhatsThisMode();
   void static_QWhatsThis_leaveWhatsThisMode();
};

#endif // PYTHONQTWRAPPER_QWHATSTHIS_H
