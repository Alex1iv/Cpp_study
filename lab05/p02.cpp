//
// Created by Lena on 19.11.2023.
//


# include <iostream>

using namespace std;

int main() {
    //Create a program that reads an integer from the standard input and finds the sum of all its digits.
    //
    //Use the while loop in this task.

    int number, sum;

    printf("Enter an integer: ");
    number = 6427572;
    //number = 784;
    //cin >> number;

    while (number > 0)
    {
        sum += number %10;
        number /=10;
    }

    printf("The sum of all digits is %d", sum);
    return 0;
}
