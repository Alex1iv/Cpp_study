//
// Created by Alex on 13.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // converts days into YY:MM:DD
    // beecrowd problem 1020 https://www.beecrowd.com.br/judge/en/problems/view/1020

    int period_days, YY, MM, DD;

    cin >> period_days;

    YY = period_days / 365;
    MM = (period_days - (YY * 365)) / 30 ;
    DD = period_days - (YY * 365) - (MM * 30);

    printf( "%d ano(s)\n%d mes(es)\n%d dia(s)\n", YY,MM, DD);

    return 0;
}