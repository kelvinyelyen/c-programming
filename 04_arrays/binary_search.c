#include <stdio.h>

int main()
{
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int n = 7;
    int target = 4; 
    int left = 0;
    int right = n - 1;
    int result = -1;

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
