#include <mainwindow.h>
#include "centwidget.h"

//#include <QMainWindow>
#include <QMessageBox>
//#include <QWidget>
#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QApplication>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *w , QApplication* app) : QMainWindow(w)
{
    CenWid = new CentWidget();

    setCentralWidget(CenWid);
    setMinimumSize(750,400);
    setWindowTitle("TantalSnake");

    //setMenuBar;
    createActions( app );
    createMenus();
}

MainWindow::~MainWindow()
{ }

void MainWindow::newFile()
{
    const QString fileName = QFileDialog::getOpenFileName(this);
}

void MainWindow::save()
{
//	scribble->saveImage();
}

void MainWindow::saveAs()
{
//	scribble->releaseKeyboard();
    const QString fileName = QFileDialog::getSaveFileName(this);
    /*if (!fileName.isEmpty())
        scribble->saveImage(fileName);*/
//	setCurrentFile(fileName);
//	scribble->grabKeyboard();
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("About TantalSnake"),
        tr("<b>TantalSnake</b> ist ein Program, "
            "welches dazu dient Audio- und Bild-Datein "
            "zu filtern."));
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

//void MainWindow::setCurrentFile(const QString &fileName)
//{
//	curFile = fileName;
//	QString shownName;
//	if (curFile.isEmpty())
//		shownName = "untitled";
//	else
//		shownName = strippedName(curFile);

//	setWindowTitle(shownName);
//}

//QString MainWindow::strippedName(const QString &fullFileName)
//{
//	return QFileInfo(fullFileName).fileName();
//}
