//
// Created by Alex on 23.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program calculates determines the number of days in a specific month
    // for a given year.
    int year, months;

    string msg;
    printf("Enter the year: ");
    cin >> year;

    printf("Enter the month: ");
    cin >> months;

    switch (months) {
        case 1:
            printf("Number of days: %d\n",30, 31);
            break;
        case 2:
            ((year % 400 == 0) || (year % 4 == 0) && !(year % 100 == 0)) ? printf("Number of days: 29\n") : printf("Number of days: 28\n");
            break;
        case 3:
            printf("Number of days: %d\n",31);
            break;
        case 4:
            printf("Number of days: %d\n",30);
            break;
        case 5:
            printf("Number of days: %d\n",31);
            break;
        case 6:
            printf("Number of days: %d\n",30);
            break;
        case 7:
            printf("Number of days: %d\n",31);
            break;
        case 8:
            printf("Number of days: %d\n",31);
            break;
        case 9:
            printf("Number of days: %d\n",30);
            break;
        case 10:
            printf("Number of days: %d\n",31);
            break;
        case 11:
            printf("Number of days: %d\n",30);
            break;
        case 12:
            printf("Number of days: %d\n",31);
            break;
        default:
            printf("Incorrect month number.\n");
            break;
    }
    return 0;
}