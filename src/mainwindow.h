#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <centwidget.h>

#include <QAction>
#include <QApplication>
#include <QFileDialog>
#include <QLabel>
#include <QMainWindow>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include <QWidget>

class QAction;
class QMenu;
class Scribble;
class QLabel;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent, QApplication* app);
    ~MainWindow();

private:
    CentWidget* CenWid;

    QApplication* MainApp;
    QLabel* slabel1;
    QMenu* helpMenu;
    QAction* aboutAct;
    QAction* aboutQtAct;

    void createActions( QApplication* app );
    void createMenus();
//    bool saveFile(const QString &fileName);
//    void setCurrentFile(const QString &fileName);
//    QString strippedName(const QString &fullFileName);

private slots:
    void about();

protected:
   // void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
