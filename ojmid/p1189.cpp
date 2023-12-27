//
// Created by Alex on 26.12.2023.
//


# include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //this program finds either sum or the average of the given 2-d array
    // below the main diagonal

    const int size = 12;
    double M[size][size], elem = 30.0;
    char action;

    cin >> action;

    double total = 0.0;

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cin >> M[i][j];
            if (j < i && j < (size-i-1)){
                total += M[i][j];
            }
        }
    }

    switch (action) {
        case 'S': {
            //cout << fixed << setprecision(1) << total << endl;
            printf("%.1f\n",  total);
            break;
        }
        case 'M':{
            //cout << fixed << setprecision(1) << total/ elem << endl;
            printf("%.1f\n",  total/ elem);
            break;
        }
    }

    return 0;
}


