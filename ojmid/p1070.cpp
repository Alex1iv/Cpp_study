//
// Created by Alex on 10.12.2023.
//


# include <iostream>
using namespace std;

bool is_odd(int num){
    return num % 2 == 0 ? true : false;
}

int main() {
    //Read an integer value X (1 <= X <= 1000).
    // Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

    int num, counter;
    const int num_values = 6;

    cin >> num;

    is_odd(num)==true ? counter = num + 1 : counter = num ;

    for (int i=0; i<num_values*2; i+=2){
        cout << counter + i << endl;
    }

    return 0;
}

