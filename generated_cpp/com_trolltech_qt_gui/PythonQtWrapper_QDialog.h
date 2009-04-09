#ifndef PYTHONQTWRAPPER_QDIALOG_H
#define PYTHONQTWRAPPER_QDIALOG_H

#include <qdialog.h>
#include <QObject>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdialog.h>
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

class PythonQtWrapper_QDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogCode )
enum DialogCode{
  Rejected = QDialog::Rejected,   Accepted = QDialog::Accepted};
public slots:
QDialog* new_QDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QDialog(QDialog* obj) { delete obj; } 
   bool  isSizeGripEnabled(QDialog* theWrappedObject) const;
   QSize  minimumSizeHint(QDialog* theWrappedObject) const;
   int  result(QDialog* theWrappedObject) const;
   void setModal(QDialog* theWrappedObject, bool  modal);
   void setResult(QDialog* theWrappedObject, int  r);
   void setSizeGripEnabled(QDialog* theWrappedObject, bool  arg__1);
   void setVisible(QDialog* theWrappedObject, bool  visible);
   QSize  sizeHint(QDialog* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDIALOG_H
