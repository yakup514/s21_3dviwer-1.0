#ifndef VIEWER_H
#define VIEWER_H
#include "model_data.h"
#include <QOpenGLWidget>
#include <QMatrix4x4>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLFunctions>
#include <QOpenGLShader>
#include "settings_widget.h"
//#include "../../model/model.h"

class Viewer : public QOpenGLWidget, protected QOpenGLFunctions  {
public:
    Viewer(QWidget *parent = nullptr);
private:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void initShaders();

    void InitModel();
    void mousePressEvent(QMouseEvent* mo) override ;
    void mouseMoveEvent(QMouseEvent* mo) override;
    void wheelEvent(QWheelEvent *event) override;
private:
    QMatrix4x4 projection_matrix_;
    QOpenGLShaderProgram* program_;
    QOpenGLBuffer vertex_buffer_;
    QPoint pos_;
    float x_rot_, y_rot_, z_rot_;
    QVector4D bckgrnd_color_;
    QSettings* settings;
    //void SaveSettings();

    QVector4D background_color_;
    QVector4D line_color_;
    int vertex_type_;
    int line_type_;
    float vertex_size_;
    float line_width_;

public:
    int LoadModel(QString path);
    ModelData* md_ = NULL;
    SettingsWidget* sw_;
     void LoadSettings();

public slots:
//    void SlotSettingsWidgetClosed();
};



#endif // VIEWER_H


// Рисуем маленькие звезды glPointSize(7.0);

//  glVertexPointer(2, GL_FLOAT, 0, &smallStars[0]);
//  glDrawArrays(GL_POINTS, 0, SMALL_NUM);   /// нарисовать звезду среднего размера  glPointSize(12.0);

//  glVertexPointer(2, GL_FLOAT, 0, &mediumStars[0]);
//  glDrawArrays(GL_POINTS, 0, MEDIUM_NUM);   //// большая звезда  glPointSize(20.0);

//  glVertexPointer(2, GL_FLOAT, 0, &largeStars[0]);
//  glDrawArrays(GL_POINTS, 0, LARGE_NUM);
//  glDisableClientState(GL_VERTEX_ARRAY);
