#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:

    void on_open_button_0_clicked();

    void on_clear_button_0_clicked();

    void on_runallbutton_0_clicked();

    void on_continuebutton_0_clicked();

    void on_backbutton_1_clicked();

    void on_continuebutton_1_clicked();

public:
    Ui::MainWindow *ui;
public:
    QString fileName;
    QImage image;
    QGraphicsScene *scene;
    QPixmap pixmap;
};

#endif // MAINWINDOW_H
