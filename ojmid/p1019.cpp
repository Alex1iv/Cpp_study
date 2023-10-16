//
// Created by Alex on 12.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // converts duration in sec into hh:mm:ss
    // beecrowd problem 1019 https://www.beecrowd.com.br/judge/en/problems/view/1019

    int time_sec, hh, mm, ss;

    cin >> time_sec;

    hh = time_sec / 3600;
    mm = (time_sec - hh * 3600) /60 ;
    ss = time_sec - hh * 3600 - mm * 60;

    printf( "%d:%d:%d\n", hh, mm, ss);

    return 0;
}