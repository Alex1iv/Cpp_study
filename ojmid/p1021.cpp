//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // computes the smallest possible number of banknotes and coins in which the value may be decomposed
    // beecrowd problem 1021 https://www.beecrowd.com.br/judge/en/problems/view/1021

    //const double fuel_consumption = 12.0;
    int  b_100, b_50, b_20, b_10, b_5, b_2, c_100, coins, c_50, c_25, c_10, c_05, c_01;
    double N ;

    cin >> N;

    b_100 = N / 100;
    b_50 = (N - b_100 * 100) / 50;
    b_20 = (N - b_100 * 100 - b_50 * 50) / 20;
    b_10 = (N - b_100 * 100 - b_50 * 50 - b_20 * 20) / 10;
    b_5 =  (N - b_100 * 100 - b_50 * 50 - b_20 * 20 - b_10 * 10) / 5;
    b_2 =  (N - b_100 * 100 - b_50 * 50 - b_20 * 20 - b_10 * 10 - b_5 * 5) / 2;
    c_100 = N - b_100 * 100 - b_50 * 50 - b_20 * 20 - b_10 * 10 - b_5 * 5 - b_2 * 2 ;

    coins = int((N - int(N))*100);
    c_50 =  coins / 50;
    c_25 = (coins - c_50 * 50) / 25;
    c_10 = (coins - c_50 * 50 - c_25 * 25) / 10;
    c_05 = (coins - c_50 * 50 - c_25 * 25 - c_10 * 10) / 5;
    c_01 =  coins - c_50 * 50 - c_25 * 25 - c_10 * 10 - c_05 * 5;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", b_100, b_50, b_20, b_10, b_5, b_2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", c_100, c_50, c_25, c_10, c_05, c_01);

    return 0;
}

