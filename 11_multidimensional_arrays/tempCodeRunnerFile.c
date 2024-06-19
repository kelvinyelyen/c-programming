#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][4] = {
        {12, 3, 4, 1},
        {8, 7, 5, 6},
        {9, 10, 11, 2}};
    int rows = 3;
    int cols = 4;

    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < cols - 1; k++)
        {
            for (int j = 0; j < cols - 1 - k; j++)
            {
                if (matrix[i][j] > matrix[i][j + 1])
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][j + 1];
                    matrix[i][j + 1] = temp;
                }
            }
        }
    }

    printf("Matrix after sorting rows:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
