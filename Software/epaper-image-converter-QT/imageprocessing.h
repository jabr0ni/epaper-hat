#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>
#include <qobject.h>

class ImageProcessing
{
public:
    ImageProcessing();
    void processImage(QString fileName);
    cv::Mat *getImage(void);

private:
    cv::Mat image;
    // cv::Mat processImage(QString fileName);
};

#endif // IMAGEPROCESSING_H
