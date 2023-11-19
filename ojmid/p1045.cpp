//
// Created by Alex on 22.10.2023.
//

# include <iostream>
# include <cmath>
using namespace std;

int main() {
    // Read 3 double numbers (A, B and C) representing the sides of a triangle
    // and arrange them in decreasing order, so that the side A is the biggest
    // of the three sides. Next, determine the type of triangle that they can make,
    // based on the following cases always writing an appropriate message:
    //if A ≥ B + C, write the message: NAO FORMA TRIANGULO
    //if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
    //if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
    //if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
    //if the three sides are the same size, write the message: TRIANGULO EQUILATERO
    //if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
    // beecrowd problem 1045 https://www.beecrowd.com.br/judge/en/problems/view/1045

    double A, B, C, minimum, maximum, middle;

    //A=7.0; B=5.0; C=7.0;
    //A=6.0; B=6.0; C=10.0;
    //A=6.0; B=6.0; C=6.0;
    //A=5.0; B=7.0; C=2.0;
    //A=6.0; B=8.0; C=10.0;
    cin >> A >> B >> C;

    minimum = min(min(A,B), C);
    maximum = max(max(A,B), C);
    middle = A + B + C - maximum -  minimum;

    A = maximum;
    B = middle;
    C = minimum;
    //printf("A=%d, B=%d, C=%d\n",A,B,C);

    if (A >= (B+C) || B >= (A+C) || C >= (A+B))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (A*A == (pow(B,2) + pow(C,2)) || pow(B,2) == pow(A,2) + pow(C,2) || pow(C,2) == pow(A,2) + pow(B,2))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (pow(A,2) > pow(B,2) + pow(C,2) || pow(B,2) > pow(A,2) + pow(C,2) || pow(C,2) > pow(A,2) + pow(B,2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (pow(A,2) < pow(B,2) + pow(C,2) || pow(B,2) < pow(A,2) + pow(C,2) || pow(C,2) < pow(A,2) + pow(B,2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (A == B && A==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    if (A==B && A!=C || B==C && B!=A || A==C && A!=B) // ((A==B) || (B==C))//
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}