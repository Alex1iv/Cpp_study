//
// Created by Alex on 09.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values).
    // Print the total number of positive numbers.

    int  counter=0;
    double num_1, num_2, num_3, num_4, num_5, num_6;

    cin >> num_1 >> num_2 >>num_3 >> num_4 >> num_5 >> num_6;

    double list[6] = {num_1, num_2, num_3, num_4, num_5, num_6};

    for (int i=0; i<6; i++){
        if (list[i]>0){
            counter++;
        }
    }
    printf("%d valores positivos\n", counter);

    return 0;
}
