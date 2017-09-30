#include "mainwindow.h"
//#include "ui_mainwindow.h"

//#include <QMainWindow>
#include <QMessageBox>
//#include <QWidget>
#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QApplication>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent, QApplication* app) : QMainWindow(parent)
{
    CenWid = new CentWidget();

    setCentralWidget(CenWid);
    setMinimumSize(750,400);
    setWindowTitle("dsa_chars_control.");

    //setMenuBar;
    createActions( app );
    createMenus();
}

MainWindow::~MainWindow()
{
}

void MainWindow::newFile()
{
    const QString fileName = QFileDialog::getOpenFileName(this);
}

void MainWindow::save()
{
}

void MainWindow::saveAs()
{
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("HardShit"), tr("<b>TantalSnake</b> ist ein Program."));
}

void MainWindow::createActions( QApplication* app )
{
    aboutAct = new QAction(tr("&About"), this);
    aboutAct->setStatusTip(tr("Show the application's About box"));
    connect(aboutAct, SIGNAL(triggered()), this , SLOT(about()));

    aboutQtAct = new QAction(tr("About &Qt"), this);
    aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));
    connect(aboutQtAct, SIGNAL(triggered()), app , SLOT(aboutQt()));
}

void MainWindow::createMenus()
{
    helpMenu = menuBar()->addMenu(tr("&Info"));
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);
}
