//
// Created by Alex on 22.09.2023.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    //this program calculates value of the constant pi

    double pi_low_precision, pi_high_precision, temp_result;

    temp_result = 6.0 * (1 + 1/4.0 + 1/9.0 + 1/16.0 + 1/25.0);
    pi_low_precision = sqrt(temp_result);
    pi_high_precision = sqrt(temp_result + 1.0/6.0);
    cout << fixed << setprecision (5)  << pi_low_precision  << '\n' << pi_high_precision;

    return 0;
}
