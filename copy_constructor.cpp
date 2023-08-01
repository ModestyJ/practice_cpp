#include <iostream>
using namespace std;

class A {
public:
    int *   ptr;
    size_t size;

    A(size_t _size) : size(_size) {
        cout << "Constructor" << endl;
        ptr = new int[size];
    }
    
    // 1. copy constructor
    A(const A& rhs) : size(rhs.size) {
        cout << "Copy constructor" << endl;
        ptr = new int[size];
        for (int i=0; i<size; i++)
            ptr[i] = rhs.ptr[i];
    }

    // 2. assignment operator
    A& operator=(const A& rhs){
        cout << "Copy assignment operator" << endl;
        if(ptr != NULL) delete [] ptr;

        size = rhs.size;
        ptr = new int[rhs.size];
        for (int i=0; i<size; i++)
            ptr[i] = rhs.ptr[i];

        return *this;
    }

    // 3. destructor
    ~A() {
        cout << "Destructor start" << endl;
        delete [] ptr;
        cout << "Destructor end" << endl;
    }
};

void func_Value(A a){}; // 복사생성자 호출
void func_Reference(A &a){}; // 복사생성자 호출 안됨.
void func_Pointer(A* a){}; //복사생성자 호출 안됨.

int main()
{
    //객체
    cout << "객체" << endl;
    A a1(5); // 생성자만 호출
    A a2(5); //생성자만 호출
    A a3 = a1; // 복사생성자 호출됨(초기화되는 시점)
    a1 = a2; //복사 대입 연산자 호출
    
    //함수
    cout << endl<< "함수" << endl;
    func_Value(a1); //복사 생성자 호출됨
    func_Reference(a1); //복사 생성자 호출안됨
    func_Pointer(&a1); //복사 생성자 호출안됨
    
    return 0;
}//객체가 생성되는 블록이 끝나는 시점에 소멸자 호출
