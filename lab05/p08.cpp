//
// Created by Alex on 23.11.2023.
//

# include <iostream>
# include <iomanip>
using namespace std;

int main() {
    //this program prints the Calculation table

    printf("          Multiplication Table\n");
    //printf("--------------------------------\n");

    // Display the number title
    cout << "  | ";
    for (int j=1; j <=9; j++){
        cout << setw(3) << j;
    }
    cout << "\n--------------------------------\n";

    //Dislay table body
    for (int i = 1; i <= 9; i++){
        cout << i << " | ";

        for (int j = 1; j <= 9; j++) {

            // Display the product and align properly
            cout << setw(3) << i * j;
        }
        cout << "\n";
    }

    return 0;
}
