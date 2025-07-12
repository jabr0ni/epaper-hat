#include "imageprocessing.h"
#include <qobject.h>

ImageProcessing::ImageProcessing() {}

void ImageProcessing::processImage(QString fileName)
{
    image = cv::imread(fileName.toStdString(), cv::IMREAD_GRAYSCALE);
}

cv::Mat *ImageProcessing::getImage(void)
{
    return &image;
}

