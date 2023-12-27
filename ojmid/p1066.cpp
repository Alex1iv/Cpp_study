//
// Created by Alex on 10.12.2023.
//


# include <iostream>
using namespace std;

void even_odd_counter(int array[]){
    int even_counter = 0, odd_counter = 0;

    for (int i=0; i<5; i++){
        array[i] % 2 ==0 ? even_counter++ : odd_counter++;

    }
    printf("%d valor(es) par(es)\n", even_counter);
    printf("%d valor(es) impar(es)\n", odd_counter);
}

void pos_neg_counter(int arr[]){
    int pos_counter = 0, neg_counter = 0;

    for (int i=0; i<5; i++){
        if (arr[i] > 0) {
            pos_counter++;
        }

        else if(arr[i] < 0) {
            neg_counter++;
        }
    }
    printf("%d valor(es) positivo(s)\n", pos_counter);
    printf("%d valor(es) negativo(s)\n", neg_counter);
}


int main() {
    /*This program reads five integer values. Count how many of these values are even, odd, positive and negative.
    // Print this information like following example.
            Input
    The input will be 5 integer values.

            Output
    Print a message like the following example with all letters in lowercase, indicating how many of these values
    are even, odd, positive and negative.
     */

    const int size = 5;
    int  counter=0;
    int num_1, num_2, num_3, num_4, num_5;

    cin >> num_1 >> num_2 >>num_3 >> num_4 >> num_5 ;

    int array[size] = {num_1, num_2, num_3, num_4, num_5};

    even_odd_counter(array);

    pos_neg_counter(array);

    return 0;
}
