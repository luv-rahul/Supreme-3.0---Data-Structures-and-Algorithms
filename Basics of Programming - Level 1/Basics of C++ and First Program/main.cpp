#include <iostream>
using namespace std;

int main()
{
    cout << "Namaste Dunia!" << endl;

    /*Output*/
    cout << 4 << endl;

    /*Input*/
    int age; // Variable Declaration
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    /*Variable and Datatypes*/
    // Variable Declaration
    // int age;

    // Variable Initialization
    // int
    // int age = 20;

    // char
    char ch = 'a';
    // char ch2 = 'ab'; // ! MULTIPLE CHARACTERS NOT ALLOWED
    // cout << ch2 << endl;

    // float
    float f = 11.6;

    // double
    double d = 365.345678;

    /*sizeof*/
    char ch = 'A';
    cout << sizeof(ch) << endl;

    /*Out of Range - Cyclic Order*/
    short value = 32770;
    cout << value << endl;
    return 0;
}