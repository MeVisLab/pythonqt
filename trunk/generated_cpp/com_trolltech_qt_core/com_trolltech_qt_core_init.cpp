#include <PythonQt.h>
#include "com_trolltech_qt_core0.h"
#include "com_trolltech_qt_core1.h"

static void* polymorphichandler_QEvent(const void *ptr, char **class_name)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::None) {
        *class_name = "QEvent";
        return (QEvent*)object;
    }
    if (object->type() == QEvent::ChildAdded || object->type() == QEvent::ChildPolished || object->type() == QEvent::ChildRemoved) {
        *class_name = "QChildEvent";
        return (QChildEvent*)object;
    }
    if (object->type() == QEvent::Timer) {
        *class_name = "QTimerEvent";
        return (QTimerEvent*)object;
    }
    if (object->type() == QEvent::DynamicPropertyChange) {
        *class_name = "QDynamicPropertyChangeEvent";
        return (QDynamicPropertyChangeEvent*)object;
    }
    return NULL;
}

void PythonQt_init_QtCore() {
PythonQt::self()->registerCPPClass("QTimerEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimerEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimerEvent>);
PythonQt::self()->registerCPPClass("QSystemSemaphore", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSystemSemaphore>);
PythonQt::self()->registerClass(&QFileSystemWatcher::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileSystemWatcher>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileSystemWatcher>);
PythonQt::self()->registerCPPClass("QLibraryInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLibraryInfo>);
PythonQt::self()->registerCPPClass("QPersistentModelIndex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPersistentModelIndex>);
PythonQt::self()->registerCPPClass("QCryptographicHash", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCryptographicHash>);
PythonQt::self()->registerCPPClass("QByteArrayMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QByteArrayMatcher>);
PythonQt::self()->registerClass(&QBuffer::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBuffer>);
PythonQt::self()->registerCPPClass("QByteArray", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QByteArray>);
PythonQt::self()->registerCPPClass("QTextBoundaryFinder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextBoundaryFinder>);
PythonQt::self()->registerCPPClass("QXmlStreamNamespaceDeclaration", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamNamespaceDeclaration>);
PythonQt::self()->registerClass(&QTimer::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimer>);
PythonQt::self()->registerClass(&QMimeData::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QMimeData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMimeData>);
PythonQt::self()->registerCPPClass("QXmlStreamNotationDeclaration", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamNotationDeclaration>);
PythonQt::self()->registerCPPClass("QRunnable", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRunnable>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRunnable>);
PythonQt::self()->registerCPPClass("QUuid", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUuid>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUuid>);
PythonQt::self()->registerCPPClass("QBasicTimer", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBasicTimer>);
PythonQt::self()->registerClass(&QAbstractListModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractListModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractListModel>);
PythonQt::self()->registerCPPClass("QDirIterator", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDirIterator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDirIterator>);
PythonQt::self()->registerClass(&QCoreApplication::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QCoreApplication>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCoreApplication>);
PythonQt::self()->registerClass(&QAbstractTableModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTableModel>);
PythonQt::self()->registerCPPClass("QDynamicPropertyChangeEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDynamicPropertyChangeEvent>);
PythonQt::self()->registerCPPClass("QDir", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDir>);
PythonQt::self()->registerClass(&QIODevice::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QIODevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIODevice>);
PythonQt::self()->registerCPPClass("QXmlStreamAttribute", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamAttribute>);
PythonQt::self()->registerClass(&QThreadPool::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QThreadPool>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QThreadPool>);
PythonQt::self()->registerClass(&QSignalMapper::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalMapper>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSignalMapper>);
PythonQt::self()->registerCPPClass("QWaitCondition", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QWaitCondition>);
PythonQt::self()->registerCPPClass("QTextStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextStream>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextStream>);
PythonQt::self()->registerCPPClass("QTextEncoder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextEncoder>);
PythonQt::self()->registerCPPClass("QStringMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStringMatcher>);
PythonQt::self()->registerCPPClass("QEvent", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEvent>);
PythonQt::self()->registerClass(&QSettings::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSettings>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSettings>);
PythonQt::self()->registerCPPClass("QTextCodec", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextCodec>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCodec>);
PythonQt::self()->registerCPPClass("QXmlStreamAttributes", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamAttributes>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlStreamAttributes>);
PythonQt::self()->registerClass(&QObject::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QObject>);
PythonQt::self()->registerCPPClass("QSemaphore", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSemaphore>);
PythonQt::self()->registerClass(&QTranslator::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTranslator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTranslator>);
PythonQt::self()->registerCPPClass("QXmlStreamEntityDeclaration", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamEntityDeclaration>);
PythonQt::self()->registerCPPClass("QMutex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMutex>);
PythonQt::self()->registerCPPClass("QChildEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QChildEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QChildEvent>);
PythonQt::self()->registerCPPClass("QXmlStreamReader", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamReader>);
PythonQt::self()->registerClass(&QFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFile>);
PythonQt::self()->registerCPPClass("QDataStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDataStream>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDataStream>);
PythonQt::self()->registerClass(&QEventLoop::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QEventLoop>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEventLoop>);
PythonQt::self()->registerClass(&QTemporaryFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTemporaryFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTemporaryFile>);
PythonQt::self()->registerClass(&QAbstractItemModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractItemModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemModel>);
PythonQt::self()->registerCPPClass("QFileInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileInfo>);
PythonQt::self()->registerClass(&QTimeLine::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimeLine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimeLine>);
PythonQt::self()->registerClass(&QSocketNotifier::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSocketNotifier>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSocketNotifier>);
PythonQt::self()->registerCPPClass("QXmlStreamWriter", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamWriter>);
PythonQt::self()->registerCPPClass("QTextDecoder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextDecoder>);
PythonQt::self()->registerCPPClass("QModelIndex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QModelIndex>);
PythonQt::self()->registerClass(&QProcess::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QProcess>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProcess>);
PythonQt::self()->registerCPPClass("QXmlStreamEntityResolver", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamEntityResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlStreamEntityResolver>);
PythonQt::self()->registerClass(&QTextCodecPlugin::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextCodecPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCodecPlugin>);
PythonQt::self()->registerCPPClass("QtConcurrent", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QtConcurrent>);

PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);
}
