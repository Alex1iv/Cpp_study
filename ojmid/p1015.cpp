//
// Created by Alex on 12.10.2023.
//

# include <iostream>
# include <cmath>
using namespace std;

int main() {
    // computes Eucledian distance between 2 points
    // beecrowd problem 1015 https://www.beecrowd.com.br/judge/en/problems/view/1015


    double x_1, x_2, y_1, y_2;

    cin >> x_1 >> y_1;
    cin >> x_2 >> y_2;

    printf( "%.4f\n", sqrtf((pow((x_2 - x_1),2)) + pow((y_2 - y_1),2)));

    return 0;
}