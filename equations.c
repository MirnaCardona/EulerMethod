
//  equations.c
//
//
//  Created by David Perez on 29/09/2020.
//


#include <stdio.h>
#include <stdlib.h>
#include "equations.h"

double equations_fuerzas(int masa, int Dt, int K, double xt)
{
  double res;
  res=-xt * (((K * Dt * Dt)/masa)+1);
  return res;
}

double equations_grav(int Dt)
{
  return (Dt * Dt * GRAVEDAD);
}

double equ(int K, int masa, int t)
{
  int res, eq1, eq2, eq3;
  if(t==0|| t==1)
    return 10;
  else
    {
      eq1=equations_fuerzas(masa,DT, K, equ(K,masa, t-2));
      eq2=2* equ(K, masa, t-1);
      eq3=equations_grav(DT);
      res=eq1+eq2+eq3;
      return res;

    }
}
