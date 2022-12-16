/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLineEdit *pathEdit;
    QPushButton *saveButton;
    QComboBox *comboBox;
    QPushButton *backButton;
    QToolButton *browseButton;
    QLineEdit *nameEdit;
    QListWidget *list;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(441, 183);
        SettingDialog->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(SettingDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pathEdit = new QLineEdit(SettingDialog);
        pathEdit->setObjectName(QString::fromUtf8("pathEdit"));

        gridLayout->addWidget(pathEdit, 0, 0, 1, 1);

        saveButton = new QPushButton(SettingDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(saveButton, 3, 0, 1, 2);

        comboBox = new QComboBox(SettingDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(true);

        gridLayout->addWidget(comboBox, 2, 0, 1, 2);

        backButton = new QPushButton(SettingDialog);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(backButton, 4, 0, 1, 2);

        browseButton = new QToolButton(SettingDialog);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        gridLayout->addWidget(browseButton, 0, 1, 1, 1);

        nameEdit = new QLineEdit(SettingDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setDragEnabled(true);

        gridLayout->addWidget(nameEdit, 1, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout);

        list = new QListWidget(SettingDialog);
        list->setObjectName(QString::fromUtf8("list"));

        horizontalLayout->addWidget(list);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QCoreApplication::translate("SettingDialog", "Dialog", nullptr));
        saveButton->setText(QCoreApplication::translate("SettingDialog", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        comboBox->setCurrentText(QString());
        backButton->setText(QCoreApplication::translate("SettingDialog", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        browseButton->setText(QCoreApplication::translate("SettingDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
