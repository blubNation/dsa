#include "centwidget.h"

CentWidget::CentWidget(QWidget* parent, QApplication* app)
{
    MainApp = app;
    this->setParent(parent);

    // erstelle layout im heap
    createLayout(this);

    //setze das layout fuer das widget
    this->setLayout(mainlayout); // reparents child widgets
}

CentWidget::~CentWidget()
{
    //delete right_Tabs;
    delete rightWidget;
    delete leftPusBut_new;
    delete leftPusBut_open;
    delete leftPusBut_import;
    delete leftPusBut_export;
    delete leftPusBut_delete;
    delete leftPusBut_toPDF;
    delete leftPusBut_print;
    delete leftPusBut_toMail;
    delete leftPusBut_help;
    delete leftPusBut_quit;
    delete leftLay;
    delete mainlayout;
}

void CentWidget::createLayout(QWidget* parent)
{
    mainlayout = new QHBoxLayout(parent);
    leftLay = new QFormLayout();
    mainlayout->addLayout(leftLay);

    createLeftLay();
    createRightLay();
}

void CentWidget::createRightLay()
{
    rightWidget = new QTabWidget (this);
    mainlayout->addWidget(rightWidget);
}

void CentWidget::createLeftLay()
{
//    leftLay = new QFormLayout();
    leftLay->setSpacing(20);
    // "New"
    leftPusBut_new = new QPushButton(tr("&New"),this);
    leftPusBut_new->setStatusTip(tr("Create new character"));
    leftPusBut_new->setShortcut(tr("Ctrl+N"));
    connect(leftPusBut_new, SIGNAL(clicked()), this, SLOT(slot_new()));
    // "Open"
    leftPusBut_open = new QPushButton(tr("&Open"), this);
    leftPusBut_open->setStatusTip(tr("Open character"));
    leftPusBut_open->setShortcut(tr("Ctrl+O"));
    connect(leftPusBut_open, SIGNAL(clicked()), this, SLOT(slot_open()));
    // "Import"
    leftPusBut_import = new QPushButton(tr("&Import"),this);
    leftPusBut_import->setStatusTip(tr("Import character"));
    leftPusBut_import->setShortcut(tr("Ctrl+I"));
    connect(leftPusBut_import, SIGNAL(clicked()), this, SLOT(slot_import()));
    // "Export"
    leftPusBut_export = new QPushButton(tr("&Export"), this);
    leftPusBut_export->setStatusTip(tr("Export character"));
    leftPusBut_export->setShortcut(tr("Ctrl+E"));
    connect(leftPusBut_export, SIGNAL(clicked()), this, SLOT(slot_export()));
    // "Delete"
    leftPusBut_delete = new QPushButton(tr("&Delete"),this);
    leftPusBut_delete->setStatusTip(tr("Delete character"));
    leftPusBut_delete->setShortcut(tr("Ctrl+D"));
    connect(leftPusBut_delete, SIGNAL(clicked()), this, SLOT(slot_delete()));
    // "Save as PDF"
    leftPusBut_toPDF = new QPushButton(tr("&Save as PDF"), this);
    leftPusBut_toPDF->setStatusTip(tr("Save character as PDF"));
    leftPusBut_toPDF->setShortcut(tr("Ctrl+S"));
    connect(leftPusBut_toPDF, SIGNAL(clicked()), this, SLOT(slot_toPDF()));
    // "Print"
    leftPusBut_print = new QPushButton(tr("&Print"),this);
    leftPusBut_print->setStatusTip(tr("Print character"));
    leftPusBut_print->setShortcut(tr("Ctrl+P"));
    connect(leftPusBut_print, SIGNAL(clicked()), this, SLOT(slot_print()));
    // "Send as Mail"
    leftPusBut_toMail = new QPushButton(tr("Send as &Mail"),this);
    leftPusBut_toMail->setStatusTip(tr("Send character as PDF via Mail"));
    leftPusBut_toMail->setShortcut(tr("Ctrl+M"));
    connect(leftPusBut_toMail, SIGNAL(clicked()), this, SLOT(slot_toMail()));
    // "Help"
    leftPusBut_help = new QPushButton(tr("&Help"),this);
    leftPusBut_help->setStatusTip(tr("Open Help-Window"));
    leftPusBut_help->setShortcut(tr("Ctrl+H"));
    connect(leftPusBut_help, SIGNAL(clicked()), this, SLOT(slot_help()));
    // "Quit"
    leftPusBut_quit = new QPushButton(tr("&Quit"),this);
    leftPusBut_quit->setStatusTip(tr("Quit application"));
    leftPusBut_quit->setShortcut(tr("Ctrl+Q"));
    connect(leftPusBut_quit, SIGNAL(clicked()), this, SLOT(slot_quit()));

    // Add buttons to layout
    leftLay->addRow( leftPusBut_new, leftPusBut_open);
    leftLay->addRow( leftPusBut_import, leftPusBut_export);
    leftLay->addRow( leftPusBut_delete, leftPusBut_toPDF);
    leftLay->addRow( leftPusBut_print, leftPusBut_toMail);
    leftLay->addRow( leftPusBut_help, leftPusBut_quit );
}

void CentWidget::slot_new()
{
    newCharacter = new CreateNewHero(this);
    newCharacter->show();
}

void CentWidget::slot_open()
{
}

void CentWidget::slot_import()
{
}

void CentWidget::slot_export()
{
}

void CentWidget::slot_delete()
{
}

void CentWidget::slot_toPDF()
{
}

void CentWidget::slot_print()
{
}

void CentWidget::slot_toMail()
{
}

void CentWidget::slot_help()
{
}

void CentWidget::slot_quit()
{
}
