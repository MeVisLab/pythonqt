DEFINES +=  PYTHONQT_EXPORTS

HEADERS +=                    \
  $$PWD/PythonQt.h                  \
  $$PWD/PythonQtStdDecorators.h     \
  $$PWD/PythonQtClassInfo.h         \
  $$PWD/PythonQtImporter.h          \
  $$PWD/PythonQtObjectPtr.h         \
  $$PWD/PythonQtSlot.h              \
  $$PWD/PythonQtStdOut.h            \
  $$PWD/PythonQtMisc.h              \
  $$PWD/PythonQtMethodInfo.h        \
  $$PWD/PythonQtImportFileInterface.h \
  $$PWD/PythonQtConversion.h        \
  $$PWD/PythonQtSignalReceiver.h    \
  $$PWD/PythonQtInstanceWrapper.h   \
  $$PWD/PythonQtClassWrapper.h \
  $$PWD/PythonQtCppWrapperFactory.h \
  $$PWD/PythonQtVariants.h          \
  $$PWD/PythonQtQFileImporter.h     \
  $$PWD/PythonQtQFileImporter.h     \
  $$PWD/gui/PythonQtScriptingConsole.h    \
  $$PWD/PythonQtSystem.h \
  \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_Qt.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QBitArray.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QDate.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QTime.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QDateTime.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QUrl.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QLocale.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QRect.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QRectF.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QSize.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QSizeF.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QLine.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QLineF.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QPoint.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QPointF.h \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QRegExp.h \
  \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QFont.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QPixmap.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QBrush.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QColor.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QPalette.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QIcon.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QImage.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QPolygon.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QRegion.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QBitmap.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QCursor.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QSizePolicy.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QKeySequence.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QPen.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QTextLength.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QTextFormat.h \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QMatrix.h

  
SOURCES +=                    \
  $$PWD/PythonQtStdDecorators.cpp   \
  $$PWD/PythonQt.cpp                \
  $$PWD/PythonQtClassInfo.cpp       \
  $$PWD/PythonQtImporter.cpp        \
  $$PWD/PythonQtObjectPtr.cpp       \
  $$PWD/PythonQtStdOut.cpp          \
  $$PWD/PythonQtSlot.cpp            \
  $$PWD/PythonQtMisc.cpp            \
  $$PWD/PythonQtMethodInfo.cpp      \
  $$PWD/PythonQtConversion.cpp      \
  $$PWD/PythonQtSignalReceiver.cpp  \
  $$PWD/PythonQtVariants.cpp        \
  $$PWD/PythonQtInstanceWrapper.cpp \
  $$PWD/PythonQtQFileImporter.cpp   \
  $$PWD/PythonQtClassWrapper.cpp    \
  $$PWD/gui/PythonQtScriptingConsole.cpp \
  \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_Qt.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QBitArray.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QDate.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QTime.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QDateTime.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QUrl.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QLocale.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QRect.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QRectF.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QSize.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QSizeF.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QLine.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QLineF.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QPoint.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QPointF.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_core/PythonQtWrapper_QRegExp.cpp \
  \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QFont.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QPixmap.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QBrush.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QColor.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QPalette.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QIcon.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QImage.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QPolygon.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QRegion.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QBitmap.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QCursor.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QSizePolicy.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QKeySequence.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QPen.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QTextLength.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QTextFormat.cpp \
  $$PWD/../generated_cpp/com_trolltech_qt_gui/PythonQtWrapper_QMatrix.cpp

