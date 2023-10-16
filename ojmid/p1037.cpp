//
// Created by Alex on 13.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program attributes a given number to a set of intervals
    // beecrowd problem 1037 https://www.beecrowd.com.br/judge/en/problems/view/1037

    double num;

    cin >> num;

    if ((num < 0) || (num>100))
        printf("Fora de intervalo\n");
    else if ((num >= 0) && (num <= 25))
        printf("Intervalo [0,25]\n");
    else if ((num > 25) && (num <= 50))
        printf("Intervalo (25,50]\n");
    else if ((num > 50) && (num <= 75))
        printf("Intervalo (50,75]\n");
    else if ((num > 75) && (num <= 100))
        printf("Intervalo (75,100]\n");

    return 0;
}
