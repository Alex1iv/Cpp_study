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
    double M[size][size], elem = 66;
    char action;

    cin >> action;

    double total = 0.0;

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cin >> M[i][j];
            if (j < i ){
                total += M[i][j];
            }
        }
    }

    switch (action) {
        case 'S': {
            cout << total << endl;
            break;
        }
        case 'M':{
            cout << fixed << setprecision(1) << total/ elem << endl;
            //printf("%.1f\n",  total/ (double) size);
            break;
        }
    }

    return 0;
}
