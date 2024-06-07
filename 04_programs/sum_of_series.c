#include <stdio.h>

/*
This program calculates the sum of the series: 1! + 2! + 3! + ... + n!
It uses a single function (main) to compute the factorial of each number and sum them up.
*/

int main()
{
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series 1! + 2! + 3! + ... + n!
    for (int i = 1; i <= n; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sum += factorial;
    }

    printf("The sum of the series 1! + 2! + 3! + ... + %d! is: %d\n", n, sum);

    return 0;
}
