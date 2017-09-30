#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <centwidget.h>

#include <QMainWindow>
#include <QWidget>
#include <QLabel>

class QAction;
class QMenu;
class Scribble;
class QLabel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* w, QApplication* app);
    ~MainWindow();

private:
    CentWidget* CenWid;

    void createActions( QApplication* app );
    void createMenus();
//    bool saveFile(const QString &fileName);
//    void setCurrentFile(const QString &fileName);
//    QString strippedName(const QString &fullFileName);

    QLabel* slabel1;

    QMenu* helpMenu;
    QAction* aboutAct;
    QAction* aboutQtAct;

private slots:
    void newFile();
    void save();
    void saveAs();
    void about();

protected:
   // void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
