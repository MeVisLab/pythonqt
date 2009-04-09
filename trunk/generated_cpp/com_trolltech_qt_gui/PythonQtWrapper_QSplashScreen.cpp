#include "PythonQtWrapper_QSplashScreen.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsplashscreen.h>
#include <qstyle.h>
#include <qwidget.h>

QSplashScreen* PythonQtWrapper_QSplashScreen::new_QSplashScreen(QWidget*  parent, const QPixmap&  pixmap, Qt::WindowFlags  f)
{ 
return new QSplashScreen(parent, pixmap, f); }

QSplashScreen* PythonQtWrapper_QSplashScreen::new_QSplashScreen(const QPixmap&  pixmap, Qt::WindowFlags  f)
{ 
return new QSplashScreen(pixmap, f); }

void PythonQtWrapper_QSplashScreen::finish(QSplashScreen* theWrappedObject, QWidget*  w)
{
theWrappedObject->finish(w);
}

const QPixmap  PythonQtWrapper_QSplashScreen::pixmap(QSplashScreen* theWrappedObject) const
{
return theWrappedObject->pixmap();
}

void PythonQtWrapper_QSplashScreen::setPixmap(QSplashScreen* theWrappedObject, const QPixmap&  pixmap)
{
theWrappedObject->setPixmap(pixmap);
}

