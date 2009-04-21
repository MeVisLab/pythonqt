#ifndef PYTHONQTWRAPPER_QWIZARDPAGE_H
#define PYTHONQTWRAPPER_QWIZARDPAGE_H

#include <qwizard.h>
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
#include <qstyle.h>
#include <qwidget.h>
#include <qwizard.h>

class PythonQtShell_QWizardPage : public QWizardPage
{
public:
    PythonQtShell_QWizardPage(QWidget*  parent = 0):QWizardPage(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void cleanupPage();
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
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
virtual void initializePage();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  isComplete() const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual int  nextId() const;
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  validatePage();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizardPage : public QWizardPage
{ public:
inline bool  promoted_isComplete() const { return QWizardPage::isComplete(); }
inline bool  promoted_validatePage() { return QWizardPage::validatePage(); }
inline int  promoted_nextId() const { return QWizardPage::nextId(); }
inline void promoted_cleanupPage() { QWizardPage::cleanupPage(); }
inline void promoted_initializePage() { QWizardPage::initializePage(); }
};

class PythonQtWrapper_QWizardPage : public QObject
{ Q_OBJECT
public:
public slots:
QWizardPage* new_QWizardPage(QWidget*  parent = 0);
void delete_QWizardPage(QWizardPage* obj) { delete obj; } 
   bool  isComplete(QWizardPage* theWrappedObject) const;
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   QString  title(QWizardPage* theWrappedObject) const;
   bool  isCommitPage(QWizardPage* theWrappedObject) const;
   bool  validatePage(QWizardPage* theWrappedObject);
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   int  nextId(QWizardPage* theWrappedObject) const;
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   void cleanupPage(QWizardPage* theWrappedObject);
   bool  isFinalPage(QWizardPage* theWrappedObject) const;
   QString  subTitle(QWizardPage* theWrappedObject) const;
   void initializePage(QWizardPage* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QWIZARDPAGE_H
