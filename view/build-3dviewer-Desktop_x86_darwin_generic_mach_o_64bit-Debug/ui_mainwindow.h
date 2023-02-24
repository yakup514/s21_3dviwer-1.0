/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *z_rotate_line;
    QPushButton *apply_btn;
    QLabel *label_6;
    QLineEdit *x_rotate_line;
    QLineEdit *y_move_line;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *z_move_line;
    QLineEdit *y_rotate_line;
    QLabel *label_7;
    QLineEdit *x_move_line;
    QLabel *label_4;
    QPushButton *load_btn;
    QPushButton *settings_btn;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *scale_line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(649, 461);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        z_rotate_line = new QLineEdit(centralwidget);
        z_rotate_line->setObjectName("z_rotate_line");
        z_rotate_line->setMinimumSize(QSize(60, 0));
        z_rotate_line->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(z_rotate_line, 3, 1, 1, 1);

        apply_btn = new QPushButton(centralwidget);
        apply_btn->setObjectName("apply_btn");
        apply_btn->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(apply_btn, 10, 0, 1, 2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        x_rotate_line = new QLineEdit(centralwidget);
        x_rotate_line->setObjectName("x_rotate_line");
        x_rotate_line->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(x_rotate_line, 1, 1, 1, 1);

        y_move_line = new QLineEdit(centralwidget);
        y_move_line->setObjectName("y_move_line");
        y_move_line->setMinimumSize(QSize(60, 0));
        y_move_line->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(y_move_line, 6, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        z_move_line = new QLineEdit(centralwidget);
        z_move_line->setObjectName("z_move_line");
        z_move_line->setMinimumSize(QSize(60, 0));
        z_move_line->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(z_move_line, 7, 1, 1, 1);

        y_rotate_line = new QLineEdit(centralwidget);
        y_rotate_line->setObjectName("y_rotate_line");
        y_rotate_line->setMinimumSize(QSize(60, 0));
        y_rotate_line->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(y_rotate_line, 2, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        x_move_line = new QLineEdit(centralwidget);
        x_move_line->setObjectName("x_move_line");
        x_move_line->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(x_move_line, 5, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        load_btn = new QPushButton(centralwidget);
        load_btn->setObjectName("load_btn");
        load_btn->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(load_btn, 11, 0, 1, 2);

        settings_btn = new QPushButton(centralwidget);
        settings_btn->setObjectName("settings_btn");
        settings_btn->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(settings_btn, 12, 0, 1, 2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        scale_line = new QLineEdit(centralwidget);
        scale_line->setObjectName("scale_line");
        scale_line->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(scale_line, 8, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 649, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        z_rotate_line->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        apply_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        x_rotate_line->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        y_move_line->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "z:", nullptr));
        z_move_line->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        y_rotate_line->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        x_move_line->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "z:", nullptr));
        load_btn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        settings_btn->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\260\321\211\320\265\320\275\320\270\320\265:", nullptr));
        scale_line->setText(QCoreApplication::translate("MainWindow", "1.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
