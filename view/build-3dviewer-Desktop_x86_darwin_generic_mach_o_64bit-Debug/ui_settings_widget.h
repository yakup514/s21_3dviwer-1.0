/********************************************************************************
** Form generated from reading UI file 'settings_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_WIDGET_H
#define UI_SETTINGS_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_16;
    QCheckBox *vertex_type_0;
    QCheckBox *vertex_type_1;
    QCheckBox *vertex_type_2;
    QLabel *label_18;
    QLineEdit *vertex_size;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_17;
    QCheckBox *line_type_0;
    QCheckBox *line_type_1;
    QCheckBox *checkBox_6;
    QLabel *label_19;
    QLineEdit *lineEdit_2;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_9;
    QSlider *horizontalSlider_11;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_13;
    QSlider *horizontalSlider_9;
    QLabel *background_color_label_3;
    QSlider *backgr_g_slider;
    QSlider *line_r_slider;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *apply_btn;
    QPushButton *pushButton_2;
    QLabel *label_14;
    QSlider *backgr_r_slider;
    QLabel *background_color_label;
    QSlider *line_b_slider;
    QLabel *label;
    QLabel *line_color_label;
    QLabel *label_7;
    QSlider *line_g_slider;
    QSlider *horizontalSlider_10;
    QSlider *backgr_b_slider;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QDialog *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName("SettingsWidget");
        SettingsWidget->resize(585, 409);
        gridLayout = new QGridLayout(SettingsWidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_16 = new QLabel(SettingsWidget);
        label_16->setObjectName("label_16");
        label_16->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_16);

        vertex_type_0 = new QCheckBox(SettingsWidget);
        buttonGroup = new QButtonGroup(SettingsWidget);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(vertex_type_0);
        vertex_type_0->setObjectName("vertex_type_0");

        verticalLayout->addWidget(vertex_type_0);

        vertex_type_1 = new QCheckBox(SettingsWidget);
        buttonGroup->addButton(vertex_type_1);
        vertex_type_1->setObjectName("vertex_type_1");

        verticalLayout->addWidget(vertex_type_1);

        vertex_type_2 = new QCheckBox(SettingsWidget);
        buttonGroup->addButton(vertex_type_2);
        vertex_type_2->setObjectName("vertex_type_2");

        verticalLayout->addWidget(vertex_type_2);

        label_18 = new QLabel(SettingsWidget);
        label_18->setObjectName("label_18");

        verticalLayout->addWidget(label_18);

        vertex_size = new QLineEdit(SettingsWidget);
        vertex_size->setObjectName("vertex_size");

        verticalLayout->addWidget(vertex_size);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_17 = new QLabel(SettingsWidget);
        label_17->setObjectName("label_17");
        label_17->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_17);

        line_type_0 = new QCheckBox(SettingsWidget);
        buttonGroup_2 = new QButtonGroup(SettingsWidget);
        buttonGroup_2->setObjectName("buttonGroup_2");
        buttonGroup_2->addButton(line_type_0);
        line_type_0->setObjectName("line_type_0");

        verticalLayout_2->addWidget(line_type_0);

        line_type_1 = new QCheckBox(SettingsWidget);
        buttonGroup_2->addButton(line_type_1);
        line_type_1->setObjectName("line_type_1");

        verticalLayout_2->addWidget(line_type_1);

        checkBox_6 = new QCheckBox(SettingsWidget);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setEnabled(true);

        verticalLayout_2->addWidget(checkBox_6);

        label_19 = new QLabel(SettingsWidget);
        label_19->setObjectName("label_19");

        verticalLayout_2->addWidget(label_19);

        lineEdit_2 = new QLineEdit(SettingsWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 6, 4, 4, 3);

        label_11 = new QLabel(SettingsWidget);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 0, 4, 1, 2);

        label_2 = new QLabel(SettingsWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(SettingsWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(SettingsWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_9 = new QLabel(SettingsWidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        horizontalSlider_11 = new QSlider(SettingsWidget);
        horizontalSlider_11->setObjectName("horizontalSlider_11");
        horizontalSlider_11->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_11, 3, 5, 1, 1);

        label_6 = new QLabel(SettingsWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 3);

        label_8 = new QLabel(SettingsWidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_13 = new QLabel(SettingsWidget);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 2, 4, 1, 1);

        horizontalSlider_9 = new QSlider(SettingsWidget);
        horizontalSlider_9->setObjectName("horizontalSlider_9");
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_9, 1, 5, 1, 1);

        background_color_label_3 = new QLabel(SettingsWidget);
        background_color_label_3->setObjectName("background_color_label_3");
        background_color_label_3->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(background_color_label_3, 1, 6, 3, 1);

        backgr_g_slider = new QSlider(SettingsWidget);
        backgr_g_slider->setObjectName("backgr_g_slider");
        backgr_g_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(backgr_g_slider, 2, 2, 1, 1);

        line_r_slider = new QSlider(SettingsWidget);
        line_r_slider->setObjectName("line_r_slider");
        line_r_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(line_r_slider, 6, 2, 1, 1);

        label_12 = new QLabel(SettingsWidget);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 1, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        apply_btn = new QPushButton(SettingsWidget);
        apply_btn->setObjectName("apply_btn");

        horizontalLayout->addWidget(apply_btn);

        pushButton_2 = new QPushButton(SettingsWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 10, 0, 1, 7);

        label_14 = new QLabel(SettingsWidget);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 3, 4, 1, 1);

        backgr_r_slider = new QSlider(SettingsWidget);
        backgr_r_slider->setObjectName("backgr_r_slider");
        backgr_r_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(backgr_r_slider, 1, 2, 1, 1);

        background_color_label = new QLabel(SettingsWidget);
        background_color_label->setObjectName("background_color_label");
        background_color_label->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(background_color_label, 1, 3, 3, 1);

        line_b_slider = new QSlider(SettingsWidget);
        line_b_slider->setObjectName("line_b_slider");
        line_b_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(line_b_slider, 8, 2, 1, 1);

        label = new QLabel(SettingsWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 4);

        line_color_label = new QLabel(SettingsWidget);
        line_color_label->setObjectName("line_color_label");
        line_color_label->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(line_color_label, 6, 3, 3, 1);

        label_7 = new QLabel(SettingsWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        line_g_slider = new QSlider(SettingsWidget);
        line_g_slider->setObjectName("line_g_slider");
        line_g_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(line_g_slider, 7, 2, 1, 1);

        horizontalSlider_10 = new QSlider(SettingsWidget);
        horizontalSlider_10->setObjectName("horizontalSlider_10");
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_10, 2, 5, 1, 1);

        backgr_b_slider = new QSlider(SettingsWidget);
        backgr_b_slider->setObjectName("backgr_b_slider");
        backgr_b_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(backgr_b_slider, 3, 2, 1, 1);


        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QDialog *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QCoreApplication::translate("SettingsWidget", "Dialog", nullptr));
        label_16->setText(QCoreApplication::translate("SettingsWidget", "\320\242\320\270\320\277 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        vertex_type_0->setText(QCoreApplication::translate("SettingsWidget", "\320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\321\216\321\202", nullptr));
        vertex_type_1->setText(QCoreApplication::translate("SettingsWidget", "\320\272\321\200\321\203\320\263", nullptr));
        vertex_type_2->setText(QCoreApplication::translate("SettingsWidget", "\320\272\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        label_18->setText(QCoreApplication::translate("SettingsWidget", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        label_17->setText(QCoreApplication::translate("SettingsWidget", "\320\242\320\270\320\277 \320\273\320\270\320\275\320\270\320\271", nullptr));
        line_type_0->setText(QCoreApplication::translate("SettingsWidget", "\321\201\320\277\320\273\320\276\321\210\320\275\320\260\321\217", nullptr));
        line_type_1->setText(QCoreApplication::translate("SettingsWidget", "\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", nullptr));
        checkBox_6->setText(QCoreApplication::translate("SettingsWidget", "CheckBox", nullptr));
        label_19->setText(QCoreApplication::translate("SettingsWidget", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\271", nullptr));
        label_11->setText(QCoreApplication::translate("SettingsWidget", "\320\246\320\262\320\265\321\202 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsWidget", "R", nullptr));
        label_4->setText(QCoreApplication::translate("SettingsWidget", "B", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsWidget", "G", nullptr));
        label_9->setText(QCoreApplication::translate("SettingsWidget", "B", nullptr));
        label_6->setText(QCoreApplication::translate("SettingsWidget", "\320\246\320\262\320\265\321\202 \320\273\320\270\320\275\320\270\320\271", nullptr));
        label_8->setText(QCoreApplication::translate("SettingsWidget", "G", nullptr));
        label_13->setText(QCoreApplication::translate("SettingsWidget", "G", nullptr));
        background_color_label_3->setText(QString());
        label_12->setText(QCoreApplication::translate("SettingsWidget", "R", nullptr));
        apply_btn->setText(QCoreApplication::translate("SettingsWidget", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SettingsWidget", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_14->setText(QCoreApplication::translate("SettingsWidget", "B", nullptr));
        background_color_label->setText(QString());
        label->setText(QCoreApplication::translate("SettingsWidget", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260", nullptr));
        line_color_label->setText(QString());
        label_7->setText(QCoreApplication::translate("SettingsWidget", "R", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_WIDGET_H
