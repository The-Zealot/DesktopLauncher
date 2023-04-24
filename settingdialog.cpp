#include "settingdialog.h"
#include "ui_settingdialog.h"

#include <QFileDialog>
#include <QMessageBox>

SettingDialog::SettingDialog(QList<VLink*>* links, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());

    _links = links;

    readFromXml("./xml/template.xml");

    updateForm();
}

SettingDialog::~SettingDialog()
{
    delete ui;
}

void SettingDialog::on_backButton_clicked()
{
    delete this;
}


void SettingDialog::on_SettingDialog_finished(int result)
{
    delete this;
}


void SettingDialog::on_browseButton_clicked()
{
    QFileDialog* fileDialog = new QFileDialog(this);
    ui->pathEdit->setText(fileDialog->getOpenFileName(this, "Выбор файла"));

    delete fileDialog;
}


void SettingDialog::on_saveButton_clicked()
{
    VLink* newLink = new VLink;
    newLink->name    = ui->nameEdit->text();
    newLink->path    = ui->pathEdit->text();
    newLink->dirName = ui->comboBox->currentText();
    _links->append(newLink);
    _dirs.insert(ui->comboBox->currentText());

    writeToXml("./xml/template.xml");

    updateForm();
}

void SettingDialog::writeToXml(const QString fileName)
{
    QFile file(fileName);
    file.open(QIODevice::WriteOnly);
    QXmlStreamWriter sWriter(&file);

    sWriter.setAutoFormatting(true);
    sWriter.writeStartDocument("1.0");
    sWriter.writeStartElement("struct");
    sWriter.writeAttribute("version", "1.2");

    for (auto & iter : _dirs)
    {
        sWriter.writeStartElement("dir");
        sWriter.writeAttribute("name", iter);
        for (auto & it : *_links)
        {
            if (it->dirName == iter)
            {
                sWriter.writeStartElement("link");
                sWriter.writeAttribute("path", it->path);
                sWriter.writeAttribute("default", QVariant(it->isDefaultIcon).toString());
                sWriter.writeAttribute("icon", it->icon);
                sWriter.writeCharacters(it->name);
                sWriter.writeEndElement();
            }
        }
        sWriter.writeEndElement();
    }
    sWriter.writeEndElement();
    sWriter.writeEndDocument();

    file.close();
}

void SettingDialog::readFromXml(const QString fileName)
{
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QXmlStreamReader sReader(&file);
    read_v1(sReader);
    file.close();

        /* if (sReader.isStartElement())
        {
            if (sReader.name().toString() == "struct")
            {
                QString version = sReader.attributes().at(0).value().toString();
                qDebug() << "Strutcure version: " << version;

                if (version == "1.2")
                {
                    read_v1(sReader);
                }
                else
                {
                    qDebug() << "Unknown file structure version.";
                    qDebug() << "Can't read this file.";
                }
            }
        }
*/
}

void SettingDialog::read_v1(QXmlStreamReader &sReader)
{
    QString currentDir;

    while (!sReader.atEnd() and !sReader.hasError())
    {
        sReader.readNext();
        if (sReader.isStartElement())
        {
            if (sReader.name().toString() == "dir")
            {
                currentDir = sReader.attributes().value("name").toString();
                _dirs.insert(currentDir);
                continue;
            }
            if (sReader.name().toString() == "link")
            {
                VLink* currentLink = new VLink;
                currentLink->path            = sReader.attributes().value("path").toString();
                currentLink->isDefaultIcon   = QVariant(sReader.attributes().value("default").toString()).toBool();
                currentLink->icon            = sReader.attributes().value("icon").toString();
                currentLink->name            = sReader.readElementText();
                currentLink->dirName         = currentDir;

                _links->append(currentLink);
            }
        }
    }
}

void SettingDialog::on_list_itemClicked(QListWidgetItem *item)
{
    VLink selectedLink;
    selectedLink.name = item->text();

    for (auto & iter : *_links)
    {
        if (iter->name == selectedLink.name)
        {
            selectedLink.dirName        = iter->dirName;
            selectedLink.path           = iter->path;
            selectedLink.icon           = iter->icon;
            selectedLink.isDefaultIcon  = iter->isDefaultIcon;
        }
    }

    ui->nameEdit->setText(selectedLink.name);
    ui->pathEdit->setText(selectedLink.path);
    ui->comboBox->setCurrentText(selectedLink.dirName);
}

void SettingDialog::updateForm()
{
    for (auto & iter : *_links)
    {
        ui->list->addItem(iter->name);
    }

    for (auto & iter : _dirs)
    {
        ui->comboBox->addItem(iter);
    }
}
