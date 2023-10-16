//
// Created by Alex on 21.09.2023.
//
#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main() {
    // calculates table values in a loop by conditions

    int p_var, temp; // declare new int variables
    //int i; // incremental step

    cout << "Enter p value? ";
    cin >> p_var; // initialise the first variable
    temp = p_var;

    cout << left << setw(5) << "p" << right << setw(5) << "p*5" << setw(8) << "p*10" << endl;
    cout << left << setw(5) << temp << right << setw(5) <<  temp * 5 << setw(8)  << temp * 10 << endl;
    temp = temp * 2;
    cout << left << setw(5) << temp << right << setw(5) <<  temp * 5 << setw(8)  << temp * 10 << endl;
    temp = temp * 2.5;
    cout << left << setw(5) << temp << right << setw(5) <<  temp * 5 << setw(8)  << temp * 10 << endl;
    temp = temp * 2;
    cout << left << setw(5) << temp << right << setw(5) <<  temp * 5 << setw(8)  << temp * 10 << endl;

// in a cycle form 0 to 5 do printing the string while increasing the variable " i " by 1 every loop
//   for (i = 0; i < 4; i++)
//    {
       // if "i" is odd, increase the var by 2
//        if (i % 2 == 1)
//            temp = temp * 2;

//        else

            // in case "i" is zero, the var "temp" is equal to the initial value
//        if (i == 0)
//            cout << "" ;

            // if "i" is even, increase the var "temp" by 2.5
//        else
//            temp = temp * 2.5;

        // print the output
//        cout << left << setw(5) << temp << right << setw(5) <<  temp * 5 << setw(8)  << temp * 10 << endl;
//    }

    return 0;
}