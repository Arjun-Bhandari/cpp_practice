#include <iostream>

#include <vector>

using namespace std;

class Chai{

    public:
        string teaName;
        int serving;
        vector<string> ingredients;
//Delegation constructor
        Chai(string name):Chai(name, 1, {"water", "milk", "sugar", "tea leaves"}){};

//Main constructor
        Chai(string name, int serve, vector<string> ings){
            teaName = name;
            serving = serve;
            ingredients = ings;
            cout << "Chai Constructore clled"<< endl;
        };

        void displayChai(){
            cout << "Chai Name: " << teaName << endl;
            cout << "Serving: " << serving << endl;
            cout << "Ingredients: ";
            for(string ing : ingredients){
                cout << ing << " ";
            }
            cout << endl;
        }

};

int main(){
   Chai mychai("Masala Chai", 4, {"water", "milk", "sugar", "tea leaves", "spices"});
    mychai.displayChai();
    
    return 0;
}