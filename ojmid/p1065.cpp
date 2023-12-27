//
// Created by Alex on 09.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //Make a program that reads five integer values. Count how many of these values
    // are even and  print this information like the following example.

    int  counter=0;
    int num_1, num_2, num_3, num_4, num_5;

    cin >> num_1 >> num_2 >>num_3 >> num_4 >> num_5 ;

    int list[5] = {num_1, num_2, num_3, num_4, num_5};

    for (int i=0; i<5; i++){
        if (list[i] % 2 ==0){
            counter++;
        }
    }
    printf("%d valores pares\n", counter);

    return 0;
}
