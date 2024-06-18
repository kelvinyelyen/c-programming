#include <stdio.h>
#include <math.h>

/*
 * This program converts a hexadecimal number to its binary representation.
 * The conversion is done in two steps:
 * 1. Convert the hexadecimal number to a decimal number.
 * 2. Convert the decimal number to a binary number.
 *
 * The reason for converting from hexadecimal to decimal and then to binary,
 * instead of directly from hexadecimal to binary, is to simplify the process.
 * Direct conversion requires handling each hexadecimal digit separately,
 * while converting through decimal makes use of well-known mathematical operations.
 */

int main()
{
    int hex, dec = 0, bn = 0, remainder, i = 0;

    printf("Enter hexadecimal number: ");
    scanf("%x", &hex);

    // Convert hexadecimal to decimal
    dec = hex;

    // Convert decimal to binary
    while (dec != 0)
    {
        remainder = dec % 2;          // Get the last binary digit
        dec /= 2;                     // Remove the last binary digit
        bn += remainder * pow(2, i); // Multiply by 10^i and add to binary value
        ++i;                          // Increment the power of 10
    }
    printf("Binary number: %d \n", bn);

    return 0;
}
