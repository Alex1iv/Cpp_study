//
// Created by Alex on 24.10.2023.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //this program compares calculated number with a value with a given tolerance
    // due to particularities of fraction calculation, the result is not obvious

    double result;

    result = 0;
    result = result + 0.1;
    result = result + 0.1;
    result = result + 0.1;
    result = result + 0.1;
    result = result + 0.1;
    result = result + 0.1;
    result = result + 0.1;
    result = result + 0.1;
    result = result + 0.1;
    result = result + 0.1;

    int e = 0.001; // tolerance

    if (abs(result - 1.0) < e)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    return 0;
}
