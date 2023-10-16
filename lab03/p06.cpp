//
// Created by Alex on 16.10.2023.
//

# include <iostream>
# include <cmath>
using namespace std;

int main() {
    //this program computes roots of qudratic equation

    double a, b, c, discriminant, r1, r2;

    printf("Enter a, b, c: ");
    cin >> a >> b>> c;

    discriminant = b * b - 4 * a * c;

    if ((discriminant > 0) && (a !=0))
    {
        r1 = (-b + sqrt(discriminant))/ (a * 2);
        r2 = (-b - sqrt(discriminant))/ (a * 2);
        printf("The equation has two roots %.4f and %.4f\n", r1, r2);
    }
    else if (discriminant == 0)
    {
        r1 = -b / (2 * a);
        printf("The equation has one root %.4f\n", r1);
    }
    else
    {
        printf("The equation has no real roots\n");
    }


    return 0;
}
