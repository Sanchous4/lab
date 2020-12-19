/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QLineEdit *add_2;
    QLineEdit *add_1;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLineEdit *add_el;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLineEdit *save;
    QPushButton *pushButton_4;
    QLineEdit *del_el;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QString::fromUtf8("main_window"));
        main_window->resize(260, 491);
        centralwidget = new QWidget(main_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 6, 0, 1, 1);

        add_2 = new QLineEdit(centralwidget);
        add_2->setObjectName(QString::fromUtf8("add_2"));

        gridLayout->addWidget(add_2, 3, 1, 1, 1);

        add_1 = new QLineEdit(centralwidget);
        add_1->setObjectName(QString::fromUtf8("add_1"));

        gridLayout->addWidget(add_1, 3, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 5, 0, 1, 2);

        add_el = new QLineEdit(centralwidget);
        add_el->setObjectName(QString::fromUtf8("add_el"));

        gridLayout->addWidget(add_el, 7, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 10, 0, 1, 2);

        save = new QLineEdit(centralwidget);
        save->setObjectName(QString::fromUtf8("save"));

        gridLayout->addWidget(save, 11, 0, 1, 2);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 6, 1, 1, 1);

        del_el = new QLineEdit(centralwidget);
        del_el->setObjectName(QString::fromUtf8("del_el"));

        gridLayout->addWidget(del_el, 7, 1, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 4, 0, 1, 2);

        main_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 260, 22));
        main_window->setMenuBar(menubar);
        statusbar = new QStatusBar(main_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        main_window->setStatusBar(statusbar);

        retranslateUi(main_window);

        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QMainWindow *main_window)
    {
        main_window->setWindowTitle(QCoreApplication::translate("main_window", "main_window", nullptr));
        pushButton_3->setText(QCoreApplication::translate("main_window", "Add element", nullptr));
        pushButton->setText(QCoreApplication::translate("main_window", "Add_1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("main_window", "Add_2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("main_window", "Save", nullptr));
        pushButton_4->setText(QCoreApplication::translate("main_window", "Delete element", nullptr));
        pushButton_6->setText(QCoreApplication::translate("main_window", "Create 3 collection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
