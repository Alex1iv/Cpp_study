//
// Created by Alex on 16.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program prints absolute value of a number
    int exam_score;
    const int pass_score=40;

    printf("Enter the number of points: ");
    cin >> exam_score;


    if (exam_score >= pass_score) {
        printf("You have passed the \"Intro to Programming\" course.\n");
    }
    else {
        printf("You have failed the \"Intro to Programming\" course.\n");
    }


    return 0;
}
