/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QAction *action_Start;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QMenu *menukjdj;
    QMenu *menuhdjk;
    QMenu *menujfdhs;
    QMenu *menu_Help;
    QMenu *menuReferee;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1319, 1006);
        MainWindow->setMinimumSize(QSize(850, 600));
        QIcon icon;
        icon.addFile(QStringLiteral("../Icons/SysmicLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        action_Start = new QAction(MainWindow);
        action_Start->setObjectName(QStringLiteral("action_Start"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1319, 22));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QStringLiteral("menuGame"));
        menukjdj = new QMenu(menuBar);
        menukjdj->setObjectName(QStringLiteral("menukjdj"));
        menuhdjk = new QMenu(menuBar);
        menuhdjk->setObjectName(QStringLiteral("menuhdjk"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(20);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(menuhdjk->sizePolicy().hasHeightForWidth());
        menuhdjk->setSizePolicy(sizePolicy);
        menuhdjk->setMinimumSize(QSize(100, 100));
        menujfdhs = new QMenu(menuBar);
        menujfdhs->setObjectName(QStringLiteral("menujfdhs"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menuReferee = new QMenu(menuBar);
        menuReferee->setObjectName(QStringLiteral("menuReferee"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGame->menuAction());
        menuBar->addAction(menukjdj->menuAction());
        menuBar->addAction(menuhdjk->menuAction());
        menuBar->addAction(menujfdhs->menuAction());
        menuBar->addAction(menuReferee->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuGame->addAction(action_Start);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sysmic Robotics", Q_NULLPTR));
        action_Start->setText(QApplication::translate("MainWindow", "&Start", Q_NULLPTR));
        menuGame->setTitle(QApplication::translate("MainWindow", "&Game", Q_NULLPTR));
        menukjdj->setTitle(QApplication::translate("MainWindow", "&Robots", Q_NULLPTR));
        menuhdjk->setTitle(QApplication::translate("MainWindow", "&Time", Q_NULLPTR));
        menujfdhs->setTitle(QApplication::translate("MainWindow", "&Camera", Q_NULLPTR));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
        menuReferee->setTitle(QApplication::translate("MainWindow", "&Referee", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
