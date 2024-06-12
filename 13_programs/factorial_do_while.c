#include <stdio.h>

int main()
{
    int number, factorial = 1, i = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate factorial using a do-while loop
        do
        {
            factorial *= i;
            i++;
        } while (i <= number);

        printf("The factorial of %d is %d\n", number, factorial);
    }

    return 0;
}
