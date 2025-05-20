#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
    string teaType = "Red Tea";
    float teaPrice = 49.99;
    char teaRating = 'A';

    // Improved output formatting
    cout << "Type of Tea: " << teaType << "\n"
         << "The price of tea is: $" << teaPrice << "\n"
         << "The Rating of tea is: " << teaRating << endl;
    
    // Get price input
    float userinputTeaPrice;
    cout << "Enter the base price of tea: ";
    cin >> userinputTeaPrice;

    // Calculate increased price
    int userInputCastedPrice = (int) userinputTeaPrice;
    userInputCastedPrice = userInputCastedPrice * 1.1; // 10% increase
    cout << "The price of the Tea after 10% increase is: $" << userInputCastedPrice << endl;

    // Clear buffer and get tea preference
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string userfavoriteTea;
    cout << "What is your favorite tea? ";
    getline(cin, userfavoriteTea); 

    // Get quantity
    cout << "How many cups of tea do you want to order? ";
    int userTeaQuantity;
    cin >> userTeaQuantity;


    cout << "Your favorite tea is: " << userfavoriteTea << "\n"
         << "You have ordered " << userTeaQuantity << " cups of Tea" << endl;

    return 0;
}