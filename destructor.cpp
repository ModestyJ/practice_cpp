#include <iostream>
using namespace std;

void h(void) {
    cout << "Nonclass function h" << endl;
}
void k(void) {
    cout << "Nonclass function k" << endl;
}
class X {
    public: 
        int a;
        X() { f(); g(); }
        ~X() { h(); }
        void f(void) { cout << "f() in X" << endl; }
        void g(void) { cout << "g() in X" << endl; }
};
class Y : public X {
    public: 
        Y() { f(); g(); }
        ~Y() { k(); }
        void g(void) { cout << "g() in Y" << endl; }
};
int main() {
    X x; cout << endl;
    Y y; cout << endl;
    X *p = new X(); cout << endl;
    Y *q = new Y(); cout << endl; 

    delete p;

    return 0;
}
