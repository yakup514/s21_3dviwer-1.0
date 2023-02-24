#ifndef SETTINGS_WIDGET_H
#define SETTINGS_WIDGET_H

#include <QDialog>
#include <QVector4D>
#include <QSettings>

namespace Ui {
class SettingsWidget;
}

class SettingsWidget : public QDialog{
    Q_OBJECT

public:
    explicit SettingsWidget(QWidget *parent = nullptr);
    ~SettingsWidget();

public:
    Ui::SettingsWidget *ui;
private:
    QColor background_color_;
    QColor line_color_;
    QColor vertex_color_;
    QSettings* settings;
    int line_type_;
    int vertex_type_;
    int line_width_;
    int vertex_size_;
    void SaveSettings();
    void LoadSettings();
    void LoadColors();
    void LoadCheckboxes();
//protected:
//    void closeEvent(QCloseEvent *event);

public slots:
    void SlotSliderValueChanged();
    void SlotApplyBtnClicked();
    void SlotCheckBoxChecked();
//signals:
//    void WidgetClosed();

};

#endif // SETTINGS_WIDGET_H
