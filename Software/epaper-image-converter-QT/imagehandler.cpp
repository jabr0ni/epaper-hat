#include "imagehandler.h"
#include <QFileDialog>
#include <QDebug>
#include <QImage>

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
const QImage &ImageHandler::getImage() const
{
    return image;
}

void ImageHandler::setImage()
{

}

bool ImageHandler::loadImage(QWidget *parent)
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        "Select Image",
        "",
        "Image Files (*.png *.jpg *.jpeg)");

    if(!fileName.isEmpty()){
        qDebug() << "FILENAME LOADED: " << fileName;

        if(image.load(fileName)){
            qDebug() << "IMAGE LOADED: " << fileName;
            return true;
        }
        else{
            qDebug() << "ERROR: NO IMAGE LOADED: " << fileName;
            return false;
        }
    }

    return false;
}




