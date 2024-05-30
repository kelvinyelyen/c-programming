#include <stdio.h>

/*
 * Loops in C:
 * - For Loop: Used when the number of iterations is known.
 *   Syntax:
 *   for (initialization; condition; increment/decrement) {
 *       // code to execute
 *   }
 *
 * - While Loop: Used when the number of iterations is not known.
 *   Syntax:
 *   while (condition) {
 *       // code to execute
 *   }
 *
 * - Do-While Loop: Similar to while loop, but the code executes at least once.
 *   Syntax:
 *   do {
 *       // code to execute
 *   } while (condition);
 */

int main()
{
    // For loop
    printf("For loop:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // While loop
    printf("While loop:\n");
    int j = 0;
    while (j < 5)
    {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // Do-while loop
    printf("Do-while loop:\n");
    int k = 0;
    do
    {
        printf("%d ", k);
        k++;
    } while (k < 5);
    printf("\n");

    return 0;
}
