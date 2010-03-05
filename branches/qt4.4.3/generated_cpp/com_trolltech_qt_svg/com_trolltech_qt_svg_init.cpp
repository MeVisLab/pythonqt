#include <PythonQt.h>
#include "com_trolltech_qt_svg0.h"


void PythonQt_init_QtSvg() {
PythonQt::self()->registerClass(&QSvgWidget::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgWidget>);
PythonQt::self()->registerCPPClass("QSvgGenerator", "", "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgGenerator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgGenerator>);
PythonQt::self()->addParentClass("QSvgGenerator", "QPaintDevice",PythonQtUpcastingOffset<QSvgGenerator,QPaintDevice>());
PythonQt::self()->registerClass(&QSvgRenderer::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgRenderer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgRenderer>);

}
