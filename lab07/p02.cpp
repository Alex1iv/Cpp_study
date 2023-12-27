//
// Created by Alex on 12.12.2023.
//

# include <iostream>
# include <array>
using namespace std;

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
    // This function calculates days in a given month and year taking into account if it is leap or not
    int days;
    month--;

    array <int, 12> duration {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    switch (month) {
        case 0:
            days = duration[0];
            break;
        case 1:
            days = (is_leap((year)) == true) ? 29: 28;
            break;
        case 3: // Fall to the next case
        case 4: // Fall to the next case
        case 5: // Fall to the next case
        case 6: // Fall to the next case
        case 7: // Fall to the next case
        case 8: // Fall to the next case
        case 9: // Fall to the next case
        case 10: // Fall to the next case
        case 11:
            days = duration[month];
            break;
        default:
            days = 0;
            break;
    }
    return days;
}

int main() {
    //this counts days per month in a given year

    /*
     Develop a program that calculates the number of days in a specific month for a given year.
     To structure your code efficiently, implement two functions:
     int get_days_of_month(int year, int month), which returns the number of days in the specified month and year,
     and bool is_leap(int year), that checks if the given year is a leap year. In the get_days_of_month function,
     use an array to look up and return the number of days, replacing the traditional selection construct.
     */

    int year, month;

    printf("Enter the year: ");
    cin >> year;

    printf("Enter the month: ");
    cin >> month;

    int days = get_days_of_month(year, month);

    days == 0 ? printf("Incorrect month number.\n") : printf("Number of days: %d", get_days_of_month(year, month));


    return 0;
}

/*
    if (month == 1 && is_leap((year)) == true) {
        days = 29;
    }
    else if (month == 1 && is_leap((year)) == false){
        days = 28;
    }
    else if {
        days = duration[month];
    }
    else {
        days = 0;
    }
 */