#include <stdio.h>

void Func(int k, int m, int e, int *s, double *a) {
    *s = k+m+e;
    *a=*s/3.0;
}

int main(void) {
    int k=80;
    int m=80;
    int e=95;
    int s=0;
    double a=0;
    Func(k,m,e,&s,&a);
    printf("s=%d, a=%f",s,a);
    return 0;
}
