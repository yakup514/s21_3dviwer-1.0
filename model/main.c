//
//  main.c
//  test
//
//  Created by mcbk on 08.02.2023.
//

#include <stdio.h>
#include "parser.h"
#include "model_operations.h"

int main() {
//    char* buf = "v1.0 2 3a sdd";
//    double val1, val2, val3;
//
//    int err = sscanf(buf, "v %lf %lf %lf", &val1, &val2, &val3);
//
//    printf("err = %d, x= %lf, y = %lf , z = %lf\n", err, val1, val2, val3);
//    Model m;
//    int err = Parser("/Users/a1234/Desktop/21/c/3dviewer/skull.obj", &m);
//    printf("err = %d\n", err);
//    ModelPrint(m);
//    FreeModel(&m);
//   // VertexPrint(v);
//   // SurfacePrint(s);
//    char* l = "f 11/11/2 134/122/1 56/ 78 999 -339//-339 -367//-367 -387//-387 ";
//    int numb = 0;
//    int v = 0;
//    int n = 0;
//    ++l;
//    ++l;
//    printf("%s\n",l);
//    while ((numb = sscanf(l, "%d%n", &v, &n)) > 0) {
//        l += n;
//        printf ("\n val = %d \n", v);
//        //printf("%s\n",l);
//        while (*l == '/') {
//            int temp;
//            ++l;
//            if (*l== ' ')
//                break;
//            sscanf(l, "%d%n", &temp, &n);
//                l+=n;
//            //printf("%s\n",l);
//        }
//        
//    }
    Model m;
    ModelSet("/Users/a1234/Desktop/21/c/3dviewer/test.obj", &m, 0.5);
    ModelPrint(m);
    return 0;
}

