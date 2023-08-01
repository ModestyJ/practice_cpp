#include <stdio.h>

void swap_using_value(int a, int b) { int tmp = a; a = b; b = tmp; }
// void swap_using_ref(int& a, int& b) { int tmp = a; a = b; b = tmp; }
void swap_using_ptr(int* a, int* b) { int tmp = *a; *a = *b; *b = tmp; }

int main() {
    int u,v;
    u = 1, v = 2; swap_using_value(u,v); printf("u,v=%d,%d\n", u,v);
    // u = 1, v = 2; swap_using_ref(u,v);   printf("u,v=%d,%d\n", u,v);
    u = 1, v = 2; swap_using_ptr(&u,&v); printf("u,v=%d,%d\n", u,v);

    return 0;
}


