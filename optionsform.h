#ifndef OPTIONSFORM_H
#define OPTIONSFORM_H

#include <QDialog>
#include <QFile>
#include <QDir>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonDocument>

#include "settingdialog.h"
#include "vlink.h"

namespace Ui {
class OptionsForm;
}

class OptionsForm : public QDialog
{
    Q_OBJECT

public:
    explicit OptionsForm(QWidget *parent = nullptr);
    ~OptionsForm();

    void setLinkList(QList<VLink*> &links);

private slots:

    void on_backButton_clicked();

    void on_OptionsForm_finished(int result);

    void on_gameSettings_clicked();

    void on_programSetting_clicked();

    void on_saveButton_clicked();

private:
    void loadStyles();

private:
    Ui::OptionsForm *ui;
    SettingDialog* settingDialog;

    QList<VLink*>* _links;

    friend class MainWindow;
};

#endif // OPTIONSFORM_H
