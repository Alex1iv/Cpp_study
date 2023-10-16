//
// Created by Alex on 21.09.2023.
//
#include <iostream>
using namespace std;

int main() {
    // inputs a string from the console and outputs

    string name; // declare a new variable

    cout << "What is your name? "  << endl;
    getline(cin, name); // initialise a new string with comma

    cout << "Hello, "<< name <<"!"; // output the result in a new string

    return 0;
}
