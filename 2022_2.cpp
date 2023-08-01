#include <iostream> 
#include <string> 
using namespace std; 
class Cars
{
    protected:
        string type; 
    public:
        Cars (string _type) : type (_type) { }
        virtual void ShowCarInfo() const { cout << "Type : " << type << endl << endl; } 
        ~Cars() { }
};

class ImportedCars : public Cars 
{
    private:
        string model, country; 
    public:
        ImportedCars(string _type, string _model, string _country): Cars(_type), 
        model(_model), country(_country){}
        void ShowCarInfo() const
        {  cout << "Type : " << type << endl;
            cout << "MModel : " << model << endl;
            cout << "Country : " << country << endl << endl; 
        }
        ~ImportedCars(){}; 
};

class DomesticCars : public Cars 
{
    private:
        string model; 
        int warranty;
    public:
        DomesticCars (const char *_type, string _model, int _warranty) : Cars (_type), 
        model(_model), warranty(_warranty){}
        void ShowCarInfo() const
        {   cout << "Type : " << type << endl;
            cout << "Model : " << model << endl ;
            cout << "Warranty : " << warranty << "years" << endl << endl; 
        }
        ~DomesticCars() {}
};

class CarList
{
    private:
        Cars* carlist[50];
        int carnum;
    public:
        CarList(): carnum(0) {}
        void addcar(Cars* mycar) { carlist[carnum++]=mycar; }
        void ShowAllinfo () const
        { for (int i=0; i<carnum; i++) carlist[i]->ShowCarInfo(); }

        ~CarList() { for(int i=0; i<carnum; i++) delete carlist[i]; }
};

int main()
{
    CarList mycars;

    mycars.addcar(new Cars("Sedan"));
    mycars.addcar(new ImportedCars("EV", "Tesla", "US"));
    mycars.addcar(new DomesticCars("SUV", "Hyundai", 10));

    mycars.ShowAllinfo();
    return 0;
}
