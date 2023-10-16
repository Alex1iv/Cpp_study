//
// Created by Alex on 13.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program assignes a given point to 1 of 4 quadrants
    // beecrowd problem 1041 https://www.beecrowd.com.br/judge/en/problems/view/1041

    double x,y;

    cin >> x >>y;
    if (x > 0 && y > 0)
        printf("Q1\n");
    else if (x < 0 && y > 0)
        printf("Q2\n");
    else if (x < 0 && y < 0)
        printf("Q3\n");
    else if (x > 0 && y < 0)
        printf("Q4\n");
    else if (x == 0 && y !=0)
        printf("Eixo Y\n");
    else if (y == 0 && x != 0)
        printf("Eixo X\n");
    else if (x == 0 && y == 0)
        printf("Origem\n");
    return 0;
}
