//
// Created by Alex on 26.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //this program prints  arrays
    int num;
    int initial_val = 1;


    while (num !=0 ){
        cin >> num;
        int arr[num][num];

        for (int i = 0; i < num; i++){
            for (int j = 0; j < num; j++){
                arr[i][j] = 1;
                //printf(" 1");
            }

            if (num>2) {
                for (int i = 1; i < num - 1; i++) {
                    for (int j = 1; j < num - 1; j++) {
                        arr[i][j] = initial_val++;


                        if (i == j && i < num) {
                            arr[i][j] = initial_val++;
                            //
                        }
                        initial_val = 1;
                    }


                }
            }

        }

        for (int i = 0; i < num; i++){
            for (int j = 0; j < num; j++){
                cout << arr[i][j] << " ";
            }
            printf("\n");
        }
    }

    return 0;
}

/*
Write a program that read an integer number N (0 ≤ N ≤ 100) that correspond to the order of a Bidimentional array
 of integers, and build the Array according to the above example.

Input
The input consists of several integers numbers, one per line, corresponding to orders from arrays to be built.
 The end of input is indicated by zero (0).

Output
For each integer number of input, print the corresponding array according to the example. (the values
 of the arrays must be formatted in a field of size 3 right justified and separated by a space. None space
 must be printed after the last character of each row of the array. A blank line must be printed after each array.
 */
