//
// Created by Alex on 16.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program sorts 3 given values in the ascending order
    int a,b,c,   middle, maximum, minimum;


    printf("Enter three integer numbers: ");
    //a = 5; b = 2; c = 10;
    cin >> a  >> b >> c;

    maximum = max(max(a,b), c);
    minimum = min(min(a,b), c);

    if ((a > minimum) && (a < maximum))    {
        middle = a;
    }
    else if ((b > minimum) && (b < maximum))    {
        middle = b;
    }
    else {
        middle = c;
    }

    printf("%d\n%d\n%d", minimum, middle, maximum);
    return 0;
}
