//
// Created by Alex on 12.12.2023.
//


# include <iostream>
# include <array>
//# include <iomanip>
# include <algorithm>
# include <cmath>
using namespace std;

int main() {
    //this program calculates the main statistics of an array

    const int size = 5;
    int sum = 0;
    int arr[size];

    //array <int, size> arr {};

    // fill the array
    for (int i=0; i<size; i++){
        cout << "Enter the element at index " << i <<": ";
        cin >> arr[i];

    }

    cout << "Data:"<< endl;

    for (int i=0; i<size; i++){
        cout << arr[i]<<" ";
        sum += arr[i];

    }
    cout << endl;
    //int* min_array = min_element(begin(arr),end(arr));
    const auto [min_arr, max_arr] = minmax_element(begin(arr),end(arr));

    //int min_arr = array_min(arr,size);
    //int max_arr = array_min(arr,size);

    cout << "Min: "<< *min_arr << "\nMax: "<< *max_arr << endl;

    float mean_arr = sum / (float)size;

    printf("Mean: %.2f\n", mean_arr);
    //cout << "Mean: "<< setprecision(2) << static_cast <float> ((*max_arr + *min_arr) / 2) <<  endl;

    float sum_squares = 0;

    for (int i=0; i<size; i++){
        sum_squares += pow((arr[i] - mean_arr),2);
    }
    float SD_arr = sqrt(sum_squares/size);

    printf("SD: %.2f", SD_arr);

    return 0;
}

//int array_min (int arr[], int size){
//    int min = arr[0], max = arr[0];
//
//    for (int i=0; i<size; i++) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//        else if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return min, max;
//}
