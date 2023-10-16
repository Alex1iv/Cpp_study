//
// Created by Alex on 12.10.2023.
//

# include <iostream>
# include <cmath>
using namespace std;

int main() {
    // computes volume of a sphere
    // beecrowd problem 1011 https://www.beecrowd.com.br/judge/en/problems/view/1011

    double R, volume;
    const double PI = 3.14159;
    const double coeff = 4/3.0;

    cin >> R;
    volume = coeff * PI * pow(R,3);

    printf( "VOLUME = %0.3f\n", volume);

    return 0;
}
