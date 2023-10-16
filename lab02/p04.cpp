//
// Created by Alex on 05.10.2023.
//

# include <iostream>
//#include <iomanip>
using namespace std;

int main() {
    //this program converts inches values to centimeters

    int inches;
    const double Inches_to_centim = 2.54;

    cout << "Enter the length in inches: ";
    cin >> inches; // initialise the first variable

    printf("%d in. = %g cm.\n", inches, inches * Inches_to_centim); // https://en.cppreference.com/w/c/io/fprintf
    //cout << fixed << setprecision(2) << inches << " in. = " << inches * Inches_to_centim << " cm \n";
    return 0;
}
