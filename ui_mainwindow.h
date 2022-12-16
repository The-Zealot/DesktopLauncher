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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *testImg;
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
    QWidget *movePanel;
    QFrame *signatureBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *versionLabel;
    QLabel *label;
    QPushButton *pushButton;
    QFrame *workspacePanel;
    QGridLayout *gridLayout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(952, 612);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        testImg = new QLabel(centralwidget);
        testImg->setObjectName(QString::fromUtf8("testImg"));
        testImg->setGeometry(QRect(20, 550, 168, 16));
        testImg->setAutoFillBackground(false);
        testImg->setScaledContents(true);
        boxNav = new QFrame(centralwidget);
        boxNav->setObjectName(QString::fromUtf8("boxNav"));
        boxNav->setGeometry(QRect(11, 11, 152, 122));
        boxNav->setFrameShape(QFrame::StyledPanel);
        boxNav->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(boxNav);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gameButton = new QPushButton(boxNav);
        gameButton->setObjectName(QString::fromUtf8("gameButton"));
        gameButton->setMinimumSize(QSize(128, 28));
        gameButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(gameButton);

        programButton = new QPushButton(boxNav);
        programButton->setObjectName(QString::fromUtf8("programButton"));
        programButton->setMinimumSize(QSize(128, 28));

        verticalLayout->addWidget(programButton);

        settingButton = new QPushButton(boxNav);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setMinimumSize(QSize(128, 28));
        settingButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(settingButton);

        boxMenu = new QFrame(centralwidget);
        boxMenu->setObjectName(QString::fromUtf8("boxMenu"));
        boxMenu->setGeometry(QRect(770, 10, 168, 281));
        boxMenu->setFrameShape(QFrame::StyledPanel);
        boxMenu->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(boxMenu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fullScreenButton = new QPushButton(boxMenu);
        fullScreenButton->setObjectName(QString::fromUtf8("fullScreenButton"));
        fullScreenButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(fullScreenButton);

        closeButton = new QPushButton(boxMenu);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(closeButton);

        fileManagerButton = new QPushButton(boxMenu);
        fileManagerButton->setObjectName(QString::fromUtf8("fileManagerButton"));
        fileManagerButton->setMinimumSize(QSize(144, 32));
        fileManagerButton->setBaseSize(QSize(144, 32));

        verticalLayout_2->addWidget(fileManagerButton);

        dirDlgButton = new QPushButton(boxMenu);
        dirDlgButton->setObjectName(QString::fromUtf8("dirDlgButton"));
        dirDlgButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(dirDlgButton);

        clearButton = new QPushButton(boxMenu);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(clearButton);

        trashButton = new QPushButton(boxMenu);
        trashButton->setObjectName(QString::fromUtf8("trashButton"));
        trashButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(trashButton);

        updateButton = new QPushButton(boxMenu);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setMinimumSize(QSize(144, 32));

        verticalLayout_2->addWidget(updateButton);

        movePanel = new QWidget(centralwidget);
        movePanel->setObjectName(QString::fromUtf8("movePanel"));
        movePanel->setGeometry(QRect(200, -40, 521, 61));
        movePanel->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"border-color: white;\n"
"border-width: 1px;\n"
"border-style: inset;\n"
"background: #303030;"));
        signatureBox = new QFrame(centralwidget);
        signatureBox->setObjectName(QString::fromUtf8("signatureBox"));
        signatureBox->setGeometry(QRect(830, 540, 109, 61));
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

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 40, 80, 25));
        workspacePanel = new QFrame(centralwidget);
        workspacePanel->setObjectName(QString::fromUtf8("workspacePanel"));
        workspacePanel->setGeometry(QRect(10, 140, 751, 401));
        workspacePanel->setFrameShape(QFrame::StyledPanel);
        workspacePanel->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(workspacePanel);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        testImg->setText(QCoreApplication::translate("MainWindow", "Wallpaper_Image", nullptr));
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
        versionLabel->setText(QCoreApplication::translate("MainWindow", "<p>version 0.0.0.0</p>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "by Zealot", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "TODO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
