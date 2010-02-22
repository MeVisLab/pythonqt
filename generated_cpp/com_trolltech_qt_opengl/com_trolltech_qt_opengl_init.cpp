#include <PythonQt.h>
#include "com_trolltech_qt_opengl0.h"


void PythonQt_init_QtOpenGL() {
PythonQt::self()->registerCPPClass("QGLPixelBuffer", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLPixelBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLPixelBuffer>);
PythonQt::self()->addParentClass("QGLPixelBuffer", "QPaintDevice",PythonQtUpcastingOffset<QGLPixelBuffer,QPaintDevice>());
PythonQt::self()->registerClass(&QGLWidget::staticMetaObject, "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLWidget>);
PythonQt::self()->registerCPPClass("QGLFramebufferObject", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLFramebufferObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLFramebufferObject>);
PythonQt::self()->addParentClass("QGLFramebufferObject", "QPaintDevice",PythonQtUpcastingOffset<QGLFramebufferObject,QPaintDevice>());
PythonQt::self()->registerCPPClass("QGLContext", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLContext>);
PythonQt::self()->registerCPPClass("QGLColormap", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLColormap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLColormap>);

}
