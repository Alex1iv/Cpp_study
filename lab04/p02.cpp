//
// Created by Alex on 23.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program prints string titles of months for a given integer number
    // using the else-if construction

    int months;
    string msg;

    printf("Enter the month number (1-12): ");
    cin >> months;
    //option 1
    if (months == 1)
    {
        msg = "January\n";
    }
    else if (months == 2){
        msg = "February\n";
    }
    else if (months == 3){
        msg = "March\n";
    }
    else if (months == 4) {
        msg = "April\n";
    }
    else if (months == 5) {
        msg = "May\n";
    }
    else if (months == 6) {
        msg = "June\n";
    }
    else if (months == 7) {
        msg = "July\n";
    }
    else if (months == 8) {
        msg = "August\n";
    }
    else if (months == 9) {
        msg = "September\n";
    }
    else if (months == 10) {
        msg = "October\n";
    }
    else if (months == 11) {
        msg = "November\n";
    }
    else if (months == 12)
    {
       msg = "December\n";
    }
    else {
        msg = "Incorrect month number.\n";
    }

    cout << msg;


    return 0;
}

