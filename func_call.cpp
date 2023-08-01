#include <iostream>
using namespace std;

void swap_using_value(int a, int b) { int tmp = a; a = b; b = tmp; }
void swap_using_ref(int& a, int& b) { int tmp = a; a = b; b = tmp; }
void swap_using_ptr(int* a, int* b) { int tmp = *a; *a = *b; *b = tmp; }

int main() {
    int u,v;
    u = 1, v = 2; swap_using_value(u,v); cout << u << " " << v << endl;
    u = 1, v = 2; swap_using_ref(u,v);   cout << u << " " << v << endl;
    u = 1, v = 2; swap_using_ptr(&u,&v); cout << u << " " << v << endl;

    return 0;
}


