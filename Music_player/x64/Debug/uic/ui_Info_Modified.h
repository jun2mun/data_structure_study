/********************************************************************************
** Form generated from reading UI file 'Info_Modified.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_MODIFIED_H
#define UI_INFO_MODIFIED_H

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

class Ui_Info_Modified
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *AddMusic;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *DeleteMusic;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *ReplaceMusic;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *SearchTypeRun;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *DisplayAllMusic;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *MakeEmpty;
    QWidget *layoutWidget;
    QHBoxLayout *_3;
    QSpacerItem *spacerItem;
    QPushButton *Info_Modified_quit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 40, 271, 181));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 20, 272, 156));
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

        AddMusic = new QPushButton(layoutWidget_2);
        AddMusic->setObjectName(QStringLiteral("AddMusic"));

        horizontalLayout_11->addWidget(AddMusic);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_12->addWidget(label_12);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        DeleteMusic = new QPushButton(layoutWidget_2);
        DeleteMusic->setObjectName(QStringLiteral("DeleteMusic"));

        horizontalLayout_12->addWidget(DeleteMusic);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_13->addWidget(label_13);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);

        ReplaceMusic = new QPushButton(layoutWidget_2);
        ReplaceMusic->setObjectName(QStringLiteral("ReplaceMusic"));

        horizontalLayout_13->addWidget(ReplaceMusic);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_16->addWidget(label_16);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_17);

        SearchTypeRun = new QPushButton(layoutWidget_2);
        SearchTypeRun->setObjectName(QStringLiteral("SearchTypeRun"));

        horizontalLayout_16->addWidget(SearchTypeRun);


        verticalLayout_5->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_17->addWidget(label_17);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_18);

        DisplayAllMusic = new QPushButton(layoutWidget_2);
        DisplayAllMusic->setObjectName(QStringLiteral("DisplayAllMusic"));

        horizontalLayout_17->addWidget(DisplayAllMusic);


        verticalLayout_5->addLayout(horizontalLayout_17);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_14->addWidget(label_14);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_15);

        MakeEmpty = new QPushButton(layoutWidget_2);
        MakeEmpty->setObjectName(QStringLiteral("MakeEmpty"));

        horizontalLayout_14->addWidget(MakeEmpty);


        verticalLayout_5->addLayout(horizontalLayout_14);


        verticalLayout_4->addLayout(verticalLayout_5);

        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 240, 351, 33));
        _3 = new QHBoxLayout(layoutWidget);
        _3->setSpacing(6);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem);

        Info_Modified_quit = new QPushButton(layoutWidget);
        Info_Modified_quit->setObjectName(QStringLiteral("Info_Modified_quit"));

        _3->addWidget(Info_Modified_quit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "\354\210\230\354\240\225 \353\246\254\354\212\244\355\212\270", nullptr));
        label_11->setText(QApplication::translate("Dialog", "1.Add music", nullptr));
        AddMusic->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_12->setText(QApplication::translate("Dialog", "2.Delete music", nullptr));
        DeleteMusic->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_13->setText(QApplication::translate("Dialog", "3.Replace music", nullptr));
        ReplaceMusic->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_16->setText(QApplication::translate("Dialog", "4.Search music", nullptr));
        SearchTypeRun->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_17->setText(QApplication::translate("Dialog", "5. Print all on screen", nullptr));
        DisplayAllMusic->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        label_14->setText(QApplication::translate("Dialog", "4.Delete all music", nullptr));
        MakeEmpty->setText(QApplication::translate("Dialog", "PushButton", nullptr));
        Info_Modified_quit->setText(QApplication::translate("Dialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info_Modified : public Ui_Info_Modified {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_MODIFIED_H
