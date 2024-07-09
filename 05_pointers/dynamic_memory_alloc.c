#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i;

    // Allocate memory for an array of n integers
    printf("Enter preferred size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    // Initialize array elements
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    // Print array elements
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocate memory to hold 10 integers
    n = 10;
    arr = (int *)realloc(arr, n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory not reallocated.\n");
        exit(0);
    }

    // Initialize the new elements
    for (i = 5; i < n; i++)
    {
        arr[i] = i + 1;
    }

    // Print the new array elements
    printf("The elements of the new array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deallocate memory
    free(arr);

    return 0;
}
