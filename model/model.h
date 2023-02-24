//
//  model.h
//  test
//
//  Created by mcbk on 08.02.2023.
//

#ifndef model_h
#define model_h
#ifdef __cplusplus
extern "C" {
#endif
#define VERTEX_SIZE 33
#define POLYGON_SIZE 6
#define SURFACE_SIZE 50
#define MEMORY_ERROR -2
#define ALL_GOOD -1

#include <OpenGL/gl.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    GLfloat* data;
    size_t size;
    GLint pos;
    GLfloat min_max_x[2];
    GLfloat min_max_y[2];
    GLfloat min_max_z[2];
    GLfloat max_coord;
} Vertex;

typedef struct {
    GLuint * data;
    size_t size;
    GLint pos;
} Polygon;

typedef struct {
    Polygon* polygons;
    size_t size;
    int pos;
} Surface;

int SurfaceInit(Surface* s);
int SurfaceResize(Surface* s);

int VertexInit (Vertex* v);
int VertexResize(Vertex* v);
int PolygonInit(Polygon* p);
int PolygonResize(Polygon* p);
void VertexPrint(Vertex v);
void SurfacePrint(Surface s);
void FreeVertex (Vertex* v);
void FreeSurface(Surface* s);

//typedef struct {
//    double** data;
//    size_t size;
//    int pos;
//} Vertex;
//
//typedef struct {
//    int* data;
//    size_t size;
//    int pos;
//} Polygon;
//

//
//typedef struct {
//    Vertex v;
//    Surface s;
//    double min_max_x[2];
//    double min_max_y[2];
//    double min_max_z[2];
//} Model;
//


//int ModelInit(Model* m);
//void VertexPrint(Vertex v);
//void SurfacePrint(Surface s);
//void ModelPrint(Model m);
//void FreeModel(Model* m);

#ifdef __cplusplus
}
#endif
#endif /* model_h */
