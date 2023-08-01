#include <iostream>
using namespace std;

class MyCar {
    private:
        //멤버변수
        int fuel;
        bool power;

    public:
        // Default constructor
        MyCar () {
            cout << "MyCar default constructor" << endl;
            fuel = 0;
            power= false;
        }
        // 1. 생성자를 통한 초기화
        // MyCar (int v1) : fuel(v1) {
        //     cout << "MyCar argument constructor" << endl;
        //     power= false;
        // }
        // 2. overriding을 통한 초기화
        MyCar (int var1) {
            cout << "MyCar overriding constructor" << endl;
            fuel = var1;
            power= false;
        }
        //메소드
        void go() {
            this->fuel--;
        }

        void oiling(int n) {
            this->fuel += n;
        }

        void fuel_check() {
            cout << "연료 : " << fuel << std::endl;
        }

        ~MyCar() { cout << "MyCar Destructor call" << endl; }
};

int main (){
    // 1. 생성자를 통한 초기화
    // MyCar car[3] = {MyCar(10), MyCar(20), MyCar(30)}; //생성
    // 2. overriding을 통한 초기화
    // MyCar car[3]; //생성
    // for (int i = 0; i < 3; i++)car[i] = MyCar(10); //초기화
    // 3. Dynamic Array Pointer
    // MyCar *car[3];
    // for (int i = 0; i < 3; i++) {
    //     car[i] = new MyCar((i+1)*10);
    // }
    // 4. Dynamic Array Pointer2
    // MyCar *car = new MyCar[3];
    // for (int i = 0; i < 3; i++) {
    //     car[i] = MyCar((i+1)*10);
    // }
    // 5. Static Array Pointer
    MyCar mycar[3] = {MyCar(10), MyCar(20), MyCar(30)}; //생성
    MyCar *car = mycar;

    //메서드 호출
    // 1,2,4
    // for (int i = 0; i < 3; i++) {
    //     car[i].oiling(100);
    //     car[i].fuel_check();
    //     for (int j = 0; j < 10; j++) car[i].go();
    //     car[i].fuel_check();
    // }

    // 3
    // for (int i = 0; i < 3; i++) {
    //     car[i]->oiling(100);
    //     car[i]->fuel_check();
    //     for (int j = 0; j < 10; j++) car[i]->go();
    //     car[i]->fuel_check();
    // }

    // 5
    for (int i = 0; i < 3; i++) {
        car->oiling(100);
        car->fuel_check();
        for (int j = 0; j < 10; j++) car->go();
        car->fuel_check();
        car++;
    }

    // 3
    // delete car[0];
    // delete car[1];
    // delete car[2];
    // 4
    // delete []car;

    return 0;
}
