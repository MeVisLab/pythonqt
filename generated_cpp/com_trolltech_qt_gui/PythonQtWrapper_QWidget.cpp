#include "PythonQtWrapper_QWidget.h"

#include <QIcon>
#include <QMessageBox>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QWidget* PythonQtWrapper_QWidget::new_QWidget(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QWidget(parent, f); }

bool  PythonQtWrapper_QWidget::acceptDrops(QWidget* theWrappedObject) const
{
return theWrappedObject->acceptDrops();
}

QString  PythonQtWrapper_QWidget::accessibleDescription(QWidget* theWrappedObject) const
{
return theWrappedObject->accessibleDescription();
}

QString  PythonQtWrapper_QWidget::accessibleName(QWidget* theWrappedObject) const
{
return theWrappedObject->accessibleName();
}

QList<QAction* >  PythonQtWrapper_QWidget::actions(QWidget* theWrappedObject) const
{
return theWrappedObject->actions();
}

void PythonQtWrapper_QWidget::activateWindow(QWidget* theWrappedObject)
{
theWrappedObject->activateWindow();
}

void PythonQtWrapper_QWidget::addAction(QWidget* theWrappedObject, QAction*  action)
{
theWrappedObject->addAction(action);
}

void PythonQtWrapper_QWidget::addActions(QWidget* theWrappedObject, QList<QAction* >  actions)
{
theWrappedObject->addActions(actions);
}

void PythonQtWrapper_QWidget::adjustSize(QWidget* theWrappedObject)
{
theWrappedObject->adjustSize();
}

bool  PythonQtWrapper_QWidget::autoFillBackground(QWidget* theWrappedObject) const
{
return theWrappedObject->autoFillBackground();
}

QPalette::ColorRole  PythonQtWrapper_QWidget::backgroundRole(QWidget* theWrappedObject) const
{
return theWrappedObject->backgroundRole();
}

QSize  PythonQtWrapper_QWidget::baseSize(QWidget* theWrappedObject) const
{
return theWrappedObject->baseSize();
}

QWidget*  PythonQtWrapper_QWidget::childAt(QWidget* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->childAt(p);
}

QWidget*  PythonQtWrapper_QWidget::childAt(QWidget* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->childAt(x, y);
}

QRect  PythonQtWrapper_QWidget::childrenRect(QWidget* theWrappedObject) const
{
return theWrappedObject->childrenRect();
}

QRegion  PythonQtWrapper_QWidget::childrenRegion(QWidget* theWrappedObject) const
{
return theWrappedObject->childrenRegion();
}

void PythonQtWrapper_QWidget::clearFocus(QWidget* theWrappedObject)
{
theWrappedObject->clearFocus();
}

void PythonQtWrapper_QWidget::clearMask(QWidget* theWrappedObject)
{
theWrappedObject->clearMask();
}

QRect  PythonQtWrapper_QWidget::contentsRect(QWidget* theWrappedObject) const
{
return theWrappedObject->contentsRect();
}

Qt::ContextMenuPolicy  PythonQtWrapper_QWidget::contextMenuPolicy(QWidget* theWrappedObject) const
{
return theWrappedObject->contextMenuPolicy();
}

void PythonQtWrapper_QWidget::createWinId(QWidget* theWrappedObject)
{
theWrappedObject->createWinId();
}

QCursor  PythonQtWrapper_QWidget::cursor(QWidget* theWrappedObject) const
{
return theWrappedObject->cursor();
}

int  PythonQtWrapper_QWidget::depth(QWidget* theWrappedObject) const
{
return theWrappedObject->depth();
}

int  PythonQtWrapper_QWidget::devType(QWidget* theWrappedObject) const
{
return theWrappedObject->devType();
}

WId  PythonQtWrapper_QWidget::effectiveWinId(QWidget* theWrappedObject) const
{
return theWrappedObject->effectiveWinId();
}

void PythonQtWrapper_QWidget::ensurePolished(QWidget* theWrappedObject) const
{
theWrappedObject->ensurePolished();
}

Qt::FocusPolicy  PythonQtWrapper_QWidget::focusPolicy(QWidget* theWrappedObject) const
{
return theWrappedObject->focusPolicy();
}

QWidget*  PythonQtWrapper_QWidget::focusProxy(QWidget* theWrappedObject) const
{
return theWrappedObject->focusProxy();
}

QWidget*  PythonQtWrapper_QWidget::focusWidget(QWidget* theWrappedObject) const
{
return theWrappedObject->focusWidget();
}

const QFont&  PythonQtWrapper_QWidget::font(QWidget* theWrappedObject) const
{
return theWrappedObject->font();
}

QPalette::ColorRole  PythonQtWrapper_QWidget::foregroundRole(QWidget* theWrappedObject) const
{
return theWrappedObject->foregroundRole();
}

QRect  PythonQtWrapper_QWidget::frameGeometry(QWidget* theWrappedObject) const
{
return theWrappedObject->frameGeometry();
}

QSize  PythonQtWrapper_QWidget::frameSize(QWidget* theWrappedObject) const
{
return theWrappedObject->frameSize();
}

const QRect&  PythonQtWrapper_QWidget::geometry(QWidget* theWrappedObject) const
{
return theWrappedObject->geometry();
}

void PythonQtWrapper_QWidget::getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const
{
theWrappedObject->getContentsMargins(left, top, right, bottom);
}

void PythonQtWrapper_QWidget::grabKeyboard(QWidget* theWrappedObject)
{
theWrappedObject->grabKeyboard();
}

void PythonQtWrapper_QWidget::grabMouse(QWidget* theWrappedObject)
{
theWrappedObject->grabMouse();
}

void PythonQtWrapper_QWidget::grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1)
{
theWrappedObject->grabMouse(arg__1);
}

int  PythonQtWrapper_QWidget::grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context)
{
return theWrappedObject->grabShortcut(key, context);
}

bool  PythonQtWrapper_QWidget::hasFocus(QWidget* theWrappedObject) const
{
return theWrappedObject->hasFocus();
}

bool  PythonQtWrapper_QWidget::hasMouseTracking(QWidget* theWrappedObject) const
{
return theWrappedObject->hasMouseTracking();
}

int  PythonQtWrapper_QWidget::height(QWidget* theWrappedObject) const
{
return theWrappedObject->height();
}

int  PythonQtWrapper_QWidget::heightForWidth(QWidget* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

int  PythonQtWrapper_QWidget::heightMM(QWidget* theWrappedObject) const
{
return theWrappedObject->heightMM();
}

QInputContext*  PythonQtWrapper_QWidget::inputContext(QWidget* theWrappedObject)
{
return theWrappedObject->inputContext();
}

QVariant  PythonQtWrapper_QWidget::inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const
{
return theWrappedObject->inputMethodQuery(arg__1);
}

void PythonQtWrapper_QWidget::insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action)
{
theWrappedObject->insertAction(before, action);
}

void PythonQtWrapper_QWidget::insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions)
{
theWrappedObject->insertActions(before, actions);
}

bool  PythonQtWrapper_QWidget::isActiveWindow(QWidget* theWrappedObject) const
{
return theWrappedObject->isActiveWindow();
}

bool  PythonQtWrapper_QWidget::isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const
{
return theWrappedObject->isAncestorOf(child);
}

bool  PythonQtWrapper_QWidget::isEnabled(QWidget* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QWidget::isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const
{
return theWrappedObject->isEnabledTo(arg__1);
}

bool  PythonQtWrapper_QWidget::isFullScreen(QWidget* theWrappedObject) const
{
return theWrappedObject->isFullScreen();
}

bool  PythonQtWrapper_QWidget::isHidden(QWidget* theWrappedObject) const
{
return theWrappedObject->isHidden();
}

bool  PythonQtWrapper_QWidget::isLeftToRight(QWidget* theWrappedObject) const
{
return theWrappedObject->isLeftToRight();
}

bool  PythonQtWrapper_QWidget::isMaximized(QWidget* theWrappedObject) const
{
return theWrappedObject->isMaximized();
}

bool  PythonQtWrapper_QWidget::isMinimized(QWidget* theWrappedObject) const
{
return theWrappedObject->isMinimized();
}

bool  PythonQtWrapper_QWidget::isModal(QWidget* theWrappedObject) const
{
return theWrappedObject->isModal();
}

bool  PythonQtWrapper_QWidget::isRightToLeft(QWidget* theWrappedObject) const
{
return theWrappedObject->isRightToLeft();
}

bool  PythonQtWrapper_QWidget::isVisible(QWidget* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

bool  PythonQtWrapper_QWidget::isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const
{
return theWrappedObject->isVisibleTo(arg__1);
}

bool  PythonQtWrapper_QWidget::isWindow(QWidget* theWrappedObject) const
{
return theWrappedObject->isWindow();
}

bool  PythonQtWrapper_QWidget::isWindowModified(QWidget* theWrappedObject) const
{
return theWrappedObject->isWindowModified();
}

QWidget*  PythonQtWrapper_QWidget::static_QWidget_keyboardGrabber()
{
return QWidget::keyboardGrabber();
}

QLayout*  PythonQtWrapper_QWidget::layout(QWidget* theWrappedObject) const
{
return theWrappedObject->layout();
}

Qt::LayoutDirection  PythonQtWrapper_QWidget::layoutDirection(QWidget* theWrappedObject) const
{
return theWrappedObject->layoutDirection();
}

QLocale  PythonQtWrapper_QWidget::locale(QWidget* theWrappedObject) const
{
return theWrappedObject->locale();
}

int  PythonQtWrapper_QWidget::logicalDpiX(QWidget* theWrappedObject) const
{
return theWrappedObject->logicalDpiX();
}

int  PythonQtWrapper_QWidget::logicalDpiY(QWidget* theWrappedObject) const
{
return theWrappedObject->logicalDpiY();
}

QPoint  PythonQtWrapper_QWidget::mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const
{
return theWrappedObject->mapFrom(arg__1, arg__2);
}

QPoint  PythonQtWrapper_QWidget::mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
return theWrappedObject->mapFromGlobal(arg__1);
}

QPoint  PythonQtWrapper_QWidget::mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
return theWrappedObject->mapFromParent(arg__1);
}

QPoint  PythonQtWrapper_QWidget::mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const
{
return theWrappedObject->mapTo(arg__1, arg__2);
}

QPoint  PythonQtWrapper_QWidget::mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
return theWrappedObject->mapToGlobal(arg__1);
}

QPoint  PythonQtWrapper_QWidget::mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
return theWrappedObject->mapToParent(arg__1);
}

QRegion  PythonQtWrapper_QWidget::mask(QWidget* theWrappedObject) const
{
return theWrappedObject->mask();
}

int  PythonQtWrapper_QWidget::maximumHeight(QWidget* theWrappedObject) const
{
return theWrappedObject->maximumHeight();
}

QSize  PythonQtWrapper_QWidget::maximumSize(QWidget* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

int  PythonQtWrapper_QWidget::maximumWidth(QWidget* theWrappedObject) const
{
return theWrappedObject->maximumWidth();
}

int  PythonQtWrapper_QWidget::minimumHeight(QWidget* theWrappedObject) const
{
return theWrappedObject->minimumHeight();
}

QSize  PythonQtWrapper_QWidget::minimumSize(QWidget* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

QSize  PythonQtWrapper_QWidget::minimumSizeHint(QWidget* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

int  PythonQtWrapper_QWidget::minimumWidth(QWidget* theWrappedObject) const
{
return theWrappedObject->minimumWidth();
}

QWidget*  PythonQtWrapper_QWidget::static_QWidget_mouseGrabber()
{
return QWidget::mouseGrabber();
}

void PythonQtWrapper_QWidget::move(QWidget* theWrappedObject, const QPoint&  arg__1)
{
theWrappedObject->move(arg__1);
}

void PythonQtWrapper_QWidget::move(QWidget* theWrappedObject, int  x, int  y)
{
theWrappedObject->move(x, y);
}

QWidget*  PythonQtWrapper_QWidget::nativeParentWidget(QWidget* theWrappedObject) const
{
return theWrappedObject->nativeParentWidget();
}

QWidget*  PythonQtWrapper_QWidget::nextInFocusChain(QWidget* theWrappedObject) const
{
return theWrappedObject->nextInFocusChain();
}

QRect  PythonQtWrapper_QWidget::normalGeometry(QWidget* theWrappedObject) const
{
return theWrappedObject->normalGeometry();
}

int  PythonQtWrapper_QWidget::numColors(QWidget* theWrappedObject) const
{
return theWrappedObject->numColors();
}

void PythonQtWrapper_QWidget::overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type)
{
theWrappedObject->overrideWindowFlags(type);
}

void PythonQtWrapper_QWidget::overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state)
{
theWrappedObject->overrideWindowState(state);
}

QPaintEngine*  PythonQtWrapper_QWidget::paintEngine(QWidget* theWrappedObject) const
{
return theWrappedObject->paintEngine();
}

bool  PythonQtWrapper_QWidget::paintingActive(QWidget* theWrappedObject) const
{
return theWrappedObject->paintingActive();
}

const QPalette&  PythonQtWrapper_QWidget::palette(QWidget* theWrappedObject) const
{
return theWrappedObject->palette();
}

QWidget*  PythonQtWrapper_QWidget::parentWidget(QWidget* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

int  PythonQtWrapper_QWidget::physicalDpiX(QWidget* theWrappedObject) const
{
return theWrappedObject->physicalDpiX();
}

int  PythonQtWrapper_QWidget::physicalDpiY(QWidget* theWrappedObject) const
{
return theWrappedObject->physicalDpiY();
}

QPoint  PythonQtWrapper_QWidget::pos(QWidget* theWrappedObject) const
{
return theWrappedObject->pos();
}

QRect  PythonQtWrapper_QWidget::rect(QWidget* theWrappedObject) const
{
return theWrappedObject->rect();
}

void PythonQtWrapper_QWidget::releaseKeyboard(QWidget* theWrappedObject)
{
theWrappedObject->releaseKeyboard();
}

void PythonQtWrapper_QWidget::releaseMouse(QWidget* theWrappedObject)
{
theWrappedObject->releaseMouse();
}

void PythonQtWrapper_QWidget::releaseShortcut(QWidget* theWrappedObject, int  id)
{
theWrappedObject->releaseShortcut(id);
}

void PythonQtWrapper_QWidget::removeAction(QWidget* theWrappedObject, QAction*  action)
{
theWrappedObject->removeAction(action);
}

void PythonQtWrapper_QWidget::render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset, const QRegion&  sourceRegion, QWidget::RenderFlags  renderFlags)
{
theWrappedObject->render(target, targetOffset, sourceRegion, renderFlags);
}

void PythonQtWrapper_QWidget::render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset, const QRegion&  sourceRegion, QWidget::RenderFlags  renderFlags)
{
theWrappedObject->render(painter, targetOffset, sourceRegion, renderFlags);
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->repaint(arg__1);
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, const QRegion&  arg__1)
{
theWrappedObject->repaint(arg__1);
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
theWrappedObject->repaint(x, y, w, h);
}

void PythonQtWrapper_QWidget::resize(QWidget* theWrappedObject, const QSize&  arg__1)
{
theWrappedObject->resize(arg__1);
}

void PythonQtWrapper_QWidget::resize(QWidget* theWrappedObject, int  w, int  h)
{
theWrappedObject->resize(w, h);
}

bool  PythonQtWrapper_QWidget::restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry)
{
return theWrappedObject->restoreGeometry(geometry);
}

QByteArray  PythonQtWrapper_QWidget::saveGeometry(QWidget* theWrappedObject) const
{
return theWrappedObject->saveGeometry();
}

void PythonQtWrapper_QWidget::scroll(QWidget* theWrappedObject, int  dx, int  dy)
{
theWrappedObject->scroll(dx, dy);
}

void PythonQtWrapper_QWidget::scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3)
{
theWrappedObject->scroll(dx, dy, arg__3);
}

void PythonQtWrapper_QWidget::setAcceptDrops(QWidget* theWrappedObject, bool  on)
{
theWrappedObject->setAcceptDrops(on);
}

void PythonQtWrapper_QWidget::setAccessibleDescription(QWidget* theWrappedObject, const QString&  description)
{
theWrappedObject->setAccessibleDescription(description);
}

void PythonQtWrapper_QWidget::setAccessibleName(QWidget* theWrappedObject, const QString&  name)
{
theWrappedObject->setAccessibleName(name);
}

void PythonQtWrapper_QWidget::setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on)
{
theWrappedObject->setAttribute(arg__1, on);
}

void PythonQtWrapper_QWidget::setAutoFillBackground(QWidget* theWrappedObject, bool  enabled)
{
theWrappedObject->setAutoFillBackground(enabled);
}

void PythonQtWrapper_QWidget::setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1)
{
theWrappedObject->setBackgroundRole(arg__1);
}

void PythonQtWrapper_QWidget::setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
theWrappedObject->setBaseSize(arg__1);
}

void PythonQtWrapper_QWidget::setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh)
{
theWrappedObject->setBaseSize(basew, baseh);
}

void PythonQtWrapper_QWidget::setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom)
{
theWrappedObject->setContentsMargins(left, top, right, bottom);
}

void PythonQtWrapper_QWidget::setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy)
{
theWrappedObject->setContextMenuPolicy(policy);
}

void PythonQtWrapper_QWidget::setCursor(QWidget* theWrappedObject, const QCursor&  arg__1)
{
theWrappedObject->setCursor(arg__1);
}

void PythonQtWrapper_QWidget::setFixedHeight(QWidget* theWrappedObject, int  h)
{
theWrappedObject->setFixedHeight(h);
}

void PythonQtWrapper_QWidget::setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
theWrappedObject->setFixedSize(arg__1);
}

void PythonQtWrapper_QWidget::setFixedSize(QWidget* theWrappedObject, int  w, int  h)
{
theWrappedObject->setFixedSize(w, h);
}

void PythonQtWrapper_QWidget::setFixedWidth(QWidget* theWrappedObject, int  w)
{
theWrappedObject->setFixedWidth(w);
}

void PythonQtWrapper_QWidget::setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason)
{
theWrappedObject->setFocus(reason);
}

void PythonQtWrapper_QWidget::setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy)
{
theWrappedObject->setFocusPolicy(policy);
}

void PythonQtWrapper_QWidget::setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->setFocusProxy(arg__1);
}

void PythonQtWrapper_QWidget::setFont(QWidget* theWrappedObject, const QFont&  arg__1)
{
theWrappedObject->setFont(arg__1);
}

void PythonQtWrapper_QWidget::setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1)
{
theWrappedObject->setForegroundRole(arg__1);
}

void PythonQtWrapper_QWidget::setGeometry(QWidget* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->setGeometry(arg__1);
}

void PythonQtWrapper_QWidget::setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
theWrappedObject->setGeometry(x, y, w, h);
}

void PythonQtWrapper_QWidget::setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1)
{
theWrappedObject->setInputContext(arg__1);
}

void PythonQtWrapper_QWidget::setLayout(QWidget* theWrappedObject, QLayout*  arg__1)
{
theWrappedObject->setLayout(arg__1);
}

void PythonQtWrapper_QWidget::setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction)
{
theWrappedObject->setLayoutDirection(direction);
}

void PythonQtWrapper_QWidget::setLocale(QWidget* theWrappedObject, const QLocale&  locale)
{
theWrappedObject->setLocale(locale);
}

void PythonQtWrapper_QWidget::setMask(QWidget* theWrappedObject, const QBitmap&  arg__1)
{
theWrappedObject->setMask(arg__1);
}

void PythonQtWrapper_QWidget::setMask(QWidget* theWrappedObject, const QRegion&  arg__1)
{
theWrappedObject->setMask(arg__1);
}

void PythonQtWrapper_QWidget::setMaximumHeight(QWidget* theWrappedObject, int  maxh)
{
theWrappedObject->setMaximumHeight(maxh);
}

void PythonQtWrapper_QWidget::setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
theWrappedObject->setMaximumSize(arg__1);
}

void PythonQtWrapper_QWidget::setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh)
{
theWrappedObject->setMaximumSize(maxw, maxh);
}

void PythonQtWrapper_QWidget::setMaximumWidth(QWidget* theWrappedObject, int  maxw)
{
theWrappedObject->setMaximumWidth(maxw);
}

void PythonQtWrapper_QWidget::setMinimumHeight(QWidget* theWrappedObject, int  minh)
{
theWrappedObject->setMinimumHeight(minh);
}

void PythonQtWrapper_QWidget::setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
theWrappedObject->setMinimumSize(arg__1);
}

void PythonQtWrapper_QWidget::setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh)
{
theWrappedObject->setMinimumSize(minw, minh);
}

void PythonQtWrapper_QWidget::setMinimumWidth(QWidget* theWrappedObject, int  minw)
{
theWrappedObject->setMinimumWidth(minw);
}

void PythonQtWrapper_QWidget::setMouseTracking(QWidget* theWrappedObject, bool  enable)
{
theWrappedObject->setMouseTracking(enable);
}

void PythonQtWrapper_QWidget::setPalette(QWidget* theWrappedObject, const QPalette&  arg__1)
{
theWrappedObject->setPalette(arg__1);
}

void PythonQtWrapper_QWidget::setParent(QWidget* theWrappedObject, QWidget*  parent)
{
theWrappedObject->setParent(parent);
}

void PythonQtWrapper_QWidget::setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f)
{
theWrappedObject->setParent(parent, f);
}

void PythonQtWrapper_QWidget::setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable)
{
theWrappedObject->setShortcutAutoRepeat(id, enable);
}

void PythonQtWrapper_QWidget::setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable)
{
theWrappedObject->setShortcutEnabled(id, enable);
}

void PythonQtWrapper_QWidget::setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1)
{
theWrappedObject->setSizeIncrement(arg__1);
}

void PythonQtWrapper_QWidget::setSizeIncrement(QWidget* theWrappedObject, int  w, int  h)
{
theWrappedObject->setSizeIncrement(w, h);
}

void PythonQtWrapper_QWidget::setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1)
{
theWrappedObject->setSizePolicy(arg__1);
}

void PythonQtWrapper_QWidget::setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical)
{
theWrappedObject->setSizePolicy(horizontal, vertical);
}

void PythonQtWrapper_QWidget::setStatusTip(QWidget* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setStatusTip(arg__1);
}

void PythonQtWrapper_QWidget::setStyle(QWidget* theWrappedObject, QStyle*  arg__1)
{
theWrappedObject->setStyle(arg__1);
}

void PythonQtWrapper_QWidget::static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2)
{
QWidget::setTabOrder(arg__1, arg__2);
}

void PythonQtWrapper_QWidget::setToolTip(QWidget* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setToolTip(arg__1);
}

void PythonQtWrapper_QWidget::setUpdatesEnabled(QWidget* theWrappedObject, bool  enable)
{
theWrappedObject->setUpdatesEnabled(enable);
}

void PythonQtWrapper_QWidget::setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setWhatsThis(arg__1);
}

void PythonQtWrapper_QWidget::setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath)
{
theWrappedObject->setWindowFilePath(filePath);
}

void PythonQtWrapper_QWidget::setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type)
{
theWrappedObject->setWindowFlags(type);
}

void PythonQtWrapper_QWidget::setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setWindowIcon(icon);
}

void PythonQtWrapper_QWidget::setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setWindowIconText(arg__1);
}

void PythonQtWrapper_QWidget::setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality)
{
theWrappedObject->setWindowModality(windowModality);
}

void PythonQtWrapper_QWidget::setWindowOpacity(QWidget* theWrappedObject, qreal  level)
{
theWrappedObject->setWindowOpacity(level);
}

void PythonQtWrapper_QWidget::setWindowRole(QWidget* theWrappedObject, const QString&  arg__1)
{
theWrappedObject->setWindowRole(arg__1);
}

void PythonQtWrapper_QWidget::setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state)
{
theWrappedObject->setWindowState(state);
}

QSize  PythonQtWrapper_QWidget::size(QWidget* theWrappedObject) const
{
return theWrappedObject->size();
}

QSize  PythonQtWrapper_QWidget::sizeHint(QWidget* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QSize  PythonQtWrapper_QWidget::sizeIncrement(QWidget* theWrappedObject) const
{
return theWrappedObject->sizeIncrement();
}

QSizePolicy  PythonQtWrapper_QWidget::sizePolicy(QWidget* theWrappedObject) const
{
return theWrappedObject->sizePolicy();
}

void PythonQtWrapper_QWidget::stackUnder(QWidget* theWrappedObject, QWidget*  arg__1)
{
theWrappedObject->stackUnder(arg__1);
}

QString  PythonQtWrapper_QWidget::statusTip(QWidget* theWrappedObject) const
{
return theWrappedObject->statusTip();
}

QStyle*  PythonQtWrapper_QWidget::style(QWidget* theWrappedObject) const
{
return theWrappedObject->style();
}

QString  PythonQtWrapper_QWidget::styleSheet(QWidget* theWrappedObject) const
{
return theWrappedObject->styleSheet();
}

bool  PythonQtWrapper_QWidget::testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const
{
return theWrappedObject->testAttribute(arg__1);
}

QString  PythonQtWrapper_QWidget::toolTip(QWidget* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

bool  PythonQtWrapper_QWidget::underMouse(QWidget* theWrappedObject) const
{
return theWrappedObject->underMouse();
}

void PythonQtWrapper_QWidget::unsetCursor(QWidget* theWrappedObject)
{
theWrappedObject->unsetCursor();
}

void PythonQtWrapper_QWidget::unsetLayoutDirection(QWidget* theWrappedObject)
{
theWrappedObject->unsetLayoutDirection();
}

void PythonQtWrapper_QWidget::unsetLocale(QWidget* theWrappedObject)
{
theWrappedObject->unsetLocale();
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->update(arg__1);
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, const QRegion&  arg__1)
{
theWrappedObject->update(arg__1);
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
theWrappedObject->update(x, y, w, h);
}

void PythonQtWrapper_QWidget::updateGeometry(QWidget* theWrappedObject)
{
theWrappedObject->updateGeometry();
}

bool  PythonQtWrapper_QWidget::updatesEnabled(QWidget* theWrappedObject) const
{
return theWrappedObject->updatesEnabled();
}

QRegion  PythonQtWrapper_QWidget::visibleRegion(QWidget* theWrappedObject) const
{
return theWrappedObject->visibleRegion();
}

QString  PythonQtWrapper_QWidget::whatsThis(QWidget* theWrappedObject) const
{
return theWrappedObject->whatsThis();
}

int  PythonQtWrapper_QWidget::width(QWidget* theWrappedObject) const
{
return theWrappedObject->width();
}

int  PythonQtWrapper_QWidget::widthMM(QWidget* theWrappedObject) const
{
return theWrappedObject->widthMM();
}

WId  PythonQtWrapper_QWidget::winId(QWidget* theWrappedObject) const
{
return theWrappedObject->winId();
}

QWidget*  PythonQtWrapper_QWidget::window(QWidget* theWrappedObject) const
{
return theWrappedObject->window();
}

QString  PythonQtWrapper_QWidget::windowFilePath(QWidget* theWrappedObject) const
{
return theWrappedObject->windowFilePath();
}

Qt::WindowFlags  PythonQtWrapper_QWidget::windowFlags(QWidget* theWrappedObject) const
{
return theWrappedObject->windowFlags();
}

QIcon  PythonQtWrapper_QWidget::windowIcon(QWidget* theWrappedObject) const
{
return theWrappedObject->windowIcon();
}

QString  PythonQtWrapper_QWidget::windowIconText(QWidget* theWrappedObject) const
{
return theWrappedObject->windowIconText();
}

Qt::WindowModality  PythonQtWrapper_QWidget::windowModality(QWidget* theWrappedObject) const
{
return theWrappedObject->windowModality();
}

qreal  PythonQtWrapper_QWidget::windowOpacity(QWidget* theWrappedObject) const
{
return theWrappedObject->windowOpacity();
}

QString  PythonQtWrapper_QWidget::windowRole(QWidget* theWrappedObject) const
{
return theWrappedObject->windowRole();
}

Qt::WindowStates  PythonQtWrapper_QWidget::windowState(QWidget* theWrappedObject) const
{
return theWrappedObject->windowState();
}

QString  PythonQtWrapper_QWidget::windowTitle(QWidget* theWrappedObject) const
{
return theWrappedObject->windowTitle();
}

Qt::WindowType  PythonQtWrapper_QWidget::windowType(QWidget* theWrappedObject) const
{
return theWrappedObject->windowType();
}

int  PythonQtWrapper_QWidget::x(QWidget* theWrappedObject) const
{
return theWrappedObject->x();
}

int  PythonQtWrapper_QWidget::y(QWidget* theWrappedObject) const
{
return theWrappedObject->y();
}

