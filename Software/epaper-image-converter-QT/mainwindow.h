#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "imagehandler.h"
#include "imageprocessing.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();


    void DisplayImage(QWidget *parent);

private:
    Ui::MainWindow *ui;

    // cv::Mat imageProcessing;

    ImageHandler imageHandler;
    ImageProcessing imageProcessing;

    void displayMainImage();
    void displayProcessedImage();
    bool loadImage();

public slots:
    void ImageProcessHandler();

};
#endif // MAINWINDOW_H
