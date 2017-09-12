#ifndef LAYOUT_H
#define LAYOUT_H

#include <QWidget>
#include <qwidget.h>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QTabWidget>

class MyLayout : public QWidget
{
    Q_OBJECT

protected:
    QHBoxLayout* mainlayout;
        QTabWidget* rightWidget;
        qint8 numOfTabs;

        QVBoxLayout* left_Lay;
            QGroupBox* topLeft;
                QFormLayout* topLeft_Lay;
            QGroupBox* botLeft;
                QFormLayout* botLeft_Lay;

    void create_Layout(QWidget* parent);

    virtual void create_Right_Lay() =0;
    virtual void create_TopLeft()   =0;
    virtual void create_BotLeft()   =0;

signals:

public slots:

};

#endif // LAYOUT_H
