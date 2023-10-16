//
// Created by Alex on 05.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program converts foots to meters

    double foots;

    cout << "Enter a value for feet: ";
    cin >> foots; // initialise the first variable

    printf("%0.1f feet is = %0.4f meters\n", foots, foots * 0.305 );

    return 0;
}
