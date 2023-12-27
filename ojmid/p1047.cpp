//
// Created by Alex on 02.12.2023.
//


# include <iostream>

using namespace std;

int main() {
    //this program count game duration in hours
    //Read the start time and end time of a game, in hours and minutes
    // (initial hour, initial minute, final hour, final minute).
    // Then print the duration of the game, knowing that the game can begin in a day and finish in another day,
    /*
    Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

            Input
    Four integer numbers representing the start and end time of the game.

            Output
    Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.
    */
    int start_hr, start_min, end_hr, end_min, dur_hr, dur_min;

    cin >> start_hr >> start_min >> end_hr >> end_min;

    dur_hr = end_hr - start_hr;
    dur_min = end_min - start_min;

    if (dur_min < 0){
        dur_hr-= 1; dur_min +=60;

    }
    if (dur_hr < 0){
        dur_hr+=24;
    }

    if (dur_hr == 0 && dur_min ==0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur_hr, dur_min);
    }

    return 0;
}
