//
// Created by Alex on 20.12.2023.
//


# include <iostream>
#include <vector>
using namespace std;


int main() {
    /*
     Read a number X. Put this X at the first position of an array N [100].
     In each subsequent position (1 up to 99) put half of the number inserted at the previous position,
     according to the example below. Print all the vector N.

Input
The input contains a double precision number with four decimal places.

Output
For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored in that position.
     Each number of N[...] must be printed with 4 digits after the decimal point.
     */

    const int size = 100;
    vector <double> vec;
    double num;

    cin >> num;

    // input values to the array ---------------
    for (int i=0; i<size; i++) {
        vec.push_back(num);  // add numbers to the array from input
        num /=2.0;
    }

    // print values of the array ----------------
    for (int i=0; i<size; i++){
        printf("N[%d] = %.4f\n", i, vec[i]);
    }

    return 0;
}
