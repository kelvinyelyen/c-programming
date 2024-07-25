#include <stdio.h>

/*
 * This program demonstrates how to use a union within a structure.
 * The structure 'Data' contains a union 'Value' and an integer 'type' to indicate the current type of value.
 *
 * The union 'Value' can hold either an int or float, and the 'type' field is used to track which member is currently used.
 */
union Value
{
    int i;
    float f;
};

struct Data
{
    int type; // 0 for int, 1 for float
    union Value value;
};

int main()
{
    struct Data data;

    // Store an integer in the union within the structure
    data.type = 0;
    data.value.i = 100;
    if (data.type == 0)
    {
        printf("Stored integer value: %d\n", data.value.i);
    }

    // Store a float in the union within the structure
    data.type = 1;
    data.value.f = 3.14;
    if (data.type == 1)
    {
        printf("Stored float value: %.2f\n", data.value.f);
    }

    return 0;
}
