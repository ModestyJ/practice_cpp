#include <stdio.h>
#include <stdlib.h>
#define N 1000       // Line 1 

int main() {
    unsigned int i; 
    int *d;
    unsigned int sum = 0;

    d = (int *) malloc(N * sizeof(int));

    for (i = 0; i < N; i++) *(d+i) = i;
    for (i = 0; i < N; i++) sum += d[i];

    free(d);
    printf ("Sum is %d\n", sum);
}
