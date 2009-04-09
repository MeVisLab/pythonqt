#include "PythonQtWrapper_QTextFrame.h"

#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>

QTextFrame* PythonQtWrapper_QTextFrame::new_QTextFrame(QTextDocument*  doc)
{ 
return new QTextFrame(doc); }

QTextFrame::iterator  PythonQtWrapper_QTextFrame::begin(QTextFrame* theWrappedObject) const
{
return theWrappedObject->begin();
}

QList<QTextFrame* >  PythonQtWrapper_QTextFrame::childFrames(QTextFrame* theWrappedObject) const
{
return theWrappedObject->childFrames();
}

QTextFrame::iterator  PythonQtWrapper_QTextFrame::end(QTextFrame* theWrappedObject) const
{
return theWrappedObject->end();
}

QTextCursor  PythonQtWrapper_QTextFrame::firstCursorPosition(QTextFrame* theWrappedObject) const
{
return theWrappedObject->firstCursorPosition();
}

int  PythonQtWrapper_QTextFrame::firstPosition(QTextFrame* theWrappedObject) const
{
return theWrappedObject->firstPosition();
}

QTextFrameFormat  PythonQtWrapper_QTextFrame::frameFormat(QTextFrame* theWrappedObject) const
{
return theWrappedObject->frameFormat();
}

QTextCursor  PythonQtWrapper_QTextFrame::lastCursorPosition(QTextFrame* theWrappedObject) const
{
return theWrappedObject->lastCursorPosition();
}

int  PythonQtWrapper_QTextFrame::lastPosition(QTextFrame* theWrappedObject) const
{
return theWrappedObject->lastPosition();
}

QTextFrame*  PythonQtWrapper_QTextFrame::parentFrame(QTextFrame* theWrappedObject) const
{
return theWrappedObject->parentFrame();
}

void PythonQtWrapper_QTextFrame::setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format)
{
theWrappedObject->setFrameFormat(format);
}

