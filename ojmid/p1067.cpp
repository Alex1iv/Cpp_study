//
// Created by Alex on 10.12.2023.
//

# include <iostream>
using namespace std;

int main() {
    //Read an integer value X (1 <= X <= 1000).
    // Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

    int num;
    cin >> num;

    for (int i=1; i<=num; i+=2){
         cout << i << endl;
    }

    return 0;
}
