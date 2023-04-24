#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include <QXmlStreamWriter>
#include <QListWidgetItem>
#include <QFile>
#include <QSet>

#include "vlink.h"

namespace Ui {
class SettingDialog;
}

class SettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingDialog(QList<VLink*>* links, QWidget *parent = nullptr);
    ~SettingDialog();

private slots:
    void on_backButton_clicked();

    void on_SettingDialog_finished(int result);

    void on_browseButton_clicked();

    void on_saveButton_clicked();

    void on_list_itemClicked(QListWidgetItem *item);

public:
    static void writeToXml(const QString fileName, QList<VLink*>* links, QSet<QString> &dirs);
    static void readFromXml(const QString fileName, QList<VLink*>* links, QSet<QString> &dirs);

private:
    void updateForm();

    ///// version read /////

    static void read_v1(QXmlStreamReader &readerm, QList<VLink*>* links, QSet<QString> &dirs);                 // struct version 1.x

private:
    Ui::SettingDialog *ui;

//    QXmlStreamWriter* _sWriter;
//    QXmlStreamReader* _sReader;
    QList<VLink*>* _links;
    QSet<QString> _dirs;
};

#endif // SETTINGDIALOG_H
