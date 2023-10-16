//
// Created by Alex on 13.10.2023.
//


# include <iostream>
using namespace std;

int main() {
    //this program explores coniditons in C++
    // beecrowd problem 1035 https://www.beecrowd.com.br/judge/en/problems/view/1035

    int A, B, C, D;

    cin >> A>> B>> C>> D;

    if ((B > C) && (D > A) && ((C + D) > (A + B)) && (((C + D) - abs(C) - abs(D)) == 0) && ((A % 2) != 1))
    {
        printf("Valores aceitos\n") ;
    }
    else
    {
        cout << "Valores nao aceitos\n";
    }

    return 0;
}
