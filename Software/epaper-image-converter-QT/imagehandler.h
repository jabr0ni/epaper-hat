#ifndef IMAGEHANDLER_H
#define IMAGEHANDLER_H

#include <QMainWindow>

class ImageHandler : public QMainWindow
{
    Q_OBJECT
public:
    explicit ImageHandler(QWidget *parent = nullptr);
    ~ImageHandler();

// user defined functions
public:
    bool loadImage(QWidget *parent = nullptr);
    const QImage &getImage() const;
    void displayImage();
    void deleteImage();
    void setImage();

private:
    QImage image;
signals:
};

#endif // IMAGEHANDLER_H
