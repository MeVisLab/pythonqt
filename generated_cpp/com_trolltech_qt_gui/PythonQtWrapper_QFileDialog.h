#ifndef PYTHONQTWRAPPER_QFILEDIALOG_H
#define PYTHONQTWRAPPER_QFILEDIALOG_H

#include <qfiledialog.h>
#include <QObject>

#include <PythonQt.h>

#include <QUrl>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdir.h>
#include <qevent.h>
#include <qfiledialog.h>
#include <qfileiconprovider.h>
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
#include <qstringlist.h>
#include <qstyle.h>
#include <qurl.h>
#include <qwidget.h>

class PythonQtShell_QFileDialog : public QFileDialog
{
public:
    PythonQtShell_QFileDialog(QWidget*  parent, Qt::WindowFlags  f):QFileDialog(parent, f),_wrapper(NULL) {};
    PythonQtShell_QFileDialog(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString()):QFileDialog(parent, caption, directory, filter),_wrapper(NULL) {};

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
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

class PythonQtPublicPromoter_QFileDialog : public QFileDialog
{ public:
inline void promoted_accept() { QFileDialog::accept(); }
inline void promoted_done(int  result) { QFileDialog::done(result); }
inline void promoted_changeEvent(QEvent*  e) { QFileDialog::changeEvent(e); }
};

class PythonQtWrapper_QFileDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Option DialogLabel )
enum Option{
  ShowDirsOnly = QFileDialog::ShowDirsOnly,   DontResolveSymlinks = QFileDialog::DontResolveSymlinks,   DontConfirmOverwrite = QFileDialog::DontConfirmOverwrite,   DontUseSheet = QFileDialog::DontUseSheet,   DontUseNativeDialog = QFileDialog::DontUseNativeDialog};
enum DialogLabel{
  LookIn = QFileDialog::LookIn,   FileName = QFileDialog::FileName,   FileType = QFileDialog::FileType,   Accept = QFileDialog::Accept,   Reject = QFileDialog::Reject};
public slots:
QFileDialog* new_QFileDialog(QWidget*  parent, Qt::WindowFlags  f);
QFileDialog* new_QFileDialog(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  directory = QString(), const QString&  filter = QString());
void delete_QFileDialog(QFileDialog* obj) { delete obj; } 
   bool  resolveSymlinks(QFileDialog* theWrappedObject) const;
   QString  static_QFileDialog_getExistingDirectory(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), QFileDialog::Options  options = QFileDialog::ShowDirsOnly);
   QFileIconProvider*  iconProvider(QFileDialog* theWrappedObject) const;
   void setSidebarUrls(QFileDialog* theWrappedObject, const QList<QUrl >&  urls);
   QDir::Filters  filter(QFileDialog* theWrappedObject) const;
   QString  labelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label) const;
   QString  selectedNameFilter(QFileDialog* theWrappedObject) const;
   void accept(QFileDialog* theWrappedObject);
   void setDirectory(QFileDialog* theWrappedObject, const QDir&  directory);
   QString  defaultSuffix(QFileDialog* theWrappedObject) const;
   void setItemDelegate(QFileDialog* theWrappedObject, QAbstractItemDelegate*  delegate);
   QStringList  selectedFiles(QFileDialog* theWrappedObject) const;
   void setConfirmOverwrite(QFileDialog* theWrappedObject, bool  enabled);
   void setDefaultSuffix(QFileDialog* theWrappedObject, const QString&  suffix);
   void setResolveSymlinks(QFileDialog* theWrappedObject, bool  enabled);
   QString  static_QFileDialog_getSaveFileName(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   bool  confirmOverwrite(QFileDialog* theWrappedObject) const;
   void setFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   void done(QFileDialog* theWrappedObject, int  result);
   QFileDialog::FileMode  fileMode(QFileDialog* theWrappedObject) const;
   void setHistory(QFileDialog* theWrappedObject, const QStringList&  paths);
   void setProxyModel(QFileDialog* theWrappedObject, QAbstractProxyModel*  model);
   QFileDialog::AcceptMode  acceptMode(QFileDialog* theWrappedObject) const;
   QStringList  history(QFileDialog* theWrappedObject) const;
   void changeEvent(QFileDialog* theWrappedObject, QEvent*  e);
   void setFileMode(QFileDialog* theWrappedObject, QFileDialog::FileMode  mode);
   void setIconProvider(QFileDialog* theWrappedObject, QFileIconProvider*  provider);
   QString  static_QFileDialog_getOpenFileName(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   void setFilter(QFileDialog* theWrappedObject, const QString&  filter);
   QStringList  filters(QFileDialog* theWrappedObject) const;
   QDir  directory(QFileDialog* theWrappedObject) const;
   void setDirectory(QFileDialog* theWrappedObject, const QString&  directory);
   QList<QUrl >  sidebarUrls(QFileDialog* theWrappedObject) const;
   QString  selectedFilter(QFileDialog* theWrappedObject) const;
   void setLabelText(QFileDialog* theWrappedObject, QFileDialog::DialogLabel  label, const QString&  text);
   void setNameFilterDetailsVisible(QFileDialog* theWrappedObject, bool  enabled);
   void setFilter(QFileDialog* theWrappedObject, QDir::Filters  filters);
   void setReadOnly(QFileDialog* theWrappedObject, bool  enabled);
   QStringList  nameFilters(QFileDialog* theWrappedObject) const;
   QByteArray  saveState(QFileDialog* theWrappedObject) const;
   void selectNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   QAbstractItemDelegate*  itemDelegate(QFileDialog* theWrappedObject) const;
   bool  restoreState(QFileDialog* theWrappedObject, const QByteArray&  state);
   void setNameFilters(QFileDialog* theWrappedObject, const QStringList&  filters);
   void setNameFilter(QFileDialog* theWrappedObject, const QString&  filter);
   QAbstractProxyModel*  proxyModel(QFileDialog* theWrappedObject) const;
   void setViewMode(QFileDialog* theWrappedObject, QFileDialog::ViewMode  mode);
   QStringList  static_QFileDialog_getOpenFileNames(QWidget*  parent = 0, const QString&  caption = QString(), const QString&  dir = QString(), const QString&  filter = QString(), QString*  selectedFilter = 0, QFileDialog::Options  options = 0);
   bool  isNameFilterDetailsVisible(QFileDialog* theWrappedObject) const;
   void selectFilter(QFileDialog* theWrappedObject, const QString&  filter);
   void selectFile(QFileDialog* theWrappedObject, const QString&  filename);
   bool  isReadOnly(QFileDialog* theWrappedObject) const;
   void setAcceptMode(QFileDialog* theWrappedObject, QFileDialog::AcceptMode  mode);
   QFileDialog::ViewMode  viewMode(QFileDialog* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFILEDIALOG_H
