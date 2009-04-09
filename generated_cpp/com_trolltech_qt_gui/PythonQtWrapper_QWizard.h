#ifndef PYTHONQTWRAPPER_QWIZARD_H
#define PYTHONQTWRAPPER_QWIZARD_H

#include <qwizard.h>
#include <QObject>

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
   int  addPage(QWizard* theWrappedObject, QWizardPage*  page);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   int  currentId(QWizard* theWrappedObject) const;
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   int  nextId(QWizard* theWrappedObject) const;
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, QAbstractButton*  button);
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setStartId(QWizard* theWrappedObject, int  id);
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setVisible(QWizard* theWrappedObject, bool  visible);
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   QSize  sizeHint(QWizard* theWrappedObject) const;
   int  startId(QWizard* theWrappedObject) const;
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   QList<int >  visitedPages(QWizard* theWrappedObject) const;
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWIZARD_H
