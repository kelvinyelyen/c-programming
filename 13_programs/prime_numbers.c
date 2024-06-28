#include <stdio.h>

int main()
{
    int number, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("Invalid input. Please enter an integer greater than or equal to 2.\n");
        return 1;
    }

    if (number < 2)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}