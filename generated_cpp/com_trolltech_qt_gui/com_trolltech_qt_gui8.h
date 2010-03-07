#include <PythonQt.h>
#include <QIcon>
#include <QObject>
#include <QTextBlock>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qgesture.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleditemdelegate.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qstyleplugin.h>
#include <qsyntaxhighlighter.h>
#include <qsystemtrayicon.h>
#include <qtabbar.h>
#include <qtableview.h>
#include <qtablewidget.h>
#include <qtabwidget.h>
#include <qtextdocument.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QStyleOptionTab : public QStyleOptionTab
{
public:
    PythonQtShell_QStyleOptionTab():QStyleOptionTab(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTab(const QStyleOptionTab&  other):QStyleOptionTab(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTab(int  version):QStyleOptionTab(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTab : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion CornerWidget TabPosition SelectedPosition StyleOptionType )
Q_FLAGS(CornerWidgets )
enum StyleOptionVersion{
  Version = QStyleOptionTab::Version};
enum CornerWidget{
  NoCornerWidgets = QStyleOptionTab::NoCornerWidgets,   LeftCornerWidget = QStyleOptionTab::LeftCornerWidget,   RightCornerWidget = QStyleOptionTab::RightCornerWidget};
enum TabPosition{
  Beginning = QStyleOptionTab::Beginning,   Middle = QStyleOptionTab::Middle,   End = QStyleOptionTab::End,   OnlyOneTab = QStyleOptionTab::OnlyOneTab};
enum SelectedPosition{
  NotAdjacent = QStyleOptionTab::NotAdjacent,   NextIsSelected = QStyleOptionTab::NextIsSelected,   PreviousIsSelected = QStyleOptionTab::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionTab::Type};
Q_DECLARE_FLAGS(CornerWidgets, CornerWidget)
public slots:
QStyleOptionTab* new_QStyleOptionTab();
QStyleOptionTab* new_QStyleOptionTab(const QStyleOptionTab&  other);
void delete_QStyleOptionTab(QStyleOptionTab* obj) { delete obj; } 
void py_set_row(QStyleOptionTab* theWrappedObject, int  row){ theWrappedObject->row = row; }
int  py_get_row(QStyleOptionTab* theWrappedObject){ return theWrappedObject->row; }
void py_set_cornerWidgets(QStyleOptionTab* theWrappedObject, QStyleOptionTab::CornerWidgets  cornerWidgets){ theWrappedObject->cornerWidgets = cornerWidgets; }
QStyleOptionTab::CornerWidgets  py_get_cornerWidgets(QStyleOptionTab* theWrappedObject){ return theWrappedObject->cornerWidgets; }
void py_set_position(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionTab::TabPosition  py_get_position(QStyleOptionTab* theWrappedObject){ return theWrappedObject->position; }
void py_set_icon(QStyleOptionTab* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTab* theWrappedObject){ return theWrappedObject->icon; }
void py_set_shape(QStyleOptionTab* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTab* theWrappedObject){ return theWrappedObject->shape; }
void py_set_text(QStyleOptionTab* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTab* theWrappedObject){ return theWrappedObject->text; }
void py_set_selectedPosition(QStyleOptionTab* theWrappedObject, QStyleOptionTab::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionTab::SelectedPosition  py_get_selectedPosition(QStyleOptionTab* theWrappedObject){ return theWrappedObject->selectedPosition; }
};





class PythonQtShell_QStyleOptionTabBarBase : public QStyleOptionTabBarBase
{
public:
    PythonQtShell_QStyleOptionTabBarBase():QStyleOptionTabBarBase(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other):QStyleOptionTabBarBase(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBase(int  version):QStyleOptionTabBarBase(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabBarBase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionTabBarBase::Version};
enum StyleOptionType{
  Type = QStyleOptionTabBarBase::Type};
public slots:
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase();
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other);
void delete_QStyleOptionTabBarBase(QStyleOptionTabBarBase* obj) { delete obj; } 
void py_set_selectedTabRect(QStyleOptionTabBarBase* theWrappedObject, QRect  selectedTabRect){ theWrappedObject->selectedTabRect = selectedTabRect; }
QRect  py_get_selectedTabRect(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->selectedTabRect; }
void py_set_shape(QStyleOptionTabBarBase* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->shape; }
void py_set_tabBarRect(QStyleOptionTabBarBase* theWrappedObject, QRect  tabBarRect){ theWrappedObject->tabBarRect = tabBarRect; }
QRect  py_get_tabBarRect(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->tabBarRect; }
};





class PythonQtShell_QStyleOptionTabBarBaseV2 : public QStyleOptionTabBarBaseV2
{
public:
    PythonQtShell_QStyleOptionTabBarBaseV2():QStyleOptionTabBarBaseV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBase&  other):QStyleOptionTabBarBaseV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBaseV2&  other):QStyleOptionTabBarBaseV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBaseV2(int  version):QStyleOptionTabBarBaseV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabBarBaseV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionTabBarBaseV2::Version};
public slots:
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2();
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBase&  other);
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBaseV2&  other);
void delete_QStyleOptionTabBarBaseV2(QStyleOptionTabBarBaseV2* obj) { delete obj; } 
void py_set_documentMode(QStyleOptionTabBarBaseV2* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTabBarBaseV2* theWrappedObject){ return theWrappedObject->documentMode; }
};





class PythonQtShell_QStyleOptionTabV2 : public QStyleOptionTabV2
{
public:
    PythonQtShell_QStyleOptionTabV2():QStyleOptionTabV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV2(const QStyleOptionTab&  other):QStyleOptionTabV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV2(const QStyleOptionTabV2&  other):QStyleOptionTabV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV2(int  version):QStyleOptionTabV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionTabV2::Version};
public slots:
QStyleOptionTabV2* new_QStyleOptionTabV2();
QStyleOptionTabV2* new_QStyleOptionTabV2(const QStyleOptionTab&  other);
QStyleOptionTabV2* new_QStyleOptionTabV2(const QStyleOptionTabV2&  other);
void delete_QStyleOptionTabV2(QStyleOptionTabV2* obj) { delete obj; } 
void py_set_iconSize(QStyleOptionTabV2* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionTabV2* theWrappedObject){ return theWrappedObject->iconSize; }
};





class PythonQtShell_QStyleOptionTabV3 : public QStyleOptionTabV3
{
public:
    PythonQtShell_QStyleOptionTabV3():QStyleOptionTabV3(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV3(const QStyleOptionTab&  other):QStyleOptionTabV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV3(const QStyleOptionTabV2&  other):QStyleOptionTabV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV3(const QStyleOptionTabV3&  other):QStyleOptionTabV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV3(int  version):QStyleOptionTabV3(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabV3 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionTabV3::Version};
public slots:
QStyleOptionTabV3* new_QStyleOptionTabV3();
QStyleOptionTabV3* new_QStyleOptionTabV3(const QStyleOptionTab&  other);
QStyleOptionTabV3* new_QStyleOptionTabV3(const QStyleOptionTabV2&  other);
QStyleOptionTabV3* new_QStyleOptionTabV3(const QStyleOptionTabV3&  other);
void delete_QStyleOptionTabV3(QStyleOptionTabV3* obj) { delete obj; } 
void py_set_documentMode(QStyleOptionTabV3* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTabV3* theWrappedObject){ return theWrappedObject->documentMode; }
void py_set_rightButtonSize(QStyleOptionTabV3* theWrappedObject, QSize  rightButtonSize){ theWrappedObject->rightButtonSize = rightButtonSize; }
QSize  py_get_rightButtonSize(QStyleOptionTabV3* theWrappedObject){ return theWrappedObject->rightButtonSize; }
void py_set_leftButtonSize(QStyleOptionTabV3* theWrappedObject, QSize  leftButtonSize){ theWrappedObject->leftButtonSize = leftButtonSize; }
QSize  py_get_leftButtonSize(QStyleOptionTabV3* theWrappedObject){ return theWrappedObject->leftButtonSize; }
};





class PythonQtShell_QStyleOptionTabWidgetFrame : public QStyleOptionTabWidgetFrame
{
public:
    PythonQtShell_QStyleOptionTabWidgetFrame():QStyleOptionTabWidgetFrame(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other):QStyleOptionTabWidgetFrame(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabWidgetFrame(int  version):QStyleOptionTabWidgetFrame(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabWidgetFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionTabWidgetFrame::Version};
enum StyleOptionType{
  Type = QStyleOptionTabWidgetFrame::Type};
public slots:
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame();
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other);
void delete_QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame* obj) { delete obj; } 
void py_set_lineWidth(QStyleOptionTabWidgetFrame* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_rightCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  rightCornerWidgetSize){ theWrappedObject->rightCornerWidgetSize = rightCornerWidgetSize; }
QSize  py_get_rightCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->rightCornerWidgetSize; }
void py_set_tabBarSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  tabBarSize){ theWrappedObject->tabBarSize = tabBarSize; }
QSize  py_get_tabBarSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->tabBarSize; }
void py_set_shape(QStyleOptionTabWidgetFrame* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->shape; }
void py_set_midLineWidth(QStyleOptionTabWidgetFrame* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_leftCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  leftCornerWidgetSize){ theWrappedObject->leftCornerWidgetSize = leftCornerWidgetSize; }
QSize  py_get_leftCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->leftCornerWidgetSize; }
};





class PythonQtShell_QStyleOptionTitleBar : public QStyleOptionTitleBar
{
public:
    PythonQtShell_QStyleOptionTitleBar():QStyleOptionTitleBar(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other):QStyleOptionTitleBar(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTitleBar(int  version):QStyleOptionTitleBar(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTitleBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionTitleBar::Version};
enum StyleOptionType{
  Type = QStyleOptionTitleBar::Type};
public slots:
QStyleOptionTitleBar* new_QStyleOptionTitleBar();
QStyleOptionTitleBar* new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other);
void delete_QStyleOptionTitleBar(QStyleOptionTitleBar* obj) { delete obj; } 
void py_set_titleBarFlags(QStyleOptionTitleBar* theWrappedObject, Qt::WindowFlags  titleBarFlags){ theWrappedObject->titleBarFlags = titleBarFlags; }
Qt::WindowFlags  py_get_titleBarFlags(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->titleBarFlags; }
void py_set_icon(QStyleOptionTitleBar* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->icon; }
void py_set_text(QStyleOptionTitleBar* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->text; }
void py_set_titleBarState(QStyleOptionTitleBar* theWrappedObject, int  titleBarState){ theWrappedObject->titleBarState = titleBarState; }
int  py_get_titleBarState(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->titleBarState; }
};





class PythonQtShell_QStyleOptionToolBar : public QStyleOptionToolBar
{
public:
    PythonQtShell_QStyleOptionToolBar():QStyleOptionToolBar(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBar(const QStyleOptionToolBar&  other):QStyleOptionToolBar(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBar(int  version):QStyleOptionToolBar(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType ToolBarPosition ToolBarFeature )
Q_FLAGS(ToolBarFeatures )
enum StyleOptionVersion{
  Version = QStyleOptionToolBar::Version};
enum StyleOptionType{
  Type = QStyleOptionToolBar::Type};
enum ToolBarPosition{
  Beginning = QStyleOptionToolBar::Beginning,   Middle = QStyleOptionToolBar::Middle,   End = QStyleOptionToolBar::End,   OnlyOne = QStyleOptionToolBar::OnlyOne};
enum ToolBarFeature{
  None = QStyleOptionToolBar::None,   Movable = QStyleOptionToolBar::Movable};
Q_DECLARE_FLAGS(ToolBarFeatures, ToolBarFeature)
public slots:
QStyleOptionToolBar* new_QStyleOptionToolBar();
QStyleOptionToolBar* new_QStyleOptionToolBar(const QStyleOptionToolBar&  other);
void delete_QStyleOptionToolBar(QStyleOptionToolBar* obj) { delete obj; } 
void py_set_lineWidth(QStyleOptionToolBar* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_positionWithinLine(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarPosition  positionWithinLine){ theWrappedObject->positionWithinLine = positionWithinLine; }
QStyleOptionToolBar::ToolBarPosition  py_get_positionWithinLine(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->positionWithinLine; }
void py_set_positionOfLine(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarPosition  positionOfLine){ theWrappedObject->positionOfLine = positionOfLine; }
QStyleOptionToolBar::ToolBarPosition  py_get_positionOfLine(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->positionOfLine; }
void py_set_features(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarFeatures  features){ theWrappedObject->features = features; }
QStyleOptionToolBar::ToolBarFeatures  py_get_features(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->features; }
void py_set_toolBarArea(QStyleOptionToolBar* theWrappedObject, Qt::ToolBarArea  toolBarArea){ theWrappedObject->toolBarArea = toolBarArea; }
Qt::ToolBarArea  py_get_toolBarArea(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->toolBarArea; }
void py_set_midLineWidth(QStyleOptionToolBar* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->midLineWidth; }
};





class PythonQtShell_QStyleOptionToolBox : public QStyleOptionToolBox
{
public:
    PythonQtShell_QStyleOptionToolBox():QStyleOptionToolBox(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBox(const QStyleOptionToolBox&  other):QStyleOptionToolBox(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBox(int  version):QStyleOptionToolBox(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType )
enum StyleOptionVersion{
  Version = QStyleOptionToolBox::Version};
enum StyleOptionType{
  Type = QStyleOptionToolBox::Type};
public slots:
QStyleOptionToolBox* new_QStyleOptionToolBox();
QStyleOptionToolBox* new_QStyleOptionToolBox(const QStyleOptionToolBox&  other);
void delete_QStyleOptionToolBox(QStyleOptionToolBox* obj) { delete obj; } 
void py_set_icon(QStyleOptionToolBox* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->icon; }
void py_set_text(QStyleOptionToolBox* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionToolBoxV2 : public QStyleOptionToolBoxV2
{
public:
    PythonQtShell_QStyleOptionToolBoxV2():QStyleOptionToolBoxV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBoxV2(const QStyleOptionToolBox&  other):QStyleOptionToolBoxV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2&  other):QStyleOptionToolBoxV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBoxV2(int  version):QStyleOptionToolBoxV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolBoxV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion TabPosition SelectedPosition )
enum StyleOptionVersion{
  Version = QStyleOptionToolBoxV2::Version};
enum TabPosition{
  Beginning = QStyleOptionToolBoxV2::Beginning,   Middle = QStyleOptionToolBoxV2::Middle,   End = QStyleOptionToolBoxV2::End,   OnlyOneTab = QStyleOptionToolBoxV2::OnlyOneTab};
enum SelectedPosition{
  NotAdjacent = QStyleOptionToolBoxV2::NotAdjacent,   NextIsSelected = QStyleOptionToolBoxV2::NextIsSelected,   PreviousIsSelected = QStyleOptionToolBoxV2::PreviousIsSelected};
public slots:
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2();
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2(const QStyleOptionToolBox&  other);
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2&  other);
void delete_QStyleOptionToolBoxV2(QStyleOptionToolBoxV2* obj) { delete obj; } 
void py_set_position(QStyleOptionToolBoxV2* theWrappedObject, QStyleOptionToolBoxV2::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionToolBoxV2::TabPosition  py_get_position(QStyleOptionToolBoxV2* theWrappedObject){ return theWrappedObject->position; }
void py_set_selectedPosition(QStyleOptionToolBoxV2* theWrappedObject, QStyleOptionToolBoxV2::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionToolBoxV2::SelectedPosition  py_get_selectedPosition(QStyleOptionToolBoxV2* theWrappedObject){ return theWrappedObject->selectedPosition; }
};





class PythonQtShell_QStyleOptionToolButton : public QStyleOptionToolButton
{
public:
    PythonQtShell_QStyleOptionToolButton():QStyleOptionToolButton(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolButton(const QStyleOptionToolButton&  other):QStyleOptionToolButton(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolButton(int  version):QStyleOptionToolButton(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion ToolButtonFeature StyleOptionType )
Q_FLAGS(ToolButtonFeatures )
enum StyleOptionVersion{
  Version = QStyleOptionToolButton::Version};
enum ToolButtonFeature{
  None = QStyleOptionToolButton::None,   Arrow = QStyleOptionToolButton::Arrow,   Menu = QStyleOptionToolButton::Menu,   MenuButtonPopup = QStyleOptionToolButton::MenuButtonPopup,   PopupDelay = QStyleOptionToolButton::PopupDelay,   HasMenu = QStyleOptionToolButton::HasMenu};
enum StyleOptionType{
  Type = QStyleOptionToolButton::Type};
Q_DECLARE_FLAGS(ToolButtonFeatures, ToolButtonFeature)
public slots:
QStyleOptionToolButton* new_QStyleOptionToolButton();
QStyleOptionToolButton* new_QStyleOptionToolButton(const QStyleOptionToolButton&  other);
void delete_QStyleOptionToolButton(QStyleOptionToolButton* obj) { delete obj; } 
void py_set_iconSize(QStyleOptionToolButton* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_toolButtonStyle(QStyleOptionToolButton* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle){ theWrappedObject->toolButtonStyle = toolButtonStyle; }
Qt::ToolButtonStyle  py_get_toolButtonStyle(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->toolButtonStyle; }
void py_set_features(QStyleOptionToolButton* theWrappedObject, QStyleOptionToolButton::ToolButtonFeatures  features){ theWrappedObject->features = features; }
QStyleOptionToolButton::ToolButtonFeatures  py_get_features(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->features; }
void py_set_arrowType(QStyleOptionToolButton* theWrappedObject, Qt::ArrowType  arrowType){ theWrappedObject->arrowType = arrowType; }
Qt::ArrowType  py_get_arrowType(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->arrowType; }
void py_set_icon(QStyleOptionToolButton* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->icon; }
void py_set_pos(QStyleOptionToolButton* theWrappedObject, QPoint  pos){ theWrappedObject->pos = pos; }
QPoint  py_get_pos(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->pos; }
void py_set_text(QStyleOptionToolButton* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->text; }
void py_set_font(QStyleOptionToolButton* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->font; }
};





class PythonQtShell_QStyleOptionViewItem : public QStyleOptionViewItem
{
public:
    PythonQtShell_QStyleOptionViewItem():QStyleOptionViewItem(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItem(const QStyleOptionViewItem&  other):QStyleOptionViewItem(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItem(int  version):QStyleOptionViewItem(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion StyleOptionType Position )
enum StyleOptionVersion{
  Version = QStyleOptionViewItem::Version};
enum StyleOptionType{
  Type = QStyleOptionViewItem::Type};
enum Position{
  Left = QStyleOptionViewItem::Left,   Right = QStyleOptionViewItem::Right,   Top = QStyleOptionViewItem::Top,   Bottom = QStyleOptionViewItem::Bottom};
public slots:
QStyleOptionViewItem* new_QStyleOptionViewItem();
QStyleOptionViewItem* new_QStyleOptionViewItem(const QStyleOptionViewItem&  other);
void delete_QStyleOptionViewItem(QStyleOptionViewItem* obj) { delete obj; } 
void py_set_showDecorationSelected(QStyleOptionViewItem* theWrappedObject, bool  showDecorationSelected){ theWrappedObject->showDecorationSelected = showDecorationSelected; }
bool  py_get_showDecorationSelected(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->showDecorationSelected; }
void py_set_decorationPosition(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::Position  decorationPosition){ theWrappedObject->decorationPosition = decorationPosition; }
QStyleOptionViewItem::Position  py_get_decorationPosition(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationPosition; }
void py_set_decorationAlignment(QStyleOptionViewItem* theWrappedObject, Qt::Alignment  decorationAlignment){ theWrappedObject->decorationAlignment = decorationAlignment; }
Qt::Alignment  py_get_decorationAlignment(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationAlignment; }
void py_set_displayAlignment(QStyleOptionViewItem* theWrappedObject, Qt::Alignment  displayAlignment){ theWrappedObject->displayAlignment = displayAlignment; }
Qt::Alignment  py_get_displayAlignment(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->displayAlignment; }
void py_set_textElideMode(QStyleOptionViewItem* theWrappedObject, Qt::TextElideMode  textElideMode){ theWrappedObject->textElideMode = textElideMode; }
Qt::TextElideMode  py_get_textElideMode(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->textElideMode; }
void py_set_decorationSize(QStyleOptionViewItem* theWrappedObject, QSize  decorationSize){ theWrappedObject->decorationSize = decorationSize; }
QSize  py_get_decorationSize(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationSize; }
void py_set_font(QStyleOptionViewItem* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->font; }
};





class PythonQtShell_QStyleOptionViewItemV2 : public QStyleOptionViewItemV2
{
public:
    PythonQtShell_QStyleOptionViewItemV2():QStyleOptionViewItemV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV2(const QStyleOptionViewItem&  other):QStyleOptionViewItemV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV2(const QStyleOptionViewItemV2&  other):QStyleOptionViewItemV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV2(int  version):QStyleOptionViewItemV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItemV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion ViewItemFeature )
Q_FLAGS(ViewItemFeatures )
enum StyleOptionVersion{
  Version = QStyleOptionViewItemV2::Version};
enum ViewItemFeature{
  None = QStyleOptionViewItemV2::None,   WrapText = QStyleOptionViewItemV2::WrapText,   Alternate = QStyleOptionViewItemV2::Alternate,   HasCheckIndicator = QStyleOptionViewItemV2::HasCheckIndicator,   HasDisplay = QStyleOptionViewItemV2::HasDisplay,   HasDecoration = QStyleOptionViewItemV2::HasDecoration};
Q_DECLARE_FLAGS(ViewItemFeatures, ViewItemFeature)
public slots:
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2();
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2(const QStyleOptionViewItem&  other);
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2(const QStyleOptionViewItemV2&  other);
void delete_QStyleOptionViewItemV2(QStyleOptionViewItemV2* obj) { delete obj; } 
void py_set_features(QStyleOptionViewItemV2* theWrappedObject, QStyleOptionViewItemV2::ViewItemFeatures  features){ theWrappedObject->features = features; }
QStyleOptionViewItemV2::ViewItemFeatures  py_get_features(QStyleOptionViewItemV2* theWrappedObject){ return theWrappedObject->features; }
};





class PythonQtShell_QStyleOptionViewItemV3 : public QStyleOptionViewItemV3
{
public:
    PythonQtShell_QStyleOptionViewItemV3():QStyleOptionViewItemV3(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV3(const QStyleOptionViewItem&  other):QStyleOptionViewItemV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV3(const QStyleOptionViewItemV3&  other):QStyleOptionViewItemV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV3(int  version):QStyleOptionViewItemV3(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItemV3 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionViewItemV3::Version};
public slots:
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3();
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3(const QStyleOptionViewItem&  other);
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3(const QStyleOptionViewItemV3&  other);
void delete_QStyleOptionViewItemV3(QStyleOptionViewItemV3* obj) { delete obj; } 
const QWidget*  py_get_widget(QStyleOptionViewItemV3* theWrappedObject){ return theWrappedObject->widget; }
void py_set_locale(QStyleOptionViewItemV3* theWrappedObject, QLocale  locale){ theWrappedObject->locale = locale; }
QLocale  py_get_locale(QStyleOptionViewItemV3* theWrappedObject){ return theWrappedObject->locale; }
};





class PythonQtShell_QStyleOptionViewItemV4 : public QStyleOptionViewItemV4
{
public:
    PythonQtShell_QStyleOptionViewItemV4():QStyleOptionViewItemV4(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV4(const QStyleOptionViewItem&  other):QStyleOptionViewItemV4(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV4(const QStyleOptionViewItemV4&  other):QStyleOptionViewItemV4(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItemV4(int  version):QStyleOptionViewItemV4(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItemV4 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ViewItemPosition StyleOptionVersion )
enum ViewItemPosition{
  Invalid = QStyleOptionViewItemV4::Invalid,   Beginning = QStyleOptionViewItemV4::Beginning,   Middle = QStyleOptionViewItemV4::Middle,   End = QStyleOptionViewItemV4::End,   OnlyOne = QStyleOptionViewItemV4::OnlyOne};
enum StyleOptionVersion{
  Version = QStyleOptionViewItemV4::Version};
public slots:
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4();
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4(const QStyleOptionViewItem&  other);
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4(const QStyleOptionViewItemV4&  other);
void delete_QStyleOptionViewItemV4(QStyleOptionViewItemV4* obj) { delete obj; } 
void py_set_checkState(QStyleOptionViewItemV4* theWrappedObject, Qt::CheckState  checkState){ theWrappedObject->checkState = checkState; }
Qt::CheckState  py_get_checkState(QStyleOptionViewItemV4* theWrappedObject){ return theWrappedObject->checkState; }
void py_set_viewItemPosition(QStyleOptionViewItemV4* theWrappedObject, QStyleOptionViewItemV4::ViewItemPosition  viewItemPosition){ theWrappedObject->viewItemPosition = viewItemPosition; }
QStyleOptionViewItemV4::ViewItemPosition  py_get_viewItemPosition(QStyleOptionViewItemV4* theWrappedObject){ return theWrappedObject->viewItemPosition; }
void py_set_icon(QStyleOptionViewItemV4* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionViewItemV4* theWrappedObject){ return theWrappedObject->icon; }
void py_set_backgroundBrush(QStyleOptionViewItemV4* theWrappedObject, QBrush  backgroundBrush){ theWrappedObject->backgroundBrush = backgroundBrush; }
QBrush  py_get_backgroundBrush(QStyleOptionViewItemV4* theWrappedObject){ return theWrappedObject->backgroundBrush; }
void py_set_index(QStyleOptionViewItemV4* theWrappedObject, QModelIndex  index){ theWrappedObject->index = index; }
QModelIndex  py_get_index(QStyleOptionViewItemV4* theWrappedObject){ return theWrappedObject->index; }
void py_set_text(QStyleOptionViewItemV4* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionViewItemV4* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtWrapper_QStylePainter : public QObject
{ Q_OBJECT
public:
public slots:
QStylePainter* new_QStylePainter();
QStylePainter* new_QStylePainter(QPaintDevice*  pd, QWidget*  w);
QStylePainter* new_QStylePainter(QWidget*  w);
void delete_QStylePainter(QStylePainter* obj) { delete obj; } 
   void drawPrimitive(QStylePainter* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption&  opt);
   void drawComplexControl(QStylePainter* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex&  opt);
   bool  begin(QStylePainter* theWrappedObject, QPaintDevice*  pd, QWidget*  w);
   bool  begin(QStylePainter* theWrappedObject, QWidget*  w);
   void drawControl(QStylePainter* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption&  opt);
   void drawItemText(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole);
   QStyle*  style(QStylePainter* theWrappedObject) const;
   void drawItemPixmap(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap);
};





class PythonQtShell_QStylePlugin : public QStylePlugin
{
public:
    PythonQtShell_QStylePlugin(QObject*  parent = 0):QStylePlugin(parent),_wrapper(NULL) {};

virtual QStringList  keys() const;
virtual QStyle*  create(const QString&  key);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStylePlugin : public QObject
{ Q_OBJECT
public:
public slots:
QStylePlugin* new_QStylePlugin(QObject*  parent = 0);
void delete_QStylePlugin(QStylePlugin* obj) { delete obj; } 
};





class PythonQtShell_QStyledItemDelegate : public QStyledItemDelegate
{
public:
    PythonQtShell_QStyledItemDelegate(QObject*  parent = 0):QStyledItemDelegate(parent),_wrapper(NULL) {};

virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual QString  displayText(const QVariant&  value, const QLocale&  locale) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual void initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const;
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStyledItemDelegate : public QStyledItemDelegate
{ public:
inline void promoted_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QStyledItemDelegate::setModelData(editor, model, index); }
inline QWidget*  promoted_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::createEditor(parent, option, index); }
inline QString  promoted_displayText(const QVariant&  value, const QLocale&  locale) const { return QStyledItemDelegate::displayText(value, locale); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QStyledItemDelegate::editorEvent(event, model, option, index); }
inline void promoted_initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const { QStyledItemDelegate::initStyleOption(option, index); }
inline void promoted_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QStyledItemDelegate::setEditorData(editor, index); }
inline QSize  promoted_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::sizeHint(option, index); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::paint(painter, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QStyledItemDelegate::eventFilter(object, event); }
inline void promoted_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QStyledItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QStyledItemDelegate* new_QStyledItemDelegate(QObject*  parent = 0);
void delete_QStyledItemDelegate(QStyledItemDelegate* obj) { delete obj; } 
   void setModelData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   QWidget*  createEditor(QStyledItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void setItemEditorFactory(QStyledItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   QString  displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const;
   QItemEditorFactory*  itemEditorFactory(QStyledItemDelegate* theWrappedObject) const;
   bool  editorEvent(QStyledItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   void initStyleOption(QStyledItemDelegate* theWrappedObject, QStyleOptionViewItem*  option, const QModelIndex&  index) const;
   void setEditorData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   QSize  sizeHint(QStyledItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void paint(QStyledItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   bool  eventFilter(QStyledItemDelegate* theWrappedObject, QObject*  object, QEvent*  event);
   void updateEditorGeometry(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
};





class PythonQtShell_QSwipeGesture : public QSwipeGesture
{
public:
    PythonQtShell_QSwipeGesture(QObject*  parent = 0):QSwipeGesture(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSwipeGesture : public QObject
{ Q_OBJECT
public:
public slots:
QSwipeGesture* new_QSwipeGesture(QObject*  parent = 0);
void delete_QSwipeGesture(QSwipeGesture* obj) { delete obj; } 
   QSwipeGesture::SwipeDirection  horizontalDirection(QSwipeGesture* theWrappedObject) const;
   void setSwipeAngle(QSwipeGesture* theWrappedObject, qreal  value);
   qreal  swipeAngle(QSwipeGesture* theWrappedObject) const;
   QSwipeGesture::SwipeDirection  verticalDirection(QSwipeGesture* theWrappedObject) const;
};





class PythonQtShell_QSyntaxHighlighter : public QSyntaxHighlighter
{
public:
    PythonQtShell_QSyntaxHighlighter(QObject*  parent):QSyntaxHighlighter(parent),_wrapper(NULL) {};
    PythonQtShell_QSyntaxHighlighter(QTextDocument*  parent):QSyntaxHighlighter(parent),_wrapper(NULL) {};
    PythonQtShell_QSyntaxHighlighter(QTextEdit*  parent):QSyntaxHighlighter(parent),_wrapper(NULL) {};

virtual void highlightBlock(const QString&  text);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSyntaxHighlighter : public QObject
{ Q_OBJECT
public:
public slots:
QSyntaxHighlighter* new_QSyntaxHighlighter(QObject*  parent);
QSyntaxHighlighter* new_QSyntaxHighlighter(QTextDocument*  parent);
QSyntaxHighlighter* new_QSyntaxHighlighter(QTextEdit*  parent);
void delete_QSyntaxHighlighter(QSyntaxHighlighter* obj) { delete obj; } 
   void setDocument(QSyntaxHighlighter* theWrappedObject, QTextDocument*  doc);
   QTextDocument*  document(QSyntaxHighlighter* theWrappedObject) const;
};





class PythonQtShell_QSystemTrayIcon : public QSystemTrayIcon
{
public:
    PythonQtShell_QSystemTrayIcon(QObject*  parent = 0):QSystemTrayIcon(parent),_wrapper(NULL) {};
    PythonQtShell_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = 0):QSystemTrayIcon(icon, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSystemTrayIcon : public QSystemTrayIcon
{ public:
inline bool  promoted_event(QEvent*  event) { return QSystemTrayIcon::event(event); }
};

class PythonQtWrapper_QSystemTrayIcon : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MessageIcon ActivationReason )
enum MessageIcon{
  NoIcon = QSystemTrayIcon::NoIcon,   Information = QSystemTrayIcon::Information,   Warning = QSystemTrayIcon::Warning,   Critical = QSystemTrayIcon::Critical};
enum ActivationReason{
  Unknown = QSystemTrayIcon::Unknown,   Context = QSystemTrayIcon::Context,   DoubleClick = QSystemTrayIcon::DoubleClick,   Trigger = QSystemTrayIcon::Trigger,   MiddleClick = QSystemTrayIcon::MiddleClick};
public slots:
QSystemTrayIcon* new_QSystemTrayIcon(QObject*  parent = 0);
QSystemTrayIcon* new_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = 0);
void delete_QSystemTrayIcon(QSystemTrayIcon* obj) { delete obj; } 
   bool  event(QSystemTrayIcon* theWrappedObject, QEvent*  event);
   QMenu*  contextMenu(QSystemTrayIcon* theWrappedObject) const;
   void showMessage(QSystemTrayIcon* theWrappedObject, const QString&  title, const QString&  msg, QSystemTrayIcon::MessageIcon  icon = QSystemTrayIcon::Information, int  msecs = 10000);
   bool  static_QSystemTrayIcon_isSystemTrayAvailable();
   void setContextMenu(QSystemTrayIcon* theWrappedObject, QMenu*  menu);
   void setToolTip(QSystemTrayIcon* theWrappedObject, const QString&  tip);
   QString  toolTip(QSystemTrayIcon* theWrappedObject) const;
   QIcon  icon(QSystemTrayIcon* theWrappedObject) const;
   bool  isVisible(QSystemTrayIcon* theWrappedObject) const;
   QRect  geometry(QSystemTrayIcon* theWrappedObject) const;
   bool  static_QSystemTrayIcon_supportsMessages();
   void setIcon(QSystemTrayIcon* theWrappedObject, const QIcon&  icon);
};





class PythonQtShell_QTabBar : public QTabBar
{
public:
    PythonQtShell_QTabBar(QWidget*  parent = 0):QTabBar(parent),_wrapper(NULL) {};

virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void tabLayoutChange();
virtual void tabInserted(int  index);
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void tabRemoved(int  index);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  event);
virtual QSize  tabSizeHint(int  index) const;
virtual bool  event(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTabBar : public QTabBar
{ public:
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QTabBar::mouseReleaseEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QTabBar::keyPressEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QTabBar::mousePressEvent(arg__1); }
inline void promoted_tabLayoutChange() { QTabBar::tabLayoutChange(); }
inline void promoted_tabInserted(int  index) { QTabBar::tabInserted(index); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTabBar::showEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QTabBar::resizeEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QTabBar::mouseMoveEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QTabBar::hideEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QTabBar::changeEvent(arg__1); }
inline void promoted_tabRemoved(int  index) { QTabBar::tabRemoved(index); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QTabBar::paintEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QTabBar::wheelEvent(event); }
inline QSize  promoted_tabSizeHint(int  index) const { return QTabBar::tabSizeHint(index); }
inline bool  promoted_event(QEvent*  arg__1) { return QTabBar::event(arg__1); }
};

class PythonQtWrapper_QTabBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionBehavior ButtonPosition )
enum SelectionBehavior{
  SelectLeftTab = QTabBar::SelectLeftTab,   SelectRightTab = QTabBar::SelectRightTab,   SelectPreviousTab = QTabBar::SelectPreviousTab};
enum ButtonPosition{
  LeftSide = QTabBar::LeftSide,   RightSide = QTabBar::RightSide};
public slots:
QTabBar* new_QTabBar(QWidget*  parent = 0);
void delete_QTabBar(QTabBar* obj) { delete obj; } 
   QTabBar::SelectionBehavior  selectionBehaviorOnRemove(QTabBar* theWrappedObject) const;
   void setTabData(QTabBar* theWrappedObject, int  index, const QVariant&  data);
   void mouseReleaseEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   bool  expanding(QTabBar* theWrappedObject) const;
   void keyPressEvent(QTabBar* theWrappedObject, QKeyEvent*  arg__1);
   void setTabEnabled(QTabBar* theWrappedObject, int  index, bool  arg__2);
   int  tabAt(QTabBar* theWrappedObject, const QPoint&  pos) const;
   void setTabsClosable(QTabBar* theWrappedObject, bool  closable);
   void setDocumentMode(QTabBar* theWrappedObject, bool  set);
   void mousePressEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   void setShape(QTabBar* theWrappedObject, QTabBar::Shape  shape);
   bool  documentMode(QTabBar* theWrappedObject) const;
   void setIconSize(QTabBar* theWrappedObject, const QSize&  size);
   void setTabWhatsThis(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setTabText(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setExpanding(QTabBar* theWrappedObject, bool  enabled);
   void setSelectionBehaviorOnRemove(QTabBar* theWrappedObject, QTabBar::SelectionBehavior  behavior);
   void setTabToolTip(QTabBar* theWrappedObject, int  index, const QString&  tip);
   int  currentIndex(QTabBar* theWrappedObject) const;
   QRect  tabRect(QTabBar* theWrappedObject, int  index) const;
   void tabLayoutChange(QTabBar* theWrappedObject);
   QTabBar::Shape  shape(QTabBar* theWrappedObject) const;
   void tabInserted(QTabBar* theWrappedObject, int  index);
   bool  isMovable(QTabBar* theWrappedObject) const;
   void setTabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position, QWidget*  widget);
   int  insertTab(QTabBar* theWrappedObject, int  index, const QIcon&  icon, const QString&  text);
   int  insertTab(QTabBar* theWrappedObject, int  index, const QString&  text);
   void moveTab(QTabBar* theWrappedObject, int  from, int  to);
   void showEvent(QTabBar* theWrappedObject, QShowEvent*  arg__1);
   void resizeEvent(QTabBar* theWrappedObject, QResizeEvent*  arg__1);
   int  addTab(QTabBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   int  addTab(QTabBar* theWrappedObject, const QString&  text);
   bool  tabsClosable(QTabBar* theWrappedObject) const;
   QString  tabText(QTabBar* theWrappedObject, int  index) const;
   QSize  minimumSizeHint(QTabBar* theWrappedObject) const;
   void setDrawBase(QTabBar* theWrappedObject, bool  drawTheBase);
   void setUsesScrollButtons(QTabBar* theWrappedObject, bool  useButtons);
   bool  isTabEnabled(QTabBar* theWrappedObject, int  index) const;
   QSize  sizeHint(QTabBar* theWrappedObject) const;
   QSize  iconSize(QTabBar* theWrappedObject) const;
   void mouseMoveEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   void hideEvent(QTabBar* theWrappedObject, QHideEvent*  arg__1);
   void changeEvent(QTabBar* theWrappedObject, QEvent*  arg__1);
   QString  tabToolTip(QTabBar* theWrappedObject, int  index) const;
   Qt::TextElideMode  elideMode(QTabBar* theWrappedObject) const;
   QString  tabWhatsThis(QTabBar* theWrappedObject, int  index) const;
   void setMovable(QTabBar* theWrappedObject, bool  movable);
   QVariant  tabData(QTabBar* theWrappedObject, int  index) const;
   void setTabTextColor(QTabBar* theWrappedObject, int  index, const QColor&  color);
   void removeTab(QTabBar* theWrappedObject, int  index);
   void tabRemoved(QTabBar* theWrappedObject, int  index);
   bool  drawBase(QTabBar* theWrappedObject) const;
   void setTabIcon(QTabBar* theWrappedObject, int  index, const QIcon&  icon);
   QWidget*  tabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position) const;
   void paintEvent(QTabBar* theWrappedObject, QPaintEvent*  arg__1);
   void setElideMode(QTabBar* theWrappedObject, Qt::TextElideMode  arg__1);
   int  count(QTabBar* theWrappedObject) const;
   QColor  tabTextColor(QTabBar* theWrappedObject, int  index) const;
   void wheelEvent(QTabBar* theWrappedObject, QWheelEvent*  event);
   QSize  tabSizeHint(QTabBar* theWrappedObject, int  index) const;
   bool  usesScrollButtons(QTabBar* theWrappedObject) const;
   QIcon  tabIcon(QTabBar* theWrappedObject, int  index) const;
   bool  event(QTabBar* theWrappedObject, QEvent*  arg__1);
};





class PythonQtShell_QTabWidget : public QTabWidget
{
public:
    PythonQtShell_QTabWidget(QWidget*  parent = 0):QTabWidget(parent),_wrapper(NULL) {};

virtual void showEvent(QShowEvent*  arg__1);
virtual void tabInserted(int  index);
virtual void changeEvent(QEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void tabRemoved(int  index);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual int  devType() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTabWidget : public QTabWidget
{ public:
inline void promoted_showEvent(QShowEvent*  arg__1) { QTabWidget::showEvent(arg__1); }
inline void promoted_tabInserted(int  index) { QTabWidget::tabInserted(index); }
inline void promoted_changeEvent(QEvent*  arg__1) { QTabWidget::changeEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QTabWidget::paintEvent(arg__1); }
inline void promoted_tabRemoved(int  index) { QTabWidget::tabRemoved(index); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QTabWidget::resizeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QTabWidget::event(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QTabWidget::keyPressEvent(arg__1); }
};

class PythonQtWrapper_QTabWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTabWidget* new_QTabWidget(QWidget*  parent = 0);
void delete_QTabWidget(QTabWidget* obj) { delete obj; } 
   QString  tabWhatsThis(QTabWidget* theWrappedObject, int  index) const;
   int  indexOf(QTabWidget* theWrappedObject, QWidget*  widget) const;
   void clear(QTabWidget* theWrappedObject);
   void setTabIcon(QTabWidget* theWrappedObject, int  index, const QIcon&  icon);
   int  currentIndex(QTabWidget* theWrappedObject) const;
   int  insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QString&  arg__3);
   void setTabsClosable(QTabWidget* theWrappedObject, bool  closeable);
   int  insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  label);
   void setTabWhatsThis(QTabWidget* theWrappedObject, int  index, const QString&  text);
   bool  documentMode(QTabWidget* theWrappedObject) const;
   QSize  sizeHint(QTabWidget* theWrappedObject) const;
   void setMovable(QTabWidget* theWrappedObject, bool  movable);
   QWidget*  cornerWidget(QTabWidget* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   void removeTab(QTabWidget* theWrappedObject, int  index);
   bool  isMovable(QTabWidget* theWrappedObject) const;
   bool  tabsClosable(QTabWidget* theWrappedObject) const;
   QString  tabText(QTabWidget* theWrappedObject, int  index) const;
   QTabWidget::TabPosition  tabPosition(QTabWidget* theWrappedObject) const;
   bool  isTabEnabled(QTabWidget* theWrappedObject, int  index) const;
   void showEvent(QTabWidget* theWrappedObject, QShowEvent*  arg__1);
   QSize  iconSize(QTabWidget* theWrappedObject) const;
   void setTabText(QTabWidget* theWrappedObject, int  index, const QString&  arg__2);
   void tabInserted(QTabWidget* theWrappedObject, int  index);
   QWidget*  currentWidget(QTabWidget* theWrappedObject) const;
   bool  usesScrollButtons(QTabWidget* theWrappedObject) const;
   void setTabEnabled(QTabWidget* theWrappedObject, int  index, bool  arg__2);
   void setTabShape(QTabWidget* theWrappedObject, QTabWidget::TabShape  s);
   int  addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  label);
   int  addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QString&  arg__2);
   void changeEvent(QTabWidget* theWrappedObject, QEvent*  arg__1);
   QWidget*  widget(QTabWidget* theWrappedObject, int  index) const;
   QString  tabToolTip(QTabWidget* theWrappedObject, int  index) const;
   void paintEvent(QTabWidget* theWrappedObject, QPaintEvent*  arg__1);
   void setElideMode(QTabWidget* theWrappedObject, Qt::TextElideMode  arg__1);
   int  count(QTabWidget* theWrappedObject) const;
   QTabWidget::TabShape  tabShape(QTabWidget* theWrappedObject) const;
   void tabRemoved(QTabWidget* theWrappedObject, int  index);
   QIcon  tabIcon(QTabWidget* theWrappedObject, int  index) const;
   void setUsesScrollButtons(QTabWidget* theWrappedObject, bool  useButtons);
   void setTabToolTip(QTabWidget* theWrappedObject, int  index, const QString&  tip);
   void resizeEvent(QTabWidget* theWrappedObject, QResizeEvent*  arg__1);
   QSize  minimumSizeHint(QTabWidget* theWrappedObject) const;
   bool  event(QTabWidget* theWrappedObject, QEvent*  arg__1);
   void keyPressEvent(QTabWidget* theWrappedObject, QKeyEvent*  arg__1);
   void setDocumentMode(QTabWidget* theWrappedObject, bool  set);
   Qt::TextElideMode  elideMode(QTabWidget* theWrappedObject) const;
   void setTabPosition(QTabWidget* theWrappedObject, QTabWidget::TabPosition  arg__1);
   void setCornerWidget(QTabWidget* theWrappedObject, QWidget*  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setIconSize(QTabWidget* theWrappedObject, const QSize&  size);
};





class PythonQtShell_QTableView : public QTableView
{
public:
    PythonQtShell_QTableView(QWidget*  parent = 0):QTableView(parent),_wrapper(NULL) {};

virtual int  horizontalOffset() const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void updateGeometries();
virtual void verticalScrollbarAction(int  action);
virtual void horizontalScrollbarAction(int  action);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual int  sizeHintForRow(int  row) const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void setRootIndex(const QModelIndex&  index);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual QStyleOptionViewItem  viewOptions() const;
virtual void paintEvent(QPaintEvent*  e);
virtual int  verticalOffset() const;
virtual void timerEvent(QTimerEvent*  event);
virtual void scrollContentsBy(int  dx, int  dy);
virtual int  sizeHintForColumn(int  column) const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void reset();
virtual void updateEditorGeometries();
virtual void verticalScrollbarValueChanged(int  value);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual bool  viewportEvent(QEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual bool  event(QEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void keyboardSearch(const QString&  search);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void updateEditorData();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void editorDestroyed(QObject*  editor);
virtual void focusInEvent(QFocusEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void doItemsLayout();
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void selectAll();
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableView : public QTableView
{ public:
inline int  promoted_horizontalOffset() const { return QTableView::horizontalOffset(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QTableView::visualRegionForSelection(selection); }
inline void promoted_setModel(QAbstractItemModel*  model) { QTableView::setModel(model); }
inline void promoted_updateGeometries() { QTableView::updateGeometries(); }
inline void promoted_verticalScrollbarAction(int  action) { QTableView::verticalScrollbarAction(action); }
inline void promoted_horizontalScrollbarAction(int  action) { QTableView::horizontalScrollbarAction(action); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QTableView::selectedIndexes(); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QTableView::isIndexHidden(index); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTableView::setSelectionModel(selectionModel); }
inline int  promoted_sizeHintForRow(int  row) const { return QTableView::sizeHintForRow(row); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTableView::selectionChanged(selected, deselected); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QTableView::visualRect(index); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QTableView::setRootIndex(index); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTableView::currentChanged(current, previous); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QTableView::indexAt(p); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QTableView::viewOptions(); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTableView::paintEvent(e); }
inline int  promoted_verticalOffset() const { return QTableView::verticalOffset(); }
inline void promoted_timerEvent(QTimerEvent*  event) { QTableView::timerEvent(event); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTableView::scrollContentsBy(dx, dy); }
inline int  promoted_sizeHintForColumn(int  column) const { return QTableView::sizeHintForColumn(column); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTableView::setSelection(rect, command); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTableView::scrollTo(index, hint); }
};

class PythonQtWrapper_QTableView : public QObject
{ Q_OBJECT
public:
public slots:
QTableView* new_QTableView(QWidget*  parent = 0);
void delete_QTableView(QTableView* obj) { delete obj; } 
   void setSpan(QTableView* theWrappedObject, int  row, int  column, int  rowSpan, int  columnSpan);
   void setColumnHidden(QTableView* theWrappedObject, int  column, bool  hide);
   void setRowHeight(QTableView* theWrappedObject, int  row, int  height);
   int  horizontalOffset(QTableView* theWrappedObject) const;
   int  rowHeight(QTableView* theWrappedObject, int  row) const;
   void setCornerButtonEnabled(QTableView* theWrappedObject, bool  enable);
   QHeaderView*  verticalHeader(QTableView* theWrappedObject) const;
   QRegion  visualRegionForSelection(QTableView* theWrappedObject, const QItemSelection&  selection) const;
   void setModel(QTableView* theWrappedObject, QAbstractItemModel*  model);
   int  columnSpan(QTableView* theWrappedObject, int  row, int  column) const;
   void clearSpans(QTableView* theWrappedObject);
   void setRowHidden(QTableView* theWrappedObject, int  row, bool  hide);
   bool  isRowHidden(QTableView* theWrappedObject, int  row) const;
   Qt::PenStyle  gridStyle(QTableView* theWrappedObject) const;
   QHeaderView*  horizontalHeader(QTableView* theWrappedObject) const;
   void updateGeometries(QTableView* theWrappedObject);
   void verticalScrollbarAction(QTableView* theWrappedObject, int  action);
   bool  isSortingEnabled(QTableView* theWrappedObject) const;
   void horizontalScrollbarAction(QTableView* theWrappedObject, int  action);
   QList<QModelIndex >  selectedIndexes(QTableView* theWrappedObject) const;
   void setVerticalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   bool  isCornerButtonEnabled(QTableView* theWrappedObject) const;
   void setColumnWidth(QTableView* theWrappedObject, int  column, int  width);
   bool  isIndexHidden(QTableView* theWrappedObject, const QModelIndex&  index) const;
   int  rowAt(QTableView* theWrappedObject, int  y) const;
   int  rowSpan(QTableView* theWrappedObject, int  row, int  column) const;
   int  rowViewportPosition(QTableView* theWrappedObject, int  row) const;
   void setSelectionModel(QTableView* theWrappedObject, QItemSelectionModel*  selectionModel);
   int  sizeHintForRow(QTableView* theWrappedObject, int  row) const;
   void setSortingEnabled(QTableView* theWrappedObject, bool  enable);
   int  columnAt(QTableView* theWrappedObject, int  x) const;
   void setWordWrap(QTableView* theWrappedObject, bool  on);
   void setGridStyle(QTableView* theWrappedObject, Qt::PenStyle  style);
   void selectionChanged(QTableView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   QRect  visualRect(QTableView* theWrappedObject, const QModelIndex&  index) const;
   void setRootIndex(QTableView* theWrappedObject, const QModelIndex&  index);
   bool  wordWrap(QTableView* theWrappedObject) const;
   bool  showGrid(QTableView* theWrappedObject) const;
   void currentChanged(QTableView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   int  columnViewportPosition(QTableView* theWrappedObject, int  column) const;
   QModelIndex  indexAt(QTableView* theWrappedObject, const QPoint&  p) const;
   bool  isColumnHidden(QTableView* theWrappedObject, int  column) const;
   QStyleOptionViewItem  viewOptions(QTableView* theWrappedObject) const;
   void paintEvent(QTableView* theWrappedObject, QPaintEvent*  e);
   void setHorizontalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   int  verticalOffset(QTableView* theWrappedObject) const;
   void sortByColumn(QTableView* theWrappedObject, int  column, Qt::SortOrder  order);
   void timerEvent(QTableView* theWrappedObject, QTimerEvent*  event);
   void scrollContentsBy(QTableView* theWrappedObject, int  dx, int  dy);
   int  sizeHintForColumn(QTableView* theWrappedObject, int  column) const;
   void setSelection(QTableView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   int  columnWidth(QTableView* theWrappedObject, int  column) const;
   void scrollTo(QTableView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
};





class PythonQtShell_QTableWidget : public QTableWidget
{
public:
    PythonQtShell_QTableWidget(QWidget*  parent = 0):QTableWidget(parent),_wrapper(NULL) {};
    PythonQtShell_QTableWidget(int  rows, int  columns, QWidget*  parent = 0):QTableWidget(rows, columns, parent),_wrapper(NULL) {};

virtual QMimeData*  mimeData(const QList<QTableWidgetItem* >  items) const;
virtual bool  dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
virtual void dropEvent(QDropEvent*  event);
virtual Qt::DropActions  supportedDropActions() const;
virtual QStringList  mimeTypes() const;
virtual bool  event(QEvent*  e);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual int  horizontalOffset() const;
virtual void updateGeometries();
virtual void setRootIndex(const QModelIndex&  index);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual int  verticalOffset() const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void horizontalScrollbarAction(int  action);
virtual void paintEvent(QPaintEvent*  e);
virtual void timerEvent(QTimerEvent*  event);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual QStyleOptionViewItem  viewOptions() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void verticalScrollbarAction(int  action);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual int  sizeHintForRow(int  row) const;
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint);
virtual int  sizeHintForColumn(int  column) const;
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void reset();
virtual void updateEditorGeometries();
virtual void verticalScrollbarValueChanged(int  value);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual bool  viewportEvent(QEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void keyboardSearch(const QString&  search);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void updateEditorData();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void editorDestroyed(QObject*  editor);
virtual void focusInEvent(QFocusEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void doItemsLayout();
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void selectAll();
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableWidget : public QTableWidget
{ public:
inline bool  promoted_dropMimeData(int  row, int  column, const QMimeData*  data, Qt::DropAction  action) { return QTableWidget::dropMimeData(row, column, data, action); }
inline void promoted_dropEvent(QDropEvent*  event) { QTableWidget::dropEvent(event); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QTableWidget::supportedDropActions(); }
inline QStringList  promoted_mimeTypes() const { return QTableWidget::mimeTypes(); }
inline bool  promoted_event(QEvent*  e) { return QTableWidget::event(e); }
};

class PythonQtWrapper_QTableWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidget* new_QTableWidget(QWidget*  parent = 0);
QTableWidget* new_QTableWidget(int  rows, int  columns, QWidget*  parent = 0);
void delete_QTableWidget(QTableWidget* obj) { delete obj; } 
   QTableWidgetItem*  horizontalHeaderItem(QTableWidget* theWrappedObject, int  column) const;
   int  currentColumn(QTableWidget* theWrappedObject) const;
   QList<QTableWidgetItem* >  selectedItems(QTableWidget* theWrappedObject);
   QTableWidgetItem*  currentItem(QTableWidget* theWrappedObject) const;
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item, QItemSelectionModel::SelectionFlags  command);
   void setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   int  visualColumn(QTableWidget* theWrappedObject, int  logicalColumn) const;
   int  row(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   QList<QTableWidgetItem* >  findItems(QTableWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const;
   QTableWidgetItem*  verticalHeaderItem(QTableWidget* theWrappedObject, int  row) const;
   void sortItems(QTableWidget* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column, QItemSelectionModel::SelectionFlags  command);
   void setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column);
   bool  dropMimeData(QTableWidget* theWrappedObject, int  row, int  column, const QMimeData*  data, Qt::DropAction  action);
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, int  x, int  y) const;
   QTableWidgetItem*  itemAt(QTableWidget* theWrappedObject, const QPoint&  p) const;
   int  rowCount(QTableWidget* theWrappedObject) const;
   void setVerticalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   int  column(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   void dropEvent(QTableWidget* theWrappedObject, QDropEvent*  event);
   int  visualRow(QTableWidget* theWrappedObject, int  logicalRow) const;
   void setVerticalHeaderItem(QTableWidget* theWrappedObject, int  row, QTableWidgetItem*  item);
   QWidget*  cellWidget(QTableWidget* theWrappedObject, int  row, int  column) const;
   void removeCellWidget(QTableWidget* theWrappedObject, int  row, int  column);
   const QTableWidgetItem*  itemPrototype(QTableWidget* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QTableWidget* theWrappedObject) const;
   int  currentRow(QTableWidget* theWrappedObject) const;
   void openPersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   QList<QTableWidgetSelectionRange >  selectedRanges(QTableWidget* theWrappedObject) const;
   QTableWidgetItem*  takeHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column);
   void setItem(QTableWidget* theWrappedObject, int  row, int  column, QTableWidgetItem*  item);
   void setHorizontalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels);
   void setHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column, QTableWidgetItem*  item);
   QTableWidgetItem*  takeItem(QTableWidget* theWrappedObject, int  row, int  column);
   void setRowCount(QTableWidget* theWrappedObject, int  rows);
   void editItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void setColumnCount(QTableWidget* theWrappedObject, int  columns);
   int  columnCount(QTableWidget* theWrappedObject) const;
   QRect  visualItemRect(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const;
   void setCellWidget(QTableWidget* theWrappedObject, int  row, int  column, QWidget*  widget);
   QTableWidgetItem*  takeVerticalHeaderItem(QTableWidget* theWrappedObject, int  row);
   QTableWidgetItem*  item(QTableWidget* theWrappedObject, int  row, int  column) const;
   QStringList  mimeTypes(QTableWidget* theWrappedObject) const;
   void closePersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item);
   void setRangeSelected(QTableWidget* theWrappedObject, const QTableWidgetSelectionRange&  range, bool  select);
   bool  event(QTableWidget* theWrappedObject, QEvent*  e);
   void setItemPrototype(QTableWidget* theWrappedObject, const QTableWidgetItem*  item);
};





class PythonQtShell_QTableWidgetItem : public QTableWidgetItem
{
public:
    PythonQtShell_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type):QTableWidgetItem(icon, text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(const QString&  text, int  type = Type):QTableWidgetItem(text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(int  type = Type):QTableWidgetItem(type),_wrapper(NULL) {};

virtual bool  operator_less(const QTableWidgetItem&  other) const;
virtual QTableWidgetItem*  clone() const;
virtual QVariant  data(int  role) const;
virtual void write(QDataStream&  out) const;
virtual void setData(int  role, const QVariant&  value);
virtual void read(QDataStream&  in);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableWidgetItem : public QTableWidgetItem
{ public:
inline QTableWidgetItem*  promoted_clone() const { return QTableWidgetItem::clone(); }
inline QVariant  promoted_data(int  role) const { return QTableWidgetItem::data(role); }
inline void promoted_setData(int  role, const QVariant&  value) { QTableWidgetItem::setData(role, value); }
};

class PythonQtWrapper_QTableWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QTableWidgetItem::Type,   UserType = QTableWidgetItem::UserType};
public slots:
QTableWidgetItem* new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(int  type = Type);
void delete_QTableWidgetItem(QTableWidgetItem* obj) { delete obj; } 
   QString  whatsThis(QTableWidgetItem* theWrappedObject) const;
   QString  toolTip(QTableWidgetItem* theWrappedObject) const;
   void setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size);
   void setFont(QTableWidgetItem* theWrappedObject, const QFont&  font);
   QString  statusTip(QTableWidgetItem* theWrappedObject) const;
   void setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis);
   int  type(QTableWidgetItem* theWrappedObject) const;
   QTableWidget*  tableWidget(QTableWidgetItem* theWrappedObject) const;
   QTableWidgetItem*  clone(QTableWidgetItem* theWrappedObject) const;
   QSize  sizeHint(QTableWidgetItem* theWrappedObject) const;
   void setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   int  column(QTableWidgetItem* theWrappedObject) const;
   QVariant  data(QTableWidgetItem* theWrappedObject, int  role) const;
   void setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip);
   void setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   QBrush  foreground(QTableWidgetItem* theWrappedObject) const;
   void setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setText(QTableWidgetItem* theWrappedObject, const QString&  text);
   Qt::CheckState  checkState(QTableWidgetItem* theWrappedObject) const;
   void setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment);
   QIcon  icon(QTableWidgetItem* theWrappedObject) const;
   void setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   Qt::ItemFlags  flags(QTableWidgetItem* theWrappedObject) const;
   bool  isSelected(QTableWidgetItem* theWrappedObject) const;
   void setSelected(QTableWidgetItem* theWrappedObject, bool  select);
   void setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon);
   QFont  font(QTableWidgetItem* theWrappedObject) const;
   QBrush  background(QTableWidgetItem* theWrappedObject) const;
   int  row(QTableWidgetItem* theWrappedObject) const;
   int  textAlignment(QTableWidgetItem* theWrappedObject) const;
   QString  text(QTableWidgetItem* theWrappedObject) const;
   void setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip);
   void writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in);
};





class PythonQtWrapper_QTableWidgetSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange();
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(const QTableWidgetSelectionRange&  other);
QTableWidgetSelectionRange* new_QTableWidgetSelectionRange(int  top, int  left, int  bottom, int  right);
void delete_QTableWidgetSelectionRange(QTableWidgetSelectionRange* obj) { delete obj; } 
   int  rowCount(QTableWidgetSelectionRange* theWrappedObject) const;
   int  topRow(QTableWidgetSelectionRange* theWrappedObject) const;
   int  leftColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   int  rightColumn(QTableWidgetSelectionRange* theWrappedObject) const;
   int  bottomRow(QTableWidgetSelectionRange* theWrappedObject) const;
   int  columnCount(QTableWidgetSelectionRange* theWrappedObject) const;
};





class PythonQtShell_QTabletEvent : public QTabletEvent
{
public:
    PythonQtShell_QTabletEvent(QEvent::Type  t, const QPoint&  pos, const QPoint&  globalPos, const QPointF&  hiResGlobalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID):QTabletEvent(t, pos, globalPos, hiResGlobalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTabletEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TabletDevice PointerType )
enum TabletDevice{
  NoDevice = QTabletEvent::NoDevice,   Puck = QTabletEvent::Puck,   Stylus = QTabletEvent::Stylus,   Airbrush = QTabletEvent::Airbrush,   FourDMouse = QTabletEvent::FourDMouse,   XFreeEraser = QTabletEvent::XFreeEraser,   RotationStylus = QTabletEvent::RotationStylus};
enum PointerType{
  UnknownPointer = QTabletEvent::UnknownPointer,   Pen = QTabletEvent::Pen,   Cursor = QTabletEvent::Cursor,   Eraser = QTabletEvent::Eraser};
public slots:
QTabletEvent* new_QTabletEvent(QEvent::Type  t, const QPoint&  pos, const QPoint&  globalPos, const QPointF&  hiResGlobalPos, int  device, int  pointerType, qreal  pressure, int  xTilt, int  yTilt, qreal  tangentialPressure, qreal  rotation, int  z, Qt::KeyboardModifiers  keyState, qint64  uniqueID);
void delete_QTabletEvent(QTabletEvent* obj) { delete obj; } 
   qreal  hiResGlobalY(QTabletEvent* theWrappedObject) const;
   const QPointF*  hiResGlobalPos(QTabletEvent* theWrappedObject) const;
   const QPoint*  pos(QTabletEvent* theWrappedObject) const;
   int  globalX(QTabletEvent* theWrappedObject) const;
   const QPoint*  globalPos(QTabletEvent* theWrappedObject) const;
   int  x(QTabletEvent* theWrappedObject) const;
   int  y(QTabletEvent* theWrappedObject) const;
   int  z(QTabletEvent* theWrappedObject) const;
   qreal  tangentialPressure(QTabletEvent* theWrappedObject) const;
   qint64  uniqueId(QTabletEvent* theWrappedObject) const;
   int  globalY(QTabletEvent* theWrappedObject) const;
   int  xTilt(QTabletEvent* theWrappedObject) const;
   QTabletEvent::PointerType  pointerType(QTabletEvent* theWrappedObject) const;
   qreal  rotation(QTabletEvent* theWrappedObject) const;
   QTabletEvent::TabletDevice  device(QTabletEvent* theWrappedObject) const;
   int  yTilt(QTabletEvent* theWrappedObject) const;
   qreal  pressure(QTabletEvent* theWrappedObject) const;
   qreal  hiResGlobalX(QTabletEvent* theWrappedObject) const;
};





class PythonQtWrapper_QTextBlock : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlock* new_QTextBlock();
QTextBlock* new_QTextBlock(const QTextBlock&  o);
void delete_QTextBlock(QTextBlock* obj) { delete obj; } 
   bool  operator_equal(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   bool  operator_less(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   bool  contains(QTextBlock* theWrappedObject, int  position) const;
   QTextBlockUserData*  userData(QTextBlock* theWrappedObject) const;
   void setVisible(QTextBlock* theWrappedObject, bool  visible);
   const QTextDocument*  document(QTextBlock* theWrappedObject) const;
   QTextBlock  next(QTextBlock* theWrappedObject) const;
   int  userState(QTextBlock* theWrappedObject) const;
   bool  isVisible(QTextBlock* theWrappedObject) const;
   QTextBlock  previous(QTextBlock* theWrappedObject) const;
   int  blockFormatIndex(QTextBlock* theWrappedObject) const;
   QTextLayout*  layout(QTextBlock* theWrappedObject) const;
   void setRevision(QTextBlock* theWrappedObject, int  rev);
   QTextBlock::iterator  begin(QTextBlock* theWrappedObject) const;
   int  charFormatIndex(QTextBlock* theWrappedObject) const;
   void clearLayout(QTextBlock* theWrappedObject);
   int  length(QTextBlock* theWrappedObject) const;
   int  revision(QTextBlock* theWrappedObject) const;
   int  lineCount(QTextBlock* theWrappedObject) const;
   void setUserState(QTextBlock* theWrappedObject, int  state);
   QTextBlock::iterator  end(QTextBlock* theWrappedObject) const;
   int  blockNumber(QTextBlock* theWrappedObject) const;
   int  fragmentIndex(QTextBlock* theWrappedObject) const;
   void setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data);
   QTextCharFormat  charFormat(QTextBlock* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextBlock* theWrappedObject) const;
   QTextList*  textList(QTextBlock* theWrappedObject) const;
   int  firstLineNumber(QTextBlock* theWrappedObject) const;
   QString  text(QTextBlock* theWrappedObject) const;
   bool  isValid(QTextBlock* theWrappedObject) const;
   void setLineCount(QTextBlock* theWrappedObject, int  count);
   int  position(QTextBlock* theWrappedObject) const;
};





class PythonQtShell_QTextBlockFormat : public QTextBlockFormat
{
public:
    PythonQtShell_QTextBlockFormat():QTextBlockFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextBlockFormat(const QTextFormat&  fmt):QTextBlockFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextBlockFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockFormat* new_QTextBlockFormat();
QTextBlockFormat* new_QTextBlockFormat(const QTextBlockFormat& other) {
PythonQtShell_QTextBlockFormat* a = new PythonQtShell_QTextBlockFormat();
*((QTextBlockFormat*)a) = other;
return a; }
void delete_QTextBlockFormat(QTextBlockFormat* obj) { delete obj; } 
   bool  isValid(QTextBlockFormat* theWrappedObject) const;
   qreal  textIndent(QTextBlockFormat* theWrappedObject) const;
   void setAlignment(QTextBlockFormat* theWrappedObject, Qt::Alignment  alignment);
   void setRightMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   Qt::Alignment  alignment(QTextBlockFormat* theWrappedObject) const;
   void setTabPositions(QTextBlockFormat* theWrappedObject, const QList<QTextOption::Tab >&  tabs);
   void setTextIndent(QTextBlockFormat* theWrappedObject, qreal  aindent);
   int  indent(QTextBlockFormat* theWrappedObject) const;
   qreal  leftMargin(QTextBlockFormat* theWrappedObject) const;
   void setBottomMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setPageBreakPolicy(QTextBlockFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   QList<QTextOption::Tab >  tabPositions(QTextBlockFormat* theWrappedObject) const;
   bool  nonBreakableLines(QTextBlockFormat* theWrappedObject) const;
   void setLeftMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setNonBreakableLines(QTextBlockFormat* theWrappedObject, bool  b);
   void setTopMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   qreal  bottomMargin(QTextBlockFormat* theWrappedObject) const;
   qreal  rightMargin(QTextBlockFormat* theWrappedObject) const;
   qreal  topMargin(QTextBlockFormat* theWrappedObject) const;
   void setIndent(QTextBlockFormat* theWrappedObject, int  indent);
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextBlockFormat* theWrappedObject) const;
};


