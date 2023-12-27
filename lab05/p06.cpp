//
// Created by Alex on 23.11.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program calculates the sum of consecutive numbers
    // the loop breaks if the sum exceeds 100 (rows 14-16)

    int sum = 0, number = 0;

    while (number < 20)   {
        number++;
        sum += number;

        if (sum >= 100){
            break;
        }
    }

    cout << "The number is " << number << endl;
    cout << "The sum is " << sum << endl;

    return 0;
}


