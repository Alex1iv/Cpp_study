//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // computes a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters)
    // beecrowd problem 1014 https://www.beecrowd.com.br/judge/en/problems/view/1014

    int X;
    double Y;

    cin >> X;
    cin >> Y;

    printf( "%0.003f km/l\n", X / Y);

    return 0;
}