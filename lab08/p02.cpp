//
// Created by Alex on 21.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //Grading a Multiple-Choice Test
    //this program prints "Hello, word"
    const int number_of_students = 8;
    const int number_of_questions = 10;

    // Students' answers to the questions
    char answers[number_of_students][number_of_questions] = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}
    };

    // key to the questions
    char keys[] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    // grade all answers
    for (int i = 0; i < number_of_students; i++){
        //grade one student
        int correctCount = 0;
        for (int j = 0; j < number_of_questions; j++){
            if (answers[i][j] == keys[j]){
                correctCount++;
            }
        }

        cout << "Student " << i << "'s correct count is " << correctCount << endl;
    }

    return 0;
}
