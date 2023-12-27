//
// Created by Alex on 20.12.2023.
//


# include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
     Write a program that reads a number T and fill a vector N[1000] with the numbers from 0 to T-1 repeated times,
     like as the example below.

Input
The input contains an integer number T (2 ≤ T ≤ 50).

Output
For each position of the array N, print "N[i] = x", where i is the array position and x is the number stored in that position.
     */

    const int size = 1000;
    vector <int> vec;
    int counter=0, num;

    cin >> num;

    // input values to the vector---------------
    for (int i=0; i<size; i++) {
        //for (int j=0; j < num; j++){
        vec.push_back(counter);  // add numbers to the vector from input
        counter++;

        if (counter == num){
            counter = 0;
        }
    }
    // print vlues of the vector----------------
    for (int i=0; i<size; i++){
        printf("N[%d] = %d\n", i, vec[i]);
    }

    return 0;
}
