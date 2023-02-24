#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_settings_widget.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    viewer_ = new Viewer(this);
    ui->gridLayout->addWidget(viewer_,0,3,14,1);
    connect(ui->load_btn, SIGNAL(clicked()), this, SLOT(SlotLoadBtnClicked()));
    connect(ui->apply_btn, SIGNAL(clicked()), this, SLOT(SlotApplyBtnClicked()));
    connect(ui->settings_btn, SIGNAL(clicked()), this,SLOT(SlotSettngsBtnClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SlotLoadBtnClicked() {
    QString path = QFileDialog::getOpenFileName(this, "Выбор модели", "", "OBJ Files (*.obj)");
  //  qDebug() << path;
    if (!path.isEmpty())
        viewer_->LoadModel(path);
}

void MainWindow::SlotApplyBtnClicked() {
    if (viewer_->md_ != NULL) {
        GLfloat rot_x = (GLfloat)ui->x_rotate_line->text().toFloat();
        GLfloat rot_y = (GLfloat)ui->y_rotate_line->text().toFloat();
        GLfloat rot_z = (GLfloat)ui->z_rotate_line->text().toFloat();
        viewer_->md_->RotateModel(rot_x, rot_y, rot_z);
        GLfloat move_x = (GLfloat)ui->x_move_line->text().toFloat();
        GLfloat move_y = (GLfloat)ui->y_move_line->text().toFloat();
        GLfloat move_z = (GLfloat)ui->z_move_line->text().toFloat();
        viewer_->md_->MoveModel(move_x, move_y, move_z);
        GLfloat scale = (GLfloat)ui->scale_line->text().toFloat();
        if (scale == 0)
            scale = 0.001;
        viewer_->md_->ScaleModelFromForm(scale);
        viewer_->update();
    }
}

void MainWindow::SlotSettngsBtnClicked(){

    viewer_->sw_ = new SettingsWidget(this);
    viewer_->sw_->setModal(true);

     if (viewer_->sw_->exec() == QDialog::Accepted) {
        viewer_->LoadSettings();
        viewer_->update();
     }
}

