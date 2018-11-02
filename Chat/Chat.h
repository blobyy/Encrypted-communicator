#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Chat.h"

class Chat : public QMainWindow
{
	Q_OBJECT

public:
	Chat(QWidget *parent = Q_NULLPTR);

private:
	Ui::ChatClass ui;
};
