#include <stdio.h>

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 6;
    int i, j;

    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    for (i = 0; i < n ; i++)
    {
        for (j = 0; j < n - i; j++)
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
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
