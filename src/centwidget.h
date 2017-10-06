#ifndef CENTWIDGET_H
#define CENTWIDGET_H

#include "createDialog/createnewhero.h"

//#include <QAction>
//#include <QCheckBox>
#include <QComboBox>
#include <QFormLayout>
//#include <QGroupBox>
//#include <QList>
//#include <QLabel>
#include <QPushButton>
//#include <QRadioButton>
//#include <QVBoxLayout>


class CentWidget : public QWidget
{
    Q_OBJECT

private:
    QApplication* MainApp;
    CreateNewHero* newCharacter;

    void createLayout(QWidget* parent);
    void createRightLay();
    void createLeftLay();

    //mainLayout
    QHBoxLayout* mainlayout;

    //Left_Lay
    QFormLayout* leftLay;
        QPushButton* leftPusBut_new;
        QPushButton* leftPusBut_open;
        QPushButton* leftPusBut_import;
        QPushButton* leftPusBut_export;
        QPushButton* leftPusBut_delete;
        QPushButton* leftPusBut_toPDF;
        QPushButton* leftPusBut_print;
        QPushButton* leftPusBut_toMail;
        QPushButton* leftPusBut_help;
        QPushButton* leftPusBut_quit;

    //Right_Lay
    QTabWidget* rightWidget;

public:
    CentWidget(QWidget* w, QApplication* app);
    ~CentWidget();

signals:

public slots:
    void slot_new();
    void slot_open();
    void slot_import();
    void slot_export();
    void slot_delete();
    void slot_toPDF();
    void slot_print();
    void slot_toMail();
    void slot_help();
    void slot_quit();
};

#endif // CENTWIDGET_H
