#ifndef PYTHONQTWRAPPER_QTEXTOBJECTINTERFACE_H
#define PYTHONQTWRAPPER_QTEXTOBJECTINTERFACE_H

#include <qabstracttextdocumentlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>
#include <qtextdocument.h>
#include <qtextformat.h>

class PythonQtShell_QTextObjectInterface : public QTextObjectInterface
{
public:
    PythonQtShell_QTextObjectInterface():QTextObjectInterface(),_wrapper(NULL) {};

virtual void drawObject(QPainter*  painter, const QRectF&  rect, QTextDocument*  doc, int  posInDocument, const QTextFormat&  format);
virtual QSizeF  intrinsicSize(QTextDocument*  doc, int  posInDocument, const QTextFormat&  format);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextObjectInterface : public QObject
{ Q_OBJECT
public:
public slots:
QTextObjectInterface* new_QTextObjectInterface();
void delete_QTextObjectInterface(QTextObjectInterface* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QTEXTOBJECTINTERFACE_H
