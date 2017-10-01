#ifndef CENTWIDGET_H
#define CENTWIDGET_H

#include <QAction>
#include <QCheckBox>
#include <QComboBox>
#include <QFormLayout>
#include <QGroupBox>
#include <QList>
#include <QLabel>
#include <QPushButton>
#include <QRadioButton>
#include <QVBoxLayout>


class CentWidget : public QWidget
{
    Q_OBJECT

private:
    void create_Layout(QWidget* parent);
    void create_BotLeft();
    void create_Right_Lay();
    void create_TopLeft();

    //mainLayout
    QHBoxLayout* mainlayout;

    //TopLeft_Lay
    QVBoxLayout* left_Lay;
    QGroupBox* topLeft;
        QFormLayout* topLeft_Lay;
            QPushButton* topLeft_PusBut_newFile;
            QPushButton* topLeft_PusBut_execute;
            QPushButton* topLeft_PusBut_save;
            QPushButton* topLeft_PusBut_saveAs;
            QPushButton* topLeft_PusBut_close;
            QPushButton* topLeft_PusBut_exit;

    //BotLeft_Lay
    QGroupBox* botLeft;
        QFormLayout* botLeft_Lay;
            QLabel* botLeft_Label_1;
            QComboBox* botLeft_ComBox;
            QPushButton* botLeft_PusBut;

    //Right_Lay
    QTabWidget* rightWidget;

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
