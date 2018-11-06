/********************************************************************************
** Form generated from reading UI file 'Chat.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatClass
{
public:
    QWidget *centralWidget;
    QTextBrowser *MessegeBox;
    QTextBrowser *UserBox;
    QLineEdit *InputLine;
    QPushButton *SendButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ChatClass)
    {
        if (ChatClass->objectName().isEmpty())
            ChatClass->setObjectName(QStringLiteral("ChatClass"));
        ChatClass->resize(777, 465);
        ChatClass->setMaximumSize(QSize(777, 465));
        centralWidget = new QWidget(ChatClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MessegeBox = new QTextBrowser(centralWidget);
        MessegeBox->setObjectName(QStringLiteral("MessegeBox"));
        MessegeBox->setGeometry(QRect(10, 20, 521, 311));
        UserBox = new QTextBrowser(centralWidget);
        UserBox->setObjectName(QStringLiteral("UserBox"));
        UserBox->setGeometry(QRect(580, 21, 171, 311));
        InputLine = new QLineEdit(centralWidget);
        InputLine->setObjectName(QStringLiteral("InputLine"));
        InputLine->setGeometry(QRect(10, 339, 521, 31));
        SendButton = new QPushButton(centralWidget);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(450, 382, 81, 31));
        ChatClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ChatClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 777, 21));
        ChatClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ChatClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ChatClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ChatClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ChatClass->setStatusBar(statusBar);

        retranslateUi(ChatClass);

        QMetaObject::connectSlotsByName(ChatClass);
    } // setupUi

    void retranslateUi(QMainWindow *ChatClass)
    {
        ChatClass->setWindowTitle(QApplication::translate("ChatClass", "Chat", nullptr));
        SendButton->setText(QApplication::translate("ChatClass", "Wy\305\233lij", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatClass: public Ui_ChatClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
