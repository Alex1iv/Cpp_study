//
// Created by Alex on 16.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program converts numerical grade by the string scale.

    int points;
    string str_grade;

    printf("Enter the number of points: ");
    cin >> points;

    if (points > 100)
    {
        printf("%d is not in the permitted range.\n", points);
    }
    else
    {
        if ((points >= 90)  && (points <= 100))  {
            str_grade = "A";
        }
        else if ((points >= 80)  && (points < 90)) {
            str_grade = "B";
        }
        else if ((points >= 70)  && (points < 80)) {
            str_grade = "C";
        }
        else if ((points >= 60)  && (points < 70)) {
            str_grade = "D";
        }
        else //((points >= 0)  && (points < 60))
        {
            str_grade = "F";
        }

        printf("Grade: %s\n", str_grade.c_str());
    }

    return 0;
}
