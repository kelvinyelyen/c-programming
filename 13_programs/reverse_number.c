// Program #7 : Reverse a Five - Digit Number
#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder;

    // Prompt the user to enter a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Reverse the digits of the number
    while (num != 0)
    {
        remainder = num % 10;               // Extract the last digit
        reverse = reverse * 10 + remainder; // Append the digit to the reversed number
        num /= 10;                          // Remove the last digit from the number
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}
