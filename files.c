//
//  files.c
//  
//
//  Created by Juan Carlos Garcia on 28/09/20.
//

#include "files.h"
#include "main.h"

void imprimir(int cont,double cpu_time,double res,FILE * arch1, FILE * arch2){
    fprintf(arch1, "\n%d, %f", cont, cpu_time);
    fprintf(arch2, "\n%d, %f", cont, res);
}
