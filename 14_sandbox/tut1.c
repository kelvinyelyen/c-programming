#include <stdio.h>

main()
{
    // Declaration of variables
    int num1, num2, num3, total;

    // Accepting user inputs
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 < 0 || num2 < 0 || num3 < 0)
    {
        printf("Enter only positive values.");
}
    else
    {
        total = num1 + num2 + num3;
        printf("The total is %d.", total);
    }
}