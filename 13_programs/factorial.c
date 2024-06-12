#include <stdio.h>

/*
The factorial of a non-negative integer n, denoted as n!, is the product of all positive integers less than or equal to n.
It is defined as:

0! = 1 (by convention)
For n > 0, n! = n × (n-1) × (n-2) × ⋯ × 1

For example:
5! = 5 × 4 × 3 × 2 × 1 = 120
4! = 4 × 3 × 2 × 1 = 24

Factorials are used in various fields of mathematics, including combinatorics, algebra, and mathematical analysis.
They are particularly useful in calculating permutations and combinations.
*/

int main()
{
    int number, factorial = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate factorial using a for loop
        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
        printf("The factorial of %d is %d\n", number, factorial);
    }

    return 0;
}
