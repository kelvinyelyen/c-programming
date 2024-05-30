#include <stdio.h>

/*
 * Keywords: Reserved words in C that have predefined meanings and cannot be used as identifiers.
 * Examples: int, return, if, else, while, for, char, float, etc.
 *
 * Identifiers: User-defined names for variables, functions, arrays, etc.
 * Rules for Identifiers:
 * - Must begin with a letter or an underscore (_)
 * - Can contain letters, digits, and underscores
 * - Case-sensitive (e.g., Age and age are different)
 * - Cannot be a keyword
 */

int main()
{
    // Variable declaration and initialization
    int age = 25;       // int is a keyword, age is an identifier
    float height = 5.9; // float is a keyword, height is an identifier
    char grade = 'A';   // char is a keyword, grade is an identifier

    // Print variables
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height); // %.1f formats the float to one decimal place
    printf("Grade: %c\n", grade);

    return 0;
}
