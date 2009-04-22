#include "PythonQtWrapper_Qt.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextDocument>
#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

bool  PythonQtWrapper_Qt::static_Qt_mightBeRichText(const QString&  arg__1)
{
  return Qt::mightBeRichText(arg__1);
}

QString  PythonQtWrapper_Qt::static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode)
{
  return Qt::convertFromPlainText(plain, mode);
}

QTextCodec*  PythonQtWrapper_Qt::static_Qt_codecForHtml(const QByteArray&  ba)
{
  return Qt::codecForHtml(ba);
}

QString  PythonQtWrapper_Qt::static_Qt_escape(const QString&  plain)
{
  return Qt::escape(plain);
}

