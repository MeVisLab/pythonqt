#ifndef PYTHONQTWRAPPER_QFONTDIALOG_H
#define PYTHONQTWRAPPER_QFONTDIALOG_H

#include <qfontdialog.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontdialog.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtPublicPromoter_QFontDialog : public QFontDialog
{ public:
inline void changeEvent(QEvent*  e) { QFontDialog::changeEvent(e); }
};

class PythonQtWrapper_QFontDialog : public QObject
{ Q_OBJECT
public:
public slots:
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  def, QWidget*  parent, const QString&  caption);
   void changeEvent(QFontDialog* theWrappedObject, QEvent*  e);
   QFont  static_QFontDialog_getFont(bool*  ok, QWidget*  parent = 0);
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  def, QWidget*  parent = 0);
};

#endif // PYTHONQTWRAPPER_QFONTDIALOG_H
