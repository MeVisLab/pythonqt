#include <PythonQt.h>
#include "com_trolltech_qt_uitools0.h"


void PythonQt_init_QtUiTools() {
PythonQt::self()->registerClass(&QUiLoader::staticMetaObject, "QtUiTools", PythonQtCreateObject<PythonQtWrapper_QUiLoader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUiLoader>);

}
