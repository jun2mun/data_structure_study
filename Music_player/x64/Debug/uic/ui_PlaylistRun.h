/********************************************************************************
** Form generated from reading UI file 'PlaylistRun.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTRUN_H
#define UI_PLAYLISTRUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlaylistRun
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *AddToPlayList;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *PlayIOAddTime;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *PlayIOFreq;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *DeleteFrPlayList;
    QWidget *layoutWidget;
    QHBoxLayout *_3;
    QSpacerItem *spacerItem;
    QPushButton *playlistrun_quit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 30, 271, 181));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 20, 178, 156));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_11->addWidget(label_11);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);

        AddToPlayList = new QPushButton(layoutWidget_2);
        AddToPlayList->setObjectName(QStringLiteral("AddToPlayList"));

        horizontalLayout_11->addWidget(AddToPlayList);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_12->addWidget(label_12);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        PlayIOAddTime = new QPushButton(layoutWidget_2);
        PlayIOAddTime->setObjectName(QStringLiteral("PlayIOAddTime"));

        horizontalLayout_12->addWidget(PlayIOAddTime);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_13->addWidget(label_13);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);

        PlayIOFreq = new QPushButton(layoutWidget_2);
        PlayIOFreq->setObjectName(QStringLiteral("PlayIOFreq"));

        horizontalLayout_13->addWidget(PlayIOFreq);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_14->addWidget(label_14);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_15);

        DeleteFrPlayList = new QPushButton(layoutWidget_2);
        DeleteFrPlayList->setObjectName(QStringLiteral("DeleteFrPlayList"));

        horizontalLayout_14->addWidget(DeleteFrPlayList);


        verticalLayout_5->addLayout(horizontalLayout_14);


        verticalLayout_4->addLayout(verticalLayout_5);

        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 230, 351, 33));
        _3 = new QHBoxLayout(layoutWidget);
        _3->setSpacing(6);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem);

        playlistrun_quit = new QPushButton(layoutWidget);
        playlistrun_quit->setObjectName(QStringLiteral("playlistrun_quit"));

        _3->addWidget(playlistrun_quit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "\355\224\214\353\240\210\354\235\264\353\246\254\354\212\244\355\212\270", nullptr));
        label_11->setText(QApplication::translate("Dialog", "1.\355\224\214\353\240\210\354\235\264\353\246\254\354\212\244\355\212\270 \354\235\214\354\225\205 \354\266\224\352\260\200", nullptr));
        AddToPlayList->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_12->setText(QApplication::translate("Dialog", "2.\354\266\224\352\260\200\355\225\234 \354\210\234\354\234\274\353\241\234 \354\236\254\354\203\235", nullptr));
        PlayIOAddTime->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_13->setText(QApplication::translate("Dialog", "3.\354\236\220\354\243\274 \354\236\254\354\203\235\355\225\234 \354\210\234\354\234\274\353\241\234 \354\236\254\354\203\235", nullptr));
        PlayIOFreq->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_14->setText(QApplication::translate("Dialog", "4.\355\224\214\353\240\210\354\235\264\353\246\254\354\212\244\355\212\270 \354\235\214\354\225\205 \354\202\255\354\240\234", nullptr));
        DeleteFrPlayList->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        playlistrun_quit->setText(QApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaylistRun: public Ui_PlaylistRun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTRUN_H
