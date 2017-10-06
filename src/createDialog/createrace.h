#ifndef CREATERACE_H
#define CREATERACE_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QFormLayout>

class createRace : public QWidget
{
    Q_OBJECT
public:
    explicit createRace(QString, QWidget *parent = 0);
    ~createRace();

private:
    QLabel* lab1;
    QLabel* lab2;
    QPushButton* buttn;
    QVBoxLayout* lay1;

signals:

public slots:
};

#endif // CREATERACE_H
