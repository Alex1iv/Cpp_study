//
// Created by Alex on 22.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // Read three point floating values (A, B and C) and verify if is possible to make a triangle with them.
    // If it is possible, calculate the perimeter of the triangle and print the message:
    //Perimetro = XX.X
    //If it is not possible, calculate the area of the trapezium which basis A and B and C as height,
    // and print the message: Area = XX.X
    //Print the result with one digit after the decimal point.
    // beecrowd problem 1043 https://www.beecrowd.com.br/judge/en/problems/view/1043

    double A, B, C, Area;

    //A=6.0; B=4.0; C=2.0;
    //A=6.0; B=4.0; C=2.1;
    cin >> A >> B >> C;


    Area = 0.5 * C * (A + B);

    if (A<(B+C) && B<(C+A) && C<(A+B))
    {
        printf("Perimetro = %.1f\n",A + B + C);
    }
    else
    {
        printf("Area = %.1f\n",Area);
    }
    return 0;
}