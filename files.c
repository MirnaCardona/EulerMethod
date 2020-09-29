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
void imprimirres(double res[],FILE * arch)
{
    int i;
    for(i=0;i<10;i++)
    fprintf(arch, "\n%d, %f", i, res[i]);
}
