//
// Created by Alex on 02.10.2023.
//


#include <iostream>
using namespace std;

int main() {
    //this program swaps variables

    int a, b, temp;

    cout << "Enter the first value: ";
    cin >> a; // initialise the first variable

    cout << "Enter the second value: ";
    cin >> b; // initialise the second variable

    //cout <<"Before swapping: a = " << a << "; b = " << b << ";\n";
    printf("Before swapping: a = %d; b = %d;\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d; b = %d;\n", a, b);
    //cout <<"After swapping: a = " << a << "; b = " << b << ";" << endl;

    return 0;
}