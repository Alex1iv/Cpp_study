//
// Created by Alex on 07.12.2023.
//

# include <iostream>
using namespace std;

int get_divisor(int& number){
    // calculates maximal divisor of the number a
    int max_factor=2;

    while (number > 1 && number != 0){

        if (number % max_factor == 0){
            number = number / max_factor;
        }
        else {
            while (number % max_factor !=0){
                max_factor++;
            }
        }
    }

    return max_factor;
}

int GCD(int x, int y){
    // this function returns maximal of two numbers
    int res = max(get_divisor(x),get_divisor(y));
    //printf("xx: %d, yy: %d\n",get_divisor(x), get_divisor(y));
    return res;
}


int main() {
    //this program calculates the great common divisor of two number using a custom function
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
