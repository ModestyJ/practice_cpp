#include <iostream>
using namespace std;

class X {
    public : 
        int a;
        X() : a(0) {
            cout << "X constructor" <<endl;
        }

        virtual void out() {
            cout << "X out" << endl;
        }
};
class Y : public X {
    public : 
        int b;
        Y() : b(0) {
            cout << "Y constructor" <<endl;
        }

        virtual void out() {
            cout << "Y out" << endl;
        }
        void special() {
            cout << "Y special out" << endl;
        }
};
void g1(X x) {
    x.out();
}
void g2(X *x) {
    x->out();
}
void g3(X &x) {
    x.out();
}
void f1(Y y) {
    y.special();
    g1(y); // OK. g1 will access only X portion of y.
}
void f2(Y *y) {
    y->special();
    g2(y); // OK. g2 will access only X portion of *y.
}
void f3(Y &y) {
    y.special();
    g3(y); // OK. g3 will access only X portion of y.
}

int main(void) {
    Y y1, *y2 = new Y;
    f1(y1);
    f2(y2);
    f3(y1);

    return 0;
}
