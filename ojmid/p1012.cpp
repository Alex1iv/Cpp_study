//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // computes area of figures
    // beecrowd problem 1012 https://www.beecrowd.com.br/judge/en/problems/view/1012

    double A, B, C;
    const double pi = 3.14159;

    cin >> A;
    cin >> B;
    cin >> C;

    printf( "TRIANGULO: %0.03f\n", A * C * 0.5);
    printf( "CIRCULO: %0.03f\n", pi * C * C);
    printf( "TRAPEZIO: %0.03f\n", 0.5 * (A + B) * C);
    printf( "QUADRADO: %0.03f\n", B * B);
    printf( "RETANGULO: %0.03f\n", A * B);


    return 0;
}
