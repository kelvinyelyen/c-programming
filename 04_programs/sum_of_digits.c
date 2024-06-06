// Program #6 : Sum of Digits of a Five - Digit Number
#include <stdio.h>

int main()
{
    int num, sum = 0, remainder;

    printf("Enter a five-digit number: ");
    scanf("%f", &num);

    while (num != 0)
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
