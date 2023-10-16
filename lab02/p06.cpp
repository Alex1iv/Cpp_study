//
// Created by Alex on 05.10.2023.
//

# include <iostream>
# include <cmath>
//# include <math.h>
using namespace std;

int main() {
    //this program converts Fahrenheit to Celsius

    double r, l, A, V;

    cout << "Enter the radius and length of a cylinder: ";
    cin >> r; // initialise the first variable
    cin >> l; // initialise the first variable

    A = M_PI * r * r;
    V = A * l;

    printf("The area is %0.4f\n", A);
    printf("The volume is %0.1f\n", V);

    return 0;
}