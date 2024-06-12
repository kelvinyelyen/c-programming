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
 */

// Function prototype (declaration)
int add(int a, int b);

int main()
{
    int sum;

    // Function call
    sum = add(10, 20);

    printf("Sum: %d\n", sum);

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}
