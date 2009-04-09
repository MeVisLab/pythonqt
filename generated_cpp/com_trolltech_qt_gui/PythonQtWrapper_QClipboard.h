#ifndef PYTHONQTWRAPPER_QCLIPBOARD_H
#define PYTHONQTWRAPPER_QCLIPBOARD_H

#include <qclipboard.h>
#include <QObject>

#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>

class PythonQtWrapper_QClipboard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode )
enum Mode{
  Clipboard = QClipboard::Clipboard,   Selection = QClipboard::Selection,   FindBuffer = QClipboard::FindBuffer,   LastMode = QClipboard::LastMode};
public slots:
   void clear(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard);
   QImage  image(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   const QMimeData*  mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   bool  ownsClipboard(QClipboard* theWrappedObject) const;
   bool  ownsFindBuffer(QClipboard* theWrappedObject) const;
   bool  ownsSelection(QClipboard* theWrappedObject) const;
   QPixmap  pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   void setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setMimeData(QClipboard* theWrappedObject, QMimeData*  data, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   bool  supportsFindBuffer(QClipboard* theWrappedObject) const;
   bool  supportsSelection(QClipboard* theWrappedObject) const;
   QString  text(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   QString  text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode = QClipboard::Clipboard) const;
};

#endif // PYTHONQTWRAPPER_QCLIPBOARD_H
