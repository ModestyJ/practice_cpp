#include <stdio.h>
#define M 15
#define N 10

int main ()
{
    int A[M] = {3,5,2,1,5,6,9,3,7,0,5,2,4,9,7};
    int C[N] = {0,0,0,0,0,0,0,0,0,0};
    int B[M], i, j;

    for (i=0; i<M; i++) {
        for(j=0; j<N; j++)
            if(A[i]==j) C[j]++;
    }

    for (i=1; i<N; i++) {
        for(j=0; j<M; j++)
            if(A[j]<i) C[i]++;
    }

    for (i=0; i<N; i++) { printf("C[%d] = %d\n", i, C[i]); }
    for (i=0; i<M; i++) { B[ --C[A[i]]] = A[i]; }
    for (i=0; i<M; i++) { printf("B[%d] = %d\n", i, B[i]); }

}

