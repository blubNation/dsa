#include "centwidget.h"
#include "richtwidget.h"

//#include <QWidget>
//#include <QLayout>
//#include <QGroupBox>

//CentWidget::CentWidget(QWidget *parent) : QWidget(parent)
CentWidget::CentWidget()
{
    // erstelle layout im heap
    create_Layout(this);

    //setze das layout fuer das widget
    (*this).setLayout(mainlayout); // reparents child widgets
}

CentWidget::~CentWidget()
{
    delete right_Tabs;
    delete rightWidget;
    delete botLeft_PusBut;
    delete botLeft_ComBox;
    delete botLeft_Label_1;
    delete botLeft_Lay;
    delete botLeft;
    delete topLeft_PusBut_newFile;
    delete topLeft_PusBut_execute;
    delete topLeft_PusBut_save;
    delete topLeft_PusBut_saveAs;
    delete topLeft_PusBut_close;
    delete topLeft_PusBut_exit;
//    delete left_Lay;
    delete mainlayout;
}

void CentWidget::create_BotLeft()
{
    botLeft = new QGroupBox("Bearbeiten" , this);

    botLeft_Lay = new QFormLayout();
    botLeft_Lay->setSpacing(20);

    botLeft_Label_1 = new QLabel("Filter:", this);
    botLeft_ComBox = new QComboBox(this);
    botLeft_ComBox->addItem(tr("Sobel-Filter"));
    botLeft_ComBox->addItem(tr("Laplace-Filter"));
    botLeft_ComBox->addItem(tr("Scharr-Filter"));

    botLeft_Lay->addRow(botLeft_Label_1, botLeft_ComBox);

    botLeft->setLayout(botLeft_Lay);
    left_Lay->addWidget(botLeft);
}

void CentWidget::create_Right_Lay()
{
    rightWidget = new QTabWidget (this);
    mainlayout->addWidget(rightWidget);
}

void CentWidget::create_TopLeft()
{
    topLeft = new QGroupBox("Files" , this);

    topLeft_Lay = new QFormLayout();
    topLeft_Lay->setSpacing(20);

    topLeft_PusBut_newFile = new QPushButton(tr("&Neu"),this);
    topLeft_PusBut_newFile->setShortcut(tr("Ctrl+N"));
    topLeft_PusBut_newFile->setStatusTip(tr("Neue Datei"));
    connect(topLeft_PusBut_newFile, SIGNAL(clicked()), this, SLOT(new_File()));

    topLeft_PusBut_execute = new QPushButton(tr("Anw&enden"), this);
    topLeft_PusBut_execute->setShortcut(tr("Ctrl+E"));
    topLeft_PusBut_execute->setStatusTip(tr("Filter anwenden"));
    topLeft_Lay->addRow( topLeft_PusBut_newFile, topLeft_PusBut_execute );

    topLeft_PusBut_save = new QPushButton(tr("&Speichern"),this);
    topLeft_PusBut_save->setShortcut(tr("Ctrl+S"));
    topLeft_PusBut_save->setStatusTip(tr("Speichere die Datei"));
    connect(topLeft_PusBut_save, SIGNAL(clicked()), this, SLOT(save()));

    topLeft_PusBut_saveAs = new QPushButton(tr("Speichern &als..."), this);
    topLeft_PusBut_saveAs->setShortcut(tr("Ctrl+A"));
    topLeft_PusBut_saveAs->setStatusTip(tr("Speichere unter Name"));
    connect(topLeft_PusBut_saveAs, SIGNAL(clicked()), this, SLOT(saveAs()));
    topLeft_Lay->addRow( topLeft_PusBut_save, topLeft_PusBut_saveAs );

    topLeft_PusBut_close = new QPushButton(tr("&Schließen"),this);
    topLeft_PusBut_close->setShortcut(tr("Ctrl+X"));
    topLeft_PusBut_close->setStatusTip(tr("Schließe Tab"));

    topLeft_PusBut_exit = new QPushButton(tr("&Beenden"),this);
    topLeft_PusBut_exit->setShortcut(tr("Ctrl+Q"));
    topLeft_PusBut_exit->setStatusTip(tr("Schließe Anwendung"));
    connect(topLeft_PusBut_exit, SIGNAL(clicked()), this, SLOT(exit()));
    topLeft_Lay->addRow( topLeft_PusBut_close, topLeft_PusBut_exit );

    topLeft->setLayout(topLeft_Lay);
    left_Lay->addWidget(topLeft);
}

void CentWidget::new_File()
{
    right_Tabs[numOfTabs] = new richtwidget();
    right_Tabs[numOfTabs]->XfileOpenDialogue();

    rightWidget->addTab(right_Tabs[numOfTabs],
                right_Tabs[numOfTabs]->getFileName());

    rightWidget->setCurrentIndex(numOfTabs);

//    connect(topLeft_PusBut_execute, SIGNAL(clicked()), this, SLOT(useFilter()));
    connect(
        topLeft_PusBut_execute, SIGNAL(clicked()),
        this, SLOT(useFilter())
           );

    connect(
        topLeft_PusBut_close, SIGNAL(clicked()),
        this, SLOT(close_File())
           );
}

void CentWidget::close_File()
{
//    right_Tabs[rightWidget->currentIndex()]=[];
}

void CentWidget::useFilter()
{
    right_Tabs[rightWidget->currentIndex()]->
            XUpdate( botLeft_ComBox->currentIndex() );
}
