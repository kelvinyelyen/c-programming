#include <stdio.h>
#include <math.h>

int main()
{
    int binaryNumber = 0, i = 0, remainder, n;

    // Prompt the user to enter a binary number
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    // Print the octal and hexadecimal representations of the decimal number
    printf("Octal number: %o\n", n);
    printf("Hexadecimal number: %x\n", n);

    // Loop through each digit of the binary number
    while (n != 0)
    {
        remainder = n % 2;                      // Get the last digit of the binary number
        n /= 2;                                 // Remove the last digit from the binary number
        binaryNumber += remainder * pow(10, i); // Add the value to the decimal number
        ++i;                                    // Increment the power
    }

    // Print the result
    printf("Binary number: %d\n", binaryNumber);

    return 0;
}

