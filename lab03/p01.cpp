//
// Created by Alex on 16.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    //this program prints absolute value of a number
    double real_num;
    //real_num = -12.222;

    printf("Enter a real number: \n");
    cin >> real_num;

    double abs_num = real_num;
    if (abs_num < 0) {
        abs_num *= -1;
    }
    printf("|%.4f| = %.4f\n", real_num, abs_num);
    //printf("|%.4f| = %.4f\n", real_num, abs(real_num));

    return 0;
}
