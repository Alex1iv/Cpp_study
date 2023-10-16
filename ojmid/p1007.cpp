//
// Created by Alex on 10.10.2023.
//

# include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int A, B, C, D, DIFERENCA;


    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    DIFERENCA = (A * B - C * D);

    //cout << fixed << setprecision(1) << "MEDIA = " << MEDIA << endl;
    printf( "DIFERENCA = %d\n", DIFERENCA);

    return 0;
}

