//
// Created by Alex on 28.10.2023.
//

# include <iostream>
# include <cctype>
using namespace std;

int main() {
    // this program simulates letters-to-digit encoding of a wire phone.
    // It prints digits within the range from 2 to 9 by given letters using the switch construction

    char letter;

    cout << "Enter a letter: ";

    cin >> letter;

    letter = tolower(letter);

    if (letter == 'a' || letter == 'b'|| letter == 'c' ) {
        printf("The corresponding number is 2\n");
    }
    else if (letter == 'd' || letter == 'e'|| letter == 'f' ) {
        printf("The corresponding number is 3\n");
    }
    else if (letter == 'g' || letter == 'h'|| letter == 'i' ) {
        printf("The corresponding number is 4\n");
    }
    else if (letter == 'j' || letter == 'k'|| letter == 'l' ) {
        printf("The corresponding number is 5\n");
    }
    else if (letter == 'm' || letter == 'n'|| letter == 'o' ) {
        printf("The corresponding number is a6\n");
    }
    else if (letter == 'p' || letter == 'q'|| letter == 'r'|| letter == 's' ) {
        printf("The corresponding number is 7\n");
    }
    else if (letter == 't' || letter == 'u'|| letter == 'v' ) {
        printf("The corresponding number is 8\n");
    }
    else if (letter == 'w' || letter == 'x'|| letter == 'y' || letter == 'z' ) {
        printf("The corresponding number is 9\n");
    }
    //else if (letter == ' ') {
        //printf("The corresponding number is 0\n");
    //}
    else
    {
        printf("%c is an invalid input\n", letter);
    }
    return 0;
}
