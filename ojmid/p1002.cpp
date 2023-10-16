//
// Created by Lena on 26.09.2023.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double pi, A, R;
    pi = 3.14159;

    cin >> R;
    A = pi * pow(R, 2);
    cout << fixed << setprecision(4) << "A=" << A << endl;

    return 0;
}