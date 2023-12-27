//
// Created by Alex on 20.12.2023.
//


# include <iostream>
using namespace std;
#include <array>
bool is_even(int num){
    return num % 2 == 0 ? true : false;
}

int main() {
    //this program prints "Hello, word"

    const int size = 5, input_end = 15;
    int par[size], impar[size];
    //array <int,input_end> arr = {1, 3, 4, -4,2, 3, 8,2,5,-7, 54, 76, 789, 23,98};
    int num, counter_par = 0, counter_impar = 0;

    // input values to the array---------------
    for (int i=0; i < input_end; i++){
        cin >> num;  // add numbers from input
        //num = arr[i];

        if (is_even(num) == true) {
            par[counter_par] = num;    //add element to the array
            counter_par++;
        }
        else {
            impar[counter_impar] = num; // add number to the array
            counter_impar++;
        }

        if (counter_par == size) {
            for (int j = 0; j < size; j++) {
                printf("par[%d] = %d\n", j, par[j]);  // print arr
            }
            counter_par = 0; //clear counter
        }

        if (counter_impar == size) {
            for (int j = 0; j < size; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);  // print arr
            }
            counter_impar = 0; //clear counter
        }
    }

    for (int i=0; i<counter_impar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);  // print arr
    }

    for (int i=0; i<counter_par; i++){
        printf("par[%d] = %d\n", i, par[i]);  // print arr
    }

    return 0;
}
