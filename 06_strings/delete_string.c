/*
 * This program deletes a user-defined substring from the main text.
 *
 * The program follows these steps:
 * 1. Prompts the user to enter the main text.
 * 2. Prompts the user to enter the string to be deleted.
 * 3. Constructs a new string by removing occurrences of the specified substring.
 * 4. Outputs the new string.
 *
 * Note: The program uses 'gets()' which is unsafe and deprecated due to potential buffer overflow issues.
 * It's recommended to use 'fgets()' instead in real-world applications.
 */

#include <stdio.h>

int main()
{
    char text[200], Str[20], new_text[200];
    int i = 0, j = 0, found = 0, k, n = 0, copy_loop = 0;

    printf("Enter the main text: ");
    gets(text); // Unsafe function, should be replaced with fgets(text, sizeof(text), stdin);

    printf("Enter the string to be deleted: ");
    gets(Str); // Unsafe function, should be replaced with fgets(Str, sizeof(Str), stdin);

    // Iterate through the main text
    while (text[i] != '\0')
    {
        j = 0, found = 0, k = i;

        // Check if the substring matches
        while (text[k] == Str[j] && Str[j] != '\0')
        {
            k++;
            j++;
        }

        // If the substring matches, skip it in the main text
        if (Str[j] == '\0')
        {
            copy_loop = k;
            i = k;
        }
        else
        {
            new_text[n] = text[i];
            i++;
            n++;
        }
    }

    // Terminate the new string
    new_text[n] = '\0';

    // Output the new string
    printf("The new string is: ");
    puts(new_text);

    return 0;
}
