#include <stdio.h>

int main()
{
    int size, i, target;
    int left = 0;
    int result = -1;

    printf("Enter the preferred size of array: ");
    scanf("%d", &size);

    int array[size];

    for(i = 0; i < size; i++) {
        printf("Enter Array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    int right = size - 1;
    
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (array[mid] == target)
        {
            result = mid;
            break;
        }

        if (array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (result == -1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Element is found at index %d\n", result);
    }

    return 0;
}
