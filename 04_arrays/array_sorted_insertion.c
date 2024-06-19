#include <stdio.h>

int main()
{
    int i, n, j, num, arr[10];

    // Input the number of elements in the array
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Input the number to be inserted
    printf("\n Enter the number to be inserted: ");
    scanf("%d", &num);

    // Find the correct position and insert the number
    for (i = 0; i < n; i++)
    {
        if (arr[i] > num)
        {
            // Shift elements to the right
            for (j = n - 1; j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            // Insert the number at the correct position
            arr[i] = num;
            break;
        }
    }

    // If the number is the largest, place it at the end
    if (i == n)
    {
        arr[n] = num;
    }

    // Increment the number of elements
    n = n + 1;

    // Print the updated array
    printf("\n The array after insertion of %d is: ", num);
    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}
