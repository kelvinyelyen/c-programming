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

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == target)
            {
                printf("Element found at position (%d, %d)\n", i, j);
                found = true;
                break;
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
