#include <stdio.h>
#include <math.h>

int main()
{
    int number = 0, digit[10], numofdigits, i;

    printf("\n Enter the number of digits: ");
    scanf("%d", &numofdigits);

    for (i = 0; i < numofdigits; i++)
    {
        printf("\n Enter the digit at position %d: ", i + 1);
        scanf("%d", &digit[i]);
    }

    for (i = 0; i < numofdigits; i++)
    {
        number = number + digit[i] * pow(10, i);
    }

    printf("\n The number is: %d \n", number);

    return 0;
}
