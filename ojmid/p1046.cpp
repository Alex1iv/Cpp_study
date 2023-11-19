//
// Created by Alex on 22.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // Read the start time and end time of a game, in hours.
    // Then calculate the duration of the game, knowing that the game can begin in a day
    // and finish in another day, with a maximum duration of 24 hours.
    // The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”
    // beecrowd problem 1046 https://www.beecrowd.com.br/judge/en/problems/view/1046

    int a,b;

    //a=16;b=2;
    //a=0;b=0;
    //a=2;b=16;
    cin >> a >> b;

    if (a > b)
    {
        printf("O JOGO DUROU %d HORA(S)\n",24 - a + b);
    }
    else if (a == b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }


    return 0;
}