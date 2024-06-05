// Program #7 : Reverse a Five - Digit Number
#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}
