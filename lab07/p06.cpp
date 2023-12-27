//
// Created by Alex on 13.12.2023.
//

# include <iostream>
# include <array>
//# include <algorithm>

using namespace std;

int main() {
    //this program reads 4 student scores, gets the best score, and then assigns grades
    // based on the following scheme:
    /*
    Grade is A if score is >= best - 10
    Grade is B if score is >= best - 20
    Grade is C if score is >= best - 30
    Grade is D if score is >= best - 40
    Grade is F otherwise.

     The program prompts the user to enter the total number of students (40 at most), then prompts the user
    to enter all the scores, and concludes by displaying the grades. Here is a sample run:
     */

    int number_of_students;
    int max;
    int scores[number_of_students];

    cout << "Enter the number of students: ";
    cin >> number_of_students;  // add numbers to the array

    cout << "Enter " << number_of_students <<" scores: ";

    // input values to the array---------------
    for (int i=0; i<number_of_students; i++){
        cin >> scores[i];  // add numbers to the array from input
    }

    int max_arr = scores[0];

    for (int i=0; i<number_of_students; i++){
        if (max_arr < scores[i]) {
            max_arr = scores[i];
        }
    }

    /*
    // print results----------------------------
    for (int i=0; i<number_of_students; i++){
        cout << scores[i]<<" ";
        //sum += arr[i];
    }*/

    //double average = sum / number_of_students;


    //const auto [min_arr, max_arr] = minmax_element(begin(scores), end(scores));

    cout << max_arr << endl;

    //
/*
    const auto [min_arr, max_arr] = minmax_element(); //begin(scores), end(scores)


    int count = 0; // the number of elements above teh average

    for (int i=0; i < number_of_students; i++) {
        if (scores[i] > average){
            count++;
        }
    }

    cout << "Average is " << average << endl;
    cout << "Number of elements above the average " << count << endl;
*/
    return 0;
}
