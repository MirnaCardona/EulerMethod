//
//  files.c
//  
//
//  Created by Juan Carlos Garcia on 28/09/20.
//


#include "files.h"
#include "main.h"
#include "equations.h"

void imprimircpu(int cont,double cpu_time, FILE * arch)
{
    fprintf(arch, "\n%d, %f", cont, cpu_time);
    
}

void imprimirres(int count, double res,FILE * arch)
{
    fprintf(arch, "\n%d, %f", count, res);
}
