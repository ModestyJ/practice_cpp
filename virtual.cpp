#include <iostream>
using namespace std;

class Figure {
    public:
        virtual void draw() {
            cout<<"Figure::draw()\n";
        }
        void center() {
            cout << "Figure Move to center\n";
            draw();
        }
};

class Circle : public Figure {
    public:
        virtual void draw() {
            cout<<"Circle::draw()\n";
        }
        void center() {
            cout << "Circle Move to center\n";
            draw();
        }
        void special() {
            cout << "Circle special function\n";
        }
};

int main(){

    cout << "Test1. virtual" << endl;
    Figure f;
    Circle c;
    f.center();
    c.center();
    c.Figure::center();

    Figure * pf1;
    Figure * pf2;
    Circle * pc;

    cout << "Test2. pointer" << endl;
    pf1 = new Figure();
    pf2 = new Circle();
    pc = new Circle();

    pf1->center();
    pf2->center();
    pc->center();


    // pf2->special(); // compile error!
    pc->special();

    return 0;
}
