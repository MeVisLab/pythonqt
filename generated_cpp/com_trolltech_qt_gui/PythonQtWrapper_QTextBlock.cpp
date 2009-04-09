#include "PythonQtWrapper_QTextBlock.h"

#include <QTextBlock>
#include <QVariant>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>

QTextBlock* PythonQtWrapper_QTextBlock::new_QTextBlock()
{ 
return new QTextBlock(); }

QTextBlock* PythonQtWrapper_QTextBlock::new_QTextBlock(const QTextBlock&  o)
{ 
return new QTextBlock(o); }

QTextBlock::iterator  PythonQtWrapper_QTextBlock::begin(QTextBlock* theWrappedObject) const
{
return theWrappedObject->begin();
}

QTextBlockFormat  PythonQtWrapper_QTextBlock::blockFormat(QTextBlock* theWrappedObject) const
{
return theWrappedObject->blockFormat();
}

int  PythonQtWrapper_QTextBlock::blockFormatIndex(QTextBlock* theWrappedObject) const
{
return theWrappedObject->blockFormatIndex();
}

int  PythonQtWrapper_QTextBlock::blockNumber(QTextBlock* theWrappedObject) const
{
return theWrappedObject->blockNumber();
}

QTextCharFormat  PythonQtWrapper_QTextBlock::charFormat(QTextBlock* theWrappedObject) const
{
return theWrappedObject->charFormat();
}

int  PythonQtWrapper_QTextBlock::charFormatIndex(QTextBlock* theWrappedObject) const
{
return theWrappedObject->charFormatIndex();
}

void PythonQtWrapper_QTextBlock::clearLayout(QTextBlock* theWrappedObject)
{
theWrappedObject->clearLayout();
}

bool  PythonQtWrapper_QTextBlock::contains(QTextBlock* theWrappedObject, int  position) const
{
return theWrappedObject->contains(position);
}

const QTextDocument*  PythonQtWrapper_QTextBlock::document(QTextBlock* theWrappedObject) const
{
return theWrappedObject->document();
}

QTextBlock::iterator  PythonQtWrapper_QTextBlock::end(QTextBlock* theWrappedObject) const
{
return theWrappedObject->end();
}

bool  PythonQtWrapper_QTextBlock::isValid(QTextBlock* theWrappedObject) const
{
return theWrappedObject->isValid();
}

bool  PythonQtWrapper_QTextBlock::isVisible(QTextBlock* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

QTextLayout*  PythonQtWrapper_QTextBlock::layout(QTextBlock* theWrappedObject) const
{
return theWrappedObject->layout();
}

int  PythonQtWrapper_QTextBlock::length(QTextBlock* theWrappedObject) const
{
return theWrappedObject->length();
}

QTextBlock  PythonQtWrapper_QTextBlock::next(QTextBlock* theWrappedObject) const
{
return theWrappedObject->next();
}

bool  PythonQtWrapper_QTextBlock::operator_less(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
return *theWrappedObject < o;
}

bool  PythonQtWrapper_QTextBlock::operator_equal(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
return *theWrappedObject == o;
}

int  PythonQtWrapper_QTextBlock::position(QTextBlock* theWrappedObject) const
{
return theWrappedObject->position();
}

QTextBlock  PythonQtWrapper_QTextBlock::previous(QTextBlock* theWrappedObject) const
{
return theWrappedObject->previous();
}

int  PythonQtWrapper_QTextBlock::revision(QTextBlock* theWrappedObject) const
{
return theWrappedObject->revision();
}

void PythonQtWrapper_QTextBlock::setRevision(QTextBlock* theWrappedObject, int  rev)
{
theWrappedObject->setRevision(rev);
}

void PythonQtWrapper_QTextBlock::setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data)
{
theWrappedObject->setUserData(data);
}

void PythonQtWrapper_QTextBlock::setUserState(QTextBlock* theWrappedObject, int  state)
{
theWrappedObject->setUserState(state);
}

void PythonQtWrapper_QTextBlock::setVisible(QTextBlock* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

QString  PythonQtWrapper_QTextBlock::text(QTextBlock* theWrappedObject) const
{
return theWrappedObject->text();
}

QTextList*  PythonQtWrapper_QTextBlock::textList(QTextBlock* theWrappedObject) const
{
return theWrappedObject->textList();
}

QTextBlockUserData*  PythonQtWrapper_QTextBlock::userData(QTextBlock* theWrappedObject) const
{
return theWrappedObject->userData();
}

int  PythonQtWrapper_QTextBlock::userState(QTextBlock* theWrappedObject) const
{
return theWrappedObject->userState();
}

