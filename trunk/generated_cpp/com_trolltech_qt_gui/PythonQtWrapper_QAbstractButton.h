#ifndef PYTHONQTWRAPPER_QABSTRACTBUTTON_H
#define PYTHONQTWRAPPER_QABSTRACTBUTTON_H

#include <qabstractbutton.h>
#include <QObject>

#include <QVariant>
#include <qabstractbutton.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
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

class PythonQtWrapper_QAbstractButton : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractButton(QAbstractButton* obj) { delete obj; } 
   bool  autoExclusive(QAbstractButton* theWrappedObject) const;
   bool  autoRepeat(QAbstractButton* theWrappedObject) const;
   int  autoRepeatDelay(QAbstractButton* theWrappedObject) const;
   int  autoRepeatInterval(QAbstractButton* theWrappedObject) const;
   QButtonGroup*  group(QAbstractButton* theWrappedObject) const;
   QIcon  icon(QAbstractButton* theWrappedObject) const;
   QSize  iconSize(QAbstractButton* theWrappedObject) const;
   bool  isCheckable(QAbstractButton* theWrappedObject) const;
   bool  isChecked(QAbstractButton* theWrappedObject) const;
   bool  isDown(QAbstractButton* theWrappedObject) const;
   void setAutoExclusive(QAbstractButton* theWrappedObject, bool  arg__1);
   void setAutoRepeat(QAbstractButton* theWrappedObject, bool  arg__1);
   void setAutoRepeatDelay(QAbstractButton* theWrappedObject, int  arg__1);
   void setAutoRepeatInterval(QAbstractButton* theWrappedObject, int  arg__1);
   void setCheckable(QAbstractButton* theWrappedObject, bool  arg__1);
   void setDown(QAbstractButton* theWrappedObject, bool  arg__1);
   void setIcon(QAbstractButton* theWrappedObject, const QIcon&  icon);
   void setShortcut(QAbstractButton* theWrappedObject, const QKeySequence&  key);
   void setText(QAbstractButton* theWrappedObject, const QString&  text);
   QKeySequence  shortcut(QAbstractButton* theWrappedObject) const;
   QString  text(QAbstractButton* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTBUTTON_H
