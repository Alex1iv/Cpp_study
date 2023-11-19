//
// Created by Alex on 24.10.2023.
//


# include <iostream>
using namespace std;

int main() {
    //this program prints titles of seasons using the switch construction

    int monthnum;

    cout << "Enter the month number (1-12): ";

    cin >> monthnum;

    switch (monthnum) {
        case 12:
            printf("Winter\n");
            break;
        case 1:
            printf("Winter\n");
            break;
        case 2:
            printf("Winter\n");
            break;
        case 3:
            printf("Spring\n");
            break;
        case 4:
            printf("Spring\n");
            break;
        case 5:
            printf("Spring\n");
            break;
        case 6:
            printf("Summer\n");
            break;
        case 7:
            printf("Summer\n");
            break;
        case 8:
            printf("Summer\n");
            break;
        case 9:
            printf("Fall\n");
            break;
        case 10:
            printf("Fall\n");
            break;
        case 11:
            printf("Fall\n");
            break;
        default:
            printf("Incorrect month number.\n");
            break;
    }

    return 0;
}
