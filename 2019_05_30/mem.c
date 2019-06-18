#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]) {
    if (argc != 2) { 
	fprintf(stderr, "usage: mem <value>\n"); 
	exit(1); 
    } 
    int *p; 
    p = malloc(sizeof(int));
    assert(p != NULL);
    printf("proceso (%d) en direccion de memoria p: %p\n", (int) getpid(), p);
    *p = atoi(argv[1]); // assign value to addr stored in p
    while (1) {
	Spin(1);
	*p = *p + 1;
	printf("proceso (%d) tiene el valor  p: %d\n", getpid(), *p);
    }
    return 0;
}

