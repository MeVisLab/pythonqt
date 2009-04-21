#ifndef PYTHONQTWRAPPER_QDIALOG_H
#define PYTHONQTWRAPPER_QDIALOG_H

#include <qdialog.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QDialog : public QDialog
{
public:
    PythonQtShell_QDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QDialog(parent, f),_wrapper(NULL) {};

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDialog : public QDialog
{ public:
inline void promoted_accept() { QDialog::accept(); }
inline void promoted_reject() { QDialog::reject(); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QDialog::closeEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QDialog::keyPressEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QDialog::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QDialog::showEvent(arg__1); }
inline void promoted_done(int  arg__1) { QDialog::done(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QDialog::eventFilter(arg__1, arg__2); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QDialog::contextMenuEvent(arg__1); }
};

class PythonQtWrapper_QDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogCode )
enum DialogCode{
  Rejected = QDialog::Rejected,   Accepted = QDialog::Accepted};
public slots:
QDialog* new_QDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QDialog(QDialog* obj) { delete obj; } 
   void setVisible(QDialog* theWrappedObject, bool  visible);
   void setResult(QDialog* theWrappedObject, int  r);
   void closeEvent(QDialog* theWrappedObject, QCloseEvent*  arg__1);
   bool  isSizeGripEnabled(QDialog* theWrappedObject) const;
   void keyPressEvent(QDialog* theWrappedObject, QKeyEvent*  arg__1);
   void resizeEvent(QDialog* theWrappedObject, QResizeEvent*  arg__1);
   void showEvent(QDialog* theWrappedObject, QShowEvent*  arg__1);
   void setSizeGripEnabled(QDialog* theWrappedObject, bool  arg__1);
   bool  eventFilter(QDialog* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   QSize  minimumSizeHint(QDialog* theWrappedObject) const;
   void setModal(QDialog* theWrappedObject, bool  modal);
   int  result(QDialog* theWrappedObject) const;
   QSize  sizeHint(QDialog* theWrappedObject) const;
   void contextMenuEvent(QDialog* theWrappedObject, QContextMenuEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QDIALOG_H
