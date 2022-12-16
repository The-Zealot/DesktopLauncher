#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QFile>
#include <QTreeView>
#include <QListView>
#include <QList>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonDocument>

#include "optionsform.h"
#include "filecontainer.h"

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

private:
    Ui::MainWindow *ui;
    OptionsForm* optionsForm;
    QFileSystemModel* model;
    QFile* styleSheet;
    QListView* tree;

    QList<FileContainer> files;
    QList<QPushButton*> links;
    QPixmap* img;
    QString version;
    QPointF mousePos;
};
#endif // MAINWINDOW_H
