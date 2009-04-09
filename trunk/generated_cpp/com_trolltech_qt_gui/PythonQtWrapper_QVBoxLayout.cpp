#include "PythonQtWrapper_QVBoxLayout.h"

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

QVBoxLayout* PythonQtWrapper_QVBoxLayout::new_QVBoxLayout()
{ 
return new QVBoxLayout(); }

QVBoxLayout* PythonQtWrapper_QVBoxLayout::new_QVBoxLayout(QWidget*  parent)
{ 
return new QVBoxLayout(parent); }

