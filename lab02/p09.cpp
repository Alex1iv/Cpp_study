//
// Created by Alex on 05.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program computes the maximum number of years and remaining days out of given minutes

    int min;
    cout << "Enter the number of minutes: " << endl;
    cin >> min;

    double years = min / (365 * 24 * 60.0);
    printf("%d minutes is approximately %d years and %0.0f days\n", min, (int)years, (years - (int)years) * 365 );

    return 0;
}