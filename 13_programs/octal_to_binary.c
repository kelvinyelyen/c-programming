#include <stdio.h>
#include <math.h>

/*
 * This program converts an octal number to its binary representation.
 * The conversion is done in two steps:
 * 1. Convert the octal number to a decimal number.
 * 2. Convert the decimal number to a binary number.
 *
 * The reason for converting from octal to decimal and then to binary,
 * instead of directly from octal to binary, is to simplify the process.
 * Direct conversion requires handling groups of three binary digits
 * for each octal digit, while converting through decimal makes use
 * of well-known mathematical operations.
 */

int main()
{
    int oct, dec = 0, bn = 0, remainder, i = 0;

    printf("Octal Number: ");
    scanf("%o", &oct);

    //Convert octal to decimal
    while (oct != 0)
    {
        remainder = oct % 8;         // Get the last octal digit
        oct /= 8;                    // Remove the last octal digit
        dec += remainder * pow(8, i); // Multiply by 8^i and add to decimal value
        ++i;                          // Increment the power of 8
    }
    printf("Decimal number: %d\n", dec);
    // Reset counter for binary conversion
    i = 0;

    // Convert decimal to binary
    while (dec != 0)
    {
        remainder = dec % 2;          // Get the last binary digit
    dec /= 2;                     // Remove the last binary digit
        bn += remainder * pow(10, i); // Multiply by 10^i and add to binary value
        ++i;                          // Increment the power of 10
    }
    printf("Binary number: %d \n", bn);

    return 0;
}
