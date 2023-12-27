//
// Created by Alex on 07.12.2023.
//


# include <iostream>
using namespace std;

int GCD(int a, int b) {

    while (b != 0){
        int factor = b;
        b = a % factor;
        a = factor;
    }

    return a;
}

int main() {
    //this program calculates the great common divisor of two number using a custom function (and eucledian algorithm)
    /*
     Develop a program that accepts two arbitrary integers and outputs their greatest common divisor (GCD).
     Incorporate the function int gcd(int a, int b) within this program to calculate the GCD of a and b.
     Your solution should be straightforward and avoid using the Euclidean algorithm.
     Note that it's acceptable for the solution to exhibit slower performance with large numbers.
     */

    int a, b;

    printf("a: ");
    cin >> a;

    printf("b: ");
    cin >> b;

    if (a ==0 || b==0) {
        printf("GCD(%d, %d) is not defined.\n", a, b);
    }
    else{
        printf("GCD(%d, %d) = %d\n", a, b, GCD(a,b));
    }

    return 0;
}
