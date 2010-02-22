#include <PythonQt.h>
#include "com_trolltech_qt_gui_builtin0.h"

void PythonQt_init_QtGuiBuiltin() {
PythonQt::self()->registerCPPClass("QBrush", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBrush>);
PythonQt::self()->registerCPPClass("QRegion", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRegion>);
PythonQt::self()->registerCPPClass("QPolygon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygon>);
PythonQt::self()->registerCPPClass("QPalette", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPalette>);
PythonQt::self()->registerCPPClass("QTextLength", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLength>);
PythonQt::self()->registerCPPClass("QIcon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIcon>);
PythonQt::self()->registerCPPClass("QPixmap", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPixmap>);
PythonQt::self()->addParentClass("QPixmap", "QPaintDevice",PythonQtUpcastingOffset<QPixmap,QPaintDevice>());
PythonQt::self()->registerCPPClass("QFont", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFont>);
PythonQt::self()->registerCPPClass("QMatrix", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMatrix>);
PythonQt::self()->registerCPPClass("QPen", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPen>);
PythonQt::self()->registerCPPClass("QColor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QColor>);
PythonQt::self()->registerCPPClass("QCursor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCursor>);
PythonQt::self()->registerCPPClass("QKeySequence", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeySequence>);
PythonQt::self()->registerCPPClass("QSizePolicy", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSizePolicy>);
PythonQt::self()->registerCPPClass("QBitmap", "QPixmap", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBitmap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBitmap>);
PythonQt::self()->registerCPPClass("QTextFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFormat>);
PythonQt::self()->registerCPPClass("QImage", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImage>);
PythonQt::self()->addParentClass("QImage", "QPaintDevice",PythonQtUpcastingOffset<QImage,QPaintDevice>());

}
