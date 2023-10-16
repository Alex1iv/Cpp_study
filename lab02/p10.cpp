//
// Created by Alex on 06.10.2023.
//

#include <iostream>

using namespace std;

int main() {
    // The program forecast the US population for the next given years

    int year_duration_sec, current_population, n_years;
    double births_rate, deaths_rate, incoming_migrants_rate, annual_increase, result;

    current_population = 312032486;
    births_rate = 1.0/7.0;
    deaths_rate = 1.0/13.0;
    incoming_migrants_rate = 1.0/45.0;
    cout << "Enter the number of years: " << endl;
    //n_years = 1;
    cin >> n_years;

    year_duration_sec = 60 * 60 * 24 * 365;
    annual_increase = year_duration_sec * (births_rate - deaths_rate + incoming_migrants_rate);

    // arithmetic progression
    result =  current_population + (n_years) * annual_increase;

    printf("The population in %d years is %0.0f \n", n_years, result ); //lround(year_5)

    return 0;
}