#ifndef CHATE_H
#define CHATE_H

#include <QMainWindow>

namespace Ui {
class chate;
}

class chate : public QMainWindow
{
    Q_OBJECT

public:
    explicit chate(QWidget *parent = nullptr);
    ~chate();
    Ui::chate *ui;
    void testpaste();
private slots:
    void on_SendButton_clicked();
    void shw(QString text2);

private:


};

#endif // CHATE_H
