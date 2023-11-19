//
// Created by Alex on 28.10.2023.
//


# include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //this program simulates picking a card from a deck of 52 cards.
    // Your program should display the rank (Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    // Jack, Queen, King) and suit (Clubs, Diamonds, Hearts, Spades) of the card.
    //
    //Use srand from cstdlib to seed the random number generator
    // with the value of 42 to get a predicatable sequence to help us evaluate
    // your program with an automated script. Other srand values to make the values
    // less predictable will be discussed in the next lecture.
    // Note that the examples below may not use 42 in srand and will produce
    // different results compared to your program.
    //
    //Use the switch construct to solve the task.

    int suit_int, rank_int;
    string suit, rank;

    // fix random seed
    srand(42);

    // Generate 2 random integers of 1 and 2 digits respectively
    suit_int = (rand() % 4)+1;
    rank_int = (rand() % 13)+1;

    switch (suit_int)
    {
        case 1:
            suit = "Clubs\n";
            break;
        case 2:
            suit = "Diamonds\n";
            break;
        case 3:
            suit = "Hearts\n";
            break;
        //case 4:
            //suit = "Spades\n";
            //break;
        default:
            suit = "Spades\n";
            break;
    }

    switch (rank_int)
    {
        case 1:
            rank = "Ace";
            break;
        case 2:
            rank = "2";
            break;
        case 3:
            rank = "3";
            break;
        case 4:
            rank = "4";
            break;
        case 5:
            rank = "5";
            break;
        case 6:
            rank = "6";
            break;
        case 7:
            rank = "7";
            break;
        case 8:
            rank = "8";
            break;
        case 9:
            rank = "9";
            break;
        case 10:
            rank = "10";
            break;
        case 11:
            rank = "Jack";
            break;
        case 12:
            rank = "Queen";
            break;
        //case 13:
           // rank = "King";
            //break;
        default:
            rank = "King";
            break;
    }

    printf("The card you picked is %s of %s", rank.c_str(), suit.c_str());

    return 0;
}
