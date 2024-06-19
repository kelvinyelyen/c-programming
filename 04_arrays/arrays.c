#include <stdio.h>

/*
 * Arrays in C:
 * - An array is a collection of elements of the same data type stored in contiguous memory locations.
 * - Syntax for array declaration:
 *   dataType arrayName[arraySize];
 *
 * - Accessing elements: Use index starting from 0 to arraySize-1.
 */

int main()
{
    // Array declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Access and print array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
