//
// Created by Alex on 08.12.2023.
//

# include <iostream>
using namespace std;

int sum_of_digits (long& n){
    // returns the total of digits

    int sum;
    sum += n % 10;
    return sum;
}

double averageDigits(long n){

    int counter = 0, sum = 0;
    double average;

    while (n > 0 ) {
        sum = sum_of_digits(n);
        n = n / 10;
        counter++;
    }

    average = sum / counter;

    printf("The sum of the digits is %d\nThe average of the digits is %.1f\n",sum, average);

    return average;
}



int main() {
    //this program ...
    /*
     Write a function double averageDigits(long n) that computes the average of the digits in an integer.
     Create a test program for the function that prompts the user to enter an integer
     and displays the sum and average of all its digits.
     */

    //int counter=0, sum=0;

    long n;
    printf("Enter the number: ");
    cin >> n;

    averageDigits(n);

    return 0;
}

    /*
     int n, previous_digit, counter=1, sum=0;
    float average=0.0;
    printf("Enter the n: ");
    cin >> n;

    while (n > 1 ) {
        int digit = n % 10;
        sum += digit;

        if(counter > 1) {
            average = (digit + (float) previous_digit) / 2.0 ;
        }

        counter++;
        previous_digit = digit;

        n = n / 10;
    }
     */