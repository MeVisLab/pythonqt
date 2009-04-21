#ifndef PYTHONQTWRAPPER_QTOOLTIP_H
#define PYTHONQTWRAPPER_QTOOLTIP_H

#include <qtooltip.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qfont.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qwidget.h>

class PythonQtWrapper_QToolTip : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QToolTip(QToolTip* obj) { delete obj; } 
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect);
   QString  static_QToolTip_text();
   void static_QToolTip_hideText();
   bool  static_QToolTip_isVisible();
   QPalette  static_QToolTip_palette();
   void static_QToolTip_setPalette(const QPalette&  arg__1);
   QFont  static_QToolTip_font();
   void static_QToolTip_setFont(const QFont&  arg__1);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w = 0);
};

#endif // PYTHONQTWRAPPER_QTOOLTIP_H
