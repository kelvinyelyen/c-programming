#include <stdio.h>

/*
 * Structure of a C Program:
 * A typical C program consists of:
 * 1. Preprocessor directives
 * 2. Global variable declarations (optional)
 * 3. Function prototypes (optional)
 * 4. The main function
 * 5. Other functions (optional)
 */

// Function prototype
void printWelcomeMessage();

int main()
{
    // Main function: Entry point of the program
    printWelcomeMessage(); // Function call
    return 0;
}

// Function definition
void printWelcomeMessage()
{
    printf("Welcome to the C Programming Tutorial!\n");
}
