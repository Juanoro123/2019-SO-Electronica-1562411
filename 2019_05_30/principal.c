
#include <stdio.h>
#include "entero.h"

int main(int argc, char** argv) {
  entero a,b;

  a = 5;
  b = 6;
  printf("la resta de %d - %d es %d\n",a,b,resta(a,b));
  printf ("la division de %d / %d es %d\n", a,b,division(a,b));
  printf ("la multiplicacion de %d * %d es %d\n", a,b,multiplicacion(a,b));
}

