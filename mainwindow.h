#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QFile>
#include <QDir>
#include <QListView>
#include <QList>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonDocument>
#include <QLabel>
#include <QDesktopServices>
#include <QFileIconProvider>

#include "optionsform.h"
#include "jsonfile.h"
#include "consolewidget.h"
#include "vlink.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_fullScreenButton_clicked();

    void on_closeButton_clicked();

    void on_settingButton_clicked();

    void on_fileManagerButton_clicked();

    void on_updateButton_clicked();

    void showTODO();

    void linkClicked();

    void on_gameButton_clicked();

    void on_clearButton_clicked();

private:
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void resizeEvent(QResizeEvent* event);
    virtual void mouseMoveEvent(QMouseEvent* event);

    void updateTree();
    bool pointCointains(QWidget* widget, QPointF &point);
    void createLink(QPoint position, const QString text, const QString path);
    void openDir(const QModelIndex &index);
    void writeJson();
    void readJson();

private:
    Ui::MainWindow *ui;
    OptionsForm* _optionsForm;
    QFileSystemModel* _model;
    QFileIconProvider* _fileIconProvider;
    QListView* _tree;
    ConsoleWidget* _console;
    QWidget* _movePanel;
    QLabel* _wallpaper;

    QList<QPushButton*> _buttons;
    QList<VLink*> _links;
    QString _version;
    QPointF _mousePos;
    JsonConfig _jsonConfig;
};
#endif // MAINWINDOW_H
