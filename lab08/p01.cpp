//
// Created by Alex on 21.12.2023.
//

# include <iostream>
using namespace std;

const int column_size = 4;

int sum(const int a[][column_size], int rowSize) {
    // the sum of all the elements in a two-dimensional array.
    int total = 0;
    for (int row = 0; row < rowSize; row++) {
        for (int column = 0; column < column_size; column++) {
            total += a[row][column];
        }
    }
    return total;
}


int main() {
    //this program uses a function that returns the sum of all the elements in a
    // two-dimensional array (matrix).

    const int row_size = 3;
    int m[row_size][column_size];

    cout << "Enter " << row_size << " rows and " << column_size << " columns: " << endl;

    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < column_size; j++){
            cin >> m[i][j]; // fill the array
        }
    }

    cout << "Sum of all elements is " << sum(m, row_size) << endl; // pass the array

    return 0;
}
