#ifndef PYTHONQTWRAPPER_QTEXTOBJECTINTERFACE_H
#define PYTHONQTWRAPPER_QTEXTOBJECTINTERFACE_H

#include <qabstracttextdocumentlayout.h>
#include <QObject>

#include <QVariant>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>
#include <qtextdocument.h>
#include <qtextformat.h>

class PythonQtWrapper_QTextObjectInterface : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QTextObjectInterface(QTextObjectInterface* obj) { delete obj; } 
   void drawObject(QTextObjectInterface* theWrappedObject, QPainter*  painter, const QRectF&  rect, QTextDocument*  doc, int  posInDocument, const QTextFormat&  format);
   QSizeF  intrinsicSize(QTextObjectInterface* theWrappedObject, QTextDocument*  doc, int  posInDocument, const QTextFormat&  format);
};

#endif // PYTHONQTWRAPPER_QTEXTOBJECTINTERFACE_H
