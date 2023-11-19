#include <iostream>
using namespace std;
int main() {
    //Write a simple console program that acts as a floating-point number calculator,
    // performing basic arithmetic operations: addition, subtraction, and division.
    // The program should ask the user to choose an operation, input two numbers,
    // and then display the result of the operation on the two numbers.
    // The output should always include four digits after the fractional point.

    int operator_sign;
    float num_1, num_2, res;

    printf("Calculator\nPlease choose an arithmetic operation:\n"
           "1. Addition (+)\n"
           "2. Subtraction (-)\n"
           "3. Division (/)\n"
           "Enter your choice (1/2/3): ");
    cin >> operator_sign;

    cout << operator_sign <<endl;



    if (operator_sign >0 && operator_sign <=3)
    {
        printf("Enter the first number: ");
        cin >> num_1 ;

        printf("Enter the second number: ");
        cin >> num_2;

        switch (operator_sign)
        {
            case 1: res = num_1 + num_2;
                break;

            case 2: res = num_1 - num_2;
                break;

            case 3: res = num_1 / num_2;
                break;

            default:
                printf("Invalid choice. Please rerun the program and select a valid option.");
                break;
        }

        printf("The result is %.4f",res);
    }
    else
        printf("Invalid choice. Please rerun the program and select a valid option.");


    return 0;
}
