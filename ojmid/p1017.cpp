//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // computes the amount of fuel required for a given distance
    // beecrowd problem 1017 https://www.beecrowd.com.br/judge/en/problems/view/1017


    int spent_time_hr, average_speed;
    double distance;

    cin >> spent_time_hr >> average_speed;
    distance = spent_time_hr * average_speed / 12.0;

    printf( "%.3f\n", distance);
    return 0;
}
