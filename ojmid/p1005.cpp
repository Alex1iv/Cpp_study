//
// Created by Alex on 10.10.2023.
//

# include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double a,b, MEDIA;
    const double coef_a = 3.5;
    const double coef_b = 7.5;

    cin >> a;
    cin >> b;
    MEDIA = (a * coef_a  + b * coef_b) / (coef_a + coef_b);

    cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;

    return 0;
}
