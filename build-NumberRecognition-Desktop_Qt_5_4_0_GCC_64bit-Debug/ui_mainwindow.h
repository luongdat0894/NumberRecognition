/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *runallbutton_0;
    QFrame *line_5;
    QPushButton *continuebutton_0;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *open_button_0;
    QFrame *line_4;
    QPushButton *clear_button_0;
    QFrame *line_2;
    QFrame *line;
    QFrame *line_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsview_0;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *backbutton_1;
    QFrame *line_7;
    QPushButton *continuebutton_1;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_8;
    QFrame *line_6;
    QGraphicsView *graphicsview_1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(316, 449);
        QIcon icon;
        icon.addFile(QStringLiteral("../data/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(68, 68, 68);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Rosewood Std Regular"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        runallbutton_0 = new QPushButton(page);
        runallbutton_0->setObjectName(QStringLiteral("runallbutton_0"));
        QFont font1;
        font1.setPointSize(11);
        runallbutton_0->setFont(font1);
        runallbutton_0->setStyleSheet(QStringLiteral("color: rgb(217, 217, 217);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../data/run.png"), QSize(), QIcon::Selected, QIcon::On);
        runallbutton_0->setIcon(icon1);
        runallbutton_0->setFlat(true);

        horizontalLayout_5->addWidget(runallbutton_0, 0, Qt::AlignLeft);

        line_5 = new QFrame(page);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_5);

        continuebutton_0 = new QPushButton(page);
        continuebutton_0->setObjectName(QStringLiteral("continuebutton_0"));
        QFont font2;
        font2.setPointSize(10);
        continuebutton_0->setFont(font2);
        continuebutton_0->setLayoutDirection(Qt::RightToLeft);
        continuebutton_0->setAutoFillBackground(false);
        continuebutton_0->setStyleSheet(QStringLiteral("color: rgb(194, 194, 194);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../data/continue.png"), QSize(), QIcon::Selected, QIcon::On);
        continuebutton_0->setIcon(icon2);
        continuebutton_0->setFlat(true);

        horizontalLayout_5->addWidget(continuebutton_0, 0, Qt::AlignLeft);


        gridLayout_3->addLayout(horizontalLayout_5, 8, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        open_button_0 = new QPushButton(page);
        open_button_0->setObjectName(QStringLiteral("open_button_0"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        open_button_0->setFont(font3);
        open_button_0->setAutoFillBackground(false);
        open_button_0->setStyleSheet(QLatin1String("color: rgb(191, 191, 191);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:0.1 rgba(255, 255, 255, 255), stop:0.2 rgba(255, 176, 176, 167), stop:0.3 rgba(255, 151, 151, 92), stop:0.4 rgba(255, 125, 125, 51), stop:0.5 rgba(255, 76, 76, 205), stop:0.52 rgba(255, 76, 76, 205), stop:0.6 rgba(255, 180, 180, 84), stop:1 rgba(255, 255, 255, 0));\n"
""));
        open_button_0->setIconSize(QSize(64, 48));
        open_button_0->setAutoDefault(false);
        open_button_0->setDefault(false);
        open_button_0->setFlat(true);

        horizontalLayout_4->addWidget(open_button_0);

        line_4 = new QFrame(page);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_4);

        clear_button_0 = new QPushButton(page);
        clear_button_0->setObjectName(QStringLiteral("clear_button_0"));
        clear_button_0->setFont(font3);
        clear_button_0->setStyleSheet(QLatin1String("color: rgb(167, 167, 167);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:0.1 rgba(255, 255, 255, 255), stop:0.2 rgba(255, 176, 176, 167), stop:0.3 rgba(255, 151, 151, 92), stop:0.4 rgba(255, 125, 125, 51), stop:0.5 rgba(255, 76, 76, 205), stop:0.52 rgba(255, 76, 76, 205), stop:0.6 rgba(255, 180, 180, 84), stop:1 rgba(255, 255, 255, 0));"));
        clear_button_0->setFlat(true);

        horizontalLayout_4->addWidget(clear_button_0);


        gridLayout_3->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        line_2 = new QFrame(page);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 5, 0, 1, 1);

        line = new QFrame(page);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 7, 0, 1, 1);

        line_3 = new QFrame(page);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 1, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setFamily(QStringLiteral("Snap ITC"));
        font4.setPointSize(26);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("color: rgb(194, 194, 194);"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 4, 0, 1, 1);

        graphicsview_0 = new QGraphicsView(page);
        graphicsview_0->setObjectName(QStringLiteral("graphicsview_0"));
        graphicsview_0->setStyleSheet(QStringLiteral("background-color: rgb(214, 214, 214);"));

        gridLayout_3->addWidget(graphicsview_0, 3, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        backbutton_1 = new QPushButton(page_2);
        backbutton_1->setObjectName(QStringLiteral("backbutton_1"));
        backbutton_1->setFont(font2);
        backbutton_1->setStyleSheet(QStringLiteral("color: rgb(179, 179, 179);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../data/back.png"), QSize(), QIcon::Selected, QIcon::On);
        backbutton_1->setIcon(icon3);
        backbutton_1->setFlat(true);

        horizontalLayout_6->addWidget(backbutton_1, 0, Qt::AlignLeft);

        line_7 = new QFrame(page_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_7);

        continuebutton_1 = new QPushButton(page_2);
        continuebutton_1->setObjectName(QStringLiteral("continuebutton_1"));
        continuebutton_1->setFont(font2);
        continuebutton_1->setLayoutDirection(Qt::RightToLeft);
        continuebutton_1->setStyleSheet(QStringLiteral("color: rgb(171, 171, 171);"));
        continuebutton_1->setIcon(icon2);
        continuebutton_1->setFlat(true);

        horizontalLayout_6->addWidget(continuebutton_1, 0, Qt::AlignLeft|Qt::AlignVCenter);


        gridLayout_2->addLayout(horizontalLayout_6, 7, 0, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font5;
        font5.setFamily(QStringLiteral("Algerian"));
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_2->setStyleSheet(QStringLiteral("color: rgb(181, 181, 181);"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1, Qt::AlignHCenter);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 5, 0, 1, 1);

        line_8 = new QFrame(page_2);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_8, 2, 0, 1, 1);

        line_6 = new QFrame(page_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_6, 6, 0, 1, 1);

        graphicsview_1 = new QGraphicsView(page_2);
        graphicsview_1->setObjectName(QStringLiteral("graphicsview_1"));
        graphicsview_1->setStyleSheet(QStringLiteral("background-color: rgb(197, 197, 197);"));

        gridLayout_2->addWidget(graphicsview_1, 3, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Number Recognition", 0));
        runallbutton_0->setText(QApplication::translate("MainWindow", "Run All", 0));
        continuebutton_0->setText(QApplication::translate("MainWindow", "Continue", 0));
        open_button_0->setText(QApplication::translate("MainWindow", "Open", 0));
        clear_button_0->setText(QApplication::translate("MainWindow", "Clear", 0));
        label->setText(QApplication::translate("MainWindow", "Your Image", 0));
        backbutton_1->setText(QApplication::translate("MainWindow", "Back", 0));
        continuebutton_1->setText(QApplication::translate("MainWindow", "Continue", 0));
        label_2->setText(QApplication::translate("MainWindow", "Image Grayscale", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
