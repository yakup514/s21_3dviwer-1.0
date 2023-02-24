#ifndef MODELDATA_H
#define MODELDATA_H
#include <QOpenGLWidget>
#include <QMatrix4x4>
#include <QOpenGLBuffer>
#include "../../model/model.h"

class ModelData {
public:
    ModelData(QString path);
    ~ModelData();
    QString path_;
    Vertex v_;
    Surface s_;
    int err_;
    GLfloat scale_;
    QMatrix4x4 modelViewMatrix_;
    void RotateModel(GLfloat x, GLfloat y, GLfloat z);
    void ScaleModel(GLfloat scale_change);
    void ScaleModelFromForm(GLfloat scale);
    void MoveModel(GLfloat x, GLfloat y, GLfloat z);
};

#endif // MODELDATA_H
