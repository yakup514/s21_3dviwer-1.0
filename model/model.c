//
//  model.c
//  test
//
//  Created by mcbk on 08.02.2023.
//

#include "model.h"


int VertexInit (Vertex* v) {
    int err = -1;
    v->size = VERTEX_SIZE;
    v->pos = -1;
    v->min_max_x[0] = INFINITY;
    v->min_max_x[1] = -INFINITY;
    v->min_max_y[0] = INFINITY;
    v->min_max_y[1] = -INFINITY;
    v->min_max_z[0] = INFINITY;
    v->min_max_z[1] = -INFINITY;
    v->max_coord = -INFINITY;
    v->data = (GLfloat*) calloc(VERTEX_SIZE, sizeof(GLfloat));
    if (v->data == NULL)
        err = MEMORY_ERROR;
    return err;
}

int VertexResize(Vertex* v) {
    int err = -1;
    if (v->size - v->pos <= 4) {
        v->data = realloc(v->data, 2 * v->size * sizeof(GLfloat));
        if (v->data != NULL)
            err = MEMORY_ERROR;
        v->size += v->size;
           // printf("resize, new size %lu\n",v->size);
    }
    return err;
}
int PolygonInit(Polygon* p) {
    int err = -1;
    p->size = POLYGON_SIZE;
    p->pos = -1;
    p->data = calloc(POLYGON_SIZE, sizeof(GLuint));
    if (p->data == NULL)
        err = MEMORY_ERROR;
    return err;
}

int PolygonResize(Polygon* p) {
    int err = -1;
    if (p->size - p->pos <= 2) {
      //  printf("pol resize old size = %zu ", p->size);
        p->data = realloc(p->data, 2 * p->size* sizeof (GLuint));
        p->size += p->size;
       // printf("new size = %zu\n", p->size);
    }
    if (p->data == NULL)
        err = MEMORY_ERROR;
    return err;
}

int SurfaceInit(Surface* s) {
    int err = -1;
    s->polygons = calloc(SURFACE_SIZE, sizeof(Polygon));
    s->pos = -1;
    s->size = SURFACE_SIZE;
    return err;
}
int SurfaceResize(Surface* s) {
    int err = -1;
    if (s->size - s->pos <= 5) {
        s->polygons = realloc(s->polygons, 2 * s->size * sizeof(Polygon));
        s->size += s->size;
       // printf("surface resize = %zu\n", s->size);
    }

    if (s->polygons == NULL)
        err = MEMORY_ERROR;
    return err;
}
//int ModelInit(Model* m) {
//    int err = VertexInit(&(m->v));
//    if (err == -1)
//        err = SurfaceInit(&(m->s));

//    return err;
//}
//
void VertexPrint(Vertex v) {
    printf("VERTEX:\n");
    int i = 0;
    while (i < v.pos && v.pos >= 0) {
        printf ("%f %f %f\n", v.data[i], v.data[i + 1], v.data[i + 2]);
        i += 3;
    }
}

void SurfacePrint(Surface s) {
    printf("SURFACE:\n");
    for (int i = 0; i <= s.pos; ++i) {
        for (int j = 0; j <= s.polygons[i].pos; ++j) {
            j == s.polygons[i].pos ? printf("%d\n",s.polygons[i].data[j]) : printf("%d ",s.polygons[i].data[j]);
        }
    }
}

void FreeVertex (Vertex* v) {
    free(v->data);
}
void FreeSurface(Surface* s) {
    for (int i = 0; i <= s->pos; ++i)
        free(s->polygons[i].data);
    free(s->polygons);
    
}

//
//void ModelPrint(Model m) {
//    printf("min x = %lf, max x = %lf\n", m.min_max_x[0], m.min_max_x[1]);
//    printf("min y = %lf, max y = %lf\n", m.min_max_y[0], m.min_max_y[1]);
//    printf("min z = %lf, max z = %lf\n", m.min_max_z[0], m.min_max_z[1]);
//    printf("model size: vert = %zu, surf = %zu\n", m.v.size, m.s.size);
//    printf("vertexex = %d ",m.v.pos + 1);
//    printf("polygons = %d ", m.s.pos + 1);
//    printf(" sum = %d\n",m.v.pos + m.s.pos);
//    VertexPrint(m.v);
//    SurfacePrint(m.s);
//}
//
//void FreeModel(Model* m) {
//    for (int i = 0; i < m->v.size; ++i)
//        free(m->v.data[i]);
//    free(m->v.data);
//    for (int i = 0; i < m->s.size; ++i) {
//        printf("i = %d\n", i);
//        free(m->s.polygons[i].data);
//    }
//    free(m->s.polygons);
//}
