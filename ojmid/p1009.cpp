//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // computes salary of a person with bonus
    // beecrowd problem 1009 https://www.beecrowd.com.br/judge/en/problems/view/1009

    string employee_name;
    double fixed_salary, sales_per_month, TOTAL;

    cin >> employee_name;
    cin >> fixed_salary;
    cin >> sales_per_month;

    TOTAL = fixed_salary + sales_per_month * 0.15;

    printf( "TOTAL = U$ %0.02f\n", TOTAL);

    return 0;
}