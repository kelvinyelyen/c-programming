#include <stdio.h>

/*
 * Pointer Arithmetic:
 * - Pointers can be used in arithmetic operations.
 * - Common operations include incrementing and decrementing pointers.
 */

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr;

    // Pointer initialization
    ptr = arr;

    // Pointer arithmetic
    printf("Elements of the array using pointer arithmetic:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *ptr);
        ptr++; // Move to the next element
    }
    printf("\n");

    return 0;
}
