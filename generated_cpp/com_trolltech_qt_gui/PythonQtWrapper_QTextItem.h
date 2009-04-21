#ifndef PYTHONQTWRAPPER_QTEXTITEM_H
#define PYTHONQTWRAPPER_QTEXTITEM_H

#include <qpaintengine.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qfont.h>

class PythonQtShell_QTextItem : public QTextItem
{
public:
    PythonQtShell_QTextItem():QTextItem(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
enum RenderFlag{
  RightToLeft = QTextItem::RightToLeft,   Overline = QTextItem::Overline,   Underline = QTextItem::Underline,   StrikeOut = QTextItem::StrikeOut,   Dummy = QTextItem::Dummy};
public slots:
QTextItem* new_QTextItem();
void delete_QTextItem(QTextItem* obj) { delete obj; } 
   qreal  descent(QTextItem* theWrappedObject) const;
   QTextItem::RenderFlags  renderFlags(QTextItem* theWrappedObject) const;
   qreal  ascent(QTextItem* theWrappedObject) const;
   QString  text(QTextItem* theWrappedObject) const;
   qreal  width(QTextItem* theWrappedObject) const;
   QFont  font(QTextItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTITEM_H
