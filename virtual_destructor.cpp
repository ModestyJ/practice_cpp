#include <iostream>
using namespace std;

class Base {
    public : 
        Base() { cout << "Basic Constructor in Base" << endl; }
        Base(const Base& base) { cout << "Copy Constructor in Base" << endl; }
        // ~Base() { cout << "Destructor in Base" << endl; }
        virtual ~Base() { cout << "Destructor in Base" << endl; }
};
class Derived : public Base {
    public : 
        size_t size;
        int * ptr;

        Derived() { 
            size = 10;
            ptr = new int[size]; 
            cout << "Basic Constructor in Derived" << endl; 
        }

        Derived(const Derived& derived) : Base(derived) {
        // Derived(const Derived& derived) { // In this case, basic constructor will be called instead of base copy constructor
            cout << "Copy Constructor in Derived" << endl;
            size = derived.size;
            ptr = new int[size];
            for(size_t i=0;i<size;++i) 
                ptr[i] = derived.ptr[i];
        }

        ~Derived() {
            delete[] ptr;
            cout << "Destructor in Derived" << endl;
        }
};
int main() {
    Base    * p1 = new Base();
    Base    * p2 = new Derived();
    Derived * p3 = new Derived();
    Derived p5(*p3);
    // Derived p4;
    // Derived p5(p4);

    // <<not virtual destructor>> Only the destructor of Base class is called.
    // Therefore ptr of derived class is not deleted!
    delete p1;
    // delete p2; 
    // delete p3; 

    return 0;
}
