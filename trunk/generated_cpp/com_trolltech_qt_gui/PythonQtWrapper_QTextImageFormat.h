#ifndef PYTHONQTWRAPPER_QTEXTIMAGEFORMAT_H
#define PYTHONQTWRAPPER_QTEXTIMAGEFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtShell_QTextImageFormat : public QTextImageFormat
{
public:
    PythonQtShell_QTextImageFormat():QTextImageFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextImageFormat(const QTextFormat&  format):QTextImageFormat(format),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextImageFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextImageFormat* new_QTextImageFormat();
QTextImageFormat* new_QTextImageFormat(const QTextImageFormat& other) {
PythonQtShell_QTextImageFormat* a = new PythonQtShell_QTextImageFormat();
*((QTextImageFormat*)a) = other;
return a; }
void delete_QTextImageFormat(QTextImageFormat* obj) { delete obj; } 
   void setHeight(QTextImageFormat* theWrappedObject, qreal  height);
   bool  isValid(QTextImageFormat* theWrappedObject) const;
   void setName(QTextImageFormat* theWrappedObject, const QString&  name);
   qreal  width(QTextImageFormat* theWrappedObject) const;
   qreal  height(QTextImageFormat* theWrappedObject) const;
   QString  name(QTextImageFormat* theWrappedObject) const;
   void setWidth(QTextImageFormat* theWrappedObject, qreal  width);
};

#endif // PYTHONQTWRAPPER_QTEXTIMAGEFORMAT_H
