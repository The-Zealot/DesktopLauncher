#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>
#include <QScreen>
#include <QDialog>
#include <QGraphicsEffect>
#include <QMouseEvent>
#include <QPicture>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    img         = NULL;
    styleSheet  = NULL;
    model       = NULL;

    //////// build counter ////////

    int buildVersion = 0;

#ifdef QT_DEBUG

#endif

    //////// init settings ////////

    QJsonObject jObject;

    QFile config("./config.json");
    if (config.open(QIODevice::ReadOnly))
    {
        QJsonDocument jDoc;
        jDoc.fromJson(config.readAll());
        jDoc.setObject(jObject);
        config.close();
    }
    else
    {
        QMessageBox::critical(this, "Error", "Reading configuration file error!");
    }

    qDebug() << jObject;

    //////// init graphic form ////////

    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Window);

    img = new QPixmap(":/.res/image/backgroundImage.png");
    this->resize(1128, 720);
    ui->movePanel->setGeometry(this->width() / 2 - 525 / 2, -40, 525, 60);

    //styleSheet = new QFile("D:/Qt/QtProjects/DesktopLauncher/styles/dark.qss");
    styleSheet = new QFile(QDir::currentPath() + "/styles/dark.qss");
    styleSheet->open(QFile::ReadOnly);
    this->setStyleSheet(styleSheet->readAll());
    styleSheet->close();

    version = "version 0.0.2.360";
    ui->versionLabel->setText(version);

    ui->testImg->setPixmap(*img);
    ui->testImg->setGeometry(this->geometry());

    tree = new QListView(this);
    model = new QFileSystemModel(this);
    model->setFilter(QDir::QDir::AllEntries);
    tree->setGeometry(10, 140, 750, 400);
    tree->setVisible(false);
    updateTree();


    ////// Temp geometry (TODO) //////

    ui->boxMenu->setGeometry(this->width() - ui->boxMenu->width(), 11,
                             ui->boxMenu->width(), ui->boxMenu->height());

    ui->signatureBox->setGeometry(this->width() - 11 - ui->signatureBox->width(),
                                  this->height() - 11 - ui->signatureBox->height(),
                                  ui->signatureBox->width(), ui->signatureBox->height());

    ui->movePanel->lower();
    ui->testImg->lower();

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(showTODO()));
    connect(tree, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(openDir(QModelIndex)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete img;
    delete styleSheet;
    delete model;
    delete tree;
}

////////////// privte methods //////////////

void MainWindow::updateTree()
{
    /*model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());
    ui->tree->setModel(model);*/

    model->setRootPath("");
    tree->setModel(model);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (pointCointains(ui->movePanel, mousePos) and !this->isFullScreen())
    {
        const QPointF delta = event->globalPosition() - mousePos;
        move(delta.toPoint());

        event->accept();
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        mousePos = event->pos();
        event->accept();
    }
}

void MainWindow::resizeEvent(QResizeEvent *event)
{

}

bool MainWindow::pointCointains(QWidget *widget, QPointF &point)
{
    if (point.x() <= widget->pos().x() + widget->width()    and
        point.y() <= widget->pos().y() + widget->height()   and
        point.x() >= widget->pos().x()                      and
        point.y() >= widget->pos().y())
        return true;

    return false;
}

void MainWindow::showTODO()
{
    QFile file(":/.res/info/todo.txt");
    file.open(QFile::ReadOnly);
    QMessageBox::information(this, "TODO", file.readAll());
    file.close();
}

void MainWindow::createLink(QPoint position, const QString text, const QString path)
{
    QPushButton* temp = new QPushButton(ui->workspacePanel);

    temp->setGeometry(position.x(), position.y(), 144, 32);
    temp->setVisible(true);
    temp->setText(text);
    temp->setToolTip(path);
    //temp->connect()

    links.push_back(temp);
}

void MainWindow::openDir(const QModelIndex &index)
{
    QListView* listView = (QListView*)sender();
    QFileInfo fileInfo = model->fileInfo(index);
    if (fileInfo.fileName() == "..")
    {
        QDir dir = fileInfo.dir();
        dir.cdUp();
        listView->setRootIndex(model->index(dir.absolutePath()));
    }
    else if (fileInfo.fileName() == ".")
    {
        listView->setRootIndex(model->index(""));
    }
    else if (fileInfo.isDir())
    {
        listView->setRootIndex(index);
    }
    else if (fileInfo.isFile())
    {
        QString str = tr("Упс! При открытии файла что-то пошло не так.");
        QMessageBox::critical(this, "Error", str);
    }
}

////////////////// slots /////////////////////


void MainWindow::on_closeButton_clicked()
{
    this->close();
}


void MainWindow::on_fullScreenButton_clicked()
{
    if(!this->isFullScreen())
        this->showFullScreen();
    else
        this->showNormal();

    ui->testImg->resize(this->size());
    ui->testImg->setGeometry(0, 0, this->width(), this->height());
    ui->movePanel->setGeometry((this->width() - ui->movePanel->width()) / 2, ui->movePanel->y(),
                                ui->movePanel->width(), ui->movePanel->height());

    ui->boxMenu->setGeometry(this->width() - 11 - ui->boxMenu->width(), 11,
                             ui->boxMenu->width(), ui->boxMenu->height());

    ui->signatureBox->setGeometry(this->width() - 11 - ui->signatureBox->width(),
                                  this->height() - 11 - ui->signatureBox->height(),
                                  ui->signatureBox->width(), ui->signatureBox->height());

}

void MainWindow::on_settingButton_clicked()
{
    optionsForm = new OptionsForm(this);
    optionsForm->setModal(true);
    optionsForm->show();
}


void MainWindow::on_fileManagerButton_clicked()
{
    QMessageBox::information(this, "In development", "Данный модуль находится в разработке");
    return;

    if (tree->isVisible())
    {
        tree->setVisible(false);
    }
    else
    {
        tree->setVisible(true);
        updateTree();
    }
}


void MainWindow::on_updateButton_clicked()
{
    styleSheet->open(QFile::ReadOnly);
    this->setStyleSheet(styleSheet->readAll());
    styleSheet->close();
}



void MainWindow::on_gameButton_clicked()
{
    if (links.size() != 0)
        return;

    int buttonNumber = 0;

    for (int i = 0; i < 7; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            QString temp = QString::fromStdString(std::to_string(++buttonNumber));
            createLink(QPoint(144 * j, 32 * i), "Test " + temp, "Path " + temp);
        }
    }
}


void MainWindow::on_clearButton_clicked()
{
    for (auto iter : links)
        delete iter;

    links.clear();
    tree->setVisible(false);
}

