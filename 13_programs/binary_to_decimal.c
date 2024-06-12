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
    int bn, dec = 0, remainder, i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &bn);

    // Loop through each digit of the binary number
    while (bn != 0)
    {
        remainder = bn % 10;          // Get the last digit of the binary number
        bn /= 10;                     // Remove the last digit from the binary number
        dec += remainder * pow(2, i); // Add the value to the decimal number
        ++i;                          // Increment the power
    }
    printf("Decimal number: %d\n", dec);
    return 0;
}
