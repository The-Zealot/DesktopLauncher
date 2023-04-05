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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *signatureBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *versionLabel;
    QLabel *label;
    QScrollArea *workspacePanel;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QFrame *boxNav;
    QVBoxLayout *verticalLayout;
    QPushButton *gameButton;
    QPushButton *programButton;
    QPushButton *settingButton;
    QFrame *boxMenu;
    QVBoxLayout *verticalLayout_2;
    QPushButton *fullScreenButton;
    QPushButton *closeButton;
    QPushButton *fileManagerButton;
    QPushButton *dirDlgButton;
    QPushButton *clearButton;
    QPushButton *trashButton;
    QPushButton *updateButton;

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
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
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


        gridLayout->addWidget(signatureBox, 5, 3, 1, 1);

        workspacePanel = new QScrollArea(centralwidget);
        workspacePanel->setObjectName(QString::fromUtf8("workspacePanel"));
        workspacePanel->setFrameShape(QFrame::NoFrame);
        workspacePanel->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 750, 400));
        workspacePanel->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(workspacePanel, 1, 0, 5, 2);

        verticalSpacer = new QSpacerItem(20, 166, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 3, 1, 1);

        boxNav = new QFrame(centralwidget);
        boxNav->setObjectName(QString::fromUtf8("boxNav"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(boxNav->sizePolicy().hasHeightForWidth());
        boxNav->setSizePolicy(sizePolicy1);
        boxNav->setFrameShape(QFrame::StyledPanel);
        boxNav->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(boxNav);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gameButton = new QPushButton(boxNav);
        gameButton->setObjectName(QString::fromUtf8("gameButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gameButton->sizePolicy().hasHeightForWidth());
        gameButton->setSizePolicy(sizePolicy2);
        gameButton->setMinimumSize(QSize(128, 28));
        gameButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(gameButton);

        programButton = new QPushButton(boxNav);
        programButton->setObjectName(QString::fromUtf8("programButton"));
        sizePolicy2.setHeightForWidth(programButton->sizePolicy().hasHeightForWidth());
        programButton->setSizePolicy(sizePolicy2);
        programButton->setMinimumSize(QSize(128, 28));

        verticalLayout->addWidget(programButton);

        settingButton = new QPushButton(boxNav);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        sizePolicy2.setHeightForWidth(settingButton->sizePolicy().hasHeightForWidth());
        settingButton->setSizePolicy(sizePolicy2);
        settingButton->setMinimumSize(QSize(128, 28));
        settingButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(settingButton);


        gridLayout->addWidget(boxNav, 0, 0, 1, 1);

        boxMenu = new QFrame(centralwidget);
        boxMenu->setObjectName(QString::fromUtf8("boxMenu"));
        sizePolicy1.setHeightForWidth(boxMenu->sizePolicy().hasHeightForWidth());
        boxMenu->setSizePolicy(sizePolicy1);
        boxMenu->setFrameShape(QFrame::StyledPanel);
        boxMenu->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(boxMenu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fullScreenButton = new QPushButton(boxMenu);
        fullScreenButton->setObjectName(QString::fromUtf8("fullScreenButton"));
        sizePolicy2.setHeightForWidth(fullScreenButton->sizePolicy().hasHeightForWidth());
        fullScreenButton->setSizePolicy(sizePolicy2);
        fullScreenButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(fullScreenButton);

        closeButton = new QPushButton(boxMenu);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        sizePolicy2.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy2);
        closeButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(closeButton);

        fileManagerButton = new QPushButton(boxMenu);
        fileManagerButton->setObjectName(QString::fromUtf8("fileManagerButton"));
        sizePolicy2.setHeightForWidth(fileManagerButton->sizePolicy().hasHeightForWidth());
        fileManagerButton->setSizePolicy(sizePolicy2);
        fileManagerButton->setMinimumSize(QSize(144, 32));
        fileManagerButton->setBaseSize(QSize(144, 32));

        verticalLayout_2->addWidget(fileManagerButton);

        dirDlgButton = new QPushButton(boxMenu);
        dirDlgButton->setObjectName(QString::fromUtf8("dirDlgButton"));
        sizePolicy2.setHeightForWidth(dirDlgButton->sizePolicy().hasHeightForWidth());
        dirDlgButton->setSizePolicy(sizePolicy2);
        dirDlgButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(dirDlgButton);

        clearButton = new QPushButton(boxMenu);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(clearButton);

        trashButton = new QPushButton(boxMenu);
        trashButton->setObjectName(QString::fromUtf8("trashButton"));
        sizePolicy2.setHeightForWidth(trashButton->sizePolicy().hasHeightForWidth());
        trashButton->setSizePolicy(sizePolicy2);
        trashButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(trashButton);

        updateButton = new QPushButton(boxMenu);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        sizePolicy2.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy2);
        updateButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(updateButton);


        gridLayout->addWidget(boxMenu, 0, 3, 3, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        versionLabel->setText(QCoreApplication::translate("MainWindow", "<p>version 0.0.0.0</p>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "by Zealot", nullptr));
        gameButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\320\273\320\270\320\275\320\260", nullptr));
        programButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203\320\273\321\214\320\272\320\270", nullptr));
        settingButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        fullScreenButton->setText(QCoreApplication::translate("MainWindow", "FullScreen", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        fileManagerButton->setText(QCoreApplication::translate("MainWindow", "FileManager", nullptr));
        dirDlgButton->setText(QCoreApplication::translate("MainWindow", "Choose Folder", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        trashButton->setText(QCoreApplication::translate("MainWindow", "Recycle.Bin", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Update Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
