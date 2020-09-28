//
//  main.c
//  
//
//  Created by Juan Carlos Garcia on 28/09/20.
//

#include "main.h"
//#include "files.h"
//#include "equations.h"


int main(void){
    FILE * arch1,* arch2;
    int tiempo,k,masa,cont;
    clock_t start, stop;
    double cpu_time,resultado;
    
    arch1 = fopen("tiempoCPU.csv","w");
    arch2 = fopen("resultados.csv","w");
    
    printf("Calculadora de bongee");
    printf("\nCual es la masa del usuario? (kg)\n");
    scanf("%d",&masa);
    printf("\nCual es el tiempo de la caida? (s)\n");
    scanf("%d",&tiempo);
    printf("\nCual es el constante de bongee? (N/m)\n");
    scanf("%dc",&k);
    
    
    for(cont = 0; cont <= tiempo; cont ++){
        start = clock();
        //resultado = equ(tiempo,k,masa,cont);
        stop = clock();
        cpu_time = (stop-start)*1e3 ;
        
        //imprimir(cont,cpu_time,resultado,arch1,arch2);
        //fprintf(arch1, "\n%d, %f", cont, cpu_time);
        //fprintf(arch2, "\n%d, %f", cont, resultado);
    }
    fclose(arch1);
    fclose(arch2);
    
    return 0;
}
