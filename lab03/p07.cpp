//
// Created by Alex on 16.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program computes roots of qudratic equation

    int today, next_day;
    string week_day_today, week_day_next_day;

    printf("Enter today's day: ");
    cin >> today;

    printf("Enter the number of days elapsed since today: ");
    cin >> next_day;
    next_day += today ;

    if (today == 0 || today % 7 == 0 )  {
        week_day_today = "Sunday";
    }
    else if (today == 1 || today % 8 == 0) {
        week_day_today = "Monday";
    }
    else if (today == 2 || today % 9 == 0) {
        week_day_today = "Tuesday";
    }
    else if (today == 3 || today % 10 == 0) {
        week_day_today = "Wednesday";
    }
    else if (today == 4 || today % 11 == 0) {
        week_day_today = "Thursday";
    }
    else if (today == 5 || today % 12 == 0) {
        week_day_today = "Friday";
    }
    else if (today == 6 || today % 13 == 0) {
        week_day_today = "Saturday";
    }

    if (next_day == 0 || next_day % 7 == 0 || next_day % 14 == 0 || next_day % 28 == 0)  {
        week_day_next_day = "Sunday";
    }
    else if (next_day == 1 || next_day % 8 == 0 || next_day % 15 == 0 || next_day % 29 == 0) {
        week_day_next_day = "Monday";
    }
    else if (next_day == 2 || next_day % 9 == 0 || next_day % 16 == 0 || next_day % 30 == 0) {
        week_day_next_day = "Tuesday";
    }
    else if (next_day == 3 || next_day % 10 == 0 || next_day % 17 == 0 || next_day % 31 == 0) {
        week_day_next_day = "Wednesday";
    }
    else if (next_day == 4 || next_day % 11 == 0 || next_day % 18 == 0 ) {
        week_day_next_day = "Thursday";
    }
    else if (next_day == 5 || next_day % 12 == 0 || next_day % 19 == 0 ) {
        week_day_next_day = "Friday";
    }
    else if (next_day == 6 || next_day % 13 == 0 || next_day % 20 == 0 ) {
        week_day_next_day = "Saturday";
    }

    printf("Today is %s and the future day is %s", week_day_today.c_str(), week_day_next_day.c_str());
    return 0;
}
