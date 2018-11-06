#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
}

chat::~chat()
{
    delete ui;
}

void chat::testpaste()
{
    QString text;
    text = ui->SendBox-> toPlainText();
    //ui->ViewBox->textCursor().insertText(text);
    ui->ViewBox->append(text);
}

void chat::on_SendButton_clicked()
{
testpaste();
}
