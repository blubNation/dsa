#ifndef BSMOPENCV_H
#define BSMOPENCV_H

#include <QImage>
#include <QPixmap>

#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/imgproc/types_c.h"

namespace BSM{

    QPixmap Mat2Pixmap(cv::Mat const& src)
    {
         cv::Mat temp; // make the same cv::Mat
         cvtColor(src, temp,CV_BGR2RGB); // cvtColor Makes a copt, that what i need
         QImage dest((uchar*) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
         QImage dest2(dest);

         QPixmap dest3;
         QPixmap dest4(dest3);

         dest4 = QPixmap::fromImage(dest2);
         dest4.detach();// enforce deep copy
         //dest2.detach(); // enforce deep copy
         return dest4;
    }
/*
    cv::Mat QPixmap2Mat(QPixmap* XPixmap0)        //(QImage const& src)
    {
        const QImage src = XPixmap0->toImage();
        cv::Mat tmp(src.height(),src.width(),CV_8UC3,(uchar*)src.bits(),src.bytesPerLine());
        cv::Mat result; // deep copy just in case (my lack of knowledge with open cv)
        cvtColor(tmp, result,CV_BGR2RGB);

        return result;
    }
    */
/*
    QImage Mat2QImage(cv::Mat const& src)
    {
         cv::Mat temp; // make the same cv::Mat
         cvtColor(src, temp,CV_BGR2RGB); // cvtColor Makes a copt, that what i need
         QImage dest((uchar*) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
         QImage dest2(dest);
         dest2.detach(); // enforce deep copy

         return dest2;
    }
*/





}
#endif // BSMOPENCV_H


