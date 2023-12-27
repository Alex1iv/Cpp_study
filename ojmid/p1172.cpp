//
// Created by Alex on 19.12.2023.
//


# include <iostream>

using namespace std;

int main() {
    //this program prints "Hello, word"
    /*
     Read an array X[10]. After, replace every null or negative number of X by 1.
     Print all numbers stored in the array X.

Input
The input contains 10 integer numbers. These numbers
     can be positive or negative.
     */

    const int size = 4;
    int arr[size];
    //array <int, size> arr {};

    // input values to the array---------------
    for (int i=0; i<size; i++){

        cin >> arr[i];  // add numbers to the array from input
        if (arr[i] <= 0)
            arr[i] = 1;
        else {
            continue;
        }
    }

    for (int i=0; i<size; i++){
        printf("X[%d] = %d\n", i, arr[i]);  // add numbers to the array from input
    }

    return 0;
}
