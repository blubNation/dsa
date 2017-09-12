#ifndef CENTWIDGET_H
#define CENTWIDGET_H

#include <mylayout.h>
#include <richtwidget.h>

#include <QFormLayout>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QCheckBox>
#include <QRadioButton>
#include <QAction>
#include <QList>

class CentWidget : public MyLayout
{
    Q_OBJECT

private:

    void create_BotLeft();
    void create_Right_Lay();
    void create_TopLeft();

    //TopLeft_Lay
    QPushButton* topLeft_PusBut_newFile;
    QPushButton* topLeft_PusBut_execute;
    QPushButton* topLeft_PusBut_save;
    QPushButton* topLeft_PusBut_saveAs;
    QPushButton* topLeft_PusBut_close;
    QPushButton* topLeft_PusBut_exit;

    //BotLeft_Lay
    QLabel* botLeft_Label_1;
    QComboBox* botLeft_ComBox;
    QPushButton* botLeft_PusBut;

    //Right_Lay
//    richtwidget* right_Tabs[20];
    richtwidget** right_Tabs;

public:
//    explicit CentWidget(QWidget* parent = 0);
    explicit CentWidget();
    ~CentWidget();

signals:

public slots:
    void new_File();
    void close_File();
    void useFilter();
};

#endif // CENTWIDGET_H
