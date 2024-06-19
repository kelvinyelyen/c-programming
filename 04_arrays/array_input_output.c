#include <stdio.h>

main()
{
    int i, size, arr[size];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        printf("Array value %d: %d\n", i, arr[i]);
    }
}