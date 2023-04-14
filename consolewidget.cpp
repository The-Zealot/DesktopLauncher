#include "consolewidget.h"

ConsoleWidget::ConsoleWidget(QWidget *parent) : QWidget(parent)
{
    _layout         = new QVBoxLayout(this);
    _textBrowser    = new QTextBrowser(this);
    _edit           = new QLineEdit(this);

    this->setLayout(_layout);
    QFont font;
    font.setFamily("Consolas");
    font.setBold(true);
    font.setPixelSize(12);

    this->setFont(font);
    _edit->setFont(font);
    _textBrowser->setFont(font);
    _textBrowser->setFocusPolicy(Qt::NoFocus);

    _layout->addWidget(_textBrowser);
    _layout->addWidget(_edit);

    _layout->setSpacing(0);
    _layout->setContentsMargins(0,0,0,0);

    connect(_edit, &QLineEdit::returnPressed, this, &ConsoleWidget::consoleWrite);
}

QString ConsoleWidget::interpret(const QString &command)
{
    if (command == "cls")
        _textBrowser->clear();

    return command;                                                                 // TODO
}

void ConsoleWidget::consoleWrite()
{
    _textBrowser->append(interpret(_edit->text()));
    _edit->clear();
}

void ConsoleWidget::print(const QString &str)
{
    _textBrowser->append(str);
}
