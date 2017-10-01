#ifndef CREATENEWHERO_H
#define CREATENEWHERO_H

#include <QMainWindow>

class CreateNewHero : public QMainWindow
{
    Q_OBJECT
private:
    //hero = new char;
public:
    explicit CreateNewHero(QWidget *parent = 0);
    void newDialog();

signals:

public slots:
};

#endif // CREATENEWHERO_H
