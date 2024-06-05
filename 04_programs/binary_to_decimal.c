#include <stdio.h>
#include <math.h>

/*
A binary number is a number expressed in the base-2 numeral system which uses only two symbols: typically 0 and 1. Each digit in a binary number represents an increasing power of 2, starting from the right (least significant bit) to the left (most significant bit).

Binary to Decimal Conversion Formula:
The decimal value of a binary number can be calculated using the following formula:

Decimal = b_n * 2^n + b_(n-1) * 2^(n-1) + ... + b_1 * 2^1 + b_0 * 2^0

where b_n represents each binary digit (either 0 or 1), and n represents the position of the digit from the right (starting from 0).
*/

int main()
{
    int decimalNumber = 0, i = 0, remainder;
    long long n;

    // Prompt the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%lld", &n);

    // Loop through each digit of the binary number
    while (n != 0)
    {
        remainder = n % 10;                     // Get the last digit of the binary number
        n /= 10;                                // Remove the last digit from the binary number
        decimalNumber += remainder * pow(2, i); // Add the value to the decimal number
        ++i;                                    // Increment the power
    }

    // Print the result
    printf("Decimal number: %d\n", decimalNumber);
    return 0;
}
