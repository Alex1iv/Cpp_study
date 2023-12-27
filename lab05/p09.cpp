//
// Created by Alex on 23.11.2023.
//

# include <iostream>
# include <string>
using namespace std;

int main() {
    //this program tests a given string for being a palindrome

    cout << "Enter a string: ";
    string s;
    getline(cin, s);

    // The index of the first character in the string
    int low = 0;
    // The index of the last character in the string
    int high = s.length() - 1;

    bool isPalindrome = true;
    while (low < high) {
        if (s[low] != s[high]) {
            isPalindrome = false; // not a palindrome
            break;
        }
        low++;
        high--;
    }

    if (isPalindrome){
        printf("%s is a palindrome\n", s.c_str());
    }
    else    {
        cout << s << " is not a palindrome\n";
    }
    return 0;
}
