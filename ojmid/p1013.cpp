//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // idenifies the maximum out of 3 numbers
    // beecrowd problem 1013 https://www.beecrowd.com.br/judge/en/problems/view/1013

    int A, B, C, MaiorAB, MaiorBC;

    cin >> A;
    cin >> B;
    cin >> C;

    MaiorAB = 0.5 * (A + B + abs(A - B));
    MaiorBC = 0.5 * (MaiorAB + C + abs(MaiorAB - C));

    printf( "%d eh o maior\n", MaiorBC);

    return 0;
}