#ifndef PYTHONQTWRAPPER_QPLAINTEXTDOCUMENTLAYOUT_H
#define PYTHONQTWRAPPER_QPLAINTEXTDOCUMENTLAYOUT_H

#include <qplaintextedit.h>
#include <QObject>

#include <PythonQt.h>

#include <QAbstractTextDocumentLayout>
#include <QVariant>
#include <qpainter.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qtextdocument.h>
#include <qtextobject.h>

class PythonQtShell_QPlainTextDocumentLayout : public QPlainTextDocumentLayout
{
public:
    PythonQtShell_QPlainTextDocumentLayout(QTextDocument*  document):QPlainTextDocumentLayout(document),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPlainTextDocumentLayout : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextDocumentLayout* new_QPlainTextDocumentLayout(QTextDocument*  document);
void delete_QPlainTextDocumentLayout(QPlainTextDocumentLayout* obj) { delete obj; } 
   QRectF  blockBoundingRect(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   int  cursorWidth(QPlainTextDocumentLayout* theWrappedObject) const;
   void ensureBlockLayout(QPlainTextDocumentLayout* theWrappedObject, const QTextBlock&  block) const;
   void requestUpdate(QPlainTextDocumentLayout* theWrappedObject);
   void draw(QPlainTextDocumentLayout* theWrappedObject, QPainter*  arg__1, const QAbstractTextDocumentLayout::PaintContext&  arg__2);
   int  hitTest(QPlainTextDocumentLayout* theWrappedObject, const QPointF&  arg__1, Qt::HitTestAccuracy  arg__2) const;
   int  pageCount(QPlainTextDocumentLayout* theWrappedObject) const;
   QSizeF  documentSize(QPlainTextDocumentLayout* theWrappedObject) const;
   void setCursorWidth(QPlainTextDocumentLayout* theWrappedObject, int  width);
   QRectF  frameBoundingRect(QPlainTextDocumentLayout* theWrappedObject, QTextFrame*  arg__1) const;
};

#endif // PYTHONQTWRAPPER_QPLAINTEXTDOCUMENTLAYOUT_H
