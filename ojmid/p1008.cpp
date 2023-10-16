//
// Created by Alex on 12.10.2023.
//

# include <iostream>

using namespace std;

int main() {
    // computes salary of a person
    // beecrowd problem 1008 https://www.beecrowd.com.br/judge/en/problems/view/1008

    int employee_num, work_hrs;
    double hr_rate, SALARY;

    cin >> employee_num;
    cin >> work_hrs;
    cin >> hr_rate;

    SALARY = work_hrs * hr_rate;

    printf( "NUMBER = %d\nSALARY = U$ %0.02f\n",employee_num, SALARY);

    return 0;
}
