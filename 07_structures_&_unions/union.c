#include <stdio.h>

/*
 * This program demonstrates the basic usage of a union in C.
 * A union allows storing different data types in the same memory location.
 * Only one member of the union can hold a value at any given time.
 *
 * The union 'Data' can hold either an int, float, or char.
 * The size of the union will be the size of its largest member.
 */
union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data data;

    // Store an integer in the union
    data.i = 10;
    printf("data.i = %d\n", data.i);

    // Store a float in the union (overwrites the integer value)
    data.f = 220.5;
    printf("data.f = %.2f\n", data.f);

    // Store a char in the union (overwrites the float value)
    data.c = 'A';
    printf("data.c = %c\n", data.c);

    return 0;
}
