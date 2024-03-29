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

    QPixmap pixmap(":/image/background.png");

    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Window);
    this->resize(pixmap.size());

    readJson();

    SettingDialog::readFromXml("xml/template.xml", &_links, _dirs);

    on_updateButton_clicked();

    _movePanel = new QWidget(this);
    _movePanel->show();
    _movePanel->setGeometry(this->width() / 2 - 525 / 2, -40, 525, 60);
    _movePanel->setStyleSheet("  border-radius: 25px;    \
                                border-color: white;    \
                                border-width: 1px;      \
                                border-style: inset;    \
                                background: #303030;");

    _wallpaper = new QLabel(this);
    _wallpaper->lower();
    _wallpaper->setPixmap(pixmap.scaled(this->size()));
    _wallpaper->show();
    _wallpaper->setGeometry(0, 0, this->width(), this->height());

    int buildNumber = 466;
    _version = "version 2.0.2." + QVariant(buildNumber).toString();
    ui->versionLabel->setText(_version);

    //////// init graphic form ////////

    _fileIconProvider   = new QFileIconProvider;
    _console            = new ConsoleWidget(this);
    _tree               = new QListView(this);
    _model              = new QFileSystemModel(this);

    _model->setFilter(QDir::AllEntries);
    _model->setRootPath("");
    _model->setIconProvider(_fileIconProvider);
    _tree->setGeometry(10, 140, 750, 400);
    _tree->setVisible(false);
    _tree->setModel(_model);
    _console->setGeometry(10, 547, 750, 120);
    _console->setVisible(false);

    QMenu* menu = new QMenu(this);
    for (auto & iter : _dirs)
    {
        menu->addAction(iter, [this, &iter](){
            _currentDir = iter;
            on_gameButton_clicked();
        });
    }
    ui->gameButton->setMenu(menu);

    connect(_tree, &QListView::doubleClicked, this, &MainWindow::openDir);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete _model;
    delete _tree;
    delete _fileIconProvider;
}

void MainWindow::updateTree()
{

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (pointCointains(_movePanel, _mousePos) and !this->isFullScreen())
    {
        const QPointF delta = event->globalPosition() - _mousePos;
        move(delta.toPoint());

        event->accept();
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        _mousePos = event->pos();
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

void MainWindow::linkClicked()
{
    QPushButton* sender = qobject_cast<QPushButton*>(this->sender());

    QDesktopServices::openUrl(QUrl("file:///" + sender->toolTip()));
    qDebug() << sender->toolTip();
}

void MainWindow::createLink(QPoint position, const QString text, const QString path)
{
    QPushButton* temp = new QPushButton(ui->workspacePanel);

    temp->setGeometry(position.x(), position.y(), 96, 32);
    temp->setVisible(true);
    temp->setText(text);
    temp->setToolTip(path);
    temp->connect(temp, &QPushButton::clicked, this, &MainWindow::linkClicked);

    _buttons.push_back(temp);
}

void MainWindow::openDir(const QModelIndex &index)
{
    QListView* listView = (QListView*)sender();
    QFileInfo fileInfo = _model->fileInfo(index);
    if (fileInfo.fileName() == "..")
    {
        QDir dir = fileInfo.dir();
        dir.cdUp();
        listView->setRootIndex(_model->index(dir.absolutePath()));
    }
    else if (fileInfo.fileName() == ".")
    {
        listView->setRootIndex(_model->index(""));
    }
    else if (fileInfo.isDir())
    {
        listView->setRootIndex(index);
    }
    else if (fileInfo.isFile())
    {
        if (!QDesktopServices::openUrl(QUrl("file:///" + fileInfo.absoluteFilePath())))
        {
            QMessageBox::critical(this, "Ошибка", "Упс! При открытии файла что-то пошло не так.");
        }
    }
}

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

    _movePanel->setGeometry((this->width() - _movePanel->width()) / 2, _movePanel->y(),
                                _movePanel->width(), _movePanel->height());

    _wallpaper->setGeometry(0, 0, this->width(), this->height());
    _wallpaper->setPixmap(QPixmap(":/image/background.png").scaled(this->size()));
}

void MainWindow::on_settingButton_clicked()
{
    _optionsForm = new OptionsForm(this);
    _optionsForm->setModal(true);
    _optionsForm->setLinkList(_links);
    _optionsForm->show();
}

void MainWindow::on_fileManagerButton_clicked()
{
//    QMessageBox::information(this, "In development", "Данный модуль находится в разработке");
//    return;

    if (_tree->isVisible())
    {
        _tree->setVisible(false);
    }
    else
    {
        _tree->setVisible(true);
        updateTree();
    }
}

void MainWindow::on_updateButton_clicked()
{
    QFile file(QDir::currentPath() + "/styles/dark.css");
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Can't read style sheet";
    }
    else
    {
        this->setStyleSheet(file.readAll());
        file.close();
    }
}

void MainWindow::on_gameButton_clicked()
{
    if (_buttons.size() != 0)
    {
        for (auto & iter : _buttons)
        {
            delete iter;
        }
        _buttons.clear();
    }

    int height  = 32;
    int width   = 96;
    int offset  = 8;

    int size = _links.size();
    for (int i = 0, row = 0, column = 0; i < size; i++)
    {
        if (_links.at(i)->dirName == _currentDir)
        {
            if (column >= 5)
            {
                column = 0;
                row++;
            }
            column++;

            createLink(QPoint((width + offset) * column, (height + offset) * row), _links.at(i)->name, _links.at(i)->path);
        }
    }
}

void MainWindow::on_clearButton_clicked()
{
    for (auto iter : _buttons)
        delete iter;

    _buttons.clear();
    _tree->setVisible(false);
}

void MainWindow::writeJson()
{
    QFile config("./config.json");
    if (config.open(QIODevice::WriteOnly))
    {
        QJsonObject jObject;

        jObject["autostart"]        = _jsonConfig.hasAutoStart;
        jObject["fullscreen"]       = _jsonConfig.isFullscreen;
        jObject["buttonIcons"]      = _jsonConfig.hasButtonIcons;
        jObject["defaultImage"]     = _jsonConfig.isDefaultWallpaper;
        jObject["background"]       = _jsonConfig.wallpaperImage;
        jObject["startDirectory"]   = _jsonConfig.startDirectory;
        jObject["style"]            = _jsonConfig.currentStyle;

        config.write(QJsonDocument(jObject).toJson());
        config.close();
    }
    else
    {
#ifndef QT_DEBUG
        QMessageBox::warning(this, "Warning", "Can't open config.json to write!");
#else
        qDebug() << "Can't open config.json to write!";
#endif
    }
}

void MainWindow::readJson()
{
    QFile config("./config.json");
    if (config.open(QIODevice::ReadOnly))
    {
        QJsonObject jObject;
        QJsonDocument::fromJson(config.readAll()).setObject(jObject);
        config.close();

        _jsonConfig.hasAutoStart        = jObject["autostart"].toBool();
        _jsonConfig.hasButtonIcons      = jObject["buttonIcons"].toBool();
        _jsonConfig.isFullscreen        = jObject["fullscreen"].toBool();
        _jsonConfig.isDefaultWallpaper  = jObject["defaultImage"].toBool();

        _jsonConfig.wallpaperImage      = jObject["background"].toString();
        _jsonConfig.startDirectory      = jObject["starDirectory"].toString();
        _jsonConfig.currentStyle        = jObject["style"].toString();
    }
    else
    {
#ifndef QT_DEBUG
        QMessageBox::critical(this, "Error", "Reading configuration file error!");
#else
        qDebug() << "Reading configuration file error!";
#endif
    }
}
