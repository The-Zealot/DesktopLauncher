#ifndef CONSOLEWIDGET_H
#define CONSOLEWIDGET_H

#include <QWidget>
#include <QTextBrowser>
#include <QLineEdit>
#include <QVBoxLayout>

class ConsoleWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ConsoleWidget(QWidget *parent = nullptr);
    QString interpret(const QString &command);

public slots:
    void consoleWrite();
    void print(const QString &str);

private:
    QTextBrowser* _textBrowser;
    QLineEdit* _edit;
    QVBoxLayout* _layout;
};

#endif // CONSOLEWIDGET_H
