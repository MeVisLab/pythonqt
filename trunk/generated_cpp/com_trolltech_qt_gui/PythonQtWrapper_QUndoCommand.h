#ifndef PYTHONQTWRAPPER_QUNDOCOMMAND_H
#define PYTHONQTWRAPPER_QUNDOCOMMAND_H

#include <qundostack.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qundostack.h>

class PythonQtShell_QUndoCommand : public QUndoCommand
{
public:
    PythonQtShell_QUndoCommand(QUndoCommand*  parent = 0):QUndoCommand(parent),_wrapper(NULL) {};
    PythonQtShell_QUndoCommand(const QString&  text, QUndoCommand*  parent = 0):QUndoCommand(text, parent),_wrapper(NULL) {};

virtual int  id() const;
virtual bool  mergeWith(const QUndoCommand*  other);
virtual void redo();
virtual void undo();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QUndoCommand : public QUndoCommand
{ public:
inline bool  promoted_mergeWith(const QUndoCommand*  other) { return QUndoCommand::mergeWith(other); }
inline void promoted_redo() { QUndoCommand::redo(); }
inline int  promoted_id() const { return QUndoCommand::id(); }
inline void promoted_undo() { QUndoCommand::undo(); }
};

class PythonQtWrapper_QUndoCommand : public QObject
{ Q_OBJECT
public:
public slots:
QUndoCommand* new_QUndoCommand(QUndoCommand*  parent = 0);
QUndoCommand* new_QUndoCommand(const QString&  text, QUndoCommand*  parent = 0);
void delete_QUndoCommand(QUndoCommand* obj) { delete obj; } 
   void setText(QUndoCommand* theWrappedObject, const QString&  text);
   QString  text(QUndoCommand* theWrappedObject) const;
   bool  mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other);
   void redo(QUndoCommand* theWrappedObject);
   const QUndoCommand*  child(QUndoCommand* theWrappedObject, int  index) const;
   int  childCount(QUndoCommand* theWrappedObject) const;
   int  id(QUndoCommand* theWrappedObject) const;
   void undo(QUndoCommand* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QUNDOCOMMAND_H
