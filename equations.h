//
//  equations.h
//
//
//  Created by David Perez on 28/09/2020.
//

#ifndef equations_h
#define equations_h


/*
 * System headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * Application specific headers required by the following declarations
 * (the implementation will import its specific dependencies):
 */

/* Constants declarations. */
#DEFINE GRAVEDAD 9.81
#DEFINE DT 1
/* Set EXTERN macro: */

#ifndef equations_IMPORT
#define EXTERN
#else
#define EXTERN extern
#endif

/* Types declarations. */

/* Global variables declarations. */


/* Function prototypes. */


/*
 *
 * La funcion equations_fuezas calcula la fuerza externa
 *
 * @params
 *      masa (int):
 * masa proporcionada por el usuario dado por el usuario 
 *      Dt(int); 
 *   diferencia de tiempo
 *    K (int):
 *  Constante del bongee
.*     xt (int)
 *   posicion 2 segundos atras atras

 * @returns
  int
*/


EXTERN double equations_fuerzas(int masa, int Dt, int K, double xt);

/*
 *
 * La funcion equiations_grav regresa el valor de la graverdad por 
 * el cuadrado de la diferencial del tiempo. 
 *
 * @params
 *      
 *    Dt(int);
 *   diferencial del tiempo

 * @returns
 int.
*/


EXTERN double equations_grav(int Dt);

/*
 *
 * La funcion equ regresa el valor de la posicion que 
 * necesita el usuario
 *
 * @params
 *      K (int);
 *  contante de elasticidad del bongee
 *      masa (int);
 *   masa de la persona que esta cayendo
 *      t (int);
 *   tiempo de donde se quirere sacar la posicion
 * @returns
 *  double
*/


EXTERN double equ(int K, int masa, int t);

#undef equations_IMPORT
#undef EXTERN
#endif /* equiations_h */
