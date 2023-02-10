//
//  model_operations.h
//  test
//
//  Created by mcbk on 09.02.2023.
//

#ifndef model_operations_h
#define model_operations_h

#include <stdio.h>
#include "parser.h"

int ModelSet(char* path, Model* m, double scale);
void ModelResize(Model* m, double scale);
void ModelTurn(Model* m, double angle);
void ModelMove(Model* m, double val, char axis);


#endif /* model_operations_h */
