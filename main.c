#include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter a natural number n (1 < n < 150): ");
    scanf("%u", &n); // Read the input natural number from the user

    unsigned int count = 0; // Initialize the count of equal divisors as 0
    for (unsigned int m = 1; m < n; m++) { // Iterate from 1 to n-1
        if ((n / m) == (n % m)) { // Check if the division quotient is equal to the remainder
            count++; // Increment the count if the condition is satisfied
        }
    }

    printf("The number of equal divisors of %u: %u\n", n, count); // Print the result

    return 0;
}
