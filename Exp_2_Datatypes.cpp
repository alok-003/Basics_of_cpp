//ALok Chawat
//Entc A-1
//PRN: 23070123016
//Experiment- 2
#include <iostream>
#include <string> // Include for string
using namespace std;
int main() {
    int int_var;
    cout << "Size of integer is: " << sizeof(int_var) << " bytes" << endl;

    float float_var;
    cout << "Size of float is: " << sizeof(float_var) << " bytes" << endl;

    double double_var;
    cout << "Size of double is: " << sizeof(double_var) << " bytes" << endl;

    char char_var;
    cout << "Size of character is: " << sizeof(char_var) << " bytes" << endl;

    string string_var;
    cout << "Size of string object is: " << sizeof(string_var) << " bytes" << endl;

    bool bool_var;
    cout << "Size of boolean is: " << sizeof(bool_var) << " bytes" << endl;

    const int const_int_var = 10;
    cout << "Size of constant integer is: " << sizeof(const_int_var) << " bytes" << endl;

    return 0;
}

/*
**OUTPUT**
Size of integer is: 4 bytes
Size of float is: 4 bytes
Size of double is: 8 bytes
Size of character is: 1 bytes
Size of string object is: 24 bytes
Size of boolean is: 1 bytes
Size of constant integer is: 4 bytes
*/
    
