#include "mainwindow.h"
#include "ePaperProperties.h"
#include <QFileDialog>
#include <QObject>
#include <QDebug>
#include <QPixmap>
#include <QImage>
// #include <S>
#include "./ui_mainwindow.h"

#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(EPAPER_DISPLAY_PX_W*2.5, EPAPER_DISPLAY_PX_H*2);

    ui->imgLabelBefore->setAlignment(Qt::AlignCenter);
    ui->imgLabelAfter->setAlignment(Qt::AlignCenter);
    ui->imgLabelBefore->setText("Before Placeholder");
    ui->imgLabelAfter->setText("After Placeholder");

    // Set up signals and slots for button press
    connect(ui->pushButton_uploadImage, &QPushButton::clicked, this, &MainWindow::ImageProcessHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ImageProcessHandler()
{
    if(loadImage()){
        displayMainImage();
        // read image into opencv Mat class
        imageProcessing.processImage(imageHandler.getImageFileName());
        displayProcessedImage();
    }
}

void MainWindow::displayProcessedImage()
{
    QPixmap tempImage;
    imageHandler.setImageAfter(imageProcessing);
    tempImage = QPixmap::fromImage(imageHandler.getImage(1)).scaled(EPAPER_DISPLAY_PX_W, EPAPER_DISPLAY_PX_H);
    ui->imgLabelAfter->setPixmap(tempImage);
}

bool MainWindow::loadImage()
{
    if(imageHandler.loadImage()){
        // set member variable and scale to e-paper dimensions
        imageHandler.setImageBefore();
        return true;
    }
    else return false;
}

void MainWindow::displayMainImage()
{
    imageHandler.setImageBefore();
    ui->imgLabelBefore->setPixmap(QPixmap::fromImage(imageHandler.getScaledImage()));
}
