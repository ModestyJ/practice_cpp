#include <iostream>

class Base {
    public : 
        int public_var; 
    protected : 
        int protected_var; 
    private : 
        int private_var; 
};
class Public_Derived : public Base {
    void a() {public_var = 1;}
    void b() {protected_var = 1;}
    // void c() {private_var = 1;} // error
};
class Protected_Derived : protected Base {
    void d() {public_var = 1;}
    void e() {protected_var = 1;}
    // void f() {private_var = 1;} // error
};
class Private_Derived : private Base {
    void g() {public_var = 1;} 
    void h() {protected_var = 1;}
    // void i() {private_var = 1;}  // error
};

class X : public Protected_Derived {
// class X : public Public_Derived {
    void j() {public_var = 1;}
    void k() {protected_var = 1;}
    // void l() {private_var = 1;}  // error
};
class Y: protected Public_Derived {
    void m() {public_var = 1;}
    void n() {protected_var = 1;}
    // void o() {private_var = 1;}  // error
};
class Z : protected Private_Derived {
    // void p() {public_var = 1;} // error
    // void q() {protected_var = 1;} // error
    // void r() {private_var = 1;}  // error
};

int main() {
    Base bb;
    // bb.protected_var = 1;  // error

    Protected_Derived pd;
    // pd.public_var = 1; // error protected 

    X x;
    // x.public_var = 1; // error protected

    Z z;
    // z.public_var  = 1; // erro protected

    return 0;
}
