//
// Created by Alex on 19.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //this program prints "Hello, word"
    /*
     Write a program that reads an array N [20]. After, change the first element by the last,
     the second element by the last but one, etc.., Up to change the 10th to the 11th. print the modified array.

Input
The input contains 20 integer numbers, positive or negative.

Output
For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored in that position.
     */
    const int size = 20;
    int arr[size];

    // input values to the array---------------
    for (int i=0; i<size; i++){
        cin >> arr[size-i-1];  // add numbers to the array from input
    }

    for (int i=0; i<size; i++){
        printf("N[%d] = %d\n", i, arr[i]);  // add numbers to the array from input
    }

    return 0;
}
