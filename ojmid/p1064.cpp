//
// Created by Alex on 09.12.2023.
//


# include <iostream>

using namespace std;

int main() {
    //Read 6 values that can be floating point numbers. After, print how many of them were positive.
    // In the next line, print the average of all positive values typed, with one digit after the decimal point.

    int  counter=0;
    double num_1, num_2, num_3, num_4, num_5, num_6, total;

    cin >> num_1 >> num_2 >>num_3 >> num_4 >> num_5 >> num_6;

    double array[6] = {num_1, num_2, num_3, num_4, num_5, num_6};

    for (int i=0; i<6; i++){
        if (array[i]>0){
            total+=array[i];
            counter++;
        }
    }
    printf("%d valores positivos\n%.1f\n", counter,total/counter);

    return 0;
}
