#include "PythonQtWrapper_QTextObjectInterface.h"

#include <QVariant>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>
#include <qtextdocument.h>
#include <qtextformat.h>

void PythonQtWrapper_QTextObjectInterface::drawObject(QTextObjectInterface* theWrappedObject, QPainter*  painter, const QRectF&  rect, QTextDocument*  doc, int  posInDocument, const QTextFormat&  format)
{
theWrappedObject->drawObject(painter, rect, doc, posInDocument, format);
}

QSizeF  PythonQtWrapper_QTextObjectInterface::intrinsicSize(QTextObjectInterface* theWrappedObject, QTextDocument*  doc, int  posInDocument, const QTextFormat&  format)
{
return theWrappedObject->intrinsicSize(doc, posInDocument, format);
}

