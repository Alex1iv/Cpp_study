//
// Created by Alex on 19.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //this program prints "Hello, word"
    /*
     Read a number and make a program which puts this number in the first position of an array N[10].
     In each subsequent position, put the double of the previous position.
     For example, if the input number is 1, the array numbers must be 1,2,4,8, and so on.

Input
The input contains an integer number V (V < 50).

Output
Print the stored number of each array position, in the form "N[i] = X",
     where i is the position of the array
     and x is the stored number at the position i. The first number for X is V.
     */
    const int size = 10;
    int arr[size];

    cin >> arr[0];

    // input values to the array---------------
    for (int i=1; i<size; i++){

        if (i > 0){
            arr[i] = arr[i-1] * 2 ;
        }
    }

    for (int i=0; i<size; i++){
        printf("N[%d] = %d\n", i, arr[i]);  // add numbers to the array from input
    }

    return 0;
}
