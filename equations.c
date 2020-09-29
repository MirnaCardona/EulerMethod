
//  equations.c
//
//
//  Created by David Perez on 29/09/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "equations.h"
#include "main.h"

double equations_fuerzas(double masa, double Dt, double K, double xt)
{
  double res;
  res=-xt * (((K * Dt * Dt)/masa)+1);
  return res;
}

double flat equations_grav(double Dt)
{
  return (Dt * Dt * GRAVEDAD);
}

double equ(double K, double masa, double t, double xt, double xt2)
{
  int res, eq1, eq2, eq3;
  if(t==0|| t==DT)
    return 10;
  else
    {
      eq1=equations_fuerzas(masa,DT, K,xt2);
      eq2=2*xt;
      eq3=equations_grav(DT);
      res=eq1+eq2+eq3;
      return res;
    }
}
