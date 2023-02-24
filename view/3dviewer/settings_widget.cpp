#include "settings_widget.h"
#include "ui_settings_widget.h"
#include <QPalette>

SettingsWidget::SettingsWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsWidget) {
    ui->setupUi(this);
    ui->checkBox_6->setVisible(false);
    settings = new QSettings(this);
    LoadSettings();
    LoadColors();
    LoadCheckboxes();
    //ui->background_color_label->setAutoFillBackground(true);
    //bckgrnd_color_palette.setColor(background_color_);
    ui->backgr_r_slider->setMaximum(255);
    ui->backgr_r_slider->setSliderPosition(background_color_.red());
    ui->backgr_g_slider->setMaximum(255);
    ui->backgr_g_slider->setSliderPosition(background_color_.green());
    ui->backgr_b_slider->setMaximum(255);
    ui->backgr_b_slider->setSliderPosition(background_color_.blue());
    ui->line_r_slider->setMaximum(255);
    ui->line_r_slider->setSliderPosition(line_color_.red());
    ui->line_g_slider->setMaximum(255);
    ui->line_g_slider->setSliderPosition(line_color_.green());
    ui->line_b_slider->setMaximum(255);
    ui->line_b_slider->setSliderPosition(line_color_.blue());
    ui->vertex_r_slider->setMaximum(255);
    ui->vertex_r_slider->setSliderPosition(vertex_color_.red());
    ui->vertex_g_slider->setMaximum(255);
    ui->vertex_g_slider->setSliderPosition(vertex_color_.green());
    ui->vertex_b_slider->setMaximum(255);
    ui->vertex_b_slider->setSliderPosition(vertex_color_.blue());
    connect(ui->apply_btn, SIGNAL(clicked()), this, SLOT(SlotApplyBtnClicked()));
    connect(ui->backgr_r_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->backgr_g_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->backgr_b_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->line_r_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->line_g_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->line_b_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->vertex_r_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->vertex_g_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->vertex_b_slider, SIGNAL(valueChanged(int)),this,SLOT(SlotSliderValueChanged()));
    connect(ui->line_type_0, SIGNAL(stateChanged(int)),this, SLOT(SlotCheckBoxChecked()));
    connect(ui->line_type_1, SIGNAL(stateChanged(int)),this, SLOT(SlotCheckBoxChecked()));
    connect(ui->vertex_type_0, SIGNAL(stateChanged(int)),this, SLOT(SlotCheckBoxChecked()));
    connect(ui->vertex_type_1, SIGNAL(stateChanged(int)),this, SLOT(SlotCheckBoxChecked()));
    connect(ui->vertex_type_2, SIGNAL(stateChanged(int)),this, SLOT(SlotCheckBoxChecked()));

}

SettingsWidget::~SettingsWidget()
{
    delete ui;
}

void SettingsWidget::SaveSettings() {
    settings->setValue("background_color", background_color_);
    settings->setValue("line_color", line_color_);
    settings->setValue("line_type", line_type_);
    settings->setValue("vertex_type", vertex_type_);
}

void SettingsWidget::LoadSettings() {
    background_color_ = settings->value("background_color", QColor(Qt::black)).value<QColor>();
    line_color_ = settings->value("line_color", QColor(Qt::white)).value<QColor>();
    vertex_color_ = settings->value("vertex_color", QColor(Qt::blue)).value<QColor>();
    line_type_ = settings->value("line_type", 0).toInt();
    vertex_type_ = settings->value("vertex_type", 0).toInt();
}

void SettingsWidget::LoadColors() {
    QVariant v = background_color_;
    QString col = v.toString();
    ui->background_color_label->setStyleSheet("QLabel#background_color_label{"
                                               "background-color: " + col + "}");
    v = line_color_;
    col = v.toString();
    ui->line_color_label->setStyleSheet("QLabel#line_color_label{"
                                            "background-color: " + col + "}");
    v = vertex_color_;
    col = v.toString();
    ui->vertex_color_label->setStyleSheet("QLabel#vertex_color_label{"
                                            "background-color: " + col + "}");
}

void SettingsWidget::LoadCheckboxes() {
    if (vertex_type_ == 0)
        ui->vertex_type_0->setCheckState(Qt::Checked);
    else if (vertex_type_ == 1)
        ui->vertex_type_1->setCheckState(Qt::Checked);
    else if (vertex_type_ == 2)
        ui->vertex_type_2->setCheckState(Qt::Checked);
    if(line_type_ == 0)
        ui->line_type_0->setCheckState(Qt::Checked);
    else if(line_type_ == 1)
        ui->line_type_1->setCheckState(Qt::Checked);
}

void SettingsWidget::SlotSliderValueChanged() {
    //qDebug() << sender()->objectName();
   // QString r,g,b,a;
    if (sender()->objectName() == "backgr_r_slider")
        background_color_.setRed(ui->backgr_r_slider->value());
    else if (sender()->objectName() == "backgr_g_slider")
        background_color_.setGreen(ui->backgr_g_slider->value());
    else if (sender()->objectName() == "backgr_b_slider")
        background_color_.setBlue(ui->backgr_b_slider->value());
    else if (sender()->objectName() == "line_r_slider")
        line_color_.setRed(ui->line_r_slider->value());
    else if (sender()->objectName() == "line_g_slider")
        line_color_.setGreen(ui->line_g_slider->value());
    else if (sender()->objectName() == "line_b_slider")
        line_color_.setBlue(ui->line_b_slider->value());
    else if (sender()->objectName() == "vertex_r_slider")
        vertex_color_.setRed(ui->vertex_r_slider->value());
    else if (sender()->objectName() == "vertex_g_slider")
        vertex_color_.setGreen(ui->vertex_g_slider->value());
    else if (sender()->objectName() == "vertex_b_slider")
        vertex_color_.setBlue(ui->vertex_b_slider->value());


    LoadColors();
//    QVariant v = background_color_;
//    QString col = v.toString();
//    ui->background_color_label->setStyleSheet("QLabel#background_color_label{"
//                                              "background-color: " + col + "}");
}

void SettingsWidget::SlotApplyBtnClicked() {
    SaveSettings();
    done(1);
    //close();

}

void SettingsWidget::SlotCheckBoxChecked() {
    if (sender()->objectName() == "line_type_0")
        line_type_ = 0;
    else if (sender()->objectName() == "line_type_1")
        line_type_ = 1;
    else if (sender()->objectName() == "vertex_type_0")
        vertex_type_ = 0;
    else if (sender()->objectName() == "vertex_type_1")
        vertex_type_ = 1;
    else if (sender()->objectName() == "vertex_type_2")
        vertex_type_ = 2;
}
