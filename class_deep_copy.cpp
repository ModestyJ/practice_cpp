#include <iostream>
#include <cstring>

using namespace std;

class Person{
public:
    int age;
    char* name;

    Person(int _age, const char* _name){
        age = _age;
        name = new char[strlen(_name) + 1];
        strcpy(name, _name);
    }
    
    Person(const Person& p){ //복사 생성자로 깊은 복사하기
        age = p.age;
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
    }
    
    void infoPerson(){
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
};

int main(){
    Person A(20, "홍길동");
    Person B = A;
    
    B.age = 30;
    strcpy(B.name, "이순신");
    
    A.infoPerson();
    B.infoPerson();

    cout << "W/O Copy constructor: Person A 이름이 이순신으로 덮어써지는 문제 발생!" << endl;

    return 0;
}
