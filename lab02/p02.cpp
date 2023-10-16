//
// Created by Alex on 05.10.2023.
//
#include <iostream>
using namespace std;

int main() {
    //this program swaps variables without a temp variable

    int a, b;
    cout << "Enter the first value: ";
    cin >> a; // initialise the first variable

    cout << "Enter the second value: ";
    cin >> b; // initialise the second variable

    printf("Before swapping: a = %d; b = %d;\n", a, b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("After swapping: a = %d; b = %d;\n", a, b);

    return 0;
}