#ifndef CREATENEWHERO_H
#define CREATENEWHERO_H

#include "createrace.h"

#include <QMainWindow>
#include <QComboBox>
#include <QFormLayout>

class CreateNewHero : public QMainWindow
{
    Q_OBJECT

private:
    //hero = new char;
    QVBoxLayout* lay;
    QTabWidget* tBar;
    createRace* nRace;
    createRace* nCulture;

public:
    explicit CreateNewHero(QWidget *parent = 0);
    ~CreateNewHero();
    void newDialog();

signals:

public slots:
};

#endif // CREATENEWHERO_H
