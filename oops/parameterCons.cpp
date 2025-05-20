#include <iostream>
#include <vector>
using  namespace std;

//parameterized constructor

class Tea{

    public:
        string* teaName;
        int servings;
        vector<string> ingredients;
    Tea(string name, int serve, vector<string> ing){
        teaName = new string(name);
        servings = serve;
        ingredients = ing;
        cout << "Parameterized constructor called" << endl;

    }
    // Copy constructor
    Tea(const Tea& other){
        teaName = new string(*other.teaName);
        servings= other.servings;
        ingredients = other.ingredients;
        cout << "Copy constructor called" << endl;
    }

//Destructor
    ~Tea(){
        delete teaName;

        cout << "Destructor called" << endl;
    }
        void displayTeaInfo(){
            cout << "Tea Name: " << *teaName << "\n"<< endl;
            cout << "Servings: " << servings << "\n"<<endl;
            cout << "Ingredients: ";
            for (string ingredient : ingredients){
                cout << ingredient << " "<< endl;
            }
        }
};

int main(){
Tea greenTea("Green Tea", 2, {"Green tea leaves", "Water", "Honey"});
greenTea.displayTeaInfo();
// Copy constructor

Tea copiedTea = greenTea;
copiedTea.displayTeaInfo();

*greenTea.teaName = "Modiifed Green Tea";

cout << "Green Tea Name_________________________"<< endl;
greenTea.displayTeaInfo();

cout << "Copied Tea Name__________________________"<< endl;
copiedTea.displayTeaInfo();

return 0;
}