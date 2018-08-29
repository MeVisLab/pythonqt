#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_qml0.h"



void PythonQt_init_QtQml(PyObject* module) {
PythonQt::priv()->registerClass(&QJSEngine::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QJSEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QJSEngine>, module, 0);
PythonQt::priv()->registerCPPClass("QJSValue", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QJSValue>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QQmlAbstractUrlInterceptor", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlAbstractUrlInterceptor>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlAbstractUrlInterceptor>, module, 0);
PythonQt::priv()->registerClass(&QQmlApplicationEngine::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlApplicationEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlApplicationEngine>, module, 0);
PythonQt::priv()->registerClass(&QQmlComponent::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlComponent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlComponent>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QQmlContext::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlContext>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QQmlDebuggingEnabler", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlDebuggingEnabler>, NULL, module, 0);
PythonQt::priv()->registerClass(&QQmlEngine::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlEngine>, module, 0);
PythonQt::priv()->registerCPPClass("QQmlError", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlError>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QQmlExpression::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlExpression>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlExpression>, module, 0);
PythonQt::priv()->registerCPPClass("QQmlExtensionInterface", "QQmlTypesExtensionInterface", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlExtensionInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlExtensionInterface>, module, 0);
PythonQt::priv()->registerClass(&QQmlExtensionPlugin::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlExtensionPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlExtensionPlugin>, module, 0);
PythonQt::priv()->registerCPPClass("QQmlFile", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlFile>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QQmlFileSelector::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlFileSelector>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlFileSelector>, module, 0);
PythonQt::priv()->registerCPPClass("QQmlIncubationController", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlIncubationController>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlIncubationController>, module, 0);
PythonQt::priv()->registerCPPClass("QQmlIncubator", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlIncubator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlIncubator>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QQmlInfo", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QQmlListReference", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlListReference>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QQmlNetworkAccessManagerFactory", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlNetworkAccessManagerFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlNetworkAccessManagerFactory>, module, 0);
PythonQt::priv()->registerCPPClass("QQmlParserStatus", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlParserStatus>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlParserStatus>, module, 0);
PythonQt::priv()->registerCPPClass("QQmlProperty", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlProperty>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QQmlPropertyMap::staticMetaObject, "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlPropertyMap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlPropertyMap>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QQmlPropertyValueSource", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlPropertyValueSource>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlPropertyValueSource>, module, 0);
PythonQt::priv()->registerCPPClass("QQmlScriptString", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlScriptString>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QQmlTypesExtensionInterface", "", "QtQml", PythonQtCreateObject<PythonQtWrapper_QQmlTypesExtensionInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QQmlTypesExtensionInterface>, module, 0);


PythonQtRegisterListTemplateConverterForKnownClass(QList, QJSValue);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QQmlError);
}
