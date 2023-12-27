//
// Created by Alex on 09.12.2023.
//


# include <iostream>
using namespace std;

void displayLargest(double num1, double num2, double num3) {
    printf("The largest number is %.1f", max(max(num1,num2),num3));
}

int main() {
    //this
    /*
     Write a function void displayLargest(double num1, double num2, double num3) to display
     the largest of three numbers. Write a test program that prompts the user to enter three numbers
     and invokes the function to display the largest of them. Write another function
     called double findLargest(double num1, double num2, double num3) to return the largest of three numbers.
     Change your main function to invoke this function and print the result.
     Analyze the difference in the two approaches. Which one is better and why?
     A question like this may appear on the exam.
     */

    double num1, num2, num3;

    printf("Enter the first number: ");
    cin >>  num1;

    printf("Enter the second number: ");
    cin >> num2;

    printf("Enter the third number: ");
    cin >> num3;

    displayLargest(num1,num2,num3);

    return 0;
}
