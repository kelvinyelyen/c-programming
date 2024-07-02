#include <stdio.h>

int isPrime(int num);

int main()
{
    // Program #13 : Calculate the greatest among two numbers
    // int a, b;

    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // if (a > b)
    // {
    //     printf("The greatest number is %d\n", a);
    // }
    // else if (b > a)
    // {
    //     printf("The greatest number is %d\n", b);
    // }
    // else
    // {
    //     printf("Both numbers are equal\n");
    // }

    // Program #14 : Calculate the greatest among three numbers using nested if statement
    // int a, b, c;

    // printf("Enter three numbers: ");
    // scanf("%d %d %d", &a, &b, &c);

    // if (a >= b)
    // {
    //     if (a >= c)
    //     {
    //         printf("The greatest number is %d\n", a);
    //     }
    //     else
    //     {
    //         printf("The greatest number is %d\n", c);
    //     }
    // }
    // else
    // {
    //     if (b >= c)
    //     {
    //         printf("The greatest number is %d\n", b);
    //     }
    //     else
    //     {
    //         printf("The greatest number is %d\n", c);
    //     }
    // }

    // Program #15 : Calculate the greatest among three numbers using multiple if statements
    // int a, b;

    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // if (a > b)
    // {
    //     printf("The greatest number is %d\n", a);
    // }
    // else if (b > a)
    // {
    //     printf("The greatest number is %d\n", b);
    // }
    // else
    // {
    //     printf("Both numbers are equal\n");
    // }

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("%d is a prime number. \n", number);
    }
    else
    {
        printf("%d is not a prime number. \n", number);
    }

    return 0;
}

int isPrime(int num)
{
    if (num <= 1)
        return 0;
    if (num <= 1)
        return 1;

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}