//
// Created by Alex on 05.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program converts Fahrenheit to Celsius

    int temp_fahr;
    //double temp_cels, x;

    cout << "Enter the temperature in degrees Fahrenheit: ";
    cin >> temp_fahr; // initialise the first variable

    //temp_cels = (temp_fahr - 32) * 5.0 / 9.0;

    printf("The temperature in degrees Celsius is %0.2f\n", (temp_fahr - 32) * 5.0 / 9.0);

    return 0;
}