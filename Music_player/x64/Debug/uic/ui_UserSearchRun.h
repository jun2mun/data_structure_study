/********************************************************************************
** Form generated from reading UI file 'UserSearchRun.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSEARCHRUN_H
#define UI_USERSEARCHRUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserSearchRun
{
public:
    QWidget *layoutWidget_3;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QPushButton *UserSearchRun_quit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QPushButton *SearchById_BinaryS;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QPushButton *SearchByArtist;
    QWidget *tab_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QPushButton *SearchByGenre;
    QLabel *Default_label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        layoutWidget_3 = new QWidget(Dialog);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 240, 351, 33));
        _2 = new QHBoxLayout(layoutWidget_3);
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        UserSearchRun_quit = new QPushButton(layoutWidget_3);
        UserSearchRun_quit->setObjectName(QStringLiteral("UserSearchRun_quit"));

        _2->addWidget(UserSearchRun_quit);

        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 60, 281, 161));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 251, 48));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_7->addWidget(lineEdit_2);

        SearchById_BinaryS = new QPushButton(layoutWidget);
        SearchById_BinaryS->setObjectName(QStringLiteral("SearchById_BinaryS"));

        horizontalLayout_7->addWidget(SearchById_BinaryS);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 40, 251, 48));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_9->addWidget(lineEdit_3);

        SearchByArtist = new QPushButton(layoutWidget_2);
        SearchByArtist->setObjectName(QStringLiteral("SearchByArtist"));

        horizontalLayout_9->addWidget(SearchByArtist);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        layoutWidget_5 = new QWidget(tab_3);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 40, 251, 48));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_4 = new QLineEdit(layoutWidget_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_10->addWidget(lineEdit_4);

        SearchByGenre = new QPushButton(layoutWidget_5);
        SearchByGenre->setObjectName(QStringLiteral("SearchByGenre"));

        horizontalLayout_10->addWidget(SearchByGenre);

        tabWidget->addTab(tab_3, QString());
        Default_label = new QLabel(Dialog);
        Default_label->setObjectName(QStringLiteral("Default_label"));
        Default_label->setGeometry(QRect(350, 140, 41, 9));

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        UserSearchRun_quit->setText(QApplication::translate("Dialog", "Quit", nullptr));
        label_7->setText(QApplication::translate("Dialog", "1.Search by id", nullptr));
        SearchById_BinaryS->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "Tab 1", nullptr));
        label_9->setText(QApplication::translate("Dialog", "2.Search by Artist", nullptr));
        SearchByArtist->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "Tab 2", nullptr));
        label_10->setText(QApplication::translate("Dialog", "3.Search by Genre", nullptr));
        SearchByGenre->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Dialog", "\354\252\275", nullptr));
        Default_label->setText(QApplication::translate("Dialog", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserSearchRun : public Ui_UserSearchRun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSEARCHRUN_H
