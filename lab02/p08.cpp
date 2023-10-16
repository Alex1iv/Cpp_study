//
// Created by Alex on 05.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program converts pounds to kilograms

    double pounds;

    cout << "Enter a number in pounds: ";
    cin >> pounds;

    printf("%0.1f pounds is %0.3f kilograms\n", pounds, pounds * 0.454 );

    return 0;
}
