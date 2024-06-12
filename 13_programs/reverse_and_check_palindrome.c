#include <stdio.h>

// Program #19: Reverse a five-digit number and check if it is a palindrome
int main()
{
    int num, reverse = 0, original, remainder;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);

    if (original == reverse)
    {
        printf("The number %d is a palindrome.\n", original);
    }
    else
    {
        printf("The number %d is not a palindrome.\n", original);
    }

    return 0;
}
