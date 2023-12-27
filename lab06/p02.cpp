//
// Created by Alex on 05.12.2023.
//

bool is_leap(int year) {
    //It determines whether a given year is leap or no
    if ((year % 400 == 0) || (year % 4 == 0) && !(year % 100 == 0))
    {
        return true;
    }

    else {
        return false;
    }
}

int get_days_of_month(int year, int month){

    int days;
    switch (month) {
        case 1:
            days = 31;
            break;
        case 2:
            days = (is_leap((year)) == true) ? 29: 28;
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30 ;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30 ;
            break;
        case 12:
            days = 31;
            break;
        default:
            days = 0;
            break;
    }

    return days;
}

# include <iostream>
using namespace std;

int main() {
    //this program calculates the number of months in a given month and year
    // taken into account if the year is leap or not

    int year, month;

    printf("Enter the year: ");
    cin >> year;

    printf("Enter the month: ");
    cin >> month;

    int days = get_days_of_month(year, month);

    days == 0 ? printf("Incorrect month number.\n") : printf("Number of days: %d", get_days_of_month(year, month));

    return 0;
}
