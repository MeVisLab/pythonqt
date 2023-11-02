#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_svg0.h"



void PythonQt_init_QtSvg(PyObject* module) {
PythonQt::priv()->registerClass(&QGraphicsSvgItem::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QGraphicsSvgItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsSvgItem>, module, 0);
PythonQt::priv()->registerCPPClass("QSvgGenerator", "", "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgGenerator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgGenerator>, module, 0);
PythonQt::self()->addParentClass("QSvgGenerator", "QPaintDevice",PythonQtUpcastingOffset<QSvgGenerator,QPaintDevice>());
PythonQt::priv()->registerClass(&QSvgRenderer::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgRenderer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgRenderer>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QSvgWidget::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgWidget>, module, 0);


}
