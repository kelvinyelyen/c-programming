#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2;

    // Prompt user for the size of the first matrix
    printf("Enter the number of rows & columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Prompt user for the size of the second matrix
    printf("Enter the number of rows & columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrix multiplication is possible
    if (cols1 != rows2)
    {
        printf("Matrix multiplication not possible with the given dimensions.\n");
        return 1;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Initialize result matrix to zero
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Input values for the first matrix
    printf("\n");
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input values for the second matrix
    printf("\n");
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("\n");
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
