/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuVideo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icons/folder_page_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Icons/control_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon1);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Icons/control_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Icons/control_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuVideo = new QMenu(menuBar);
        menuVideo->setObjectName(QString::fromUtf8("menuVideo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuVideo->menuAction());
        menuFile->addAction(actionOpen);
        menuVideo->addAction(actionPlay);
        menuVideo->addAction(actionPause);
        menuVideo->addAction(actionStop);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPlay);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionStop);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open a file", nullptr));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("MainWindow", "Play", nullptr));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", nullptr));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuVideo->setTitle(QApplication::translate("MainWindow", "Video", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
