//
// Created by Alex on 23.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program prints string titles of months for a given integer number
    // using the switch construction
    int months;
    string msg;

    printf("Enter the month number (1-12): ");
    cin >> months;
    //option 2
    switch (months)
    {
        case 1:
            msg = "January\n";
            break;
        case 2:
            msg = "Febuary\n";
            break;
        case 3:
            msg = "March\n";
            break;
        case 4:
            msg = "April\n";
            break;
        case 5:
            msg = "May\n";
            break;
        case 6:
            msg = "June\n";
            break;
        case 7:
            msg = "July\n";
            break;
        case 8:
            msg = "August\n";
            break;
        case 9:
            msg = "September\n";
            break;
        case 10:
            msg = "October\n";
            break;
        case 11:
            msg = "November\n";
            break;
        case 12:
            msg = "December\n";
            break;
        default:
            msg = "Incorrect month number.\n";
            break;
    }

    cout << msg;


    return 0;
}

