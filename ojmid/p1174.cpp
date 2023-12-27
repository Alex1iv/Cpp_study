//
// Created by Alex on 19.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //
    /*
     In this problem, your task is to read an array A[100].
     At the end, print all array positions that store a number less or equal to 10 and the number stored in that position.

Input
The input contains 100 numbers. Each number can be integer, floating-point number, positive or negative.

Output
For each number of the array that is equal to 10 or less, print "A [i] = x",
     where i is the position of the array and x is the number stored in the position, with one digit after the decimal point.
     */
    const int size = 100;
    double arr[size];

    // input values to the array---------------
    for (int i=0; i<size; i++){
        cin >> arr[i];  // add numbers to the array from input
    }

    for (int i=0; i<size; i++){
        if (arr[i] <=10){
            printf("A[%d] = %.1f\n", i, arr[i]);  // add numbers to the array from input
        }
    }

    return 0;
}
