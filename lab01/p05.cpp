//
// Created by Alex on 21.09.2023.
//
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    // reads two double numbers from the user
    // and finds their sum, difference, product, quotient, and remainder

    double double_1, double_2; // declare double variables

    cout << "Enter the first double? ";
    cin >> double_1; // initialise the first variable

    cout << "Enter the second double? ";
    cin >> double_2; // initialise the second variable

    cout << double_1 << " + " << double_2 << " = " << double_1 + double_2 << endl;
    cout << double_1 << " - " << double_2 << " = " << double_1 - double_2 << endl;
    cout << double_1 << " * " << double_2 << " = " << double_1 * double_2 << endl;
    cout << double_1 << " / " << double_2 << " = " << double_1 / double_2 << endl; // quotient

    // reminder from division for floating points variables
    cout << double_1 << " % " << double_2 << " = " << fmod( double_1, double_2 ) << endl;

    return 0;
}