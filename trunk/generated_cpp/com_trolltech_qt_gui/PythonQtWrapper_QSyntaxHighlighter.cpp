#include "PythonQtWrapper_QSyntaxHighlighter.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qlist.h>
#include <qobject.h>
#include <qsyntaxhighlighter.h>
#include <qtextdocument.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextobject.h>

QTextDocument*  PythonQtWrapper_QSyntaxHighlighter::document(QSyntaxHighlighter* theWrappedObject) const
{
return theWrappedObject->document();
}

void PythonQtWrapper_QSyntaxHighlighter::setDocument(QSyntaxHighlighter* theWrappedObject, QTextDocument*  doc)
{
theWrappedObject->setDocument(doc);
}

