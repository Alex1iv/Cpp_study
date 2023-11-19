//
// Created by Lena on 19.11.2023.
//


# include <iostream>
# include <list>
using namespace std;

int main() {
    //Create an application that calculates an arithmetic mean for a list of grades (from one to five).
    // All grades should be read from the standard input one at a time. A zero value should be considered
    // the end of the input and not be used in the calculation.
    //
    //Use the do...while loop in this task.

    list<int> grades_list;
    int grade, sum, counter;

    //counter = 0;
    sum = 0;

    do {
        printf("Enter the next grade or '0' to exit: ");
        cin >> grade;

        sum += grade;
        //counter += 1;
        grades_list.push_front(grade);

    } while (grade > 0);

    if (sum == 0 && grades_list.size() == 1){
        printf("Nothing to calculate");
    }
    else
    {
        printf("The arithmetic mean is %.1f", float (sum) /(grades_list.size()-1)); // (counter-1)
    }


//    cout << endl << "Final List: ";
//    for(int i : grades_list) {
//        cout << i << ", ";
//    }

    //printf("Sum %d\nSize %d\n", sum, grades_list.size()-1); // counter-1

    //printf("res: %.2d",14.0/4);



//    if (grades_list.size() > 0)
//    {
//        printf("The arithmetic mean is %1.1f", sum/grades_list.size());

//    }



    return 0;
}
