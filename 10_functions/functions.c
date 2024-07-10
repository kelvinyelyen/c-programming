#include <stdio.h>

/*
 * Functions in C:
 * - Functions are blocks of code that perform specific tasks.
 * - They help in code reusability and modularity.
 * - A function has a return type, name, parameters (optional), and a body.
 * - Syntax:
 *   returnType functionName(parameters) {
 *       // code to execute
 *       return value; // if returnType is not void
 *   }
 * - Functions can pass parameters by value or by reference (using pointers).
 */

// Function prototypes (declarations)
int add(int a, int b);  // Pass by value
void increment(int *x); // Pass by reference (using pointers)

int main()
{
    int sum;
    int a = 10;
    int b = 20;
    int value = 5;

    // Function call (pass by value)
    sum = add(a, b);
    printf("Sum: %d\n", sum);

    // Function call (pass by reference)
    increment(&value);
    printf("Incremented value: %d\n", value);

    return 0;
}

// Function definition (pass by value)
int add(int a, int b)
{
    return a + b;
}

// Function definition (pass by reference using pointers)
void increment(int *x)
{
    *x = *x + 1;
}
