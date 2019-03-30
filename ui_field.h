/********************************************************************************
** Form generated from reading UI file 'field.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELD_H
#define UI_FIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Field
{
public:
    QGraphicsView *graphicsView;
    QPushButton *refRedCardBlue;
    QPushButton *refGoalBlue;
    QPushButton *refSubtractGoalYellow;
    QPushButton *refGoalYellow;
    QPushButton *refYellowCardYellow;
    QPushButton *refSubtractGoalBlue;
    QPushButton *refRedCardYellow;
    QPushButton *refYellowCardBlue;
    QTreeWidget *treeWidget;
    QPushButton *refForceStart;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTimeEdit *timeEdit;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *refOvertime1;
    QPushButton *refOvertime2;
    QPushButton *refHalftime;
    QPushButton *refPenaltyShootout;
    QPushButton *refTimeoutEnd;
    QVBoxLayout *verticalLayout_2;
    QPushButton *refKickoffBlue;
    QPushButton *refKickoffBlue_3;
    QPushButton *refDirectBlue;
    QPushButton *refIndirectBlue;
    QPushButton *refPenaltyBlue;
    QPushButton *refTimeoutBlue;
    QVBoxLayout *verticalLayout_3;
    QPushButton *refKickoffYellow_3;
    QPushButton *refKickoffYellow;
    QPushButton *refDirectYellow;
    QPushButton *refIndirectYellow;
    QPushButton *refPenaltyYellow;
    QPushButton *refTimeoutYellow;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_7;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *Field)
    {
        if (Field->objectName().isEmpty())
            Field->setObjectName(QStringLiteral("Field"));
        Field->resize(1136, 965);
        graphicsView = new QGraphicsView(Field);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-300, 100, 901, 841));
        graphicsView->setMinimumSize(QSize(370, 520));
        graphicsView->setMaximumSize(QSize(20000, 20000));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        refRedCardBlue = new QPushButton(Field);
        refRedCardBlue->setObjectName(QStringLiteral("refRedCardBlue"));
        refRedCardBlue->setGeometry(QRect(696, 1188, 100, 25));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(refRedCardBlue->sizePolicy().hasHeightForWidth());
        refRedCardBlue->setSizePolicy(sizePolicy);
        refRedCardBlue->setMinimumSize(QSize(100, 25));
        refRedCardBlue->setMaximumSize(QSize(100, 25));
        refGoalBlue = new QPushButton(Field);
        refGoalBlue->setObjectName(QStringLiteral("refGoalBlue"));
        refGoalBlue->setGeometry(QRect(696, 1126, 40, 25));
        sizePolicy.setHeightForWidth(refGoalBlue->sizePolicy().hasHeightForWidth());
        refGoalBlue->setSizePolicy(sizePolicy);
        refGoalBlue->setMinimumSize(QSize(0, 25));
        refGoalBlue->setMaximumSize(QSize(40, 25));
        refSubtractGoalYellow = new QPushButton(Field);
        refSubtractGoalYellow->setObjectName(QStringLiteral("refSubtractGoalYellow"));
        refSubtractGoalYellow->setGeometry(QRect(856, 1126, 40, 25));
        sizePolicy.setHeightForWidth(refSubtractGoalYellow->sizePolicy().hasHeightForWidth());
        refSubtractGoalYellow->setSizePolicy(sizePolicy);
        refSubtractGoalYellow->setMinimumSize(QSize(0, 25));
        refSubtractGoalYellow->setMaximumSize(QSize(40, 25));
        refGoalYellow = new QPushButton(Field);
        refGoalYellow->setObjectName(QStringLiteral("refGoalYellow"));
        refGoalYellow->setGeometry(QRect(802, 1126, 40, 25));
        sizePolicy.setHeightForWidth(refGoalYellow->sizePolicy().hasHeightForWidth());
        refGoalYellow->setSizePolicy(sizePolicy);
        refGoalYellow->setMinimumSize(QSize(0, 25));
        refGoalYellow->setMaximumSize(QSize(40, 25));
        refYellowCardYellow = new QPushButton(Field);
        refYellowCardYellow->setObjectName(QStringLiteral("refYellowCardYellow"));
        refYellowCardYellow->setGeometry(QRect(802, 1157, 100, 25));
        sizePolicy.setHeightForWidth(refYellowCardYellow->sizePolicy().hasHeightForWidth());
        refYellowCardYellow->setSizePolicy(sizePolicy);
        refYellowCardYellow->setMinimumSize(QSize(100, 25));
        refYellowCardYellow->setMaximumSize(QSize(100, 25));
        refSubtractGoalBlue = new QPushButton(Field);
        refSubtractGoalBlue->setObjectName(QStringLiteral("refSubtractGoalBlue"));
        refSubtractGoalBlue->setGeometry(QRect(750, 1126, 40, 25));
        sizePolicy.setHeightForWidth(refSubtractGoalBlue->sizePolicy().hasHeightForWidth());
        refSubtractGoalBlue->setSizePolicy(sizePolicy);
        refSubtractGoalBlue->setMinimumSize(QSize(0, 25));
        refSubtractGoalBlue->setMaximumSize(QSize(40, 25));
        refRedCardYellow = new QPushButton(Field);
        refRedCardYellow->setObjectName(QStringLiteral("refRedCardYellow"));
        refRedCardYellow->setGeometry(QRect(802, 1188, 100, 25));
        sizePolicy.setHeightForWidth(refRedCardYellow->sizePolicy().hasHeightForWidth());
        refRedCardYellow->setSizePolicy(sizePolicy);
        refRedCardYellow->setMinimumSize(QSize(100, 25));
        refRedCardYellow->setMaximumSize(QSize(100, 25));
        refYellowCardBlue = new QPushButton(Field);
        refYellowCardBlue->setObjectName(QStringLiteral("refYellowCardBlue"));
        refYellowCardBlue->setGeometry(QRect(696, 1157, 100, 25));
        sizePolicy.setHeightForWidth(refYellowCardBlue->sizePolicy().hasHeightForWidth());
        refYellowCardBlue->setSizePolicy(sizePolicy);
        refYellowCardBlue->setMinimumSize(QSize(100, 25));
        refYellowCardBlue->setMaximumSize(QSize(100, 25));
        treeWidget = new QTreeWidget(Field);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignLeading|Qt::AlignVCenter);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(680, 680, 391, 241));
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        refForceStart = new QPushButton(Field);
        refForceStart->setObjectName(QStringLiteral("refForceStart"));
        refForceStart->setGeometry(QRect(240, 30, 120, 50));
        sizePolicy.setHeightForWidth(refForceStart->sizePolicy().hasHeightForWidth());
        refForceStart->setSizePolicy(sizePolicy);
        refForceStart->setMinimumSize(QSize(120, 50));
        refForceStart->setMaximumSize(QSize(100, 25));
        pushButton_2 = new QPushButton(Field);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 30, 120, 50));
        pushButton_2->setMinimumSize(QSize(120, 50));
        pushButton_3 = new QPushButton(Field);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 30, 120, 50));
        pushButton_3->setMinimumSize(QSize(120, 50));
        timeEdit = new QTimeEdit(Field);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(840, 50, 111, 41));
        timeEdit->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        label_8 = new QLabel(Field);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(840, 10, 91, 40));
        label_8->setMinimumSize(QSize(20, 40));
        label = new QLabel(Field);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(630, 240, 449, 37));
        label_2 = new QLabel(Field);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(650, 620, 409, 37));
        layoutWidget = new QWidget(Field);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(660, 300, 421, 306));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        refOvertime1 = new QPushButton(layoutWidget);
        refOvertime1->setObjectName(QStringLiteral("refOvertime1"));
        sizePolicy.setHeightForWidth(refOvertime1->sizePolicy().hasHeightForWidth());
        refOvertime1->setSizePolicy(sizePolicy);
        refOvertime1->setMinimumSize(QSize(120, 45));
        refOvertime1->setMaximumSize(QSize(120, 50));

        verticalLayout->addWidget(refOvertime1);

        refOvertime2 = new QPushButton(layoutWidget);
        refOvertime2->setObjectName(QStringLiteral("refOvertime2"));
        sizePolicy.setHeightForWidth(refOvertime2->sizePolicy().hasHeightForWidth());
        refOvertime2->setSizePolicy(sizePolicy);
        refOvertime2->setMinimumSize(QSize(120, 45));
        refOvertime2->setMaximumSize(QSize(120, 50));

        verticalLayout->addWidget(refOvertime2);

        refHalftime = new QPushButton(layoutWidget);
        refHalftime->setObjectName(QStringLiteral("refHalftime"));
        sizePolicy.setHeightForWidth(refHalftime->sizePolicy().hasHeightForWidth());
        refHalftime->setSizePolicy(sizePolicy);
        refHalftime->setMinimumSize(QSize(120, 45));
        refHalftime->setMaximumSize(QSize(120, 50));

        verticalLayout->addWidget(refHalftime);

        refPenaltyShootout = new QPushButton(layoutWidget);
        refPenaltyShootout->setObjectName(QStringLiteral("refPenaltyShootout"));
        sizePolicy.setHeightForWidth(refPenaltyShootout->sizePolicy().hasHeightForWidth());
        refPenaltyShootout->setSizePolicy(sizePolicy);
        refPenaltyShootout->setMinimumSize(QSize(120, 45));
        refPenaltyShootout->setMaximumSize(QSize(120, 45));

        verticalLayout->addWidget(refPenaltyShootout);

        refTimeoutEnd = new QPushButton(layoutWidget);
        refTimeoutEnd->setObjectName(QStringLiteral("refTimeoutEnd"));
        sizePolicy.setHeightForWidth(refTimeoutEnd->sizePolicy().hasHeightForWidth());
        refTimeoutEnd->setSizePolicy(sizePolicy);
        refTimeoutEnd->setMinimumSize(QSize(120, 45));
        refTimeoutEnd->setMaximumSize(QSize(120, 45));

        verticalLayout->addWidget(refTimeoutEnd);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        refKickoffBlue = new QPushButton(layoutWidget);
        refKickoffBlue->setObjectName(QStringLiteral("refKickoffBlue"));
        sizePolicy.setHeightForWidth(refKickoffBlue->sizePolicy().hasHeightForWidth());
        refKickoffBlue->setSizePolicy(sizePolicy);
        refKickoffBlue->setMinimumSize(QSize(120, 45));
        refKickoffBlue->setMaximumSize(QSize(120, 45));
        refKickoffBlue->setStyleSheet(QStringLiteral("background-color: rgb(30, 30, 155);"));

        verticalLayout_2->addWidget(refKickoffBlue);

        refKickoffBlue_3 = new QPushButton(layoutWidget);
        refKickoffBlue_3->setObjectName(QStringLiteral("refKickoffBlue_3"));
        sizePolicy.setHeightForWidth(refKickoffBlue_3->sizePolicy().hasHeightForWidth());
        refKickoffBlue_3->setSizePolicy(sizePolicy);
        refKickoffBlue_3->setMinimumSize(QSize(120, 45));
        refKickoffBlue_3->setMaximumSize(QSize(120, 45));
        refKickoffBlue_3->setStyleSheet(QStringLiteral("background-color: rgb(30, 30, 155);"));

        verticalLayout_2->addWidget(refKickoffBlue_3);

        refDirectBlue = new QPushButton(layoutWidget);
        refDirectBlue->setObjectName(QStringLiteral("refDirectBlue"));
        sizePolicy.setHeightForWidth(refDirectBlue->sizePolicy().hasHeightForWidth());
        refDirectBlue->setSizePolicy(sizePolicy);
        refDirectBlue->setMinimumSize(QSize(120, 45));
        refDirectBlue->setMaximumSize(QSize(120, 45));
        refDirectBlue->setStyleSheet(QStringLiteral("background-color: rgb(30, 30, 155);"));

        verticalLayout_2->addWidget(refDirectBlue);

        refIndirectBlue = new QPushButton(layoutWidget);
        refIndirectBlue->setObjectName(QStringLiteral("refIndirectBlue"));
        sizePolicy.setHeightForWidth(refIndirectBlue->sizePolicy().hasHeightForWidth());
        refIndirectBlue->setSizePolicy(sizePolicy);
        refIndirectBlue->setMinimumSize(QSize(120, 45));
        refIndirectBlue->setMaximumSize(QSize(120, 45));
        refIndirectBlue->setStyleSheet(QStringLiteral("background-color: rgb(30, 30, 155);"));

        verticalLayout_2->addWidget(refIndirectBlue);

        refPenaltyBlue = new QPushButton(layoutWidget);
        refPenaltyBlue->setObjectName(QStringLiteral("refPenaltyBlue"));
        sizePolicy.setHeightForWidth(refPenaltyBlue->sizePolicy().hasHeightForWidth());
        refPenaltyBlue->setSizePolicy(sizePolicy);
        refPenaltyBlue->setMinimumSize(QSize(120, 45));
        refPenaltyBlue->setMaximumSize(QSize(120, 45));
        refPenaltyBlue->setStyleSheet(QStringLiteral("background-color: rgb(30, 30, 155);"));

        verticalLayout_2->addWidget(refPenaltyBlue);

        refTimeoutBlue = new QPushButton(layoutWidget);
        refTimeoutBlue->setObjectName(QStringLiteral("refTimeoutBlue"));
        sizePolicy.setHeightForWidth(refTimeoutBlue->sizePolicy().hasHeightForWidth());
        refTimeoutBlue->setSizePolicy(sizePolicy);
        refTimeoutBlue->setMinimumSize(QSize(120, 45));
        refTimeoutBlue->setMaximumSize(QSize(120, 45));
        refTimeoutBlue->setStyleSheet(QStringLiteral("background-color: rgb(30, 30, 155);"));

        verticalLayout_2->addWidget(refTimeoutBlue);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        refKickoffYellow_3 = new QPushButton(layoutWidget);
        refKickoffYellow_3->setObjectName(QStringLiteral("refKickoffYellow_3"));
        sizePolicy.setHeightForWidth(refKickoffYellow_3->sizePolicy().hasHeightForWidth());
        refKickoffYellow_3->setSizePolicy(sizePolicy);
        refKickoffYellow_3->setMinimumSize(QSize(120, 45));
        refKickoffYellow_3->setMaximumSize(QSize(120, 45));
        refKickoffYellow_3->setStyleSheet(QStringLiteral("background-color: rgb(240, 255, 0);"));

        verticalLayout_3->addWidget(refKickoffYellow_3);

        refKickoffYellow = new QPushButton(layoutWidget);
        refKickoffYellow->setObjectName(QStringLiteral("refKickoffYellow"));
        sizePolicy.setHeightForWidth(refKickoffYellow->sizePolicy().hasHeightForWidth());
        refKickoffYellow->setSizePolicy(sizePolicy);
        refKickoffYellow->setMinimumSize(QSize(120, 45));
        refKickoffYellow->setMaximumSize(QSize(120, 45));
        refKickoffYellow->setStyleSheet(QStringLiteral("background-color: rgb(240, 255, 0);"));

        verticalLayout_3->addWidget(refKickoffYellow);

        refDirectYellow = new QPushButton(layoutWidget);
        refDirectYellow->setObjectName(QStringLiteral("refDirectYellow"));
        sizePolicy.setHeightForWidth(refDirectYellow->sizePolicy().hasHeightForWidth());
        refDirectYellow->setSizePolicy(sizePolicy);
        refDirectYellow->setMinimumSize(QSize(120, 45));
        refDirectYellow->setMaximumSize(QSize(120, 45));

        verticalLayout_3->addWidget(refDirectYellow);

        refIndirectYellow = new QPushButton(layoutWidget);
        refIndirectYellow->setObjectName(QStringLiteral("refIndirectYellow"));
        sizePolicy.setHeightForWidth(refIndirectYellow->sizePolicy().hasHeightForWidth());
        refIndirectYellow->setSizePolicy(sizePolicy);
        refIndirectYellow->setMinimumSize(QSize(120, 45));
        refIndirectYellow->setMaximumSize(QSize(120, 45));

        verticalLayout_3->addWidget(refIndirectYellow);

        refPenaltyYellow = new QPushButton(layoutWidget);
        refPenaltyYellow->setObjectName(QStringLiteral("refPenaltyYellow"));
        sizePolicy.setHeightForWidth(refPenaltyYellow->sizePolicy().hasHeightForWidth());
        refPenaltyYellow->setSizePolicy(sizePolicy);
        refPenaltyYellow->setMinimumSize(QSize(120, 45));
        refPenaltyYellow->setMaximumSize(QSize(120, 45));

        verticalLayout_3->addWidget(refPenaltyYellow);

        refTimeoutYellow = new QPushButton(layoutWidget);
        refTimeoutYellow->setObjectName(QStringLiteral("refTimeoutYellow"));
        sizePolicy.setHeightForWidth(refTimeoutYellow->sizePolicy().hasHeightForWidth());
        refTimeoutYellow->setSizePolicy(sizePolicy);
        refTimeoutYellow->setMinimumSize(QSize(120, 45));
        refTimeoutYellow->setMaximumSize(QSize(120, 45));

        verticalLayout_3->addWidget(refTimeoutYellow);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(Field);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(600, 100, 571, 45));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(20, 40));
        label_4->setStyleSheet(QStringLiteral("color: rgb(237, 212, 0);"));

        horizontalLayout_2->addWidget(label_4);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(20, 40));
        label_7->setStyleSheet(QStringLiteral("color:rgb(32, 74, 135)"));

        horizontalLayout_2->addWidget(label_7);

        layoutWidget2 = new QWidget(Field);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(670, 150, 391, 76));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(20, 40));

        horizontalLayout_3->addWidget(label_3);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(20, 40));

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(20, 40));

        horizontalLayout_3->addWidget(label_6);


        retranslateUi(Field);

        QMetaObject::connectSlotsByName(Field);
    } // setupUi

    void retranslateUi(QWidget *Field)
    {
        Field->setWindowTitle(QApplication::translate("Field", "Form", Q_NULLPTR));
        refRedCardBlue->setStyleSheet(QApplication::translate("Field", "background-color: rgb(127, 127, 255);", Q_NULLPTR));
        refRedCardBlue->setText(QApplication::translate("Field", "Red Card", Q_NULLPTR));
        refGoalBlue->setStyleSheet(QApplication::translate("Field", "background-color: rgb(127, 127, 255);", Q_NULLPTR));
        refGoalBlue->setText(QApplication::translate("Field", "+", Q_NULLPTR));
        refSubtractGoalYellow->setStyleSheet(QApplication::translate("Field", "background-color: rgb(255, 255, 0);", Q_NULLPTR));
        refSubtractGoalYellow->setText(QApplication::translate("Field", "-", Q_NULLPTR));
        refGoalYellow->setStyleSheet(QApplication::translate("Field", "background-color: rgb(255, 255, 0);", Q_NULLPTR));
        refGoalYellow->setText(QApplication::translate("Field", "+", Q_NULLPTR));
        refYellowCardYellow->setStyleSheet(QApplication::translate("Field", "background-color: rgb(255, 255, 0);", Q_NULLPTR));
        refYellowCardYellow->setText(QApplication::translate("Field", "Yellow Card", Q_NULLPTR));
        refSubtractGoalBlue->setStyleSheet(QApplication::translate("Field", "background-color: rgb(127, 127, 255);", Q_NULLPTR));
        refSubtractGoalBlue->setText(QApplication::translate("Field", "-", Q_NULLPTR));
        refRedCardYellow->setStyleSheet(QApplication::translate("Field", "background-color: rgb(255, 255, 0);", Q_NULLPTR));
        refRedCardYellow->setText(QApplication::translate("Field", "Red Card", Q_NULLPTR));
        refYellowCardBlue->setStyleSheet(QApplication::translate("Field", "background-color: rgb(127, 127, 255);", Q_NULLPTR));
        refYellowCardBlue->setText(QApplication::translate("Field", "Yellow Card", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Field", "Name", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("Field", "Offensive", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Field", "Basic Offense", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("Field", "Quick Offense", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("Field", "Defensive", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QApplication::translate("Field", "Basic Defense", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem6->setText(0, QApplication::translate("Field", "Restarts", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QApplication::translate("Field", "Penalty", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem8->setText(0, QApplication::translate("Field", "Test", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("Field", "Test1", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QApplication::translate("Field", "Test2", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem11->setText(0, QApplication::translate("Field", "Stop", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        refForceStart->setText(QApplication::translate("Field", "Force Start", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Field", "Stop", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Field", "Start", Q_NULLPTR));
        label_8->setText(QApplication::translate("Field", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600;\">Time</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Field", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">Auto-Referee</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Field", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">Plays</span></p><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        refOvertime1->setText(QApplication::translate("Field", "Overtime 1", Q_NULLPTR));
        refOvertime2->setText(QApplication::translate("Field", "Overtime 2", Q_NULLPTR));
        refHalftime->setText(QApplication::translate("Field", "Halftime", Q_NULLPTR));
        refPenaltyShootout->setText(QApplication::translate("Field", "Penalties", Q_NULLPTR));
        refTimeoutEnd->setText(QApplication::translate("Field", "End", Q_NULLPTR));
        refKickoffBlue->setText(QApplication::translate("Field", "Goal", Q_NULLPTR));
        refKickoffBlue_3->setText(QApplication::translate("Field", "Kickoff", Q_NULLPTR));
        refDirectBlue->setText(QApplication::translate("Field", "Direct", Q_NULLPTR));
        refIndirectBlue->setText(QApplication::translate("Field", "Indirect", Q_NULLPTR));
        refPenaltyBlue->setText(QApplication::translate("Field", "Penalty", Q_NULLPTR));
        refTimeoutBlue->setText(QApplication::translate("Field", "Timeout", Q_NULLPTR));
        refKickoffYellow_3->setText(QApplication::translate("Field", "Goal", Q_NULLPTR));
        refKickoffYellow->setText(QApplication::translate("Field", "Kickoff", Q_NULLPTR));
        refDirectYellow->setStyleSheet(QApplication::translate("Field", "background-color: rgb(255, 255, 0);", Q_NULLPTR));
        refDirectYellow->setText(QApplication::translate("Field", "Direct", Q_NULLPTR));
        refIndirectYellow->setStyleSheet(QApplication::translate("Field", "background-color: rgb(255, 255, 0);", Q_NULLPTR));
        refIndirectYellow->setText(QApplication::translate("Field", "Indirect", Q_NULLPTR));
        refPenaltyYellow->setStyleSheet(QApplication::translate("Field", "background-color: rgb(255, 255, 0);", Q_NULLPTR));
        refPenaltyYellow->setText(QApplication::translate("Field", "Penalty", Q_NULLPTR));
        refTimeoutYellow->setStyleSheet(QApplication::translate("Field", "background-color: rgb(255, 255, 0);", Q_NULLPTR));
        refTimeoutYellow->setText(QApplication::translate("Field", "Timeout", Q_NULLPTR));
        label_4->setText(QApplication::translate("Field", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">Yelow Team</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("Field", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">Blue Team</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Field", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:600;\">0</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Field", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:600;\">-</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("Field", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:600;\">0</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Field: public Ui_Field {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELD_H
