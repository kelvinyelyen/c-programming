/*
 * This program converts a given string to uppercase.
 *
 * The program follows these steps:
 * 1. Prompts the user to enter a string.
 * 2. Converts all lowercase characters in the string to uppercase.
 * 3. Outputs the converted string.
 *
 * Note: The program uses 'gets()' which is unsafe and deprecated due to potential buffer overflow issues.
 * It's recommended to use 'fgets()' instead in real-world applications.
 */

#include <stdio.h>

main()
{
    char str[100], upper_str[100];
    int i = 0;

    printf("Enter the string: ");
    gets(str); // Unsafe function, should be replaced with fgets(str, sizeof(str), stdin);

    // Convert to uppercase
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_str[i] = str[i] - 32; // Convert lowercase to uppercase
        else
            upper_str[i] = str[i]; // Keep other characters unchanged
        i++;
    }

    // Terminate the new string
    upper_str[i] = '\0';

    // Output the new string
    printf("The string converted into uppercase is: ");
    puts(upper_str);
}
