#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char binary_str[] = "1010";
    // int decimal = strtol(binary_str, NULL, 2);
    // printf("%d\n", decimal);
    // return 0;

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
}
