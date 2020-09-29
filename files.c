//
//  files.c
//  
//
//  Created by Juan Carlos Garcia on 28/09/20.
//

#include "files.h"
#include "main.h"

void imprimircpu(int cont,double cpu_time, FILE * arch)
{
    fprintf(arch, "\n%d, %f", cont, cpu_time);
    
}
void imprimirres(int cont,double res,FILE * arch)
{
    fprintf(arch, "\n%d, %f", cont, res);
}
