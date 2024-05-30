#include <stdio.h>

/*
 * Multidimensional Arrays:
 * - Arrays can have more than one dimension.
 * - Commonly used multidimensional arrays are 2D arrays (matrices).
 * - Syntax for 2D array declaration:
 *   dataType arrayName[rows][columns];
 */

int main()
{
    // 2D array declaration and initialization
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // Access and print 2D array elements
    printf("2D array elements:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
