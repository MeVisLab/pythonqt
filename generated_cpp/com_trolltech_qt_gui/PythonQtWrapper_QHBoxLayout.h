#ifndef PYTHONQTWRAPPER_QHBOXLAYOUT_H
#define PYTHONQTWRAPPER_QHBOXLAYOUT_H

#include <qboxlayout.h>
#include <QObject>

#include <QVariant>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QHBOXLAYOUT_H
