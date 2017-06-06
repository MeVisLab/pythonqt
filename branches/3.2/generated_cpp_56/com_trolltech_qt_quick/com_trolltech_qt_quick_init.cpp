#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_quick0.h"
#include "com_trolltech_qt_quick1.h"



void PythonQt_init_QtQuick(PyObject* module) {
PythonQt::priv()->registerClass(&QQuickFramebufferObject::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickFramebufferObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickFramebufferObject>, module, 0);
PythonQt::priv()->registerCPPClass("QQuickFramebufferObject::Renderer", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickFramebufferObject__Renderer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickFramebufferObject__Renderer>, module, 0);
PythonQt::priv()->registerCPPClass("QQuickImageProvider", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickImageProvider>, NULL, module, 0);
PythonQt::priv()->registerClass(&QQuickItem::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickItem>, module, 0);
PythonQt::priv()->registerClass(&QQuickItemGrabResult::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickItemGrabResult>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QQuickItem::UpdatePaintNodeData", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickItem__UpdatePaintNodeData>, NULL, module, 0);
PythonQt::priv()->registerClass(&QQuickPaintedItem::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickPaintedItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickPaintedItem>, module, 0);
PythonQt::priv()->registerClass(&QQuickRenderControl::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickRenderControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickRenderControl>, module, 0);
PythonQt::priv()->registerClass(&QQuickTextDocument::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickTextDocument>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickTextDocument>, module, 0);
PythonQt::priv()->registerClass(&QQuickTransform::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickTransform>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickTransform>, module, 0);
PythonQt::priv()->registerClass(&QQuickView::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickView>, module, 0);
PythonQt::priv()->registerClass(&QQuickWidget::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickWidget>, module, 0);
PythonQt::priv()->registerClass(&QQuickWindow::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QQuickWindow>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQuickWindow>, module, 0);
PythonQt::priv()->registerClass(&QSGAbstractRenderer::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGAbstractRenderer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGAbstractRenderer>, module, 0);
PythonQt::priv()->registerCPPClass("QSGBasicGeometryNode", "QSGNode", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGBasicGeometryNode>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGBasicGeometryNode>, module, 0);
PythonQt::priv()->registerCPPClass("QSGClipNode", "QSGBasicGeometryNode", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGClipNode>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGClipNode>, module, 0);
PythonQt::priv()->registerClass(&QSGDynamicTexture::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGDynamicTexture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGDynamicTexture>, module, 0);
PythonQt::priv()->registerClass(&QSGEngine::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGEngine>, module, 0);
PythonQt::priv()->registerCPPClass("QSGFlatColorMaterial", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGFlatColorMaterial>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGFlatColorMaterial>, module, 0);
PythonQt::priv()->registerCPPClass("QSGGeometry", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGGeometry>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGGeometry>, module, 0);
PythonQt::priv()->registerCPPClass("QSGGeometryNode", "QSGBasicGeometryNode", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGGeometryNode>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGGeometryNode>, module, 0);
PythonQt::priv()->registerCPPClass("QSGGeometry::Attribute", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGGeometry__Attribute>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGGeometry__Attribute>, module, 0);
PythonQt::priv()->registerCPPClass("QSGGeometry::AttributeSet", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGGeometry__AttributeSet>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGGeometry__AttributeSet>, module, 0);
PythonQt::priv()->registerCPPClass("QSGGeometry::ColoredPoint2D", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGGeometry__ColoredPoint2D>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGGeometry__ColoredPoint2D>, module, 0);
PythonQt::priv()->registerCPPClass("QSGGeometry::Point2D", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGGeometry__Point2D>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGGeometry__Point2D>, module, 0);
PythonQt::priv()->registerCPPClass("QSGGeometry::TexturedPoint2D", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGGeometry__TexturedPoint2D>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGGeometry__TexturedPoint2D>, module, 0);
PythonQt::priv()->registerCPPClass("QSGMaterialType", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGMaterialType>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGMaterialType>, module, 0);
PythonQt::priv()->registerCPPClass("QSGNode", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGNode>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGNode>, module, 0);
PythonQt::priv()->registerCPPClass("QSGNodeVisitor", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGNodeVisitor>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGNodeVisitor>, module, 0);
PythonQt::priv()->registerCPPClass("QSGOpacityNode", "QSGNode", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGOpacityNode>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGOpacityNode>, module, 0);
PythonQt::priv()->registerCPPClass("QSGRootNode", "QSGNode", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGRootNode>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGRootNode>, module, 0);
PythonQt::priv()->registerClass(&QSGTexture::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGTexture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGTexture>, module, 0);
PythonQt::priv()->registerCPPClass("QSGTextureMaterial", "", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGTextureMaterial>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGTextureMaterial>, module, 0);
PythonQt::priv()->registerClass(&QSGTextureProvider::staticMetaObject, "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGTextureProvider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGTextureProvider>, module, 0);
PythonQt::priv()->registerCPPClass("QSGTransformNode", "QSGNode", "QtQuick", PythonQtCreateObject<PythonQtWrapper_QSGTransformNode>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSGTransformNode>, module, 0);


PythonQtRegisterListTemplateConverterForKnownClass(QList, QQmlError);
}
