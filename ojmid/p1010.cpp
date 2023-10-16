//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // computes cost purchase of 2 goods
    // beecrowd problem 1010 https://www.beecrowd.com.br/judge/en/problems/view/1010

    int prod_1_code, prod_2_code, prod_1_amount, prod_2_amount;
    double prod_1_price, prod_2_price;

    cin >> prod_1_code;
    cin >> prod_1_amount;
    cin >> prod_1_price;
    cin >> prod_2_code;
    cin >> prod_2_amount;
    cin >> prod_2_price;

    printf( "VALOR A PAGAR: R$ %0.02f\n", prod_1_amount * prod_1_price + prod_2_amount * prod_2_price);

    return 0;
}