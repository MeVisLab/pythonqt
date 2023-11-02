#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_core0.h"
#include "com_trolltech_qt_core1.h"
#include "com_trolltech_qt_core2.h"
#include "com_trolltech_qt_core3.h"

static void* polymorphichandler_QEvent(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != nullptr);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::ApplicationStateChange) {
        *class_name = "QApplicationStateChangeEvent";
        return (QApplicationStateChangeEvent*)object;
    }
    if (object->type() == QEvent::ChildAdded || object->type() == QEvent::ChildPolished || object->type() == QEvent::ChildRemoved) {
        *class_name = "QChildEvent";
        return (QChildEvent*)object;
    }
    if (object->type() == QEvent::DeferredDelete) {
        *class_name = "QDeferredDeleteEvent";
        return (QDeferredDeleteEvent*)object;
    }
    if (object->type() == QEvent::DynamicPropertyChange) {
        *class_name = "QDynamicPropertyChangeEvent";
        return (QDynamicPropertyChangeEvent*)object;
    }
    if (object->type() == QEvent::None) {
        *class_name = "QEvent";
        return (QEvent*)object;
    }
    if (object->type() == QEvent::StateMachineSignal) {
        *class_name = "QStateMachine__SignalEvent";
        return (QStateMachine::SignalEvent*)object;
    }
    if (object->type() == QEvent::StateMachineWrapped) {
        *class_name = "QStateMachine__WrappedEvent";
        return (QStateMachine::WrappedEvent*)object;
    }
    if (object->type() == QEvent::Timer) {
        *class_name = "QTimerEvent";
        return (QTimerEvent*)object;
    }
    return nullptr;
}


void PythonQt_init_QtCore(PyObject* module) {
PythonQt::priv()->registerClass(&QAbstractAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractAnimation>, module, 0);
PythonQt::priv()->registerClass(&QAbstractItemModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractItemModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemModel>, module, 0);
PythonQt::priv()->registerClass(&QAbstractListModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractListModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractListModel>, module, 0);
PythonQt::priv()->registerClass(&QAbstractState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractState>, module, 0);
PythonQt::priv()->registerClass(&QAbstractTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTransition>, module, 0);
PythonQt::priv()->registerClass(&QAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAnimationGroup>, module, 0);
PythonQt::priv()->registerCPPClass("QApplicationStateChangeEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QApplicationStateChangeEvent>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QBasicMutex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBasicMutex>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBasicMutex>, module, 0);
PythonQt::priv()->registerCPPClass("QBasicTimer", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBasicTimer>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QBuffer::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBuffer>, module, 0);
PythonQt::priv()->registerCPPClass("QByteArrayMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QByteArrayMatcher>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QChildEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QChildEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QChildEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QCollator", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCollator>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QCollatorSortKey", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCollatorSortKey>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QCommandLineOption", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCommandLineOption>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QCommandLineParser", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCommandLineParser>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QCoreApplication::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QCoreApplication>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QCryptographicHash", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCryptographicHash>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QDataStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDataStream>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QDeadlineTimer", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDeadlineTimer>, nullptr, module, PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceSubtract);
PythonQt::priv()->registerCPPClass("QDeferredDeleteEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDeferredDeleteEvent>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QDir", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDir>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDirIterator", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDirIterator>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QDynamicPropertyChangeEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDynamicPropertyChangeEvent>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QEasingCurve", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QEasingCurve>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QElapsedTimer", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QElapsedTimer>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QEvent", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEvent>, module, 0);
PythonQt::priv()->registerClass(&QEventLoop::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QEventLoop>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEventLoop>, module, 0);
PythonQt::priv()->registerClass(&QEventTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QEventTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEventTransition>, module, 0);
PythonQt::priv()->registerCPPClass("QFactoryInterface", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QFactoryInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFactoryInterface>, module, 0);
PythonQt::priv()->registerClass(&QFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFile>, module, 0);
PythonQt::priv()->registerClass(&QFileDevice::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileDevice>, module, 0);
PythonQt::priv()->registerCPPClass("QFileInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileInfo>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QFileSelector::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileSelector>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileSelector>, module, 0);
PythonQt::priv()->registerClass(&QFileSystemWatcher::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileSystemWatcher>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileSystemWatcher>, module, 0);
PythonQt::priv()->registerClass(&QFinalState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFinalState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFinalState>, module, 0);
PythonQt::priv()->registerClass(&QHistoryState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QHistoryState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHistoryState>, module, 0);
PythonQt::priv()->registerClass(&QIODevice::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QIODevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIODevice>, module, 0);
PythonQt::priv()->registerClass(&QIdentityProxyModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QIdentityProxyModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIdentityProxyModel>, module, 0);
PythonQt::priv()->registerCPPClass("QJsonArray", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QJsonArray>, nullptr, module, PythonQt::Type_Add|PythonQt::Type_InplaceAdd|PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QJsonDocument", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QJsonDocument>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QJsonDocument>, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QJsonObject", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QJsonObject>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QJsonParseError", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QJsonParseError>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QJsonParseError>, module, 0);
PythonQt::priv()->registerCPPClass("QJsonValue", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QJsonValue>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QLibrary::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QLibrary>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLibrary>, module, 0);
PythonQt::priv()->registerCPPClass("QLibraryInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLibraryInfo>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QLockFile", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLockFile>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QLoggingCategory", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLoggingCategory>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QMarginsF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMarginsF>, nullptr, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QMessageAuthenticationCode", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMessageAuthenticationCode>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QMessageLogContext", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMessageLogContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMessageLogContext>, module, 0);
PythonQt::priv()->registerCPPClass("QMessageLogger", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMessageLogger>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QMetaClassInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaClassInfo>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QMetaEnum", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaEnum>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QMetaMethod", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaMethod>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMetaProperty", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaProperty>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QMetaType", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaType>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QMimeData::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QMimeData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMimeData>, module, 0);
PythonQt::priv()->registerCPPClass("QMimeDatabase", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMimeDatabase>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QMimeType", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMimeType>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QModelIndex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QModelIndex>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMutex", "QBasicMutex", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMutex>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QMutexLocker", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMutexLocker>, nullptr, module, PythonQt::Type_EnterExit);
PythonQt::priv()->registerClass(&QObject::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QObject>, module, 0);
PythonQt::priv()->registerCPPClass("QOperatingSystemVersion", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QOperatingSystemVersion>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QOperatingSystemVersion>, module, 0);
PythonQt::priv()->registerClass(&QParallelAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QParallelAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QParallelAnimationGroup>, module, 0);
PythonQt::priv()->registerClass(&QPauseAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QPauseAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPauseAnimation>, module, 0);
PythonQt::priv()->registerCPPClass("QPersistentModelIndex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPersistentModelIndex>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QProcess::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QProcess>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProcess>, module, 0);
PythonQt::priv()->registerCPPClass("QProcessEnvironment", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QProcessEnvironment>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QPropertyAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QPropertyAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPropertyAnimation>, module, 0);
PythonQt::priv()->registerCPPClass("QRandomGenerator", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRandomGenerator>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QRandomGenerator64", "QRandomGenerator", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRandomGenerator64>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QReadLocker", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QReadLocker>, nullptr, module, PythonQt::Type_EnterExit);
PythonQt::priv()->registerCPPClass("QReadWriteLock", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QReadWriteLock>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QRegularExpressionMatch", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRegularExpressionMatch>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QRegularExpressionMatchIterator", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRegularExpressionMatchIterator>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QResource", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QResource>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QResource>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QRunnable", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRunnable>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRunnable>, module, 0);
PythonQt::priv()->registerClass(&QSaveFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSaveFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSaveFile>, module, 0);
PythonQt::priv()->registerCPPClass("QSemaphore", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSemaphore>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QSequentialAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSequentialAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSequentialAnimationGroup>, module, 0);
PythonQt::priv()->registerClass(&QSettings::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSettings>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSettings>, module, 0);
PythonQt::priv()->registerClass(&QSharedMemory::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSharedMemory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSharedMemory>, module, 0);
PythonQt::priv()->registerCPPClass("QSignalBlocker", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalBlocker>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QSignalMapper::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalMapper>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSignalMapper>, module, 0);
PythonQt::priv()->registerClass(&QSignalTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSignalTransition>, module, 0);
PythonQt::priv()->registerClass(&QSocketNotifier::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSocketNotifier>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSocketNotifier>, module, 0);
PythonQt::priv()->registerCPPClass("QStandardPaths", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStandardPaths>, nullptr, module, 0);
PythonQt::priv()->registerClass(&QState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QState>, module, 0);
PythonQt::priv()->registerClass(&QStateMachine::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStateMachine>, module, 0);
PythonQt::priv()->registerCPPClass("QStateMachine::SignalEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine__SignalEvent>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QStateMachine::WrappedEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine__WrappedEvent>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QStorageInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStorageInfo>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QStringMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStringMatcher>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QSysInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSysInfo>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSysInfo>, module, 0);
PythonQt::priv()->registerCPPClass("QSystemSemaphore", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSystemSemaphore>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QTemporaryDir", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTemporaryDir>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QTemporaryFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTemporaryFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTemporaryFile>, module, 0);
PythonQt::priv()->registerCPPClass("QTextBoundaryFinder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextBoundaryFinder>, nullptr, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextCodec", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextCodec>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCodec>, module, 0);
PythonQt::priv()->registerCPPClass("QTextDecoder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextDecoder>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QTextEncoder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextEncoder>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QTextStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextStream>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextStream>, module, 0);
PythonQt::priv()->registerClass(&QThread::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QThread>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QThread>, module, 0);
PythonQt::priv()->registerClass(&QThreadPool::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QThreadPool>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QThreadPool>, module, 0);
PythonQt::priv()->registerClass(&QTimeLine::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimeLine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimeLine>, module, 0);
PythonQt::priv()->registerCPPClass("QTimeZone", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimeZone>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QTimer::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimer>, module, 0);
PythonQt::priv()->registerCPPClass("QTimerEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimerEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimerEvent>, module, 0);
PythonQt::priv()->registerClass(&QTranslator::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTranslator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTranslator>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QUrlQuery", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUrlQuery>, nullptr, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QUuid", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUuid>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUuid>, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QVariantAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QVariantAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVariantAnimation>, module, 0);
PythonQt::priv()->registerCPPClass("QWaitCondition", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QWaitCondition>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QWriteLocker", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QWriteLocker>, nullptr, module, PythonQt::Type_EnterExit);
PythonQt::priv()->registerCPPClass("QXmlStreamEntityResolver", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamEntityResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlStreamEntityResolver>, module, 0);

PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);

PythonQtRegisterListTemplateConverterForKnownClass(QList, QCommandLineOption);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QFileInfo);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMimeType);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QModelIndex);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QPersistentModelIndex);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QStorageInfo);
}
