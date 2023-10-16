//
// Created by Alex on 05.10.2023.
//

#include <iostream>
using namespace std;

int main() {
    //this program returns the sum of digit out of a 4-digit number

    int num, a, b, c, d;

    cout << "Enter a four-digit integer: ";
    cin >> num;

    a = num % 10;
    b = num / 10 % 10;
    c = num / 100 % 10;
    d = num / 1000 % 10;

    printf("The sum of all digits is %d\n", a + b + c + d );

    return 0;
}
