//
//  main.c
//  
//
//  Created by Juan Carlos Garcia on 28/09/20.
//

#include "main.h"
#include "files.h"
#include "equations.h"


int main(void){
    FILE * arch1, arch2;
    double tiempo,k,masa,cpu_time,resultado, ant1, ant2;
    float cont;
    clock_t start, stop;
    
    arch1 = fopen("tiempoCPU.csv","w");
    arch2 = fopen("resultados.csv","a+");
    
    printf("Calculadora de bongee");
    printf("\nCual es la masa del usuario? (kg)\n");
    scanf("%d",&masa);
    printf("\nCual es el tiempo de la caida? (s)\n");
    scanf("%d",&tiempo);
    printf("\nCual es el constante de bongee? (N/m)\n");
    scanf("%dc",&k);
    
    
    for(cont = 0; cont <= tiempo; cont ++){
        start = clock();
        resultado = equ(k,masa,(cont/10));
        stop = clock();
        cpu_time = (stop-start)*1e3 ;
        
        imprimircpu(cont,cpu_time,arch1);
        
    }
    fclose(arch1);
    fclose(arch2);
    
    return 0;
}
