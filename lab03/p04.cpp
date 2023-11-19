//
// Created by Alex on 16.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program determines whether a certain year is a leap year or not

    int year;

    printf("Enter the year: ");
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0) && !(year % 100 == 0))
    {
        printf("%d is a leap year.\n", year);
    }

    else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
