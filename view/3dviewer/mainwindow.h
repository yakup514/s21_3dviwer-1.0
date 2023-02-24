#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viewer.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Viewer* viewer_;

public slots:
    void SlotLoadBtnClicked();
    void SlotApplyBtnClicked();
    void SlotSettngsBtnClicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
