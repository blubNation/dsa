#include "richtwidget.h"
#include "centwidget.h"

//using namespace cv;

//RIGHTWIDGET ENTHÄLT EIN-UND AUSGABEBILD
richtwidget::richtwidget(QWidget *parent) : QWidget(parent)
{
    XLabel1 = new QLabel(this);
        XLabel1->setGeometry(QRect(10,10,400,200));
        XLabel1->setObjectName(QString::fromUtf8("Eingangsbild"));

    XLabel2 = new QLabel(this);
        XLabel2->setGeometry(QRect(10,210,400,200));
        XLabel2->setObjectName(QString::fromUtf8("Ausgabebild"));
}

//Destruktor
richtwidget::~richtwidget()
{ }

//Öffne Datei-Manager
void richtwidget::XfileOpenDialogue()
{
    Xfilename = QFileDialog::getOpenFileName
            ( this,"Open Image File",QDir::currentPath() );

    XPixmap1 = new QPixmap(Xfilename);
    //Default-Wert für XPixmap2 solange kein Filter angewendet wird.
    XPixmap2 = new QPixmap(*XPixmap1);

    //nicht so effizient, ist aber einfacher als die Konvertierung.
//    XMat1 = cv::imread(Xfilename.toStdString());

    XRedraw();
}

//Update-Funktionvoid
void richtwidget::XUpdate(qint8 filterselect)
{
//    cv::Mat dst;
//    cv::Mat temp;
//    cv::Mat temp2;

    switch (filterselect)   // XFilterSelector->currentIndex())
    {
/*        case 0:
        cv::Sobel(XMat1,dst,CV_8UC1,1,0); //CV_32F
        break;

        case 1:
        cv::Laplacian(XMat1,dst,CV_8UC1,3,3); //CV_32F
        break;

        case 2:
        cv::Scharr(XMat1,dst,CV_8UC1,1,0);
        break;*/
    }

    //dst ist Matrix: Konvertiere zu QPixmap über QImage:

//    cvtColor(dst, temp2,CV_BGR2GRAY); //ist nötig, da OpenCV-Mat verkehrt rum ist.
//    cvtColor(temp2,temp,CV_GRAY2RGB);

//    QImage dest((uchar*) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
//    XPixmap2 = new QPixmap(QPixmap::fromImage(dest));

    XRedraw();
}


void richtwidget::XRedraw()
{
    //wird nur aufgerufen, wenn Bild sich geändert hat
        XLabel1->setPixmap(XPixmap1->scaled(
            400, 200, Qt::KeepAspectRatio, Qt::FastTransformation));
    //ohne angewendeten Filter ist Pixmap2 leer.
        XLabel2->setPixmap(XPixmap2->scaled(
            400, 200, Qt::KeepAspectRatio, Qt::FastTransformation));
}

QString richtwidget::getFileName()
{
    return Xfilename;
}
