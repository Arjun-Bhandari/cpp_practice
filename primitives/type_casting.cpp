#include <iostream>

using namespace std;

int main(){

float teaPrice = 49.99;

int roundedTeaPrice = (int) teaPrice;

int teaQuantity = 2;

double totalPrice = teaPrice * teaQuantity;
// This line casts the float variable teaPrice to an int, effectively rounding it down to the nearest whole number.
// The cast is done using the (int) syntax, which converts the float value to an integer.
cout << "Rounded tea Price is:" <<totalPrice<< endl;
    return 0;
}