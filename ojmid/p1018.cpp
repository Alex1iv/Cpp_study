//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // computes the smallest possible number of banknotes in which the value may be decomposed
    // beecrowd problem 1018 https://www.beecrowd.com.br/judge/en/problems/view/1018

    //const double fuel_consumption = 12.0;
    int N, b_100, b_50, b_20, b_10, b_5, b_2, b_1;
    //N = 576;
    cin >> N;

    b_100 = N / 100;
    b_50 = (N - b_100 * 100) / 50;
    b_20 = (N - b_100 * 100 - b_50 * 50) / 20;
    b_10 = (N - b_100 * 100 - b_50 * 50 - b_20 * 20) / 10;
    b_5 = (N - b_100 * 100 - b_50 * 50 - b_20 * 20 - b_10 * 10) / 5;
    b_2 = (N - b_100 * 100 - b_50 * 50 - b_20 * 20 - b_10 * 10 - b_5 * 5) / 2;
    b_1 = (N - b_100 * 100 - b_50 * 50 - b_20 * 20 - b_10 * 10 - b_5 * 5 - b_2 * 2);

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00", N, b_100, b_50, b_20, b_10, b_5, b_2, b_1);
    return 0;
}

