//
// Created by Alex on 13.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program sorts 3 integers in ascending order
    // beecrowd problem 1042 https://www.beecrowd.com.br/judge/en/problems/view/1042

    int x, y, z, minimum, middle, maximum;

    //x=7; y=21; z=-14;
    //x=-14; y=21; z=7;
    cin >> x >> y >> z;

    maximum = max(max(x,y), z);
    minimum = min(min(x,y), z);

    if ((x > minimum) && (x < maximum))    {
        middle = x;
    }
    else if ((y > minimum) && (y < maximum))    {
        middle = y;
    }
    else {
        middle = z;
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",minimum, middle, maximum, x,y,z);

    return 0;
}

