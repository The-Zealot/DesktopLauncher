#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include <QXmlStreamWriter>
#include <QFile>

#include "filecontainer.h"
#include "vlink.h"

namespace Ui {
class SettingDialog;
}

class SettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingDialog(QWidget *parent = nullptr);
    ~SettingDialog();

private slots:
    void on_backButton_clicked();

    void on_SettingDialog_finished(int result);

    void on_browseButton_clicked();

    void on_saveButton_clicked();

private:
    void writeToXml(const QString fileName);
    void readFromXml(const QString fileName);

    ///// version read /////

    void read_v1(QXmlStreamReader &reader);                 // struct version 1.x

private:
    Ui::SettingDialog *ui;

    QXmlStreamWriter* _sWriter;
    QXmlStreamReader* _sReader;
    QList<VLink> _links;
};

#endif // SETTINGDIALOG_H
