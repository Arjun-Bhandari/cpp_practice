#include <iostream>

using namespace std;
#include <vector>


class Car{
public:

    string carName;
    string carColor;
    int carNum;
    vector <string> carFeatures; 
    Car(){
        carName = "Unknown";
        carColor = "Unkown";
        carNum = 0;
        carFeatures = {"Unknown"};
        cout << "Constructor called" << endl;
    }
    void displayCarInfo(){
        cout << "Car Name: " << carName << endl;
        cout << "Car Color: " << carColor << endl;
        cout << "Car Number: " << carNum << endl;
        cout << "Car Features: ";
        for (string feature : carFeatures){
            cout << feature << " ";
        };
    };
};


int main(){
Car carone;
carone.carName;
carone.displayCarInfo();
// carone.carName = "BMW";
// carone.carColor = "Black";
// carone.carNum = 1234;
// carone.carFeatures = {"Sunroof", "Leather seats", "Bluetooth"}; 
// carone.displayCarInfo();
// cout << "\n " << endl;
// Car cartwo;
// cartwo.carName = "Range Rover";
// cartwo.carColor = "White";
// cartwo.carNum = 5678;
// cartwo.carFeatures = {"All-wheel drive", "Panoramic sunroof", "Heated seats"};
// cartwo.displayCarInfo();

return 0;
}
