/********************************************************************************
** Form generated from reading UI file 'optionsform.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSFORM_H
#define UI_OPTIONSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OptionsForm
{
public:
    QPushButton *backButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *gameSettings;
    QPushButton *programSetting;
    QFrame *line;
    QCheckBox *autoStartMode;
    QCheckBox *fullscreenMode;
    QCheckBox *buttonIconMode;
    QCheckBox *defaultBackgroundMode;
    QLineEdit *wallpaperPath;
    QLineEdit *startPath;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QPushButton *saveButton;
    QComboBox *comboBoxStyles;

    void setupUi(QDialog *OptionsForm)
    {
        if (OptionsForm->objectName().isEmpty())
            OptionsForm->setObjectName(QString::fromUtf8("OptionsForm"));
        OptionsForm->resize(395, 241);
        backButton = new QPushButton(OptionsForm);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(109, 210, 91, 25));
        frame = new QFrame(OptionsForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(220, 10, 168, 95));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gameSettings = new QPushButton(frame);
        gameSettings->setObjectName(QString::fromUtf8("gameSettings"));
        gameSettings->setMinimumSize(QSize(144, 32));

        verticalLayout->addWidget(gameSettings);

        programSetting = new QPushButton(frame);
        programSetting->setObjectName(QString::fromUtf8("programSetting"));
        programSetting->setMinimumSize(QSize(144, 32));

        verticalLayout->addWidget(programSetting);

        line = new QFrame(OptionsForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(190, -30, 41, 331));
        line->setStyleSheet(QString::fromUtf8("color: red;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        autoStartMode = new QCheckBox(OptionsForm);
        autoStartMode->setObjectName(QString::fromUtf8("autoStartMode"));
        autoStartMode->setGeometry(QRect(10, 10, 181, 22));
        fullscreenMode = new QCheckBox(OptionsForm);
        fullscreenMode->setObjectName(QString::fromUtf8("fullscreenMode"));
        fullscreenMode->setGeometry(QRect(10, 30, 181, 22));
        buttonIconMode = new QCheckBox(OptionsForm);
        buttonIconMode->setObjectName(QString::fromUtf8("buttonIconMode"));
        buttonIconMode->setGeometry(QRect(10, 50, 181, 22));
        defaultBackgroundMode = new QCheckBox(OptionsForm);
        defaultBackgroundMode->setObjectName(QString::fromUtf8("defaultBackgroundMode"));
        defaultBackgroundMode->setGeometry(QRect(10, 70, 171, 22));
        defaultBackgroundMode->setChecked(true);
        wallpaperPath = new QLineEdit(OptionsForm);
        wallpaperPath->setObjectName(QString::fromUtf8("wallpaperPath"));
        wallpaperPath->setGeometry(QRect(10, 100, 151, 24));
        wallpaperPath->setReadOnly(true);
        startPath = new QLineEdit(OptionsForm);
        startPath->setObjectName(QString::fromUtf8("startPath"));
        startPath->setGeometry(QRect(10, 130, 151, 24));
        toolButton = new QToolButton(OptionsForm);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(170, 100, 28, 23));
        toolButton->setCheckable(false);
        toolButton_2 = new QToolButton(OptionsForm);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(170, 130, 28, 23));
        saveButton = new QPushButton(OptionsForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(10, 210, 91, 25));
        comboBoxStyles = new QComboBox(OptionsForm);
        comboBoxStyles->setObjectName(QString::fromUtf8("comboBoxStyles"));
        comboBoxStyles->setGeometry(QRect(10, 160, 191, 24));
        comboBoxStyles->setAutoFillBackground(false);
        comboBoxStyles->setStyleSheet(QString::fromUtf8(""));
        comboBoxStyles->setEditable(true);

        retranslateUi(OptionsForm);

        QMetaObject::connectSlotsByName(OptionsForm);
    } // setupUi

    void retranslateUi(QDialog *OptionsForm)
    {
        OptionsForm->setWindowTitle(QCoreApplication::translate("OptionsForm", "Dialog", nullptr));
        backButton->setText(QCoreApplication::translate("OptionsForm", "Back", nullptr));
        gameSettings->setText(QCoreApplication::translate("OptionsForm", "\320\230\320\263\321\200\321\203\320\273\321\214\320\272\320\270", nullptr));
        programSetting->setText(QCoreApplication::translate("OptionsForm", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\321\203\320\273\321\214\320\272\320\270", nullptr));
        autoStartMode->setText(QCoreApplication::translate("OptionsForm", "\320\220\320\262\321\202\320\276\320\267\320\260\320\277\321\203\321\201\320\272", nullptr));
        fullscreenMode->setText(QCoreApplication::translate("OptionsForm", "\320\235\320\260 \320\262\320\265\321\201\321\214 \321\215\320\272\321\200\320\260\320\275", nullptr));
        buttonIconMode->setText(QCoreApplication::translate("OptionsForm", "\320\230\320\272\320\276\320\275\320\272\320\270 \320\272\320\275\320\276\320\277\320\276\320\272", nullptr));
        defaultBackgroundMode->setText(QCoreApplication::translate("OptionsForm", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\213\320\265 \320\276\320\261\320\276\320\270", nullptr));
        wallpaperPath->setInputMask(QString());
        wallpaperPath->setPlaceholderText(QCoreApplication::translate("OptionsForm", "\320\244\320\276\320\275\320\276\320\262\320\276\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        startPath->setInputMask(QString());
        startPath->setPlaceholderText(QCoreApplication::translate("OptionsForm", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\270\321\217", nullptr));
        toolButton->setText(QCoreApplication::translate("OptionsForm", "...", nullptr));
        toolButton_2->setText(QCoreApplication::translate("OptionsForm", "...", nullptr));
        saveButton->setText(QCoreApplication::translate("OptionsForm", "Save", nullptr));
        comboBoxStyles->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class OptionsForm: public Ui_OptionsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSFORM_H
