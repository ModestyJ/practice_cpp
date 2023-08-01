#include <iostream>
using namespace std;

class Base {
    public : 
        Base() { cout << "Basic Constructor in Base" << endl; }
        Base(const Base& base) { cout << "Copy Constructor in Base" << endl; a = base.a; }
    protected : 
        int a;
};
class Derived : public Base {
    size_t size;
    int * ptr;

    public : 
        Derived() { size = 10; ptr = new int[size]; cout << "Basic Constructor in Derived" << endl; }
        // Correct definition of copy constructor in derived class
        Derived(const Derived& derived) : Base(derived) {
        // Derived(const Derived& derived) { // The problem with the code is that the Derived class's copy constructor does not call the copy constructor of its base class Base.
            cout << "Copy Constructor in Derived" << endl;
            size = derived.size;
            ptr = new int[size];
            for(size_t i=0;i<size;++i) 
                ptr[i] = derived.ptr[i];
        }
};
int main() {
    Derived derived_0;
    Derived derived_1(derived_0);

    return 0;
}

