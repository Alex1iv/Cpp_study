//
// Created by Alex on 02.12.2023.
//

# include <iostream>
using namespace std;
//#include <list>
int main() {
    //this program p
    /*
     The company ABC decided to give a salary increase to its employees, according to the following table:


    Salary	            | Readjustment Rate,%
    -------------------------------------------
    0 - 400.00          | 15
    400.01 - 800.00     | 12
    800.01 - 1200.00    | 10
    1200.01 - 2000.00   | 7
    Above 2000.00       | 4

    Read the employee's salary, calculate and print the new employee's salary,
    as well the money earned and the increase percentual obtained by the employee,
    with corresponding messages in Portuguese, as the below example.

    Input
    The input contains only a floating-point number, with 2 digits after the decimal point.

    Output
    Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
    Novo salario:  means "New Salary"
    Reajuste ganho: means "Money earned"
    Em percentual: means "In percentage"
     */
    double old_salary, new_salary, rate;
    //list<int> rates{15,12,10,7,4};

    cin >> old_salary;

    if (old_salary <= 400.00) {
        rate = 0.15;
        //rates;
        new_salary = old_salary * (1 + rate);
    }
    else if (old_salary > 400.00 && old_salary <= 800.00){
        rate = 0.12;
        new_salary = old_salary * (1 + rate);

    }
    else if (old_salary > 800.00 && old_salary <= 1200.00){
        rate = 0.10;
        new_salary = old_salary * (1 + rate);

    }
    else if (old_salary > 1200.00 && old_salary <= 2000.00){
        rate = 0.07;
        new_salary = old_salary * (1 + rate);

    }
    else {
        rate = 0.04;
        new_salary = old_salary * (1 + rate);

    }

    printf("Novo salario: %.2f\n"
           "Reajuste ganho: %.2f\n"
           "Em percentual: %d %\n", new_salary, new_salary - old_salary, (int) (rate * 100.0));

    return 0;
}
