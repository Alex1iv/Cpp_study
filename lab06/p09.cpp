//
// Created by Alex on 09.12.2023.
//


# include <iostream>
# include <string>


using namespace std;

void displayPattern(int n) {
    while (n>0){
        // this function prints a given number of stars
        int counter = n;
        while (counter > 0){
            cout << "*" ;
            counter--;
        }
        cout <<"\n";
        n--;
    }
}

int main() {
    //this program prints a given number of stars using a custom function
    /*
     Write a function to display a pattern as follows:
     ****
     ***
     **
     *
     Write a test program that prompts the user to enter an integer and displays the pattern.
     */
    int n;

    printf("Enter the number of lines: ");
    cin >>  n;

    displayPattern(n);

    return 0;
}
