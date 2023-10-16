//
// Created by Alex on 16.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program compares 2 numbers and prints the maximum
    int num_1, num_2;

    printf("Enter the first number: ");
    cin >> num_1;

    printf("Enter the second number: ");
    cin >> num_2;

    if (num_1 > num_2) {
        printf("The larger number is %d.\n", num_1);
    }
    else if (num_1 == num_2) {
        printf("The numbers are equal.\n");
    }
    else {
        printf("The larger number is %d.\n", num_2);
    }


    return 0;
}
