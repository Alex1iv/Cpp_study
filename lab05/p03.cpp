//
// Created by Alex on 21.11.2023.
//


# include <iostream>
# include <cstdlib> // library for pseudorandom numbers

using namespace std;

int main() {
    //this program
    int correct_ans=0, incorrect_ans=0, res_input, num_tests, num_1, num_2;
    const int seed=42;
    // fix random seed
    srand(seed);

    printf("Number of tests? ");
    cin >> num_tests;

//    while (num_tests > 0)
//    {
//        num_tests--;
//
//        int num_1 = rand() ;
//        int num_2 = rand() ;
//        printf("%d + %d = ", num_1, num_2);
//        cin >> res_input;
//
//        if (res_input == num_1 + num_2)  {
//            correct_ans++;
//        }
//        else  {
//            incorrect_ans++;
//        }
//    }

    for (int i = 0; i < num_tests; i++)
    {
        num_1 = rand() ;
        num_2 = rand() ;

        printf("%d + %d = ", num_1, num_2);
        cin >> res_input;

        if (res_input == num_1 + num_2)  {
            correct_ans++;
        }

    }
    printf("Number of correct answers: %d\n"
           "Number of incorrect answers: %d", correct_ans, num_tests - correct_ans);


    return 0;
}
