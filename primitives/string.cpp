#include <iostream>
#include <string>
using namespace std;

int main(){
//escape sequences
//escape sequences are special characters that are used to represent certain
//characters or actions in a string. They are preceded by a backslash (\) to
//indicate that they are not to be interpreted literally. Some common escape
//sequences include:
    string favoriteTea = "Red Tea \t";

    string description = "Know as \"best\" \";\" tea \n";
cout << description << favoriteTea << endl;

return 0;
}