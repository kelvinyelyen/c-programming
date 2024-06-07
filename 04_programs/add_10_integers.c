#include <stdio.h>

/*
This program calculates the sum of 10 numbers entered by the user.
It uses a for loop to read each number and accumulate the sum.
*/

int main()
{
    int i;
    float number, sum = 0.0;

    printf("Enter 10 numbers:\n");

    // Use a for loop to read and sum the 10 numbers
    for (i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number;
    }

    printf("The sum of the 10 numbers is: %.2f\n", sum);

    return 0;
}
