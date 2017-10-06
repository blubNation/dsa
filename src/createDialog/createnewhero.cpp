#include "createnewhero.h"

CreateNewHero::CreateNewHero(QWidget *parent) : QMainWindow(parent)
{
    //lay = new QFormLayout(parent);
    //lay = new QHBoxLayout(parent);
    lay = new QVBoxLayout;

    tBar = new QTabWidget(this);
//    tBar->setMinimumSize(30,30);
    tBar->setTabPosition(QTabWidget::West);

    //lay->addWidget(tBar);

    setWindowTitle("blubNation");
    setMinimumSize(750,400);

//    nRace =
  //  nCulture = ;

    tBar->addTab(new createRace(tr("blub"), this), tr("blub"));
    tBar->addTab(new createRace(tr("cult"), this), tr("cult"));
    tBar->show();
    tBar->resize(200,300);
    lay->addWidget(tBar);
    setLayout(lay);
}

CreateNewHero::~CreateNewHero()
{

}
