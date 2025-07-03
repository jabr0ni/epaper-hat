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

    ui->imgLabelBefore->setAlignment(Qt::AlignCenter);
    ui->imgLabelAfter->setAlignment(Qt::AlignCenter);
    ui->imgLabelBefore->setText("Before Placeholder");
    ui->imgLabelAfter->setText("After Placeholder");

    // Set up signals and slots for button press
    connect(ui->pushButton_uploadImage, &QPushButton::clicked, this, [=]() {
        if(imageHandler.loadImage()){
            QImage image;
            image = imageHandler.getImage();
            QImage scaledImage;

            // scale image to 2.13in display resolution
            scaledImage = image.scaled(EPAPER_DISPLAY_PX_W, EPAPER_DISPLAY_PX_H);

            ui->imgLabelBefore->setPixmap(QPixmap::fromImage(scaledImage));
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
