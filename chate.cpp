
#include "chate.h"
#include "ui_chate.h"
#include "main.cpp"

#include "ssl.h"
QString text;


chate::chate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chate)
{
    ui->setupUi(this);
    QTextBrowser *test= this->ui->MesBox;

}

chate::~chate()
{
    delete ui;
}

void chate::on_SendButton_clicked()
{
    testpaste();

}

void chate::testpaste()
{

    text = ui->MesLine-> toPlainText();
    //ui->MesBox->append(text);
    sl->send(text);
    ui->MesLine->clear();


}


void chate::shw(QString text2)
{
    ui->MesBox->append(text2);
}

