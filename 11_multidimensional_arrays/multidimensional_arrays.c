#include <stdio.h>

/*
 * Multidimensional Arrays:
 * - Arrays can have more than one dimension.
 * - Commonly used multidimensional arrays are 2D arrays (matrices).
 * - Syntax for 2D array declaration:
 *   dataType arrayName[rows][columns];
 * - Memory Layout: 
 *   matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3], matrix[1][0], matrix[1][1], ..., matrix[2][3]
 */

int main()
{
    // 2D array declaration and initialization
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    // int matrix[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

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
