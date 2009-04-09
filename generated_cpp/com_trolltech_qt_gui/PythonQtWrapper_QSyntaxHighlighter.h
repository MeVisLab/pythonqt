#ifndef PYTHONQTWRAPPER_QSYNTAXHIGHLIGHTER_H
#define PYTHONQTWRAPPER_QSYNTAXHIGHLIGHTER_H

#include <qsyntaxhighlighter.h>
#include <QObject>

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

class PythonQtWrapper_QSyntaxHighlighter : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QSyntaxHighlighter(QSyntaxHighlighter* obj) { delete obj; } 
   QTextDocument*  document(QSyntaxHighlighter* theWrappedObject) const;
   void setDocument(QSyntaxHighlighter* theWrappedObject, QTextDocument*  doc);
};

#endif // PYTHONQTWRAPPER_QSYNTAXHIGHLIGHTER_H
