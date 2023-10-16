//
// Created by Alex on 10.10.2023.
//

# include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double A, B, C, MEDIA;
    const double coef_a = 2;
    const double coef_b = 3;
    const double coef_c = 5;

    cin >> A;
    cin >> B;
    cin >> C;
    MEDIA = (A * coef_a + B * coef_b + C * coef_c) / (coef_a + coef_b + coef_c);

    //cout << fixed << setprecision(2) << "MEDIA = " << MEDIA << endl;
    printf( "Media = %0.1f\n", MEDIA);

    return 0;
}

