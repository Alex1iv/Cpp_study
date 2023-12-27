//
// Created by Alex on 12.12.2023.
//

# include <iostream>
# include <array>
# include <cstdlib> // library for pseudorandom numbers
using namespace std;

int random (int low_bound=1, int high_bound=6) {
    // this function generates random numbers within the given range
    return rand() % (high_bound - low_bound + 1); //return static_cast <unsigned char> (low_bound - rand() / (static_cast<float> (high_bound - low_bound)));
}

int main() {
    //this program counts outcomes of 2 dices
    /*
     Create a program that simulates the tosses of two six-sided dice, thrown a specified number of times.
     The program should output counters for all sums that appear during the throws.
     */

    // fix random seed
    srand(42);

    // decalre an array
    array <int, 11> arr {};

    int number=6000;
    //printf("Enter the number of times to throw two dice: ");
    //cin >> number;

    for (int i=0; i<number; i++) {
        for (int j=0; j<arr.size(); j++){
            if (j == random() + random()){
                arr[j] ++;
            }
        }
    }

    for (int i=0; i<arr.size(); i++){
        cout << "Got "<< i+2 << " on the dice  " << arr[i] << " times" << endl;
    }

    return 0;
}

//int* - dereferencing integer pointer which gives me the value
//    for (int* itr=arr.begin(); itr !=arr.end(); itr++){
//        cout << "Value: " << *itr << " is stored at the memory address " << itr << "." << endl;
//    }

//for (int i=0; i<arr.size(); i++) {
//
//cout << i<<"th element: " << arr[i] << endl;
//};

/* array <int, 4> arr2 {};
 arr2[0] = 3;
 arr2[1] = 5;

 for (const int num : arr2){
     cout << num << endl;
 }
 */