#include <mainwindow.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow MW(0,&app);

    MW.show();
    return app.exec();
}
