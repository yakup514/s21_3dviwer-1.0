//
//  parser.c
//  test
//
//  Created by mcbk on 08.02.2023.
//

#include "parser.h"
#include <string.h>

int Parser (char* file_name, Model* m) {
    int err = -1;
    FILE* file = fopen(file_name, "r");
    if (file == NULL)
        return ERROR_OPENING_FILE;
   
    err = ModelInit(m);
//    if (err != -1)
//        return err;
    char* line = NULL;
    size_t len = 0;
    size_t read = 0;
    while ((read = getline(&line, &len, file)) != -1) {
        
        if (line[0] == 'v') {
            double x = 0, y = 0, z = 0;
            int cord_qua = sscanf(line, "v %lf %lf %lf", &x, &y, &z);
            if (cord_qua == 3) {
                m->v.pos++;
                m->v.data[m->v.pos][0] = x;
                m->v.data[m->v.pos][1] = y;
                m->v.data[m->v.pos][2] = z;
                MaxCoordSet(m);

                VertexResize(&(m->v));
            }
        }  else if (line[0] == 'f' && line[1] == ' ') {
            int numb = 0;
            int vertex = 0;
            int n = 0;
            err = PolygonInit(&(m->s.polygons[++m->s.pos]));
            char* tmp_ptr = line;
            ++tmp_ptr;
            ++tmp_ptr;
            while ((numb = sscanf(tmp_ptr, "%d%n", &vertex, &n)) > 0) {
             
                tmp_ptr += n;
                m->s.polygons[m->s.pos].data[++m->s.polygons[m->s.pos].pos] = vertex + 1;
                err = PolygonResize(&(m->s.polygons[m->s.pos]));
               
                while (*tmp_ptr == '/') {
                    int temp;
                    while (*tmp_ptr == '/')
                        ++tmp_ptr;
                    if (*tmp_ptr== ' ')
                        break;
                    sscanf(tmp_ptr, "%d%n", &temp, &n);
                    tmp_ptr+=n;
                    //printf("%s\n",l);
                }
            }
            SurfaceResize(&(m->s));
        }
    }
    free(line);
    fclose(file);
    return err;
}

void MaxCoordSet(Model* m) {
    if (m->v.data[m->v.pos][0] < m->min_max_x[0])
        m->min_max_x[0] = m->v.data[m->v.pos][0];
    if (m->v.data[m->v.pos][0] > m->min_max_x[1])
        m->min_max_x[1] = m->v.data[m->v.pos][0];
    if (m->v.data[m->v.pos][1] < m->min_max_y[0])
        m->min_max_y[0] = m->v.data[m->v.pos][1];
    if (m->v.data[m->v.pos][1] > m->min_max_y[1])
        m->min_max_y[1] = m->v.data[m->v.pos][1];
    if (m->v.data[m->v.pos][2] < m->min_max_z[0])
        m->min_max_z[0] = m->v.data[m->v.pos][2];
    if (m->v.data[m->v.pos][2] > m->min_max_z[1])
        m->min_max_z[1] = m->v.data[m->v.pos][2];
}
