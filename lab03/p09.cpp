//
// Created by Alex on 17.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program calculates the sum of all digits of a three-digit integer
    int num, a,b,c, reminder;

    //num = 1234;
    //num = 001;
    //num = 123;
    //num = 12;

    a = num % 10;
    b = (num / 10) % 10;
    c = (num / 100) % 10;
    reminder = (num / 1000) / 10;

    if (reminder==0){
        printf("The sum of all digits is %d.", a + b + c);
    }
    else {
        printf("%d is not a three-digit number.", num);
    }

    return 0;
}
