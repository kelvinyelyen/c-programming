#include <stdio.h>

// Function prototype
unsigned long long factorial(int n);

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        unsigned long long fact = factorial(n);
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}

// Function to calculate factorial
unsigned long long factorial(int n)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}

// Function to calculate factorial using a while loop (unused)
// unsigned long long factorial2(int n)
// {
//     int i = 1;
//     unsigned long long fact = 1;
//     while (i <= n)
//     {
//         fact = fact * i;
//         ++i;
//     }
//     return fact;
// }
