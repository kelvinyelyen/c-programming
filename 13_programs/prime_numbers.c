#include <stdio.h>

int main()
{
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("Invalid number, enter a number greater than 2. \n");
    }

    if (number == 2)
    {
        printf("%d is a prime number. \n", number);
    }
    else
    {
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                printf("%d is not a prime number. \n", number);
                break;
            }
            else
            {
                printf("%d is a prime number. \n", number);
                break;
            }
        }
    }

    return 0;
}