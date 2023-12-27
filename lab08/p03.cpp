//
// Created by Alex on 26.12.2023.
//


# include <iostream>
#include <cmath>
using namespace std;

// Compute the distance between two points(x1,y1) and (x2, y2)
double getDistance(double x1, double y1, double x2, double y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
    //this program computes the shortest distance between points in a two-dimensional array
    const int Number_of_Points = 8;

    // Each row in the 2-d array "points represents a point
    double points[Number_of_Points][2];

    // read all points
    cout << "Enter " << Number_of_Points << " points: ";
    for (int i = 0; i < Number_of_Points; i++) {
        cin >> points[i][0] >> points[i][1];
    }

    // p1 and p2 are the indices in the points array
    int p1 = 0, p2 = 1; // Initial two points

    //Initialize shortestDistance
    double shortestDistance = getDistance(points[p1][0], points[p1][1], points[p2][0], points[p2][1]);

    // Compute distance for every two points
    for (int i = 0; i < Number_of_Points; i++) { //  for each point i
        for (int j = i + 1; j < Number_of_Points; j++) { //  for each point j
            // distance between i and j
            double distance = getDistance(points[i][0], points[i][1], points[j][0], points[j][1]);

            // update shortestDistance
            if (shortestDistance > distance){
                p1 = i; // update p1
                p2 = j; // update p2
                shortestDistance = distance; // upd shortestDistance
            }
        }
    }
    // Display result
    cout << "The closest two points are (" << points[p1][0] << ", " << points[p1][1] <<")"
                                 <<"and (" << points[p2][0] << ", " << points[p2][1] << ")" <<endl;

    return 0;
}
