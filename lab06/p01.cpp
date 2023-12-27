//
// Created by Alex on 05.12.2023.
//

# include <iostream>
using namespace std;

void swap (int& x, int& y) {
    // this function swaps two variables
    x = x + y;
    y = x - y;
    x = x - y;
}

void swap1(int* x, int* y) {
    // this function swaps two variables
    // & means the function will use addresses of my variables in memory instead of values of my variables
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {
    //this program swaps variable using a custom function

    int a, b;

    cout << "Enter the first value: ";
    cin>> a;
    cout << "Enter the second value: ";
    cin>> b;

    printf("Before swapping: a = %d; b = %d\n",a,b) ;

    swap(a,b);
    swap1(&a,&b);

    printf("After swapping: a = %d; b = %d\n",a,b) ;

    return 0;
}
