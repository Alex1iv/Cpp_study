//
// Created by Alex on 23.11.2023.
//

# include <iostream>
# include <iomanip>
using namespace std;

int main() {
    //this program displays the first 50 prime numbers in 5 lines,
    //each containing 10 numbers.

    const int Number_of_Primes = 50;  // Number of primes to display
    const int Number_of_primes_per_line = 10; // Display 10 per line
    int count = 0; // Count the number of prime numbers
    int number = 2; // A number to be tested for primeness

    printf("The first 50 prime numbers are \n");

    while (count < Number_of_Primes) {
        // Assume the number is prime
        bool isPrime = true;  // Is the current number prime?

        // Test if number is prime
        for (int divisor = 2; divisor <= number/2; divisor++) {

            if (number % divisor == 0) {
                // If true, the number is not prime
                isPrime = false; // Set isPrime to false
                break; // Exit the for loop
            }
        }

        // Display the prime number and increase the count
        if (isPrime) {
            count++; // Increase the count
            if (count % Number_of_primes_per_line == 0){
                cout << setw(4) <<number << endl;
            }
            else {
                cout << setw(4) <<number;
            }
        }
        // Check if the next number is prime
        number++;
    }
    return 0;
}
