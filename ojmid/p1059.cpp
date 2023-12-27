//
// Created by Alex on 09.12.2023.
//


# include <iostream>

using namespace std;

int main() {
    //this program prints "Hello, word"
    /*
     * Write a program that prints all even numbers between 1 and 100, including them if it is the case.
     * Print all even numbers between 1 and 100, including them, one by row.
     */
    for (int i=1; i<101; i++){
        if (i % 2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}
