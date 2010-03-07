#include <PythonQt.h>
#include "com_trolltech_qt_gui_builtin0.h"

void PythonQt_init_QtGuiBuiltin(PyObject* module) {
PythonQt::priv()->registerCPPClass("QBrush", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBrush>, NULL, module);
PythonQt::priv()->registerCPPClass("QRegion", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRegion>, NULL, module);
PythonQt::priv()->registerCPPClass("QPolygon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygon>, NULL, module);
PythonQt::priv()->registerCPPClass("QPalette", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPalette>, NULL, module);
PythonQt::priv()->registerCPPClass("QTextLength", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLength>, NULL, module);
PythonQt::priv()->registerCPPClass("QIcon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIcon>, NULL, module);
PythonQt::priv()->registerCPPClass("QPixmap", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPixmap>, module);
PythonQt::self()->addParentClass("QPixmap", "QPaintDevice",PythonQtUpcastingOffset<QPixmap,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QFont", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFont>, NULL, module);
PythonQt::priv()->registerCPPClass("QMatrix", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMatrix>, NULL, module);
PythonQt::priv()->registerCPPClass("QPen", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPen>, NULL, module);
PythonQt::priv()->registerCPPClass("QColor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QColor>, NULL, module);
PythonQt::priv()->registerCPPClass("QCursor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCursor>, NULL, module);
PythonQt::priv()->registerCPPClass("QKeySequence", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeySequence>, NULL, module);
PythonQt::priv()->registerCPPClass("QSizePolicy", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSizePolicy>, NULL, module);
PythonQt::priv()->registerCPPClass("QBitmap", "QPixmap", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBitmap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBitmap>, module);
PythonQt::priv()->registerCPPClass("QTextFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFormat>, NULL, module);
PythonQt::priv()->registerCPPClass("QImage", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImage>, module);
PythonQt::self()->addParentClass("QImage", "QPaintDevice",PythonQtUpcastingOffset<QImage,QPaintDevice>());

}
