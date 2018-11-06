#ifndef CHAT_H
#define CHAT_H

#include <QMainWindow>

namespace Ui {
class chat;
}

class chat : public QMainWindow
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();

private slots:
    void on_SendButton_clicked();

private:
    Ui::chat *ui;
    void testpaste();
};

#endif // CHAT_H
