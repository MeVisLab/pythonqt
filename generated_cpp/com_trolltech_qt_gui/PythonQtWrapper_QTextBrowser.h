#ifndef PYTHONQTWRAPPER_QTEXTBROWSER_H
#define PYTHONQTWRAPPER_QTEXTBROWSER_H

#include <qtextbrowser.h>
#include <QObject>

#include <QTextEdit>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qtextbrowser.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qurl.h>
#include <qwidget.h>

class PythonQtWrapper_QTextBrowser : public QObject
{ Q_OBJECT
public:
public slots:
QTextBrowser* new_QTextBrowser(QWidget*  parent = 0);
void delete_QTextBrowser(QTextBrowser* obj) { delete obj; } 
   int  backwardHistoryCount(QTextBrowser* theWrappedObject) const;
   void clearHistory(QTextBrowser* theWrappedObject);
   int  forwardHistoryCount(QTextBrowser* theWrappedObject) const;
   QString  historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const;
   QUrl  historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const;
   bool  isBackwardAvailable(QTextBrowser* theWrappedObject) const;
   bool  isForwardAvailable(QTextBrowser* theWrappedObject) const;
   QVariant  loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name);
   bool  openExternalLinks(QTextBrowser* theWrappedObject) const;
   bool  openLinks(QTextBrowser* theWrappedObject) const;
   QStringList  searchPaths(QTextBrowser* theWrappedObject) const;
   void setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open);
   void setOpenLinks(QTextBrowser* theWrappedObject, bool  open);
   void setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths);
   QUrl  source(QTextBrowser* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTBROWSER_H
