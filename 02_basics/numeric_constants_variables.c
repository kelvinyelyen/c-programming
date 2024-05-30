#include <stdio.h>

/*
 * Numeric Constants and Variables:
 * - Integer constants: Whole numbers without a fractional part (e.g., 42, -7)
 * - Floating-point constants: Real numbers with a fractional part or in exponential form (e.g., 3.14, 2.5e3)
 * - Character constants: Single characters enclosed in single quotes (e.g., 'A', '5')
 * - Variables: Named memory locations to store data
 */

int main()
{
    // Integer constant and variable
    int integerConstant = 42;

    // Floating-point constant and variable
    float floatingPointConstant = 3.14;

    // Character constant and variable
    char characterConstant = 'A';

    // Print constants and variables
    printf("Integer Constant: %d\n", integerConstant);
    printf("Floating-point Constant: %.2f\n", floatingPointConstant); // %.2f formats the float to two decimal places
    printf("Character Constant: %c\n", characterConstant);

    return 0;
}
