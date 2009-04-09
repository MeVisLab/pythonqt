#ifndef PYTHONQTWRAPPER_QPAGESETUPDIALOG_H
#define PYTHONQTWRAPPER_QPAGESETUPDIALOG_H

#include <qpagesetupdialog.h>
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
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtWrapper_QPageSetupDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PageSetupDialogOption )
enum PageSetupDialogOption{
  None = QPageSetupDialog::None,   DontUseSheet = QPageSetupDialog::DontUseSheet};
public slots:
QPageSetupDialog* new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0);
void delete_QPageSetupDialog(QPageSetupDialog* obj) { delete obj; } 
   void addEnabledOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option);
   QPageSetupDialog::PageSetupDialogOptions  enabledOptions(QPageSetupDialog* theWrappedObject) const;
   int  exec(QPageSetupDialog* theWrappedObject);
   bool  isOptionEnabled(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const;
   void setEnabledOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options);
};

#endif // PYTHONQTWRAPPER_QPAGESETUPDIALOG_H
