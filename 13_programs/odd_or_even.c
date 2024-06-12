#include <stdio.h>

// Program #17: Determine whether an integer is odd or even
int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number %d is even.\n", num);
    }
    else
    {
        printf("The number %d is odd.\n", num);
    }

    return 0;
}
