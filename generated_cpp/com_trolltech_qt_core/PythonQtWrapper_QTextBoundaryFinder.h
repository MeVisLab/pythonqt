#ifndef PYTHONQTWRAPPER_QTEXTBOUNDARYFINDER_H
#define PYTHONQTWRAPPER_QTEXTBOUNDARYFINDER_H

#include <qtextboundaryfinder.h>
#include <QObject>

#include <QVariant>
#include <qtextboundaryfinder.h>

class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   StartWord = QTextBoundaryFinder::StartWord,   EndWord = QTextBoundaryFinder::EndWord};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Line = QTextBoundaryFinder::Line,   Sentence = QTextBoundaryFinder::Sentence};
public slots:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; } 
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   int  position(QTextBoundaryFinder* theWrappedObject) const;
   void setPosition(QTextBoundaryFinder* theWrappedObject, int  position);
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   void toEnd(QTextBoundaryFinder* theWrappedObject);
   int  toNextBoundary(QTextBoundaryFinder* theWrappedObject);
   int  toPreviousBoundary(QTextBoundaryFinder* theWrappedObject);
   void toStart(QTextBoundaryFinder* theWrappedObject);
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTBOUNDARYFINDER_H
