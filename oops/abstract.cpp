#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car{
    public:
    virtual void numberOfWheels() = 0; //pure virtual function expected to be overridden
    virtual void fuelType()= 0;
    virtual void color()= 0;

    void carDetails(){
        numberOfWheels();
        fuelType();
        color();
    }
};


//derived class
class Honda: public Car{
    public:
        void numberOfWheels() override {
            cout  << "Car: Honda Car"<< endl;
        }

        void fuelType() override {
            cout << "Fuel Type: Petrol"<< endl;
        }
        void color() override{
            cout << "Color Black" << endl;
        }
};

class BMW: public Car{
    public:
        void numberOfWheels() override {
            cout  << "BMW Car"<< endl;
        }

        void fuelType() override {
            cout << "Fuel Type: Gas"<< endl;
        }
        void color() override{
            cout <<  "Color: Red"<< endl;
        }
};


int main(){
    Honda honda;
    BMW bmw;
    honda.carDetails();
    bmw.carDetails();


    return 0;
}