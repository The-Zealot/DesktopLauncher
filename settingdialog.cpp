#include "settingdialog.h"
#include "ui_settingdialog.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QStack>

SettingDialog::SettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());

    readFromXml("./xml/template.xml");

    for (auto & iter : _links)
    {
        ui->list->addItem(iter.name);
        //qDebug() << iter.name << iter.dirName << iter.path << iter.isDefaultIcon << iter.icon;
    }
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
    writeToXml("./xml/template.xml");

    /*QFile file("settings.xml");
    file.open(QIODevice::ReadWrite);

    sWriter = new QXmlStreamWriter(&file);
    sWriter->setAutoFormatting(true);
    sWriter->writeStartDocument();
    sWriter->writeStartElement("struct");
    sWriter->writeAttribute("version", "1.2");

    FileContainer temp;
    temp.setDirName(ui->comboBox->currentText());
    temp.setDirType("game");
    temp.setFileName(ui->nameEdit->text());
    temp.setFilePath(ui->pathEdit->text());
    files.append(temp);

    for (auto iter : files)
    {
        sWriter->writeStartElement("dir");
        sWriter->writeAttribute("type", iter.dirType());
        sWriter->writeAttribute("name", iter.dirName());
        sWriter->writeStartElement("file");
        sWriter->writeAttribute("path", iter.filePath());
        sWriter->writeCharacters(iter.fileName());
        sWriter->writeEndElement();
        sWriter->writeEndElement();
    }

    sWriter->writeEndElement();
    sWriter->writeEndDocument();
    file.close();
    delete sWriter;

    ui->list->addItem(ui->pathEdit->text());*/
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
        for (auto & it : _links)
        {
            if (it.dirName == iter)
            {
                sWriter.writeStartElement("link");
                sWriter.writeAttribute("path", it.path);
                sWriter.writeAttribute("default", QVariant(it.isDefaultIcon).toString());
                sWriter.writeAttribute("icon", it.icon);
                sWriter.writeCharacters(it.name);
                sWriter.writeEndElement();
            }
        }
        sWriter.writeEndElement();
    }
    sWriter.writeEndElement();
    sWriter.writeEndDocument();

    file.close();

    /*QFile file(fileName);
    file.open(QIODevice::WriteOnly);

    sWriter = new QXmlStreamWriter(&file);
    sWriter->setAutoFormatting(true);
    sWriter->writeStartDocument();
    sWriter->writeStartElement("struct");
    sWriter->writeAttribute("version", "1.2");

    FileContainer temp;
    temp.setDirName(ui->comboBox->currentText());
    temp.setDirType("game");
    temp.setFileName(ui->nameEdit->text());
    temp.setFilePath(ui->pathEdit->text());
    files.append(temp);

    for (auto iter : files)
    {
        sWriter->writeStartElement("dir");
        sWriter->writeAttribute("type", iter.dirType());
        sWriter->writeAttribute("name", iter.dirName());
        sWriter->writeStartElement("file");
        sWriter->writeAttribute("path", iter.filePath());
        sWriter->writeCharacters(iter.fileName());
        sWriter->writeEndElement();
        sWriter->writeEndElement();
    }

    sWriter->writeEndElement();
    sWriter->writeEndDocument();
    file.close();
    delete sWriter;

    ui->list->addItem(ui->pathEdit->text());*/
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
                VLink currentLink;
                currentLink.path = sReader.attributes().value("path").toString();
                currentLink.isDefaultIcon = QVariant(sReader.attributes().value("default").toString()).toBool();
                currentLink.icon = sReader.attributes().value("icon").toString();
                currentLink.name = sReader.readElementText();
                currentLink.dirName = currentDir;

                _links.append(currentLink);
            }
        }
    }
}


