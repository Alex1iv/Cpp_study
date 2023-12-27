//
// Created by Alex on 26.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //this program calculates the average daily temperature and humidity
    //for the 10 days.

    const int number_of_days = 10;
    const int number_of_hours = 24;
    double data[number_of_days][number_of_hours][2]; //array for the data

    //read input using input redirection from a file
    int day, hour;
    double temperature, humidity;
    for (int k = 0; k < number_of_days; k++){
        cin >> day >> hour >> temperature >> humidity;
        data[day - 1][hour - 1][0] = temperature;
        data[day - 1][hour - 1][1] = humidity;
    }
    // find the average temperature and humidity
    for (int i = 0; i < number_of_days; i++) {
        double daily_temp_total = 0, daily_humid_total = 0;
        for (int j = 0; j < number_of_hours; j++) {
            daily_temp_total += data[i][j][0];
            daily_humid_total += data[i][j][1];
        }
        // display result
        cout << "Day " << i << "'s average temperature is "
             << daily_temp_total/ number_of_hours << endl;
        cout << "Day " << i << "'s average humidity is "
             << daily_humid_total / number_of_hours << endl;
    }

    return 0;
}
