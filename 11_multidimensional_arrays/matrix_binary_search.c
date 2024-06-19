#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int rows = 3;
    int cols = 4;
    int target = 7;
    bool found = false;

    // Binary search within each row of the matrix
    for (int i = 0; i < rows; i++)
    {
        int left = 0;
        int right = cols - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (matrix[i][mid] == target)
            {
                printf("Element found at position (%d, %d)\n", i, mid);
                found = true;
                break;
            }
            else if (matrix[i][mid] < target)
            {
                left = mid + 1; // Search in the right half
            }
            else
            {
                right = mid - 1; // Search in the left half
            }
        }

        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        printf("Element not found.\n");
    }

    return 0;
}
