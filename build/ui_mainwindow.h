/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_5;
    QPushButton *pushButton;
    QFrame *frame_6;
    QPushButton *pushButton_2;
    QFrame *frame_8;
    QPushButton *pushButton_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_11;
    QPushButton *pushButton_4;
    QFrame *frame_9;
    QPushButton *pushButton_5;
    QFrame *frame_12;
    QPushButton *pushButton_6;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_16;
    QPushButton *pushButton_7;
    QFrame *frame_14;
    QPushButton *pushButton_8;
    QFrame *frame_13;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(861, 578);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_4 = new QFrame(widget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setCursor(QCursor(Qt::PointingHandCursor));
        frame_5->setFocusPolicy(Qt::NoFocus);
        frame_5->setAutoFillBackground(false);
        frame_5->setStyleSheet(QLatin1String(" background-color: rgb(0, 0, 255);\n"
"   image: url(:/resource/sonic_main.png);\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 241, 171));
        pushButton->setStyleSheet(QStringLiteral("border: none"));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(frame_5);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setCursor(QCursor(Qt::PointingHandCursor));
        frame_6->setStyleSheet(QLatin1String("background-color: rgb(85, 255, 0);\n"
"image: url(:/resource/monkey-maze-making.jpg);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame_6);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 0, 241, 171));
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QStringLiteral("border: none"));
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(frame_6);

        frame_8 = new QFrame(frame_4);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setCursor(QCursor(Qt::PointingHandCursor));
        frame_8->setStyleSheet(QLatin1String("background-color: rgb(86, 86, 86);\n"
"image: url(:/resource/Tower-Defence.jpg);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        pushButton_3 = new QPushButton(frame_8);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 0, 251, 171));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QStringLiteral("border: none"));
        pushButton_3->setFlat(true);

        horizontalLayout->addWidget(frame_8);


        verticalLayout_2->addWidget(frame_4);

        frame_3 = new QFrame(widget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_11 = new QFrame(frame_3);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setCursor(QCursor(Qt::PointingHandCursor));
        frame_11->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"image: url(:/resource/pacman.jpg);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame_11);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 0, 251, 171));
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QStringLiteral("border: none"));
        pushButton_4->setFlat(true);

        horizontalLayout_2->addWidget(frame_11);

        frame_9 = new QFrame(frame_3);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setCursor(QCursor(Qt::PointingHandCursor));
        frame_9->setStyleSheet(QLatin1String("background-color: rgb(59, 59, 59);\n"
"image: url(:/resource/estrela.png);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        pushButton_5 = new QPushButton(frame_9);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(-10, 0, 261, 171));
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QStringLiteral("border: none"));
        pushButton_5->setFlat(true);

        horizontalLayout_2->addWidget(frame_9);

        frame_12 = new QFrame(frame_3);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setCursor(QCursor(Qt::PointingHandCursor));
        frame_12->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 255);\n"
"image: url(:/resource/Snowball.jpg);"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        pushButton_6 = new QPushButton(frame_12);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 0, 271, 171));
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QStringLiteral("border: none"));
        pushButton_6->setFlat(true);

        horizontalLayout_2->addWidget(frame_12);


        verticalLayout_2->addWidget(frame_3);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_16 = new QFrame(frame_2);
        frame_16->setObjectName(QStringLiteral("frame_16"));
        frame_16->setCursor(QCursor(Qt::PointingHandCursor));
        frame_16->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"image: url(:/resource/tetris.png);"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        pushButton_7 = new QPushButton(frame_16);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 0, 271, 171));
        pushButton_7->setAutoFillBackground(false);
        pushButton_7->setStyleSheet(QStringLiteral("border: none"));
        pushButton_7->setFlat(true);

        horizontalLayout_3->addWidget(frame_16);

        frame_14 = new QFrame(frame_2);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setCursor(QCursor(Qt::PointingHandCursor));
        frame_14->setStyleSheet(QLatin1String("background-color: rgb(255, 85, 0);\n"
"image: url(:/resource/bombit6.jpg);"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_14);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 0, 271, 171));
        pushButton_8->setAutoFillBackground(false);
        pushButton_8->setStyleSheet(QStringLiteral("border: none"));
        pushButton_8->setFlat(true);

        horizontalLayout_3->addWidget(frame_14);

        frame_13 = new QFrame(frame_2);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setCursor(QCursor(Qt::PointingHandCursor));
        frame_13->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 0);\n"
"image: url(:/resource/thumb-mario.jpg);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        pushButton_9 = new QPushButton(frame_13);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 0, 271, 171));
        pushButton_9->setAutoFillBackground(false);
        pushButton_9->setStyleSheet(QStringLiteral("border: none"));
        pushButton_9->setFlat(true);

        horizontalLayout_3->addWidget(frame_13);


        verticalLayout_2->addWidget(frame_2);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Emmi Jogos", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
