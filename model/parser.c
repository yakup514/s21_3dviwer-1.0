//
//  parser.c
//  test
//
//  Created by mcbk on 08.02.2023.
//

#include "parser.h"
#include <string.h>
#include "model_operations.h"

int Parse(const char* path, Vertex* v, Surface* s) {
    int err = ALL_GOOD;
    FILE* file = fopen(path, "r");
        if (file == NULL) {
            //printf("can't open file\n");
            return ERROR_OPENING_FILE;
        }
    err = VertexInit(v);
    int err1 = SurfaceInit(s);
    if (err == ALL_GOOD && err1 == ALL_GOOD) {
        char* line = NULL;
        size_t len = 0;
        ssize_t read = 0;
        int problem_line_number = 0;
        while ((read = getline(&line, &len, file)) != -1 && err == ALL_GOOD) {
            if (line[0] == 'v' && line[1] == ' ') {
               // printf("sslol");
                err = GetVertex(line, v);
                err = err == ALL_GOOD ? ALL_GOOD : problem_line_number;
            } else if (line[0] == 'f') {
                err = GetSurface(line, s);
                err = SurfaceResize(s);
            }
            ++problem_line_number;
        }
            
        free(line);
    }
    
    fclose(file);
    Normalize(v);
        return err;
}

int GetSurface (char* line, Surface* s) {
    int err = ALL_GOOD;
    Polygon p;
    err = PolygonInit(&p);
    char* ptr = line;
    while (*ptr != '\0' && *ptr != '\n') {
       // ++ptr;
        //printf("%c", *ptr);
        while (*ptr < '0' && *ptr > '9')
            ++ptr;
        int temp = 0;
        int numb = sscanf(ptr, "%u", &temp);
        if (numb > 0)
        p.data[++p.pos] = (GLuint)abs(temp - 1);
        PolygonResize(&p);
        ++ptr;
        while (*ptr != ' ' && *ptr != '\0' && *ptr != '\n')
            ++ptr;
    }
    s->polygons[++s->pos] = p;
    return err;
}

int GetVertex(char* line, Vertex* v) {
    int err = ALL_GOOD;
    double x = 0, y = 0, z = 0;
    int cord_qua = sscanf(line, "v %lf %lf %lf", &x, &y, &z);
    if (cord_qua == 3) {
        v->data[++v->pos] = (GLfloat)x;
        v->data[++v->pos] = (GLfloat)y;
        v->data[++v->pos] = (GLfloat)z;
        MaxCoordSet(v, x, y, z);
        VertexResize(v);
    } else {
        err = 0;
    }
    return err;
}

//int Parser (char* file_name, Model* m) {
//    int err = -1;
//    FILE* file = fopen(file_name, "r");
//    if (file == NULL) {
//        //printf("can't open file\n");
//        return ERROR_OPENING_FILE;
//
//    }
//
//    err = ModelInit(m);
////    if (err != -1)
////        return err;
//    char* line = NULL;
//    size_t len = 0;
//    size_t read = 0;
//    while ((read = getline(&line, &len, file)) != -1) {
//
//        if (line[0] == 'v') {
//            double x = 0, y = 0, z = 0;
//            int cord_qua = sscanf(line, "v %lf %lf %lf", &x, &y, &z);
//            if (cord_qua == 3) {
//                m->v.pos++;
//                m->v.data[m->v.pos][0] = x;
//                m->v.data[m->v.pos][1] = y;
//                m->v.data[m->v.pos][2] = z;
//                MaxCoordSet(m);
//
//                VertexResize(&(m->v));
//            }
//        }  else if (line[0] == 'f' && line[1] == ' ') {
//            int numb = 0;
//            int vertex = 0;
//            int n = 0;
//            err = PolygonInit(&(m->s.polygons[++m->s.pos]));
//            char* tmp_ptr = line;
//            ++tmp_ptr;
//            ++tmp_ptr;
//            while ((numb = sscanf(tmp_ptr, "%d%n", &vertex, &n)) > 0) {
//
//                tmp_ptr += n;
//                m->s.polygons[m->s.pos].data[++m->s.polygons[m->s.pos].pos] = vertex - 1;
//                if (m->s.polygons[m->s.pos].pos > 0)
//                    m->s.polygons[m->s.pos].data[++m->s.polygons[m->s.pos].pos] = vertex - 1;
//                err = PolygonResize(&(m->s.polygons[m->s.pos]));
//
//                while (*tmp_ptr == '/') {
//                    int temp;
//                    while (*tmp_ptr == '/')
//                        ++tmp_ptr;
//                    if (*tmp_ptr== ' ')
//                        break;
//                    sscanf(tmp_ptr, "%d%n", &temp, &n);
//                    tmp_ptr+=n;
//                    //printf("%s\n",l);
//                }
//            }
//            m->s.polygons[m->s.pos].data[++m->s.polygons[m->s.pos].pos] = m->s.polygons[m->s.pos].data[0];
//            SurfaceResize(&(m->s));
//        }
//    }
//    free(line);
//    fclose(file);
//    return err;
//}
//
void MaxCoordSet(Vertex* v, float x, float y, float z) {
    v->min_max_x[0] = v->min_max_x[0] > x ? x : v->min_max_x[0];
    v->min_max_x[1] = v->min_max_x[1] < x ? x : v->min_max_x[1];
    v->max_coord = v->max_coord < fabs(x) ? fabs(x) : v->max_coord;
    v->min_max_y[0] = v->min_max_y[0] > y ? y : v->min_max_y[0];
    v->min_max_y[1] = v->min_max_y[1] < y ? y : v->min_max_y[1];
    v->max_coord = v->max_coord < fabs(y) ? fabs(y) : v->max_coord;
    v->min_max_z[0] = v->min_max_z[0] > z ? z : v->min_max_z[0];
    v->min_max_z[1] = v->min_max_z[1] < z ? z : v->min_max_z[1];
    v->max_coord = v->max_coord < fabs(z) ? fabs(z) : v->max_coord;
}
