//
// Created by Alex on 22.09.2023.
//
#include <iostream>
using namespace std;

int main() {
    //this program calculates sum of first 10 odd numbers w/o loops

    int result, n;
    n = 10;

    // derivation of numbers in the arithmetic progression
    result = 0.5 * (2 * 1 + 2 * (n -1)) * n;
    cout << result;

    return 0;
}

