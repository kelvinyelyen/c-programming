#include <stdio.h>

/*
 * Pointers in C:
 * - A pointer is a variable that stores the memory address of another variable.
 * - Syntax for pointer declaration:
 *   dataType *pointerName;
 *
 * - The '&' operator is used to get the address of a variable.
 * - The '*' operator is used to access the value at the address pointed to by the pointer.
 */

int main()
{
    int var = 10;
    int *ptr;

    // Pointer initialization
    ptr = &var;

    // Print the address and value
    printf("Address of var: %p\n", (void *)ptr); // %p is a format specifier for addresses
    printf("Value of var: %d\n", *ptr);          // *ptr gives the value stored at the address

    return 0;
}
