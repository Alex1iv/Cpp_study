//
// Created by Alex on 09.12.2023.
//

# include <iostream>
using namespace std;

void displayEven(int number) {
    int even=0;
    int counter = 0;

    while (number > 0){
        int digit = number % 10;

        if (digit % 2 == 0) {
            counter++;
            //printf("digit: %d\n",digit);
            //printf("digit: %d, counter: %d\n", digit, counter);
            even = even * 10 + digit ; //* log10(counter)

        }
        number = number / 10;
    }
    printf("even: %d\n",even);
}

int main() {
    //this program
    /*
     Write a function void displayEven(int number) to display the even digits in an integer.
     Write a test program that prompts the user to enter an integer and displays the even digits in it.
     */

    int number;
    printf("Enter the number: ");
    cin >> number;
    cout << number <<endl;

    displayEven(number);

    return 0;
}
