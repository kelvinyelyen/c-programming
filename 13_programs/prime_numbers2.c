#include <stdio.h>

int main()
{
    int number, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("Invalid input. Please enter an integer greater than or equal to 2.\n");
        return 1;
    }

    printf("Prime numbers up to %d are:\n", number);

    for (i = 2; i <= number; i++)
    {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
