#include <stdio.h>

int main()
{
    int size, i, j;

    printf("Enter the preferred size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter Array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
