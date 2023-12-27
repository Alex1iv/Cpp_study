//
// Created by Alex on 02.12.2023.
//

# include <iostream>
using namespace std;
int main() {
    //this program calculates taxes
    /*
     In an imaginary country called Lisarb, all the people are very happy to pay their taxes because they know that
     doesn’t exist corrupt politicians and the taxes are used to benefit the population, without any misappropriation.
     The currency of this country is Rombus, whose symbol is R$.

    Read a value with 2 digits after the decimal point, equivalent to the salary of a Lisarb inhabitant.
     Then print the due value that this person must pay of taxes, according to the table below.
    Salary	            | Readjustment Rate,%
    -------------------------------------------
    0 - 2000.00         | without taxes
    2000.01 - 3,000.00  | 8
    3,000.01 - 4,500.00 | 18
    Above 4,500.00      | 28

    Remember, if the salary is R$ 3,002.00 for example, the rate of 8% is only over R$ 1,000.00, because the salary
     from R$ 0.00 to R$ 2,000.00 is tax free. In the follow example,
     the total rate is 8%
     over R$ 1000.00 + 18% over R$ 2.00, resulting in R$ 80.36 at all.
     The answer must be printed with 2 digits after the decimal point.

    Input
    The input contains only a float-point number, with 2 digits after the decimal point.

    Output
    Print the message "R$" followed by a blank space and the total tax to be payed, with two digits after the decimal point.
     If the value is up to 2000, print the message "Isento".
     */
    double salary, tax=0;
    const double rate_1 = 0.08, rate_2 = 0.18, rate_3 = 0.28;
    const double bracket_1 = 2000.0, bracket_2 = 3000.0, bracket_3 = 4500.0;
    cin >> salary;
    //salary = 4520;

    if (salary > bracket_1 ){

        if (salary > bracket_2){
            if (salary > bracket_3){
                tax += (salary - bracket_3) * rate_3;
                salary = bracket_3 ;
            }
            tax += (salary - bracket_2) * rate_2;
            salary = bracket_2 ;
        }
        tax += (salary - bracket_1) * rate_1;
        printf("R$ %.2f\n", tax);
    }

    else{
        printf("Isento\n");
    }

    return 0;
}