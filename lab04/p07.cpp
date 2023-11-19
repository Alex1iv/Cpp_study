//
// Created by Alex on 28.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program checks if the point's coordinates (x,y) are within the rectangle
    // centered at C(0,0) with width of 10 and height of 5.

    double x, y;

    printf("Enter a point with two coordinates: ");

    //x = 2.0; y = 2.0;
    //x= 6.0; y = 4.0;

    cin >> x >> y;

    if (x <= 5 && y <= 2.5)
    {
        printf("Point (%.1f, %.1f) is in the rectangle\n", x, y);
    }
    else
    {
        printf("Point (%.1f, %.1f) is not in the rectangle\n", x, y);
    }
    return 0;
}
