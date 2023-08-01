#include <iostream>
using namespace std;

class A {
    public:
        virtual void foo() { cout << "A_foo()" << endl; }
        virtual void boo() { cout << "A_boo()" << endl; }
};

class B: public A {
    public:
        virtual void boo() { cout << "B_boo()" << endl; }
        virtual void zoo() { cout << "B_zoo()" << endl; }
};

int main()
{
    B b;
    b.foo(); b.zoo();
    A *a1 = &b;
    a1->foo(); a1->boo();
    // a1->zoo();
}
