#ifndef PYTHONQTWRAPPER_QWIZARD_H
#define PYTHONQTWRAPPER_QWIZARD_H

#include <qwizard.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractbutton.h>
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

class PythonQtShell_QWizard : public QWizard
{
public:
    PythonQtShell_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QWizard(parent, flags),_wrapper(NULL) {};

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void cleanupPage(int  id);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  result);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initializePage(int  id);
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
virtual int  nextId() const;
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  validateCurrentPage();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizard : public QWizard
{ public:
inline void done(int  result) { QWizard::done(result); }
inline void paintEvent(QPaintEvent*  event) { QWizard::paintEvent(event); }
inline bool  event(QEvent*  event) { return QWizard::event(event); }
inline void initializePage(int  id) { QWizard::initializePage(id); }
inline void resizeEvent(QResizeEvent*  event) { QWizard::resizeEvent(event); }
inline void cleanupPage(int  id) { QWizard::cleanupPage(id); }
};

class PythonQtWrapper_QWizard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WizardButton WizardPixmap )
enum WizardButton{
  BackButton = QWizard::BackButton,   NextButton = QWizard::NextButton,   CommitButton = QWizard::CommitButton,   FinishButton = QWizard::FinishButton,   CancelButton = QWizard::CancelButton,   HelpButton = QWizard::HelpButton,   CustomButton1 = QWizard::CustomButton1,   CustomButton2 = QWizard::CustomButton2,   CustomButton3 = QWizard::CustomButton3,   Stretch = QWizard::Stretch,   NoButton = QWizard::NoButton,   NStandardButtons = QWizard::NStandardButtons,   NButtons = QWizard::NButtons};
enum WizardPixmap{
  WatermarkPixmap = QWizard::WatermarkPixmap,   LogoPixmap = QWizard::LogoPixmap,   BannerPixmap = QWizard::BannerPixmap,   BackgroundPixmap = QWizard::BackgroundPixmap,   NPixmaps = QWizard::NPixmaps};
public slots:
QWizard* new_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QWizard(QWizard* obj) { delete obj; } 
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   void done(QWizard* theWrappedObject, int  result);
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
   QSize  sizeHint(QWizard* theWrappedObject) const;
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   int  currentId(QWizard* theWrappedObject) const;
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   void paintEvent(QWizard* theWrappedObject, QPaintEvent*  event);
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   bool  event(QWizard* theWrappedObject, QEvent*  event);
   QList<int >  visitedPages(QWizard* theWrappedObject) const;
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   int  nextId(QWizard* theWrappedObject) const;
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   void initializePage(QWizard* theWrappedObject, int  id);
   void resizeEvent(QWizard* theWrappedObject, QResizeEvent*  event);
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   int  startId(QWizard* theWrappedObject) const;
   void setVisible(QWizard* theWrappedObject, bool  visible);
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, QAbstractButton*  button);
   void cleanupPage(QWizard* theWrappedObject, int  id);
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   void setStartId(QWizard* theWrappedObject, int  id);
   int  addPage(QWizard* theWrappedObject, QWizardPage*  page);
};

#endif // PYTHONQTWRAPPER_QWIZARD_H
