//
// Created by Alex on 13.10.2023.
//

# include <iostream>
# include <cmath>
using namespace std;

int main() {
    //this program computes roosts of a quadratic equation
    // beecrowd problem 1036 https://www.beecrowd.com.br/judge/en/problems/view/1036

    double a, b, c, discriminant, R_1, R_2;

    cin >> a >> b>> c;

    discriminant = b * b - 4 * a * c;

    if ((discriminant > 0) && (a !=0))
    {
        R_1 = (-b + sqrt(discriminant))/ (a * 2);
        R_2 = (-b - sqrt(discriminant))/ (a * 2);
        printf("R1 = %.5f\nR2 = %.5f\n",R_1,R_2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
