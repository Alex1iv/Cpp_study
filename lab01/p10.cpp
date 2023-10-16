//
// Created by Alex on 25.09.2023.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // The program forecast the US population for the next 5 years. It also changes the numbers format from double to int

    int year_duration_sec, current_population;
    double year_1, year_2, year_3, year_4, year_5;
    double births_rate, deaths_rate, incoming_migrants_rate, annual_increase;

    current_population = 312032486;
    births_rate = 1.0/7.0;
    deaths_rate = 1.0/13.0;
    incoming_migrants_rate = 1.0/45.0;

    year_duration_sec = 60 * 60 * 24 * 365;
    annual_increase = year_duration_sec * (births_rate - deaths_rate + incoming_migrants_rate);

    year_1 = current_population + annual_increase ;
    year_2 = year_1 + annual_increase;
    year_3 = year_2 + annual_increase;
    year_4 = year_3 + annual_increase;
    year_5 = year_4 + annual_increase;

    cout << lround(year_1) << "\n" << lround(year_2) << "\n" << lround(year_3) << "\n" << lround(year_4) << "\n" << lround(year_5) ;
    return 0;
}
