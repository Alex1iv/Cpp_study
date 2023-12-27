//
// Created by Alex on 02.12.2023.
//


# include <iostream>

using namespace std;

int main() {
    //this program prints month by given number

    int month;
    string month_name;

    cin >> month;

    switch (month){
        case 1:  {month_name = "January\n"; break;}
        case 2:  {month_name = "February\n"; break;}
        case 3:  {month_name = "March\n"; break;}
        case 4:  {month_name = "April\n"; break;}
        case 5:  {month_name = "May\n"; break;}
        case 6:  {month_name = "June\n"; break;}
        case 7:  {month_name = "July\n"; break;}
        case 8:  {month_name = "August\n"; break;}
        case 9:  {month_name = "September\n"; break;}
        case 10: {month_name = "October\n"; break;}
        case 11: {month_name = "November\n"; break;}
        case 12: {month_name = "December\n"; break;}
    }

    printf("%s", month_name.c_str());

    return 0;
}
