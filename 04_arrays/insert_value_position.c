#include <stdio.h>

int main()
{
    int i, n, num, pos, arr[10];

    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the number to be inserted: ");
    scanf("%d", &num);

    printf("\n Enter the position at which the number has to be added: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n)
    {
        printf("\n Invalid position! Please enter position between 0 and %d", n);
        return 1;
    }

    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = num;
    n = n + 1;

    printf("\n The array after insertion of %d is: ", num);
    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }

    return 0;
}
