#include "optionsform.h"
#include "ui_optionsform.h"

OptionsForm::OptionsForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OptionsForm)
{
    ui->setupUi(this);

    loadStyles();
}

OptionsForm::~OptionsForm()
{
    if (ui->defaultBackgroundMode->isChecked())
    {
        ui->wallpaperPath->setReadOnly(true);
        ui->toolButton->setEnabled(false);
    }
    delete ui;
}


void OptionsForm::on_backButton_clicked()
{
    this->parentWidget()->show();
    delete this;
}


void OptionsForm::on_OptionsForm_finished(int result)
{
    delete this;
}


void OptionsForm::on_gameSettings_clicked()
{
    settingDialog = new SettingDialog(this);
    settingDialog->show();
}


void OptionsForm::on_programSetting_clicked()
{

}

void OptionsForm::on_saveButton_clicked()
{
    QJsonObject jObject;
    jObject.insert("autorun", ui->autoStartMode->isChecked());
    jObject.insert("fullscreen", ui->fullscreenMode->isChecked());
    jObject.insert("buttonIcon", ui->buttonIconMode->isChecked());
    jObject.insert("defaultBackground", ui->defaultBackgroundMode->isChecked());
    jObject.insert("backgroundImage", ui->wallpaperPath->text());
    jObject.insert("startDirection", ui->startPath->text());
    jObject.insert("style", ui->comboBoxStyles->currentText());

    QJsonDocument jDoc(jObject);
    QFile config("./config.json");
    config.open(QIODevice::WriteOnly);
    config.write(jDoc.toJson());
    config.close();
}

void OptionsForm::loadStyles()
{
    QDir dir(QDir::currentPath() + "/styles");
    QStringList list = dir.entryList(QStringList() << "*.css", QDir::Files);

    for (auto iter : list)
    {
        ui->comboBoxStyles->addItem(iter.replace(".css", ""));
    }
}


