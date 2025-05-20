#include <iostream>

#include <string>

using namespace std;

int main(){

    string userTea;
    int teaQuantity;
//ask for tea
    cout << "What do you like to order in tea ? \n";

    getline(cin, userTea);
    //ask for quantity
    cout << "How many cups of" << userTea << " do you want? \n";

    cin >> teaQuantity;

    cout << "You have ordered " << teaQuantity << " cups of " << userTea << endl;
    // The getline function is used to read a line of text from the standard input (usually the keyboard).
    // It reads the entire line until a newline character is encountered.
    // The cin object is an instance of the istream class, which is used for input operations in C++.

    return 0;
}