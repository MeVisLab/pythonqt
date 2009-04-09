#ifndef PYTHONQTWRAPPER_QCOMMANDLINKBUTTON_H
#define PYTHONQTWRAPPER_QCOMMANDLINKBUTTON_H

#include <qcommandlinkbutton.h>
#include <QObject>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcommandlinkbutton.h>
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
#include <qmenu.h>
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
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtWrapper_QCommandLinkButton : public QObject
{ Q_OBJECT
public:
public slots:
QCommandLinkButton* new_QCommandLinkButton(QWidget*  parent = 0);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, QWidget*  parent = 0);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = 0);
void delete_QCommandLinkButton(QCommandLinkButton* obj) { delete obj; } 
   QString  description(QCommandLinkButton* theWrappedObject) const;
   void setDescription(QCommandLinkButton* theWrappedObject, const QString&  description);
};

#endif // PYTHONQTWRAPPER_QCOMMANDLINKBUTTON_H
