#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QGraphicsScene>
#include "processing.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    scene = new QGraphicsScene(this);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
}
///////////////////////
//page 0
void MainWindow::on_open_button_0_clicked()
{
    fileName = QFileDialog::getOpenFileName(this,
               tr("Open Image"),"~/", tr("Image Files (*.png *.jpg *.bmp)"));
    image.load(fileName);
    pixmap = QPixmap::fromImage(image);
    scene->addPixmap(pixmap);
    ui->graphicsview_0->setScene(scene);
}

void MainWindow::on_clear_button_0_clicked()
{
    scene->clear();
    ui->graphicsview_0->viewport()->update();
}


void MainWindow::on_runallbutton_0_clicked()
{

}
//buttoncontinue_0 will change image from rgb to grayscale
void MainWindow::on_continuebutton_0_clicked()
{
    //change to grayscale


    //next page
    ui->stackedWidget->setCurrentIndex(1);
}
///////////////////////////////
//Page 1
void MainWindow::on_backbutton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_continuebutton_1_clicked()
{

}


