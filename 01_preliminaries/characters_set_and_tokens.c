#include <stdio.h>

/*
 * ASCII Character Set: C programming uses the ASCII character set to represent characters.
 * ASCII (American Standard Code for Information Interchange) assigns numerical codes to
 * characters, including letters, digits, punctuation marks, and control characters.
 */

// Main function: Entry point of the program
int main()
{
    char letter = 'A'; // Character constant
    int number = 42;   // Integer constant

    // Print character and integer
    printf("Character: %c\n", letter); // %c is a format specifier for characters
    printf("Integer: %d\n", number);   // %d is a format specifier for integers

    /*
     * C Tokens: The smallest units in a C program are tokens.
     * Tokens include keywords, identifiers, constants, strings, operators, and special symbols.
     * Examples in this program:
     * - Keywords: int, char, return
     * - Identifiers: letter, number, main
     * - Constants: 'A', 42
     * - Strings: "Character: %c\n", "Integer: %d\n"
     * - Operators: =, ;
     * - Special Symbols: {}
     */

    return 0;
}
