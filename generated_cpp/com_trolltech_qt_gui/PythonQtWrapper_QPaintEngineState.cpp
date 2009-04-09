#include "PythonQtWrapper_QPaintEngineState.h"

#include <QPainterPath>
#include <QVariant>
#include <qbrush.h>
#include <qfont.h>
#include <qmatrix.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpoint.h>
#include <qregion.h>
#include <qtransform.h>

QPaintEngineState* PythonQtWrapper_QPaintEngineState::new_QPaintEngineState()
{ 
return new QPaintEngineState(); }

QBrush  PythonQtWrapper_QPaintEngineState::backgroundBrush(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->backgroundBrush();
}

Qt::BGMode  PythonQtWrapper_QPaintEngineState::backgroundMode(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->backgroundMode();
}

QBrush  PythonQtWrapper_QPaintEngineState::brush(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->brush();
}

bool  PythonQtWrapper_QPaintEngineState::brushNeedsResolving(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->brushNeedsResolving();
}

QPointF  PythonQtWrapper_QPaintEngineState::brushOrigin(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->brushOrigin();
}

Qt::ClipOperation  PythonQtWrapper_QPaintEngineState::clipOperation(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->clipOperation();
}

QPainterPath  PythonQtWrapper_QPaintEngineState::clipPath(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->clipPath();
}

QRegion  PythonQtWrapper_QPaintEngineState::clipRegion(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->clipRegion();
}

QPainter::CompositionMode  PythonQtWrapper_QPaintEngineState::compositionMode(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->compositionMode();
}

QFont  PythonQtWrapper_QPaintEngineState::font(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->font();
}

bool  PythonQtWrapper_QPaintEngineState::isClipEnabled(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->isClipEnabled();
}

QMatrix  PythonQtWrapper_QPaintEngineState::matrix(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->matrix();
}

qreal  PythonQtWrapper_QPaintEngineState::opacity(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->opacity();
}

QPainter*  PythonQtWrapper_QPaintEngineState::painter(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->painter();
}

QPen  PythonQtWrapper_QPaintEngineState::pen(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->pen();
}

bool  PythonQtWrapper_QPaintEngineState::penNeedsResolving(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->penNeedsResolving();
}

QPainter::RenderHints  PythonQtWrapper_QPaintEngineState::renderHints(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->renderHints();
}

QPaintEngine::DirtyFlags  PythonQtWrapper_QPaintEngineState::state(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->state();
}

QTransform  PythonQtWrapper_QPaintEngineState::transform(QPaintEngineState* theWrappedObject) const
{
return theWrappedObject->transform();
}

