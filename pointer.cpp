#include <iostream>
#include <string.h>
using namespace std;

int main(){
    cout << "int pointer" << endl;
    int *p1, *p2;
    p1 = new int(6);
    p2=p1;
    cout << *p1 <<" "<<*p2<<endl;

    *p2=7;
    cout << *p1 <<" "<<*p2<<endl;
    p2=new int(9);
    cout << *p1 <<" "<<*p2<<endl;

    cout << "char pointer" << endl;
    char* cp = "abcd";
    // cout << cp[0] <<endl; // error
    cout << cp <<endl;
    cout << *cp <<endl;
    cout << cp+1 <<endl;

    cout << "char array" << endl;
    char ca[] = "abcd";
    cout << ca <<endl;
    cout << *ca <<endl;
    cout << ca+1 <<endl;
    cout << ca[0] <<endl;

    return 0;
}

