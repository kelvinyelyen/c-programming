#include <stdio.h>

/*
 * Variables and Assignment:
 * - Variables must be declared before use.
 * - Assignment operator (=) is used to assign values to variables.
 * - Declaration specifies the data type and the name of the variable.
 *
 * Rules for defining variables:
 * - Names must start with a letter or an underscore.
 * - Names can contain letters, digits, and underscores.
 * - Names are case-sensitive.
 * - Names cannot be keywords.
 * - Names should be descriptive and meaningful.
 */

int main()
{
    // Variable declaration
    int age;
    float temperature;
    char grade;

    // Assignment statements
    age = 30;
    temperature = 98.6;
    grade = 'A';

    // Print variables
    printf("Age: %d\n", age);
    printf("Temperature: %.1f\n", temperature); // %.1f formats the float to one decimal place
    printf("Grade: %c\n", grade);

    return 0;
}
