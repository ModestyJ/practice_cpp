#include <stdio.h>

void foo(int x, int *y, int *z, int w){
    x++;
    *y = *y + 1;
    (*z) += 1;
    w --;
}

void swap_using_value(int a, int b) { int tmp = a; a = b; b = tmp; }
void swap_using_ref(int* a, int* b) { int tmp = *a; *a = *b; *b = tmp; }

int main()
{
    int A[] = {0, 1, 2, 3};
    // printf("%d, %d, %d, %d\n", &A[1], A, A+1, *(A+1));

    foo(A[0], &A[1], A+2, *(A+3));
    printf("%d, %d, %d, %d\n\n", A[0], A[1], A[2], A[3]);

    int u, v;
    u = 1; v = 2;
    swap_using_value(u,v);
    printf("u,v = %d,%d\n", u, v);

    u = 1; v = 2;
    swap_using_ref(&u,&v);
    printf("u,v = %d,%d\n", u, v);
}
