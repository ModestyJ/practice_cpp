#include <iostream>
using namespace std;

class Base {
    public : 
        Base() { cout << "Basic Constructor in Base" << endl; }
        Base(const Base& base) { 
            cout << "Copy Constructor in Base" << endl;
            a = base.a; 
        } 
        Base& operator=(const Base& rhs) {
            cout << "Assignment operator in Base" << endl;
            a = rhs.a;
            return *this;
        }
    protected : 
        int a; 
};
class Derived : public Base { 
    public : 
        Derived() { size = 10; ptr = new int[size]; cout << "Basic Constructor in Derived" << endl; }

        // Copy constructor
        Derived(const Derived& derived) : Base(derived) {
            cout << "Copy Constructor in Derived" << endl; 
            size = derived.size;
            ptr = new int[size]; 
            for(size_t i=0;i<size;++i)
                ptr[i] = derived.ptr[i]; 
        }

        // Assignment operator
        Derived& operator=(const Derived& rhs) { 
            cout << "Assignment operator in Derived" << endl;
            Base::operator=(rhs); // <<< Don't forget to call base assignment operator >>>

            if(this != &rhs) {
                if(ptr != NULL) delete[] ptr; 
                size = rhs.size;
                ptr = new int[size]; 
                for(size_t i=0;i<size;++i)
                    ptr[i] = rhs.ptr[i]; 
            }
            return (*this); 
        }

        size_t size; 
        int * ptr;
};

int main() {
    Derived derived_0;
    Derived derived_1(derived_0); 
    derived_1 = derived_0;

    return 0;
}

