//
// Created by Alex on 19.10.2023.
//

# include <iostream>
# include <cmath>
using namespace std;

int main() {
    //this program checks if the point's coordinates (x,y) are within the circle centered at C(0,0)
    // with radius 10.

    double x, y;

    printf("Enter a point with two coordinates: ");

    //x = 4.0; y = 5.0;
    //x= 9.0; y = 9.0;
    //x = 0; y = 0;
    //x = -5; y = -5;

    cin >> x >> y;
    double distance = sqrt(pow(x,2) + pow(y,2));
    if (distance <= 10)
    {
        printf("Point (%.1f, %.1f) is in the circle", x, y);
    }
    else
    {
        printf("Point (%.1f, %.1f) is not in the circle", x, y);
    }
    return 0;
}
