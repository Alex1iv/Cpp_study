#include <iostream>
#include <array>
using namespace std;

int main() {
/*
 Assignment:

Write a command-line program that allows the user to input ten integer numbers once at the start
 and then perform various computations on them. We guarantee that exactly ten integers will be entered.
 After the initial input, the program displays a menu for operations or to exit.
 When a user selects an operation, the program calculates and displays the result.
 If an unavailable option is chosen, an error message appears.

 The program facilitates multiple calculations, reprinting the menu each time until the exit option is selected.
 Details of the operations and corresponding messages are outlined in the sample below.
 */

    const int size = 10;
    int choice_number;
    int num_to_search;

    //array <int,size> arr = {10, 10, 20, 20, 30, 30, 20, 20, 10, 10};
    array <int, size> arr;

    cout << "Enter 10 integers for the array: " << endl;

    for (int i=0; i < size; i++) { // declare an array
        cin >> arr[i];
    }

    while (choice_number !=3) {
        cout <<"Number Statistics Tool\n" << "1. Find First Number\n" << "2. Find Last Number\n" << "3. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice_number ;

        switch (choice_number) { // choice switch

            case 1: {
                cout << "Enter the number to search for: ";
                cin >> num_to_search ;

                for (int i=0; i<size; i++) { // print the first found element of the array
                    if (arr[i] == num_to_search){
                        cout << "The number was found at index "<< i << endl;
                        break;
                    }
                }

                break;
            }
            case 2: {
                cout << "Enter the number to search for: ";
                cin >> num_to_search ;
                int counter = 0;

                for (int i=0; i < size; i++) { // print the last found element of the array
                    if (arr[i] == num_to_search){
                        counter = i;
                        //break;
                    }
                }
                cout << "The number was found at index "<< counter << endl;
                break;
            }
            case 3: {
                cout <<"Exiting program...\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
            }
        }

    }

    return 0;
}



/*Enter 10 integers for the array:
10 10 20 20 30 30 20 20 10 10
Number Statistics Tool
1. Find First Number
2. Find Last Number
3. Exit
Enter your choice: 1
Enter the number to search for: 20
The number was found at index 2.
Number Statistics Tool
1. Find First Number
2. Find Last Number
3. Exit
Enter your choice: 2
Enter the number to search for: 20
The number was found at index 7.
Number Statistics Tool
1. Find First Number
2. Find Last Number
3. Exit
Enter your choice: 4
Invalid choice. Please enter a valid option.
Number Statistics Tool
1. Find First Number
2. Find Last Number
3. Exit
Enter your choice: 3
Exiting program...*/