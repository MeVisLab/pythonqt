#include "PythonQtWrapper_QHBoxLayout.h"

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

QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout()
{ 
return new QHBoxLayout(); }

QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout(QWidget*  parent)
{ 
return new QHBoxLayout(parent); }

