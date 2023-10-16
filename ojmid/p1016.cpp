//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // computes distance between 2 cars
    // beecrowd problem 1016 https://www.beecrowd.com.br/judge/en/problems/view/1016

    const int speed_x = 60;
    const int speed_y = 90;
    int distance;

    cin >> distance;

    printf( "%d minutos\n", distance * speed_x / (speed_y - speed_x));

    return 0;
}
