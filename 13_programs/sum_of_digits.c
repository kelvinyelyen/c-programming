// Program #6 : Sum of Digits of a Five - Digit Number
#include <stdio.h>

int main()
{
    int num, sum = 0, remainder;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999){
        printf("Invalid");
        return 1;
    }

    while (num != 0)
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
