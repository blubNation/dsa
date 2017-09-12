#include <mylayout.h>

void MyLayout::create_Layout(QWidget* parent)
{
    mainlayout = new QHBoxLayout(parent);
    left_Lay = new QVBoxLayout(parent);
    mainlayout->addLayout(left_Lay);

    numOfTabs = 0;

    create_TopLeft();
    create_BotLeft();
    create_Right_Lay();
}
