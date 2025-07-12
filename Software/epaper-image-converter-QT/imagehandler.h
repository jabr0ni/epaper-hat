#ifndef IMAGEHANDLER_H
#define IMAGEHANDLER_H

#include <QMainWindow>
#include "qobject.h"
#include "imageprocessing.h"

class ImageHandler : public QMainWindow
{
    Q_OBJECT
public:
    explicit ImageHandler(QWidget *parent = nullptr);
    ~ImageHandler();

// user defined functions
public:
    bool loadImage(QWidget *parent = nullptr);
    const QImage &getImage(uint8_t type) const;
    void displayImage();
    void deleteImage();
    void setImageBefore();
    void setImageAfter(ImageProcessing &_img);
    QImage getScaledImage();


    void    setImageFileName(QString newFileName);
    QString getImageFileName();

    QString _fileName;       // image filename

private:
    QImage image;
    QImage imageBefore;
    QImage imageAfter;
    QImage scaledImage;

signals:
};

#endif // IMAGEHANDLER_H
