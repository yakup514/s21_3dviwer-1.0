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
    v->data = (double**)malloc(VERTEX_SIZE * sizeof(double*) + VERTEX_SIZE * 3 * sizeof(double));
    if (v->data != NULL) {
        for (size_t i = 0; i < v->size; ++i) {
            v->data[i] = (double*)calloc(3, sizeof(double));
        }
    } else {
        err = MEMORY_ERROR;
    }
    return err;
}
int VertexResize(Vertex* v) {
    int err = -1;
    if (v->size - v->pos <= 5) {
        v->data = realloc(v->data, 2*( v->size * sizeof(double*) +  v->size * 3 * sizeof(double)));
        if (v->data != NULL) {
            for (size_t i = v->size; i < 2 * v->size; ++i) {
                v->data[i] = (double*)calloc(3, sizeof(double));
            }
            v->size += v->size;
           // printf("resize, new size %lu\n",v->size);
        } else {
            err = MEMORY_ERROR;
        }
    }
    return err;
}
int PolygonInit(Polygon* p) {
    int err = -1;
    p->size = POLYGON_SIZE;
    p->pos = -1;
    p->data = calloc(POLYGON_SIZE, sizeof(int));
    if (p->data == NULL)
        err = MEMORY_ERROR;
    return err;
}

int PolygonResize(Polygon* p) {
    int err = -1;
    if (p->size - p->pos <= 1) {
      //  printf("pol resize old size = %zu ", p->size);
        p->data = realloc(p->data, 2 * p->size* sizeof (int));
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
int ModelInit(Model* m) {
    int err = VertexInit(&(m->v));
    if (err == -1)
        err = SurfaceInit(&(m->s));
    m->min_max_x[0] = INFINITY;
    m->min_max_x[1] = -INFINITY;
    m->min_max_y[0] = INFINITY;
    m->min_max_y[1] = -INFINITY;
    m->min_max_z[0] = INFINITY;
    m->min_max_z[1] = -INFINITY;
    return err;
}

void VertexPrint(Vertex v) {
    printf("VERTEX:\n");
    for (int i = 0; i <= v.pos; ++i) {
        for (int j = 0; j < 3; ++j) {
            j == 2 ? printf("%lf\n", v.data[i][j]) : printf("%lf ", v.data[i][j]);
        }
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

void ModelPrint(Model m) {
    printf("min x = %lf, max x = %lf\n", m.min_max_x[0], m.min_max_x[1]);
    printf("min y = %lf, max y = %lf\n", m.min_max_y[0], m.min_max_y[1]);
    printf("min z = %lf, max z = %lf\n", m.min_max_z[0], m.min_max_z[1]);
    printf("model size: vert = %zu, surf = %zu\n", m.v.size, m.s.size);
    printf("vertexex = %d ",m.v.pos + 1);
    printf("polygons = %d ", m.s.pos + 1);
    printf(" sum = %d\n",m.v.pos + m.s.pos);
    VertexPrint(m.v);
    SurfacePrint(m.s);
}

void FreeModel(Model* m) {
    for (int i = 0; i < m->v.size; ++i)
        free(m->v.data[i]);
    free(m->v.data);
    for (int i = 0; i < m->s.size; ++i) {
        printf("i = %d\n", i);
        free(m->s.polygons[i].data);
    }
    free(m->s.polygons);
}
