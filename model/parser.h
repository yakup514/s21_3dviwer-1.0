//
//  parser.h
//  test
//
//  Created by mcbk on 08.02.2023.
//

#ifndef parser_h
#define parser_h

#include <stdio.h>
#include "model.h"
#define ERROR_OPENING_FILE -3


int Parser (char* file_name, Model* m);
void MaxCoordSet(Model* m);

#endif /* parser_h */
