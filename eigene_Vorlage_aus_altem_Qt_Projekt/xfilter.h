#ifndef XFILTER_H
#define XFILTER_H

#include <QWidget>

class xfilter : public QWidget
{
    Q_OBJECT
public:
    explicit xfilter(QWidget *parent = 0);    
    
signals:
    
public slots:
    //XApplyFilter(QImage);
    //XChangeParameters(int,int,int);

private:
    //QImage XMat2QImage(cv::Mat);
    int XParameters[3];
};

#endif // XFILTER_H
