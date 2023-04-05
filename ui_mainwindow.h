/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *boxMenu;
    QVBoxLayout *verticalLayout_2;
    QPushButton *fullScreenButton;
    QPushButton *closeButton;
    QPushButton *fileManagerButton;
    QPushButton *dirDlgButton;
    QPushButton *clearButton;
    QPushButton *trashButton;
    QPushButton *updateButton;
    QFrame *signatureBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *versionLabel;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFrame *boxNav;
    QVBoxLayout *verticalLayout;
    QPushButton *gameButton;
    QPushButton *programButton;
    QPushButton *settingButton;
    QFrame *workspacePanel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(947, 551);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        boxMenu = new QFrame(centralwidget);
        boxMenu->setObjectName(QString::fromUtf8("boxMenu"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(boxMenu->sizePolicy().hasHeightForWidth());
        boxMenu->setSizePolicy(sizePolicy);
        boxMenu->setFrameShape(QFrame::StyledPanel);
        boxMenu->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(boxMenu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fullScreenButton = new QPushButton(boxMenu);
        fullScreenButton->setObjectName(QString::fromUtf8("fullScreenButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fullScreenButton->sizePolicy().hasHeightForWidth());
        fullScreenButton->setSizePolicy(sizePolicy1);
        fullScreenButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(fullScreenButton);

        closeButton = new QPushButton(boxMenu);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        sizePolicy1.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy1);
        closeButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(closeButton);

        fileManagerButton = new QPushButton(boxMenu);
        fileManagerButton->setObjectName(QString::fromUtf8("fileManagerButton"));
        sizePolicy1.setHeightForWidth(fileManagerButton->sizePolicy().hasHeightForWidth());
        fileManagerButton->setSizePolicy(sizePolicy1);
        fileManagerButton->setMinimumSize(QSize(144, 32));
        fileManagerButton->setBaseSize(QSize(144, 32));

        verticalLayout_2->addWidget(fileManagerButton);

        dirDlgButton = new QPushButton(boxMenu);
        dirDlgButton->setObjectName(QString::fromUtf8("dirDlgButton"));
        sizePolicy1.setHeightForWidth(dirDlgButton->sizePolicy().hasHeightForWidth());
        dirDlgButton->setSizePolicy(sizePolicy1);
        dirDlgButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(dirDlgButton);

        clearButton = new QPushButton(boxMenu);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        sizePolicy1.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy1);
        clearButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(clearButton);

        trashButton = new QPushButton(boxMenu);
        trashButton->setObjectName(QString::fromUtf8("trashButton"));
        sizePolicy1.setHeightForWidth(trashButton->sizePolicy().hasHeightForWidth());
        trashButton->setSizePolicy(sizePolicy1);
        trashButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(trashButton);

        updateButton = new QPushButton(boxMenu);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        sizePolicy1.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy1);
        updateButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(updateButton);


        gridLayout->addWidget(boxMenu, 0, 2, 2, 1);

        signatureBox = new QFrame(centralwidget);
        signatureBox->setObjectName(QString::fromUtf8("signatureBox"));
        signatureBox->setFrameShape(QFrame::StyledPanel);
        signatureBox->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(signatureBox);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        versionLabel = new QLabel(signatureBox);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setLayoutDirection(Qt::LeftToRight);
        versionLabel->setAutoFillBackground(false);
        versionLabel->setMidLineWidth(1);
        versionLabel->setTextFormat(Qt::MarkdownText);
        versionLabel->setScaledContents(true);
        versionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(versionLabel);

        label = new QLabel(signatureBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setWordWrap(false);
        label->setMargin(0);
        label->setIndent(1);

        verticalLayout_3->addWidget(label);


        gridLayout->addWidget(signatureBox, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 166, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        boxNav = new QFrame(centralwidget);
        boxNav->setObjectName(QString::fromUtf8("boxNav"));
        sizePolicy.setHeightForWidth(boxNav->sizePolicy().hasHeightForWidth());
        boxNav->setSizePolicy(sizePolicy);
        boxNav->setFrameShape(QFrame::StyledPanel);
        boxNav->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(boxNav);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gameButton = new QPushButton(boxNav);
        gameButton->setObjectName(QString::fromUtf8("gameButton"));
        sizePolicy1.setHeightForWidth(gameButton->sizePolicy().hasHeightForWidth());
        gameButton->setSizePolicy(sizePolicy1);
        gameButton->setMinimumSize(QSize(128, 28));
        gameButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(gameButton);

        programButton = new QPushButton(boxNav);
        programButton->setObjectName(QString::fromUtf8("programButton"));
        sizePolicy1.setHeightForWidth(programButton->sizePolicy().hasHeightForWidth());
        programButton->setSizePolicy(sizePolicy1);
        programButton->setMinimumSize(QSize(128, 28));

        verticalLayout->addWidget(programButton);

        settingButton = new QPushButton(boxNav);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        sizePolicy1.setHeightForWidth(settingButton->sizePolicy().hasHeightForWidth());
        settingButton->setSizePolicy(sizePolicy1);
        settingButton->setMinimumSize(QSize(128, 28));
        settingButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(settingButton);


        gridLayout->addWidget(boxNav, 0, 0, 1, 1);

        workspacePanel = new QFrame(centralwidget);
        workspacePanel->setObjectName(QString::fromUtf8("workspacePanel"));
        workspacePanel->setFrameShape(QFrame::StyledPanel);
        workspacePanel->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(workspacePanel, 1, 0, 3, 2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        fullScreenButton->setText(QCoreApplication::translate("MainWindow", "FullScreen", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        fileManagerButton->setText(QCoreApplication::translate("MainWindow", "FileManager", nullptr));
        dirDlgButton->setText(QCoreApplication::translate("MainWindow", "Choose Folder", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        trashButton->setText(QCoreApplication::translate("MainWindow", "Recycle.Bin", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Update Form", nullptr));
        versionLabel->setText(QCoreApplication::translate("MainWindow", "<p>version 0.0.0.0</p>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "by Zealot", nullptr));
        gameButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\320\273\320\270\320\275\320\260", nullptr));
        programButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203\320\273\321\214\320\272\320\270", nullptr));
        settingButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
