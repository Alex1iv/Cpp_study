//
// Created by Alex on 21.09.2023.
//
#include <iostream>
using namespace std;

int main() {
    // reads two integer numbers from the user
    // and finds their sum, difference, product, quotient, and remainder

    int integer_1, integer_2; // declare a new variables

    cout << "Enter the first integer? ";
    cin >> integer_1; // initialise the first variable

    cout << "Enter the second integer? ";
    cin >> integer_2; // initialise the second variable

    cout << integer_1 << " + " << integer_2 << " = " << integer_1 + integer_2 << endl;
    cout << integer_1 << " - " << integer_2 << " = " << integer_1 - integer_2 << endl;
    cout << integer_1 << " * " << integer_2 << " = " << integer_1 * integer_2 << endl;
    cout << integer_1 << " / " << integer_2 << " = " << integer_1 / integer_2 << endl; // quotient
    cout << integer_1 << " % " << integer_2 << " = " << integer_1 % integer_2 << endl; // reminder from division

    return 0;
}