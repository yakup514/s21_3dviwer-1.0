//
//  model_operations.c
//  test
//
//  Created by mcbk on 09.02.2023.
//

#include "model_operations.h"

void Normalize(Vertex* v) {
    for (int i = 0; i <= v->pos; ++i)
        v->data[i] /= v->max_coord;
}





//int ModelSet(char* path, Model* m, double scale) {
//    int err = -1;
//    err = Parser(path, m);
//    if (err != -1)
//        return err;
//    ModelPrint(*m);
//    double centr_x = m->min_max_x[0] + (m->min_max_x[1] - m->min_max_x[0]) / 2;
//    double centr_y = m->min_max_y[0] + (m->min_max_y[1] - m->min_max_y[0]) / 2;
//    double centr_z = m->min_max_z[0] + (m->min_max_z[1] - m->min_max_z[0]) / 2;
//    ModelMove(m, -centr_x, 'x');
//    ModelMove(m, -centr_y, 'y');
//    ModelMove(m, -centr_z, 'z');
//    ModelResize(m, 0.5);
//    
//    return err;
//}
//
//void ModelResize(Model* m, double scale) {
//    double max_coord = fabs(m->min_max_x[1] - m->min_max_x[0]);
//    if (fabs(m->min_max_y[1] - m->min_max_y[0]) > max_coord)
//        max_coord = fabs(m->min_max_y[1] - m->min_max_y[0]);
//    if (fabs(m->min_max_z[1] - m->min_max_z[0]) > max_coord)
//        max_coord = fabs(m->min_max_z[1] - m->min_max_z[0]);
//    double modifier = 2 * scale / max_coord;
//        m->min_max_x[0] = INFINITY;
//        m->min_max_x[1] = -INFINITY;
//        m->min_max_y[0] = INFINITY;
//        m->min_max_y[1] = -INFINITY;
//        m->min_max_z[0] = INFINITY;
//        m->min_max_z[1] = -INFINITY;
//    for (int i = 0; i <= m->v.pos; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            m->v.data[i][j] *= modifier;
//        }
//        MaxCoordSet(m);
//    }
//    
//    
//}
//void ModelTurn(Model* m, double angle);
//void ModelMove(Model* m, double val, char axis) {
//    if (axis == 'x') {
//        m->min_max_x[0] = INFINITY;
//        m->min_max_x[1] = -INFINITY;
//    }
//    if (axis == 'y') {
//        m->min_max_y[0] = INFINITY;
//        m->min_max_y[1] = -INFINITY;
//    }
//    if (axis == 'z') {
//        m->min_max_z[0] = INFINITY;
//        m->min_max_z[1] = -INFINITY;
//    }
//    for (int i = 0; i <= m->v.pos; ++i) {
//        if (axis == 'x') {
//            m->v.data[i][0] += val;
//            if (m->v.data[i][0] > m->min_max_x[1])
//                m->min_max_x[1] = m->v.data[i][0];
//            if (m->v.data[i][0] < m->min_max_x[0])
//                m->min_max_x[0] = m->v.data[i][0];
//            
//        } else if (axis == 'y') {
//            m->v.data[i][1] += val;
//            if (m->v.data[i][1] > m->min_max_y[1])
//                m->min_max_y[1] = m->v.data[i][1];
//            if (m->v.data[i][1] < m->min_max_y[0])
//                m->min_max_y[0] = m->v.data[i][1];
//        } else if (axis == 'z') {
//            m->v.data[i][2] += val;
//            if (m->v.data[i][2] > m->min_max_z[1])
//                m->min_max_z[1] = m->v.data[i][2];
//            if (m->v.data[i][2] < m->min_max_z[0])
//                m->min_max_z[0] = m->v.data[i][2];
//        }
//    }
//    
//}
