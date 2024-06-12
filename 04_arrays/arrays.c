#include <stdio.h>

/*
 * Arrays in C:
 * - An array is a collection of elements of the same data type stored in contiguous memory locations.
 * - Syntax for array declaration:
 *   dataType arrayName[arraySize];
 *
 * - Accessing elements: Use index starting from 0 to arraySize-1.
 */

int main()
{
    // // Array declaration and initialization
    // int numbers[5] = {1, 2, 3, 4, 5};

    // // Access and print array elements
    // printf("Array elements:\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", numbers[i]);
    // }
    // printf("\n");

    // return 0;
    int i, n, num, pos, arr[10];

    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the number to be inserted : ");
    scanf("%d", &num);
    printf("\n Enter the position at which the number has to be added :");
    scanf("%d", &pos);

    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = num;
    n = n + 1;

    printf("\n The array after insertion of %d is : ", num);
    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = %d\n", i, arr[i]);
    }
}
