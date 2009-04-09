#ifndef PYTHONQTWRAPPER_QSVGWIDGET_H
#define PYTHONQTWRAPPER_QSVGWIDGET_H

#include <qsvgwidget.h>
#include <QObject>

#include <QByteArray>
#include <QSize>
#include <QSvgRenderer>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
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
#include <qsvgrenderer.h>
#include <qsvgwidget.h>
#include <qwidget.h>

class PythonQtWrapper_QSvgWidget : public QObject
{ Q_OBJECT
public:
public slots:
QSvgWidget* new_QSvgWidget(QWidget*  parent = 0);
QSvgWidget* new_QSvgWidget(const QString&  file, QWidget*  parent = 0);
void delete_QSvgWidget(QSvgWidget* obj) { delete obj; } 
   QSvgRenderer*  renderer(QSvgWidget* theWrappedObject) const;
   QSize  sizeHint(QSvgWidget* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSVGWIDGET_H
