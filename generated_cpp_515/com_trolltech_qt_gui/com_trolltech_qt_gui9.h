#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>



class PythonQtShell_QStyleOptionDockWidgetV2 : public QStyleOptionDockWidgetV2
{
public:
    PythonQtShell_QStyleOptionDockWidgetV2():QStyleOptionDockWidgetV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionDockWidgetV2();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionDockWidgetV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2();
QStyleOptionDockWidgetV2* new_QStyleOptionDockWidgetV2(const QStyleOptionDockWidgetV2& other) {
PythonQtShell_QStyleOptionDockWidgetV2* a = new PythonQtShell_QStyleOptionDockWidgetV2();
*((QStyleOptionDockWidgetV2*)a) = other;
return a; }
void delete_QStyleOptionDockWidgetV2(QStyleOptionDockWidgetV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionFocusRect : public QStyleOptionFocusRect
{
public:
    PythonQtShell_QStyleOptionFocusRect():QStyleOptionFocusRect(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other):QStyleOptionFocusRect(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionFocusRect(int  version):QStyleOptionFocusRect(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionFocusRect();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionFocusRect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionFocusRect::Type};
enum StyleOptionVersion{
  Version = QStyleOptionFocusRect::Version};
public slots:
QStyleOptionFocusRect* new_QStyleOptionFocusRect();
QStyleOptionFocusRect* new_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other);
QStyleOptionFocusRect* new_QStyleOptionFocusRect(int  version);
void delete_QStyleOptionFocusRect(QStyleOptionFocusRect* obj) { delete obj; }
   QStyleOptionFocusRect*  operator_assign(QStyleOptionFocusRect* theWrappedObject, const QStyleOptionFocusRect&  arg__1);
void py_set_backgroundColor(QStyleOptionFocusRect* theWrappedObject, QColor  backgroundColor){ theWrappedObject->backgroundColor = backgroundColor; }
QColor  py_get_backgroundColor(QStyleOptionFocusRect* theWrappedObject){ return theWrappedObject->backgroundColor; }
};





class PythonQtShell_QStyleOptionFrame : public QStyleOptionFrame
{
public:
    PythonQtShell_QStyleOptionFrame():QStyleOptionFrame(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionFrame(const QStyleOptionFrame&  other):QStyleOptionFrame(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionFrame(int  version):QStyleOptionFrame(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionFrame();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FrameFeature StyleOptionType StyleOptionVersion )
Q_FLAGS(FrameFeatures )
enum FrameFeature{
  None = QStyleOptionFrame::None,   Flat = QStyleOptionFrame::Flat,   Rounded = QStyleOptionFrame::Rounded};
enum StyleOptionType{
  Type = QStyleOptionFrame::Type};
enum StyleOptionVersion{
  Version = QStyleOptionFrame::Version};
Q_DECLARE_FLAGS(FrameFeatures, FrameFeature)
public slots:
QStyleOptionFrame* new_QStyleOptionFrame();
QStyleOptionFrame* new_QStyleOptionFrame(const QStyleOptionFrame&  other);
QStyleOptionFrame* new_QStyleOptionFrame(int  version);
void delete_QStyleOptionFrame(QStyleOptionFrame* obj) { delete obj; }
   QStyleOptionFrame*  operator_assign(QStyleOptionFrame* theWrappedObject, const QStyleOptionFrame&  arg__1);
void py_set_features(QStyleOptionFrame* theWrappedObject, QStyleOptionFrame::FrameFeatures  features){ theWrappedObject->features = features; }
QStyleOptionFrame::FrameFeatures  py_get_features(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->features; }
void py_set_frameShape(QStyleOptionFrame* theWrappedObject, QFrame::Shape  frameShape){ theWrappedObject->frameShape = frameShape; }
QFrame::Shape  py_get_frameShape(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->frameShape; }
void py_set_lineWidth(QStyleOptionFrame* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionFrame* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->midLineWidth; }
};





class PythonQtShell_QStyleOptionFrameV2 : public QStyleOptionFrameV2
{
public:
    PythonQtShell_QStyleOptionFrameV2():QStyleOptionFrameV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionFrameV2();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionFrameV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionFrameV2* new_QStyleOptionFrameV2();
QStyleOptionFrameV2* new_QStyleOptionFrameV2(const QStyleOptionFrameV2& other) {
PythonQtShell_QStyleOptionFrameV2* a = new PythonQtShell_QStyleOptionFrameV2();
*((QStyleOptionFrameV2*)a) = other;
return a; }
void delete_QStyleOptionFrameV2(QStyleOptionFrameV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionFrameV3 : public QStyleOptionFrameV3
{
public:
    PythonQtShell_QStyleOptionFrameV3():QStyleOptionFrameV3(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionFrameV3();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionFrameV3 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionFrameV3* new_QStyleOptionFrameV3();
QStyleOptionFrameV3* new_QStyleOptionFrameV3(const QStyleOptionFrameV3& other) {
PythonQtShell_QStyleOptionFrameV3* a = new PythonQtShell_QStyleOptionFrameV3();
*((QStyleOptionFrameV3*)a) = other;
return a; }
void delete_QStyleOptionFrameV3(QStyleOptionFrameV3* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionGraphicsItem : public QStyleOptionGraphicsItem
{
public:
    PythonQtShell_QStyleOptionGraphicsItem():QStyleOptionGraphicsItem(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other):QStyleOptionGraphicsItem(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionGraphicsItem(int  version):QStyleOptionGraphicsItem(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionGraphicsItem();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionGraphicsItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionGraphicsItem::Version};
public slots:
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem();
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other);
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem(int  version);
void delete_QStyleOptionGraphicsItem(QStyleOptionGraphicsItem* obj) { delete obj; }
   qreal  static_QStyleOptionGraphicsItem_levelOfDetailFromTransform(const QTransform&  worldTransform);
   QStyleOptionGraphicsItem*  operator_assign(QStyleOptionGraphicsItem* theWrappedObject, const QStyleOptionGraphicsItem&  arg__1);
void py_set_exposedRect(QStyleOptionGraphicsItem* theWrappedObject, QRectF  exposedRect){ theWrappedObject->exposedRect = exposedRect; }
QRectF  py_get_exposedRect(QStyleOptionGraphicsItem* theWrappedObject){ return theWrappedObject->exposedRect; }
void py_set_levelOfDetail(QStyleOptionGraphicsItem* theWrappedObject, qreal  levelOfDetail){ theWrappedObject->levelOfDetail = levelOfDetail; }
qreal  py_get_levelOfDetail(QStyleOptionGraphicsItem* theWrappedObject){ return theWrappedObject->levelOfDetail; }
void py_set_matrix(QStyleOptionGraphicsItem* theWrappedObject, QMatrix  matrix){ theWrappedObject->matrix = matrix; }
QMatrix  py_get_matrix(QStyleOptionGraphicsItem* theWrappedObject){ return theWrappedObject->matrix; }
};





class PythonQtShell_QStyleOptionGroupBox : public QStyleOptionGroupBox
{
public:
    PythonQtShell_QStyleOptionGroupBox():QStyleOptionGroupBox(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other):QStyleOptionGroupBox(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionGroupBox(int  version):QStyleOptionGroupBox(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionGroupBox();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionGroupBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionGroupBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionGroupBox::Version};
public slots:
QStyleOptionGroupBox* new_QStyleOptionGroupBox();
QStyleOptionGroupBox* new_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other);
QStyleOptionGroupBox* new_QStyleOptionGroupBox(int  version);
void delete_QStyleOptionGroupBox(QStyleOptionGroupBox* obj) { delete obj; }
   QStyleOptionGroupBox*  operator_assign(QStyleOptionGroupBox* theWrappedObject, const QStyleOptionGroupBox&  arg__1);
void py_set_features(QStyleOptionGroupBox* theWrappedObject, QStyleOptionFrame::FrameFeatures  features){ theWrappedObject->features = features; }
QStyleOptionFrame::FrameFeatures  py_get_features(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->features; }
void py_set_lineWidth(QStyleOptionGroupBox* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionGroupBox* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_text(QStyleOptionGroupBox* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionGroupBox* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->textAlignment; }
void py_set_textColor(QStyleOptionGroupBox* theWrappedObject, QColor  textColor){ theWrappedObject->textColor = textColor; }
QColor  py_get_textColor(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->textColor; }
};





class PythonQtShell_QStyleOptionHeader : public QStyleOptionHeader
{
public:
    PythonQtShell_QStyleOptionHeader():QStyleOptionHeader(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionHeader(const QStyleOptionHeader&  other):QStyleOptionHeader(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionHeader(int  version):QStyleOptionHeader(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionHeader();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionHeader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SectionPosition SelectedPosition SortIndicator StyleOptionType StyleOptionVersion )
enum SectionPosition{
  Beginning = QStyleOptionHeader::Beginning,   Middle = QStyleOptionHeader::Middle,   End = QStyleOptionHeader::End,   OnlyOneSection = QStyleOptionHeader::OnlyOneSection};
enum SelectedPosition{
  NotAdjacent = QStyleOptionHeader::NotAdjacent,   NextIsSelected = QStyleOptionHeader::NextIsSelected,   PreviousIsSelected = QStyleOptionHeader::PreviousIsSelected,   NextAndPreviousAreSelected = QStyleOptionHeader::NextAndPreviousAreSelected};
enum SortIndicator{
  None = QStyleOptionHeader::None,   SortUp = QStyleOptionHeader::SortUp,   SortDown = QStyleOptionHeader::SortDown};
enum StyleOptionType{
  Type = QStyleOptionHeader::Type};
enum StyleOptionVersion{
  Version = QStyleOptionHeader::Version};
public slots:
QStyleOptionHeader* new_QStyleOptionHeader();
QStyleOptionHeader* new_QStyleOptionHeader(const QStyleOptionHeader&  other);
QStyleOptionHeader* new_QStyleOptionHeader(int  version);
void delete_QStyleOptionHeader(QStyleOptionHeader* obj) { delete obj; }
   QStyleOptionHeader*  operator_assign(QStyleOptionHeader* theWrappedObject, const QStyleOptionHeader&  arg__1);
void py_set_icon(QStyleOptionHeader* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconAlignment(QStyleOptionHeader* theWrappedObject, Qt::Alignment  iconAlignment){ theWrappedObject->iconAlignment = iconAlignment; }
Qt::Alignment  py_get_iconAlignment(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->iconAlignment; }
void py_set_orientation(QStyleOptionHeader* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_position(QStyleOptionHeader* theWrappedObject, QStyleOptionHeader::SectionPosition  position){ theWrappedObject->position = position; }
QStyleOptionHeader::SectionPosition  py_get_position(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->position; }
void py_set_section(QStyleOptionHeader* theWrappedObject, int  section){ theWrappedObject->section = section; }
int  py_get_section(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->section; }
void py_set_selectedPosition(QStyleOptionHeader* theWrappedObject, QStyleOptionHeader::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionHeader::SelectedPosition  py_get_selectedPosition(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->selectedPosition; }
QStyleOptionHeader::SortIndicator*  py_get_sortIndicator(QStyleOptionHeader* theWrappedObject){ return &theWrappedObject->sortIndicator; }
void py_set_text(QStyleOptionHeader* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionHeader* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->textAlignment; }
};





class PythonQtShell_QStyleOptionMenuItem : public QStyleOptionMenuItem
{
public:
    PythonQtShell_QStyleOptionMenuItem():QStyleOptionMenuItem(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other):QStyleOptionMenuItem(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionMenuItem(int  version):QStyleOptionMenuItem(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionMenuItem();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionMenuItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CheckType MenuItemType StyleOptionType StyleOptionVersion )
enum CheckType{
  NotCheckable = QStyleOptionMenuItem::NotCheckable,   Exclusive = QStyleOptionMenuItem::Exclusive,   NonExclusive = QStyleOptionMenuItem::NonExclusive};
enum MenuItemType{
  Normal = QStyleOptionMenuItem::Normal,   DefaultItem = QStyleOptionMenuItem::DefaultItem,   Separator = QStyleOptionMenuItem::Separator,   SubMenu = QStyleOptionMenuItem::SubMenu,   Scroller = QStyleOptionMenuItem::Scroller,   TearOff = QStyleOptionMenuItem::TearOff,   Margin = QStyleOptionMenuItem::Margin,   EmptyArea = QStyleOptionMenuItem::EmptyArea};
enum StyleOptionType{
  Type = QStyleOptionMenuItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionMenuItem::Version};
public slots:
QStyleOptionMenuItem* new_QStyleOptionMenuItem();
QStyleOptionMenuItem* new_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other);
QStyleOptionMenuItem* new_QStyleOptionMenuItem(int  version);
void delete_QStyleOptionMenuItem(QStyleOptionMenuItem* obj) { delete obj; }
   QStyleOptionMenuItem*  operator_assign(QStyleOptionMenuItem* theWrappedObject, const QStyleOptionMenuItem&  arg__1);
void py_set_checkType(QStyleOptionMenuItem* theWrappedObject, QStyleOptionMenuItem::CheckType  checkType){ theWrappedObject->checkType = checkType; }
QStyleOptionMenuItem::CheckType  py_get_checkType(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->checkType; }
void py_set_checked(QStyleOptionMenuItem* theWrappedObject, bool  checked){ theWrappedObject->checked = checked; }
bool  py_get_checked(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->checked; }
void py_set_font(QStyleOptionMenuItem* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionMenuItem* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->icon; }
void py_set_maxIconWidth(QStyleOptionMenuItem* theWrappedObject, int  maxIconWidth){ theWrappedObject->maxIconWidth = maxIconWidth; }
int  py_get_maxIconWidth(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->maxIconWidth; }
void py_set_menuHasCheckableItems(QStyleOptionMenuItem* theWrappedObject, bool  menuHasCheckableItems){ theWrappedObject->menuHasCheckableItems = menuHasCheckableItems; }
bool  py_get_menuHasCheckableItems(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuHasCheckableItems; }
void py_set_menuItemType(QStyleOptionMenuItem* theWrappedObject, QStyleOptionMenuItem::MenuItemType  menuItemType){ theWrappedObject->menuItemType = menuItemType; }
QStyleOptionMenuItem::MenuItemType  py_get_menuItemType(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuItemType; }
void py_set_menuRect(QStyleOptionMenuItem* theWrappedObject, QRect  menuRect){ theWrappedObject->menuRect = menuRect; }
QRect  py_get_menuRect(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuRect; }
void py_set_tabWidth(QStyleOptionMenuItem* theWrappedObject, int  tabWidth){ theWrappedObject->tabWidth = tabWidth; }
int  py_get_tabWidth(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->tabWidth; }
void py_set_text(QStyleOptionMenuItem* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionProgressBar : public QStyleOptionProgressBar
{
public:
    PythonQtShell_QStyleOptionProgressBar():QStyleOptionProgressBar(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other):QStyleOptionProgressBar(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionProgressBar(int  version):QStyleOptionProgressBar(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionProgressBar();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionProgressBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionProgressBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionProgressBar::Version};
public slots:
QStyleOptionProgressBar* new_QStyleOptionProgressBar();
QStyleOptionProgressBar* new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other);
QStyleOptionProgressBar* new_QStyleOptionProgressBar(int  version);
void delete_QStyleOptionProgressBar(QStyleOptionProgressBar* obj) { delete obj; }
   QStyleOptionProgressBar*  operator_assign(QStyleOptionProgressBar* theWrappedObject, const QStyleOptionProgressBar&  arg__1);
void py_set_bottomToTop(QStyleOptionProgressBar* theWrappedObject, bool  bottomToTop){ theWrappedObject->bottomToTop = bottomToTop; }
bool  py_get_bottomToTop(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->bottomToTop; }
void py_set_invertedAppearance(QStyleOptionProgressBar* theWrappedObject, bool  invertedAppearance){ theWrappedObject->invertedAppearance = invertedAppearance; }
bool  py_get_invertedAppearance(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->invertedAppearance; }
void py_set_maximum(QStyleOptionProgressBar* theWrappedObject, int  maximum){ theWrappedObject->maximum = maximum; }
int  py_get_maximum(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->maximum; }
void py_set_minimum(QStyleOptionProgressBar* theWrappedObject, int  minimum){ theWrappedObject->minimum = minimum; }
int  py_get_minimum(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->minimum; }
void py_set_orientation(QStyleOptionProgressBar* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_progress(QStyleOptionProgressBar* theWrappedObject, int  progress){ theWrappedObject->progress = progress; }
int  py_get_progress(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->progress; }
void py_set_text(QStyleOptionProgressBar* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionProgressBar* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->textAlignment; }
void py_set_textVisible(QStyleOptionProgressBar* theWrappedObject, bool  textVisible){ theWrappedObject->textVisible = textVisible; }
bool  py_get_textVisible(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->textVisible; }
};





class PythonQtShell_QStyleOptionProgressBarV2 : public QStyleOptionProgressBarV2
{
public:
    PythonQtShell_QStyleOptionProgressBarV2():QStyleOptionProgressBarV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionProgressBarV2();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionProgressBarV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionProgressBarV2* new_QStyleOptionProgressBarV2();
QStyleOptionProgressBarV2* new_QStyleOptionProgressBarV2(const QStyleOptionProgressBarV2& other) {
PythonQtShell_QStyleOptionProgressBarV2* a = new PythonQtShell_QStyleOptionProgressBarV2();
*((QStyleOptionProgressBarV2*)a) = other;
return a; }
void delete_QStyleOptionProgressBarV2(QStyleOptionProgressBarV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionRubberBand : public QStyleOptionRubberBand
{
public:
    PythonQtShell_QStyleOptionRubberBand():QStyleOptionRubberBand(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other):QStyleOptionRubberBand(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionRubberBand(int  version):QStyleOptionRubberBand(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionRubberBand();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionRubberBand : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionRubberBand::Type};
enum StyleOptionVersion{
  Version = QStyleOptionRubberBand::Version};
public slots:
QStyleOptionRubberBand* new_QStyleOptionRubberBand();
QStyleOptionRubberBand* new_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other);
QStyleOptionRubberBand* new_QStyleOptionRubberBand(int  version);
void delete_QStyleOptionRubberBand(QStyleOptionRubberBand* obj) { delete obj; }
   QStyleOptionRubberBand*  operator_assign(QStyleOptionRubberBand* theWrappedObject, const QStyleOptionRubberBand&  arg__1);
void py_set_opaque(QStyleOptionRubberBand* theWrappedObject, bool  opaque){ theWrappedObject->opaque = opaque; }
bool  py_get_opaque(QStyleOptionRubberBand* theWrappedObject){ return theWrappedObject->opaque; }
void py_set_shape(QStyleOptionRubberBand* theWrappedObject, QRubberBand::Shape  shape){ theWrappedObject->shape = shape; }
QRubberBand::Shape  py_get_shape(QStyleOptionRubberBand* theWrappedObject){ return theWrappedObject->shape; }
};





class PythonQtShell_QStyleOptionSizeGrip : public QStyleOptionSizeGrip
{
public:
    PythonQtShell_QStyleOptionSizeGrip():QStyleOptionSizeGrip(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other):QStyleOptionSizeGrip(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSizeGrip(int  version):QStyleOptionSizeGrip(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionSizeGrip();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSizeGrip : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSizeGrip::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSizeGrip::Version};
public slots:
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip();
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other);
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(int  version);
void delete_QStyleOptionSizeGrip(QStyleOptionSizeGrip* obj) { delete obj; }
   QStyleOptionSizeGrip*  operator_assign(QStyleOptionSizeGrip* theWrappedObject, const QStyleOptionSizeGrip&  arg__1);
void py_set_corner(QStyleOptionSizeGrip* theWrappedObject, Qt::Corner  corner){ theWrappedObject->corner = corner; }
Qt::Corner  py_get_corner(QStyleOptionSizeGrip* theWrappedObject){ return theWrappedObject->corner; }
};





class PythonQtShell_QStyleOptionSlider : public QStyleOptionSlider
{
public:
    PythonQtShell_QStyleOptionSlider():QStyleOptionSlider(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSlider(const QStyleOptionSlider&  other):QStyleOptionSlider(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSlider(int  version):QStyleOptionSlider(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionSlider();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSlider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSlider::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSlider::Version};
public slots:
QStyleOptionSlider* new_QStyleOptionSlider();
QStyleOptionSlider* new_QStyleOptionSlider(const QStyleOptionSlider&  other);
QStyleOptionSlider* new_QStyleOptionSlider(int  version);
void delete_QStyleOptionSlider(QStyleOptionSlider* obj) { delete obj; }
   QStyleOptionSlider*  operator_assign(QStyleOptionSlider* theWrappedObject, const QStyleOptionSlider&  arg__1);
void py_set_dialWrapping(QStyleOptionSlider* theWrappedObject, bool  dialWrapping){ theWrappedObject->dialWrapping = dialWrapping; }
bool  py_get_dialWrapping(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->dialWrapping; }
void py_set_maximum(QStyleOptionSlider* theWrappedObject, int  maximum){ theWrappedObject->maximum = maximum; }
int  py_get_maximum(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->maximum; }
void py_set_minimum(QStyleOptionSlider* theWrappedObject, int  minimum){ theWrappedObject->minimum = minimum; }
int  py_get_minimum(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->minimum; }
void py_set_notchTarget(QStyleOptionSlider* theWrappedObject, qreal  notchTarget){ theWrappedObject->notchTarget = notchTarget; }
qreal  py_get_notchTarget(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->notchTarget; }
void py_set_orientation(QStyleOptionSlider* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_pageStep(QStyleOptionSlider* theWrappedObject, int  pageStep){ theWrappedObject->pageStep = pageStep; }
int  py_get_pageStep(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->pageStep; }
void py_set_singleStep(QStyleOptionSlider* theWrappedObject, int  singleStep){ theWrappedObject->singleStep = singleStep; }
int  py_get_singleStep(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->singleStep; }
void py_set_sliderPosition(QStyleOptionSlider* theWrappedObject, int  sliderPosition){ theWrappedObject->sliderPosition = sliderPosition; }
int  py_get_sliderPosition(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->sliderPosition; }
void py_set_sliderValue(QStyleOptionSlider* theWrappedObject, int  sliderValue){ theWrappedObject->sliderValue = sliderValue; }
int  py_get_sliderValue(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->sliderValue; }
void py_set_tickInterval(QStyleOptionSlider* theWrappedObject, int  tickInterval){ theWrappedObject->tickInterval = tickInterval; }
int  py_get_tickInterval(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->tickInterval; }
void py_set_tickPosition(QStyleOptionSlider* theWrappedObject, QSlider::TickPosition  tickPosition){ theWrappedObject->tickPosition = tickPosition; }
QSlider::TickPosition  py_get_tickPosition(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->tickPosition; }
void py_set_upsideDown(QStyleOptionSlider* theWrappedObject, bool  upsideDown){ theWrappedObject->upsideDown = upsideDown; }
bool  py_get_upsideDown(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->upsideDown; }
};





class PythonQtShell_QStyleOptionSpinBox : public QStyleOptionSpinBox
{
public:
    PythonQtShell_QStyleOptionSpinBox():QStyleOptionSpinBox(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other):QStyleOptionSpinBox(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionSpinBox(int  version):QStyleOptionSpinBox(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionSpinBox();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSpinBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSpinBox::Version};
public slots:
QStyleOptionSpinBox* new_QStyleOptionSpinBox();
QStyleOptionSpinBox* new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other);
QStyleOptionSpinBox* new_QStyleOptionSpinBox(int  version);
void delete_QStyleOptionSpinBox(QStyleOptionSpinBox* obj) { delete obj; }
   QStyleOptionSpinBox*  operator_assign(QStyleOptionSpinBox* theWrappedObject, const QStyleOptionSpinBox&  arg__1);
void py_set_buttonSymbols(QStyleOptionSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  buttonSymbols){ theWrappedObject->buttonSymbols = buttonSymbols; }
QAbstractSpinBox::ButtonSymbols  py_get_buttonSymbols(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->buttonSymbols; }
void py_set_frame(QStyleOptionSpinBox* theWrappedObject, bool  frame){ theWrappedObject->frame = frame; }
bool  py_get_frame(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->frame; }
void py_set_stepEnabled(QStyleOptionSpinBox* theWrappedObject, QAbstractSpinBox::StepEnabled  stepEnabled){ theWrappedObject->stepEnabled = stepEnabled; }
QAbstractSpinBox::StepEnabled  py_get_stepEnabled(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->stepEnabled; }
};





class PythonQtShell_QStyleOptionTab : public QStyleOptionTab
{
public:
    PythonQtShell_QStyleOptionTab():QStyleOptionTab(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTab(const QStyleOptionTab&  other):QStyleOptionTab(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTab(int  version):QStyleOptionTab(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTab();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTab : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CornerWidget SelectedPosition StyleOptionType StyleOptionVersion TabFeature TabPosition )
Q_FLAGS(CornerWidgets TabFeatures )
enum CornerWidget{
  NoCornerWidgets = QStyleOptionTab::NoCornerWidgets,   LeftCornerWidget = QStyleOptionTab::LeftCornerWidget,   RightCornerWidget = QStyleOptionTab::RightCornerWidget};
enum SelectedPosition{
  NotAdjacent = QStyleOptionTab::NotAdjacent,   NextIsSelected = QStyleOptionTab::NextIsSelected,   PreviousIsSelected = QStyleOptionTab::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionTab::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTab::Version};
enum TabFeature{
  None = QStyleOptionTab::None,   HasFrame = QStyleOptionTab::HasFrame};
enum TabPosition{
  Beginning = QStyleOptionTab::Beginning,   Middle = QStyleOptionTab::Middle,   End = QStyleOptionTab::End,   OnlyOneTab = QStyleOptionTab::OnlyOneTab};
Q_DECLARE_FLAGS(CornerWidgets, CornerWidget)
Q_DECLARE_FLAGS(TabFeatures, TabFeature)
public slots:
QStyleOptionTab* new_QStyleOptionTab();
QStyleOptionTab* new_QStyleOptionTab(const QStyleOptionTab&  other);
QStyleOptionTab* new_QStyleOptionTab(int  version);
void delete_QStyleOptionTab(QStyleOptionTab* obj) { delete obj; }
   QStyleOptionTab*  operator_assign(QStyleOptionTab* theWrappedObject, const QStyleOptionTab&  arg__1);
void py_set_cornerWidgets(QStyleOptionTab* theWrappedObject, QStyleOptionTab::CornerWidgets  cornerWidgets){ theWrappedObject->cornerWidgets = cornerWidgets; }
QStyleOptionTab::CornerWidgets  py_get_cornerWidgets(QStyleOptionTab* theWrappedObject){ return theWrappedObject->cornerWidgets; }
void py_set_documentMode(QStyleOptionTab* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTab* theWrappedObject){ return theWrappedObject->documentMode; }
void py_set_features(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabFeatures  features){ theWrappedObject->features = features; }
QStyleOptionTab::TabFeatures  py_get_features(QStyleOptionTab* theWrappedObject){ return theWrappedObject->features; }
void py_set_icon(QStyleOptionTab* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTab* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionTab* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_leftButtonSize(QStyleOptionTab* theWrappedObject, QSize  leftButtonSize){ theWrappedObject->leftButtonSize = leftButtonSize; }
QSize  py_get_leftButtonSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->leftButtonSize; }
void py_set_position(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionTab::TabPosition  py_get_position(QStyleOptionTab* theWrappedObject){ return theWrappedObject->position; }
void py_set_rightButtonSize(QStyleOptionTab* theWrappedObject, QSize  rightButtonSize){ theWrappedObject->rightButtonSize = rightButtonSize; }
QSize  py_get_rightButtonSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->rightButtonSize; }
void py_set_row(QStyleOptionTab* theWrappedObject, int  row){ theWrappedObject->row = row; }
int  py_get_row(QStyleOptionTab* theWrappedObject){ return theWrappedObject->row; }
void py_set_selectedPosition(QStyleOptionTab* theWrappedObject, QStyleOptionTab::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionTab::SelectedPosition  py_get_selectedPosition(QStyleOptionTab* theWrappedObject){ return theWrappedObject->selectedPosition; }
void py_set_shape(QStyleOptionTab* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTab* theWrappedObject){ return theWrappedObject->shape; }
void py_set_text(QStyleOptionTab* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTab* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionTabBarBase : public QStyleOptionTabBarBase
{
public:
    PythonQtShell_QStyleOptionTabBarBase():QStyleOptionTabBarBase(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other):QStyleOptionTabBarBase(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTabBarBase(int  version):QStyleOptionTabBarBase(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTabBarBase();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTabBarBase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTabBarBase::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTabBarBase::Version};
public slots:
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase();
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other);
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase(int  version);
void delete_QStyleOptionTabBarBase(QStyleOptionTabBarBase* obj) { delete obj; }
   QStyleOptionTabBarBase*  operator_assign(QStyleOptionTabBarBase* theWrappedObject, const QStyleOptionTabBarBase&  arg__1);
void py_set_documentMode(QStyleOptionTabBarBase* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->documentMode; }
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
    PythonQtShell_QStyleOptionTabBarBaseV2():QStyleOptionTabBarBaseV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTabBarBaseV2();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTabBarBaseV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2();
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBaseV2& other) {
PythonQtShell_QStyleOptionTabBarBaseV2* a = new PythonQtShell_QStyleOptionTabBarBaseV2();
*((QStyleOptionTabBarBaseV2*)a) = other;
return a; }
void delete_QStyleOptionTabBarBaseV2(QStyleOptionTabBarBaseV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionTabV2 : public QStyleOptionTabV2
{
public:
    PythonQtShell_QStyleOptionTabV2():QStyleOptionTabV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTabV2();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTabV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionTabV2* new_QStyleOptionTabV2();
QStyleOptionTabV2* new_QStyleOptionTabV2(const QStyleOptionTabV2& other) {
PythonQtShell_QStyleOptionTabV2* a = new PythonQtShell_QStyleOptionTabV2();
*((QStyleOptionTabV2*)a) = other;
return a; }
void delete_QStyleOptionTabV2(QStyleOptionTabV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionTabV3 : public QStyleOptionTabV3
{
public:
    PythonQtShell_QStyleOptionTabV3():QStyleOptionTabV3(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTabV3();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTabV3 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionTabV3* new_QStyleOptionTabV3();
QStyleOptionTabV3* new_QStyleOptionTabV3(const QStyleOptionTabV3& other) {
PythonQtShell_QStyleOptionTabV3* a = new PythonQtShell_QStyleOptionTabV3();
*((QStyleOptionTabV3*)a) = other;
return a; }
void delete_QStyleOptionTabV3(QStyleOptionTabV3* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionTabWidgetFrame : public QStyleOptionTabWidgetFrame
{
public:
    PythonQtShell_QStyleOptionTabWidgetFrame():QStyleOptionTabWidgetFrame(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other):QStyleOptionTabWidgetFrame(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTabWidgetFrame(int  version):QStyleOptionTabWidgetFrame(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTabWidgetFrame();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTabWidgetFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTabWidgetFrame::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTabWidgetFrame::Version};
public slots:
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame();
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other);
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame(int  version);
void delete_QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame* obj) { delete obj; }
   QStyleOptionTabWidgetFrame*  operator_assign(QStyleOptionTabWidgetFrame* theWrappedObject, const QStyleOptionTabWidgetFrame&  arg__1);
void py_set_leftCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  leftCornerWidgetSize){ theWrappedObject->leftCornerWidgetSize = leftCornerWidgetSize; }
QSize  py_get_leftCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->leftCornerWidgetSize; }
void py_set_lineWidth(QStyleOptionTabWidgetFrame* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionTabWidgetFrame* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_rightCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  rightCornerWidgetSize){ theWrappedObject->rightCornerWidgetSize = rightCornerWidgetSize; }
QSize  py_get_rightCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->rightCornerWidgetSize; }
void py_set_selectedTabRect(QStyleOptionTabWidgetFrame* theWrappedObject, QRect  selectedTabRect){ theWrappedObject->selectedTabRect = selectedTabRect; }
QRect  py_get_selectedTabRect(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->selectedTabRect; }
void py_set_shape(QStyleOptionTabWidgetFrame* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->shape; }
void py_set_tabBarRect(QStyleOptionTabWidgetFrame* theWrappedObject, QRect  tabBarRect){ theWrappedObject->tabBarRect = tabBarRect; }
QRect  py_get_tabBarRect(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->tabBarRect; }
void py_set_tabBarSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  tabBarSize){ theWrappedObject->tabBarSize = tabBarSize; }
QSize  py_get_tabBarSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->tabBarSize; }
};





class PythonQtShell_QStyleOptionTabWidgetFrameV2 : public QStyleOptionTabWidgetFrameV2
{
public:
    PythonQtShell_QStyleOptionTabWidgetFrameV2():QStyleOptionTabWidgetFrameV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTabWidgetFrameV2();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTabWidgetFrameV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionTabWidgetFrameV2* new_QStyleOptionTabWidgetFrameV2();
QStyleOptionTabWidgetFrameV2* new_QStyleOptionTabWidgetFrameV2(const QStyleOptionTabWidgetFrameV2& other) {
PythonQtShell_QStyleOptionTabWidgetFrameV2* a = new PythonQtShell_QStyleOptionTabWidgetFrameV2();
*((QStyleOptionTabWidgetFrameV2*)a) = other;
return a; }
void delete_QStyleOptionTabWidgetFrameV2(QStyleOptionTabWidgetFrameV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionTitleBar : public QStyleOptionTitleBar
{
public:
    PythonQtShell_QStyleOptionTitleBar():QStyleOptionTitleBar(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other):QStyleOptionTitleBar(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionTitleBar(int  version):QStyleOptionTitleBar(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionTitleBar();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTitleBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTitleBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTitleBar::Version};
public slots:
QStyleOptionTitleBar* new_QStyleOptionTitleBar();
QStyleOptionTitleBar* new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other);
QStyleOptionTitleBar* new_QStyleOptionTitleBar(int  version);
void delete_QStyleOptionTitleBar(QStyleOptionTitleBar* obj) { delete obj; }
   QStyleOptionTitleBar*  operator_assign(QStyleOptionTitleBar* theWrappedObject, const QStyleOptionTitleBar&  arg__1);
void py_set_icon(QStyleOptionTitleBar* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->icon; }
void py_set_text(QStyleOptionTitleBar* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->text; }
void py_set_titleBarFlags(QStyleOptionTitleBar* theWrappedObject, Qt::WindowFlags  titleBarFlags){ theWrappedObject->titleBarFlags = titleBarFlags; }
Qt::WindowFlags  py_get_titleBarFlags(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->titleBarFlags; }
void py_set_titleBarState(QStyleOptionTitleBar* theWrappedObject, int  titleBarState){ theWrappedObject->titleBarState = titleBarState; }
int  py_get_titleBarState(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->titleBarState; }
};





class PythonQtShell_QStyleOptionToolBar : public QStyleOptionToolBar
{
public:
    PythonQtShell_QStyleOptionToolBar():QStyleOptionToolBar(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolBar(const QStyleOptionToolBar&  other):QStyleOptionToolBar(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolBar(int  version):QStyleOptionToolBar(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionToolBar();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionToolBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion ToolBarFeature ToolBarPosition )
Q_FLAGS(ToolBarFeatures )
enum StyleOptionType{
  Type = QStyleOptionToolBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolBar::Version};
enum ToolBarFeature{
  None = QStyleOptionToolBar::None,   Movable = QStyleOptionToolBar::Movable};
enum ToolBarPosition{
  Beginning = QStyleOptionToolBar::Beginning,   Middle = QStyleOptionToolBar::Middle,   End = QStyleOptionToolBar::End,   OnlyOne = QStyleOptionToolBar::OnlyOne};
Q_DECLARE_FLAGS(ToolBarFeatures, ToolBarFeature)
public slots:
QStyleOptionToolBar* new_QStyleOptionToolBar();
QStyleOptionToolBar* new_QStyleOptionToolBar(const QStyleOptionToolBar&  other);
QStyleOptionToolBar* new_QStyleOptionToolBar(int  version);
void delete_QStyleOptionToolBar(QStyleOptionToolBar* obj) { delete obj; }
   QStyleOptionToolBar*  operator_assign(QStyleOptionToolBar* theWrappedObject, const QStyleOptionToolBar&  arg__1);
void py_set_features(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarFeatures  features){ theWrappedObject->features = features; }
QStyleOptionToolBar::ToolBarFeatures  py_get_features(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->features; }
void py_set_lineWidth(QStyleOptionToolBar* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionToolBar* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_positionOfLine(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarPosition  positionOfLine){ theWrappedObject->positionOfLine = positionOfLine; }
QStyleOptionToolBar::ToolBarPosition  py_get_positionOfLine(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->positionOfLine; }
void py_set_positionWithinLine(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarPosition  positionWithinLine){ theWrappedObject->positionWithinLine = positionWithinLine; }
QStyleOptionToolBar::ToolBarPosition  py_get_positionWithinLine(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->positionWithinLine; }
void py_set_toolBarArea(QStyleOptionToolBar* theWrappedObject, Qt::ToolBarArea  toolBarArea){ theWrappedObject->toolBarArea = toolBarArea; }
Qt::ToolBarArea  py_get_toolBarArea(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->toolBarArea; }
};





class PythonQtShell_QStyleOptionToolBox : public QStyleOptionToolBox
{
public:
    PythonQtShell_QStyleOptionToolBox():QStyleOptionToolBox(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolBox(const QStyleOptionToolBox&  other):QStyleOptionToolBox(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolBox(int  version):QStyleOptionToolBox(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionToolBox();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionToolBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectedPosition StyleOptionType StyleOptionVersion TabPosition )
enum SelectedPosition{
  NotAdjacent = QStyleOptionToolBox::NotAdjacent,   NextIsSelected = QStyleOptionToolBox::NextIsSelected,   PreviousIsSelected = QStyleOptionToolBox::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionToolBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolBox::Version};
enum TabPosition{
  Beginning = QStyleOptionToolBox::Beginning,   Middle = QStyleOptionToolBox::Middle,   End = QStyleOptionToolBox::End,   OnlyOneTab = QStyleOptionToolBox::OnlyOneTab};
public slots:
QStyleOptionToolBox* new_QStyleOptionToolBox();
QStyleOptionToolBox* new_QStyleOptionToolBox(const QStyleOptionToolBox&  other);
QStyleOptionToolBox* new_QStyleOptionToolBox(int  version);
void delete_QStyleOptionToolBox(QStyleOptionToolBox* obj) { delete obj; }
   QStyleOptionToolBox*  operator_assign(QStyleOptionToolBox* theWrappedObject, const QStyleOptionToolBox&  arg__1);
void py_set_icon(QStyleOptionToolBox* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->icon; }
void py_set_position(QStyleOptionToolBox* theWrappedObject, QStyleOptionToolBox::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionToolBox::TabPosition  py_get_position(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->position; }
void py_set_selectedPosition(QStyleOptionToolBox* theWrappedObject, QStyleOptionToolBox::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionToolBox::SelectedPosition  py_get_selectedPosition(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->selectedPosition; }
void py_set_text(QStyleOptionToolBox* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionToolBoxV2 : public QStyleOptionToolBoxV2
{
public:
    PythonQtShell_QStyleOptionToolBoxV2():QStyleOptionToolBoxV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionToolBoxV2();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionToolBoxV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2();
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2& other) {
PythonQtShell_QStyleOptionToolBoxV2* a = new PythonQtShell_QStyleOptionToolBoxV2();
*((QStyleOptionToolBoxV2*)a) = other;
return a; }
void delete_QStyleOptionToolBoxV2(QStyleOptionToolBoxV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionToolButton : public QStyleOptionToolButton
{
public:
    PythonQtShell_QStyleOptionToolButton():QStyleOptionToolButton(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolButton(const QStyleOptionToolButton&  other):QStyleOptionToolButton(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionToolButton(int  version):QStyleOptionToolButton(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionToolButton();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionToolButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion ToolButtonFeature )
Q_FLAGS(ToolButtonFeatures )
enum StyleOptionType{
  Type = QStyleOptionToolButton::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolButton::Version};
enum ToolButtonFeature{
  None = QStyleOptionToolButton::None,   Arrow = QStyleOptionToolButton::Arrow,   Menu = QStyleOptionToolButton::Menu,   MenuButtonPopup = QStyleOptionToolButton::MenuButtonPopup,   PopupDelay = QStyleOptionToolButton::PopupDelay,   HasMenu = QStyleOptionToolButton::HasMenu};
Q_DECLARE_FLAGS(ToolButtonFeatures, ToolButtonFeature)
public slots:
QStyleOptionToolButton* new_QStyleOptionToolButton();
QStyleOptionToolButton* new_QStyleOptionToolButton(const QStyleOptionToolButton&  other);
QStyleOptionToolButton* new_QStyleOptionToolButton(int  version);
void delete_QStyleOptionToolButton(QStyleOptionToolButton* obj) { delete obj; }
   QStyleOptionToolButton*  operator_assign(QStyleOptionToolButton* theWrappedObject, const QStyleOptionToolButton&  arg__1);
void py_set_arrowType(QStyleOptionToolButton* theWrappedObject, Qt::ArrowType  arrowType){ theWrappedObject->arrowType = arrowType; }
Qt::ArrowType  py_get_arrowType(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->arrowType; }
void py_set_features(QStyleOptionToolButton* theWrappedObject, QStyleOptionToolButton::ToolButtonFeatures  features){ theWrappedObject->features = features; }
QStyleOptionToolButton::ToolButtonFeatures  py_get_features(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->features; }
void py_set_font(QStyleOptionToolButton* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionToolButton* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionToolButton* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_pos(QStyleOptionToolButton* theWrappedObject, QPoint  pos){ theWrappedObject->pos = pos; }
QPoint  py_get_pos(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->pos; }
void py_set_text(QStyleOptionToolButton* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->text; }
void py_set_toolButtonStyle(QStyleOptionToolButton* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle){ theWrappedObject->toolButtonStyle = toolButtonStyle; }
Qt::ToolButtonStyle  py_get_toolButtonStyle(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->toolButtonStyle; }
};





class PythonQtShell_QStyleOptionViewItem : public QStyleOptionViewItem
{
public:
    PythonQtShell_QStyleOptionViewItem():QStyleOptionViewItem(),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionViewItem(const QStyleOptionViewItem&  other):QStyleOptionViewItem(other),_wrapper(nullptr) {};
    PythonQtShell_QStyleOptionViewItem(int  version):QStyleOptionViewItem(version),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionViewItem();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionViewItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Position StyleOptionType StyleOptionVersion ViewItemFeature ViewItemPosition )
Q_FLAGS(ViewItemFeatures )
enum Position{
  Left = QStyleOptionViewItem::Left,   Right = QStyleOptionViewItem::Right,   Top = QStyleOptionViewItem::Top,   Bottom = QStyleOptionViewItem::Bottom};
enum StyleOptionType{
  Type = QStyleOptionViewItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionViewItem::Version};
enum ViewItemFeature{
  None = QStyleOptionViewItem::None,   WrapText = QStyleOptionViewItem::WrapText,   Alternate = QStyleOptionViewItem::Alternate,   HasCheckIndicator = QStyleOptionViewItem::HasCheckIndicator,   HasDisplay = QStyleOptionViewItem::HasDisplay,   HasDecoration = QStyleOptionViewItem::HasDecoration};
enum ViewItemPosition{
  Invalid = QStyleOptionViewItem::Invalid,   Beginning = QStyleOptionViewItem::Beginning,   Middle = QStyleOptionViewItem::Middle,   End = QStyleOptionViewItem::End,   OnlyOne = QStyleOptionViewItem::OnlyOne};
Q_DECLARE_FLAGS(ViewItemFeatures, ViewItemFeature)
public slots:
QStyleOptionViewItem* new_QStyleOptionViewItem();
QStyleOptionViewItem* new_QStyleOptionViewItem(const QStyleOptionViewItem&  other);
QStyleOptionViewItem* new_QStyleOptionViewItem(int  version);
void delete_QStyleOptionViewItem(QStyleOptionViewItem* obj) { delete obj; }
   QStyleOptionViewItem*  operator_assign(QStyleOptionViewItem* theWrappedObject, const QStyleOptionViewItem&  arg__1);
void py_set_backgroundBrush(QStyleOptionViewItem* theWrappedObject, QBrush  backgroundBrush){ theWrappedObject->backgroundBrush = backgroundBrush; }
QBrush  py_get_backgroundBrush(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->backgroundBrush; }
void py_set_checkState(QStyleOptionViewItem* theWrappedObject, Qt::CheckState  checkState){ theWrappedObject->checkState = checkState; }
Qt::CheckState  py_get_checkState(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->checkState; }
void py_set_decorationAlignment(QStyleOptionViewItem* theWrappedObject, Qt::Alignment  decorationAlignment){ theWrappedObject->decorationAlignment = decorationAlignment; }
Qt::Alignment  py_get_decorationAlignment(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationAlignment; }
void py_set_decorationPosition(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::Position  decorationPosition){ theWrappedObject->decorationPosition = decorationPosition; }
QStyleOptionViewItem::Position  py_get_decorationPosition(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationPosition; }
void py_set_decorationSize(QStyleOptionViewItem* theWrappedObject, QSize  decorationSize){ theWrappedObject->decorationSize = decorationSize; }
QSize  py_get_decorationSize(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationSize; }
void py_set_displayAlignment(QStyleOptionViewItem* theWrappedObject, Qt::Alignment  displayAlignment){ theWrappedObject->displayAlignment = displayAlignment; }
Qt::Alignment  py_get_displayAlignment(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->displayAlignment; }
void py_set_features(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::ViewItemFeatures  features){ theWrappedObject->features = features; }
QStyleOptionViewItem::ViewItemFeatures  py_get_features(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->features; }
void py_set_font(QStyleOptionViewItem* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionViewItem* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->icon; }
void py_set_index(QStyleOptionViewItem* theWrappedObject, QModelIndex  index){ theWrappedObject->index = index; }
QModelIndex  py_get_index(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->index; }
void py_set_locale(QStyleOptionViewItem* theWrappedObject, QLocale  locale){ theWrappedObject->locale = locale; }
QLocale  py_get_locale(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->locale; }
void py_set_showDecorationSelected(QStyleOptionViewItem* theWrappedObject, bool  showDecorationSelected){ theWrappedObject->showDecorationSelected = showDecorationSelected; }
bool  py_get_showDecorationSelected(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->showDecorationSelected; }
void py_set_text(QStyleOptionViewItem* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->text; }
void py_set_textElideMode(QStyleOptionViewItem* theWrappedObject, Qt::TextElideMode  textElideMode){ theWrappedObject->textElideMode = textElideMode; }
Qt::TextElideMode  py_get_textElideMode(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->textElideMode; }
void py_set_viewItemPosition(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::ViewItemPosition  viewItemPosition){ theWrappedObject->viewItemPosition = viewItemPosition; }
QStyleOptionViewItem::ViewItemPosition  py_get_viewItemPosition(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->viewItemPosition; }
const QWidget*  py_get_widget(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->widget; }
};





class PythonQtShell_QStyleOptionViewItemV2 : public QStyleOptionViewItemV2
{
public:
    PythonQtShell_QStyleOptionViewItemV2():QStyleOptionViewItemV2(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionViewItemV2();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionViewItemV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2();
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2(const QStyleOptionViewItemV2& other) {
PythonQtShell_QStyleOptionViewItemV2* a = new PythonQtShell_QStyleOptionViewItemV2();
*((QStyleOptionViewItemV2*)a) = other;
return a; }
void delete_QStyleOptionViewItemV2(QStyleOptionViewItemV2* obj) { delete obj; }
};





class PythonQtShell_QStyleOptionViewItemV3 : public QStyleOptionViewItemV3
{
public:
    PythonQtShell_QStyleOptionViewItemV3():QStyleOptionViewItemV3(),_wrapper(nullptr) {};

   ~PythonQtShell_QStyleOptionViewItemV3();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionViewItemV3 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3();
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3(const QStyleOptionViewItemV3& other) {
PythonQtShell_QStyleOptionViewItemV3* a = new PythonQtShell_QStyleOptionViewItemV3();
*((QStyleOptionViewItemV3*)a) = other;
return a; }
void delete_QStyleOptionViewItemV3(QStyleOptionViewItemV3* obj) { delete obj; }
};


