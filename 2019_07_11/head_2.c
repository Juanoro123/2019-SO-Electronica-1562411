#include <stdio.h>
#include <stdlib.h>
 int main(int argc, char *argv[]) {
  printf("location of code : %p\n", main); //ubicacion de memoria del metodo main
  printf("location of heap : %p\n", malloc(100e6)); //ubicacion de memoria para el  heap del programa llamado con malloc
  int x = 3;
  printf("location of stack: %p\n", &x); //ubicacion de memoria para el stack del programa 
  return x;
}
//mmap permite ver que ubicacion tiene la memoria libre que se le asigno al programa 
