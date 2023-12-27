//
// Created by Alex on 13.12.2023.
//

# include <iostream>
# include <array>

using namespace std;

int main() {
    //this program prints consequent and reversed values of an array
    /*
     Read a list of five numbers. Load them into an array. Print the array to the screen.
     Then, reverse the order of the array elements in memory. Print the modified array to the screen again.
     */

    int num0, num1, num2, num3, num4;
    const int size = 5;

    array <int, size> arr {};

    for (int i=0; i<arr.size(); i++){

        cout << "Enter the element at index " << i <<": ";
        int value = 0;
        cin >> value;

        arr[i] = value;
        //cin >> ex ">> i >> ":" >> endl;
    }

    cout << "Before reversing:"<< endl;
    for (int i=0; i<arr.size(); i++){
        cout << arr[i]<<" ";

    }

    cout << "\nAfter reversing:"<< endl;

    int j = size - 1;

    for (int i = 0; i < arr.size(); i++){
        cout << arr[j]<<" ";
        j--;
    }

    return 0;
}
