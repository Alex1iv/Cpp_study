//
// Created by Alex on 28.10.2023.
//


# include <iostream>
# include <cctype>
# include <string>
using namespace std;

int main() {
    //this program splits a given string into 2 letters and
    // prints   of seasons using the switch construction
    // https://github.com/auca/com.122-119/blob/master/Practice_Tasks/Structured_Programming/Practice_04.md

    //char letter;
    char str, num;
    string major, status;

    cout << "Enter two characters: ";

    cin >> str >> num;
    //str = 'M';
    //num = '1';

    //printf("first element: %str , second: %str", str.c_str(),str.c_str());
    //cout << str[0];

    if (str == 'M' || str =='C' || str == 'I') {
        switch (str) {
            case 'M':
                major = "Mathematics";
                break;
            case 'C':
                major = "Computer Science";
                break;
            case 'I':
                major = "Information Technology";
                break;
        }

        if (num == '1' || num == '2' || num == '3' || num == '4') {
            switch (num) {
                case '1':
                    status = "Freshman";
                    break;
                case '2':
                    status = "Sophomore";
                    break;
                case '3':
                    status = "Junior";
                    break;
                case '4':
                    status = "Senior";
                    break;
            }
        }
        else {
            major = "Invalid status code\n";
        }

    }
    else
    {
        major = "Invalid major code\n";
    }

    printf("%s %s", major.c_str(), status.c_str());

    return 0;
}
