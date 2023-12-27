//
// Created by Alex on 23.11.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program calculates the sum of consecutive numbers
    // the loop breaks if the sum exceeds 100
    // but if the number is equal either to 10 or 11, it doesn't add to the sum

    int sum = 0, number = 0;

    while (number < 20)   {
        number++;

        if (number == 10 || number == 11){
            continue;
        }
        sum +=number;
    }

    cout << "The number is " << number << endl;
    cout << "The sum is " << sum << endl;

    return 0;
}


