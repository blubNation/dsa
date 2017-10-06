#include "createrace.h"

createRace::createRace(QString Str, QWidget *parent) : QWidget(parent)
{
    lab1 = new QLabel(tr("firstLabel"));
    lab2 = new QLabel(Str);

    buttn = new QPushButton(tr("test Button"), this);

    QVBoxLayout* lay1 = new QVBoxLayout;

    //this->setMinimumSize(100,100);
    //lay1->addSpacing(20);
    lay1->addWidget(lab1);
    lay1->addWidget(buttn);
    lay1->addWidget(lab2);
    //lay1->addStretch(1);
    this->setLayout(lay1);
    this->show();
}

createRace::~createRace()
{

}
