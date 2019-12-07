/********************************************************************************
** Form generated from reading UI file 'SongInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGINFO_H
#define UI_SONGINFO_H

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

class Ui_SongInfo
{
public:
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *UserSearchTypeRun;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *DisplayAllMusic;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *PlaylistRun;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *WriteUserDatatoFile;
    QWidget *layoutWidget_3;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem;
    QPushButton *Main_Quit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(402, 323);
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 40, 271, 181));
        layoutWidget_4 = new QWidget(groupBox_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(40, 20, 178, 156));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget_4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        UserSearchTypeRun = new QPushButton(layoutWidget_4);
        UserSearchTypeRun->setObjectName(QStringLiteral("UserSearchTypeRun"));

        horizontalLayout->addWidget(UserSearchTypeRun);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        DisplayAllMusic = new QPushButton(layoutWidget_4);
        DisplayAllMusic->setObjectName(QStringLiteral("DisplayAllMusic"));

        horizontalLayout_2->addWidget(DisplayAllMusic);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        PlaylistRun = new QPushButton(layoutWidget_4);
        PlaylistRun->setObjectName(QStringLiteral("PlaylistRun"));

        horizontalLayout_3->addWidget(PlaylistRun);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        WriteUserDatatoFile = new QPushButton(layoutWidget_4);
        WriteUserDatatoFile->setObjectName(QStringLiteral("WriteUserDatatoFile"));

        horizontalLayout_5->addWidget(WriteUserDatatoFile);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        layoutWidget_3 = new QWidget(Dialog);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 240, 351, 33));
        _2 = new QHBoxLayout(layoutWidget_3);
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        Main_Quit = new QPushButton(layoutWidget_3);
        Main_Quit->setObjectName(QStringLiteral("Main_Quit"));

        _2->addWidget(Main_Quit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\354\235\214\354\233\220 \353\247\210\353\262\225\354\202\254", nullptr));
        label->setText(QApplication::translate("Dialog", "1.\354\235\214\354\225\205 \352\262\200\354\203\211\355\225\230\352\270\260", nullptr));
        UserSearchTypeRun->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_2->setText(QApplication::translate("Dialog", "2.\353\252\250\353\223\240 \354\235\214\354\225\205 \354\266\234\353\240\245\355\225\230\352\270\260", nullptr));
        DisplayAllMusic->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_3->setText(QApplication::translate("Dialog", "3. \355\224\214\353\240\210\354\235\264\353\246\254\354\212\244\355\212\270\353\241\234 \352\260\200\352\270\260", nullptr));
        PlaylistRun->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_5->setText(QApplication::translate("Dialog", "5. \354\240\225\353\263\264 \354\240\200\354\236\245", nullptr));
        WriteUserDatatoFile->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        Main_Quit->setText(QApplication::translate("Dialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SongInfo: public Ui_SongInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGINFO_H
