//
//  parser.h
//  test
//
//  Created by mcbk on 08.02.2023.
//

#ifndef parser_h
#define parser_h
#ifdef __cplusplus
extern "C" {
#endif
#include "model.h"
#include <stdio.h>

#define ERROR_OPENING_FILE -3


//int Parser (char* file_name, Model* m);
void MaxCoordSet(Vertex* v, float x, float y, float z);
int GetVertex(char* line, Vertex* v);
int GetSurface (char* line, Surface* s);
int Parse(const char* path, Vertex* v, Surface* s);
#endif /* parser_h */



#ifdef __cplusplus
}
#endif
