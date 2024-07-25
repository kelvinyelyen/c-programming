/*
 * This program appends a source string to the end of a destination string.
 *
 * The program follows these steps:
 * 1. Prompts the user to enter the source string.
 * 2. Prompts the user to enter the destination string.
 * 3. Appends the source string to the end of the destination string.
 * 4. Outputs the concatenated string.
 *
 * Note: The program uses 'gets()' which is unsafe and deprecated due to potential buffer overflow issues.
 * It's recommended to use 'fgets()' instead in real-world applications.
 */

#include <stdio.h>

main()
{
    char Dest_Str[100], Source_Str[50];
    int i = 0, j = 0;

    printf("Enter the source string: ");
    gets(Source_Str); // Unsafe function, should be replaced with fgets(Source_Str, sizeof(Source_Str), stdin);

    printf("Enter the destination string: ");
    gets(Dest_Str); // Unsafe function, should be replaced with fgets(Dest_Str, sizeof(Dest_Str), stdin);

    // Find the end of the destination string
    while (Dest_Str[i] != '\0')
        i++;

    // Append the source string to the destination string
    while (Source_Str[j] != '\0')
    {
        Dest_Str[i] = Source_Str[j];
        i++;
        j++;
    }

    // Terminate the new string
    Dest_Str[i] = '\0';

    // Output the new string
    printf("After appending, the destination string is: ");
    puts(Dest_Str);
}
