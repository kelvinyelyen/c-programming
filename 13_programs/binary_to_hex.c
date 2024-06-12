#include <stdio.h>
#include <math.h>

int main()
{
    int bn, hex = 0, remainder, i = 0;

    printf("Enter the binary number: ");
    scanf("%d", &bn);

    // Convert binary to decimal
    while (bn != 0)
    {
        remainder = bn % 10;               // Get the last binary digit
        bn /= 10;                          // Remove the last binary digit
        hex = hex + remainder * pow(2, i); // Multiply by 2^i and add to decimal value
        ++i;                               // Increment the power of 2
    }
    printf("Hexadecimal number: %x\n", hex);

    return 0;
}
