//
// Created by Alex on 28.10.2023.
//


# include <iostream>
using namespace std;

int main() {
    //this program calculates the interest rate by loan amount properties

    int loan_amt;
    double int_rate;

    string msg;
    printf("Enter the amount of the loan: ");
    cin >> loan_amt;

    if (loan_amt >= 10000 && loan_amt <=100000)    {
        int_rate = 15;
    }
    else if (loan_amt > 100000 && loan_amt <=500000)    {
        int_rate = 13.5;
    }
    else if (loan_amt > 500000 && loan_amt <=1000000) {
        int_rate = 12.5;
    }
    else if (loan_amt > 1000000 && loan_amt <=5000000) {
        int_rate = 12.5;
    }

    if (loan_amt < 10000 || loan_amt > 5000000) {
        printf("Loan cannot be provided.\n");
    }
    else {
        printf("The rate of interest: %.1f", int_rate);
    }

    return 0;
}