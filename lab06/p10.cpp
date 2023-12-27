//
// Created by Alex on 09.12.2023.
//


# include <iostream>
#include <iomanip>
using namespace std;

double inchesToMillimeters(double inches){
    return (0.039 * inches);
}

double millimetersToInches(double millimeters) {
    return (millimeters / 0.039);
}

int main() {
    //this program prints the table with values in mm and in inches

    //const int x = 5;
    printf("Millimeters  Inches   |   Inches  Millimeters\n");

    for (int i = 1; i < 51; i++) {
        printf("%d\t\t\t %.3f    |   %d\t\t  %.3f\n", i * 2, inchesToMillimeters((double) i * 2), i, millimetersToInches((double) i));
        //cout  << right << i*2  <<  setw(x)<< " " << setprecision(3)  << right <<inchesToMillimeters( (double)i*2)  << endl;//<< left<< setw(y)<< i<< setw(x) << millimetersToInches((double) i)
    }

    return 0;
}
