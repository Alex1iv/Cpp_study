//
// Created by Alex on 10.12.2023.
//

# include <iostream>
using namespace std;

int main() {
    /*
     Read two integer values X and Y. Print the sum of all odd values between them.

    Input
    The input file contain two integer values.

    Output
    The program must print an integer number.
    This number is the sum off all odd values between both input values that must fit in an integer number.
     */

    int num_1, num_2, range, total=0, low, high;

    cin >> num_1 >> num_2;

    if (num_1 > num_2){
        low = num_2; high=num_1;
    }
    else {
        low = num_1; high=num_2;
    }

    for (int i=(low + 1); i<high; i++){
        if (i % 2 !=0 ){
            total += i;
        }
    }
    cout << total << endl;
    /*

    if (num_1 >=0 && num_2 >=0){
        range = max(num_1,num_2) - min(num_1, num_2);
    }
    else if (num_1 >=0 && num_2 <=0 || num_1 <=0 && num_2 >=0) {
        range = max(num_1,num_2) + abs(min(num_1, num_2));
    }
    else {
        range = abs(min(num_1,num_2) + max(num_1, num_2));
    }

    //Set start value. If it is odd, do nothing otherwise add 1.
    int start_value = (min(num_1, num_2) % 2 ? min(num_1, num_2) : min(num_1, num_2) +1);
    //int end_value = (max(num_1, num_2) % 2 ? max(num_1, num_2) : max(num_1, num_2) -1);

    //cout << "range: " << range << endl;
    //cout << "start_value: " << start_value << endl;
    //cout << "end_value: " << end_value << endl;

    for (int i=0; i<range/2; i++){
        total += start_value;
        start_value +=2;
    }
    */
    return 0;
}
