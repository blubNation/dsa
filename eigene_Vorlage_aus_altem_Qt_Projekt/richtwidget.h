#ifndef RICHTWIDGET_H
#define RICHTWIDGET_H

#include <QImage>
#include <QWidget>
//#include <QtWidgets>
#include <QPushButton>
#include <QComboBox>
#include <QtGui>
#include <QRadioButton>
#include <QObject>
#include <QTabBar>

//#include <cv.h>
#include <xopencv.h>
//#include <highgui.h>
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>

//namespace Ui {class richtwidget;}

class richtwidget : public QWidget
{
   Q_OBJECT

public:
   explicit richtwidget(QWidget *parent = 0);
   ~richtwidget();

    QString getFileName();

private:

    QPixmap*        XPixmap1;
    QPixmap*        XPixmap2;

//    QPushButton*    XImageFileButton;
//    QPushButton*    XUpdateFilter;

//    QComboBox*      XFilterSelector;
//    QRadioButton*   XValueSelector;

    QLabel*         XLabel1;
    QLabel*         XLabel2;

    QString Xfilename;

//    cv::Mat XMat1;

//    int XParameter1;
//    int XParameter2;

 public slots:
    void XUpdate(qint8 filterselect); //beinhaltet Anwender von Filter
    void XRedraw();
    void XfileOpenDialogue();
};

#endif // RICHTWIDGET_H
