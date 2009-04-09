#ifndef PYTHONQTWRAPPER_QPROGRESSDIALOG_H
#define PYTHONQTWRAPPER_QPROGRESSDIALOG_H

#include <qprogressdialog.h>
#include <QObject>

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
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtWrapper_QProgressDialog : public QObject
{ Q_OBJECT
public:
public slots:
QProgressDialog* new_QProgressDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
QProgressDialog* new_QProgressDialog(const QString&  labelText, const QString&  cancelButtonText, int  minimum, int  maximum, QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QProgressDialog(QProgressDialog* obj) { delete obj; } 
   bool  autoClose(QProgressDialog* theWrappedObject) const;
   bool  autoReset(QProgressDialog* theWrappedObject) const;
   QString  labelText(QProgressDialog* theWrappedObject) const;
   int  maximum(QProgressDialog* theWrappedObject) const;
   int  minimum(QProgressDialog* theWrappedObject) const;
   int  minimumDuration(QProgressDialog* theWrappedObject) const;
   void setAutoClose(QProgressDialog* theWrappedObject, bool  b);
   void setAutoReset(QProgressDialog* theWrappedObject, bool  b);
   void setBar(QProgressDialog* theWrappedObject, QProgressBar*  bar);
   void setCancelButton(QProgressDialog* theWrappedObject, QPushButton*  button);
   void setLabel(QProgressDialog* theWrappedObject, QLabel*  label);
   QSize  sizeHint(QProgressDialog* theWrappedObject) const;
   int  value(QProgressDialog* theWrappedObject) const;
   bool  wasCanceled(QProgressDialog* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPROGRESSDIALOG_H
