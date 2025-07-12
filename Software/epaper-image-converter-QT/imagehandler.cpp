#include "imagehandler.h"
#include <QFileDialog>
#include <QDebug>
#include <QImage>
#include "ePaperProperties.h"
#include "imageprocessing.h"
ImageHandler::ImageHandler(QWidget *parent)
    : QMainWindow{parent}
{
}

ImageHandler::~ImageHandler()
{
    // delete image;
}

/**
 * @brief ImageHandler::getImage
 * @return constant reference to image
 */
const QImage &ImageHandler::getImage(uint8_t type) const
{
    if(type == 0) return this->image;
    if(type == 1) return this->imageAfter;

    return this->imageBefore;
}

void ImageHandler::setImageBefore()
{
    imageBefore = getImage(0);
    scaledImage = imageBefore.scaled(EPAPER_DISPLAY_PX_W, EPAPER_DISPLAY_PX_H);
}

void ImageHandler::setImageAfter(ImageProcessing &_img)
{
    // store opencv processed image in temp Mat class
    cv::Mat *mat = _img.getImage();

    // convert image to greyscale QImage
    QImage tempImage(mat->data,mat->cols, mat->rows, QImage::Format_Grayscale8);

    // Store opencv converted image to ImageHandler imageAfter object
    QTransform _transform;

    // @todo: make rotate a push button. Image orientation not always the same.
    imageAfter = tempImage.copy().transformed(_transform.rotate(90.0));
}

void ImageHandler::setImageFileName(QString newFileName)
{
    _fileName = newFileName;
}

QString ImageHandler::getImageFileName()
{
    return _fileName;
}

bool ImageHandler::loadImage(QWidget *parent)
{
    _fileName = QFileDialog::getOpenFileName(
        this,
        "Select Image",
        "",
        "Image Files (*.png *.jpg *.jpeg)");

    if(!_fileName.isEmpty()){
        if(image.load(_fileName)){
            return true;
        }
        else{
            return false;
        }
    }

    return false;
}

QImage ImageHandler::getScaledImage()
{
    return scaledImage;
}
