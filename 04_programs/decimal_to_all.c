#include <stdio.h>
#include <math.h>

int main()
{
    int dec, bn = 0, oct = 0, hex = 0, remainder, i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    // Output octal and hexadecimal representations using format specifiers
    printf("Octal number: %o\n", dec); 
    printf("Hexadecimal number: %x\n", dec); 

    // Convert decimal to binary
    while (dec != 0)
    {
        remainder = dec % 2;            // Get the last binary digit
        dec /= 2;                       // Remove the last binary digit
        bn += remainder * pow(10, i); // Multiply by 10^i and add to binary value
        ++i;                          // Increment the power of 10
    }
    printf("Binary number: %d\n", bn);

    // Reset variables for octal conversion
    i = 0;

    // Convert decimal to octal
    while (dec != 0)
    {
        remainder = dec % 8;             // Get the last octal digit
        dec /= 8;                        // Remove the last octal digit
        oct += remainder * pow(10, i); // Multiply by 10^i and add to octal value
        ++i;                           // Increment the power of 10
    }
    printf("Octal number: %d\n", oct);

    // Reset variables for hexadecimal conversion
    i = 0;

    // Convert decimal to hexadecimal
    while (dec != 0)
    {
        remainder = dec % 16;            // Get the last hex digit
        dec /= 16;                       // Remove the last hex digit
        hex += remainder * pow(10, i); // Multiply by 10^i and add to hex value
        ++i;                           // Increment the power of 10
    }
    printf("Hexadecimal number: %d\n", hex);

    return 0;
}
