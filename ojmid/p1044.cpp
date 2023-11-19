//
// Created by Alex on 22.10.2023.
//

# include <iostream>
using namespace std;

int main() {
    // Read two integer values (A and B). After, the program should print the message
    // "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples),
    // corresponding to the read values.
    // beecrowd problem 1044 https://www.beecrowd.com.br/judge/en/problems/view/1044

    int A, B;

    //A=6; B=24;
    cin >> A >> B;


    if ((max(A,B)%min(A,B))==0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}