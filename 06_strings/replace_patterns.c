/*
 * This program replaces occurrences of a specified pattern within a string with a new pattern.
 *
 * The program follows these steps:
 * 1. Prompts the user to enter the main string.
 * 2. Prompts the user to enter the pattern to be replaced.
 * 3. Prompts the user to enter the replacement pattern.
 * 4. Constructs a new string by replacing occurrences of the specified pattern with the new pattern.
 * 5. Outputs the new string.
 *
 * Note: The program uses 'gets()' which is unsafe and deprecated due to potential buffer overflow issues.
 * It's recommended to use 'fgets()' instead in real-world applications.
 */

#include <stdio.h>

main()
{
    char str[200], pat[20], new_str[200], rep_pat[100];
    int i = 0, j = 0, k, n = 0, copy_loop = 0, rep_index = 0;

    printf("\n Enter the string: ");
    gets(str); // Unsafe function, should be replaced with fgets(str, sizeof(str), stdin);

    printf("\n Enter the pattern to be replaced: ");
    gets(pat); // Unsafe function, should be replaced with fgets(pat, sizeof(pat), stdin);

    printf("\n Enter the replacing pattern: ");
    gets(rep_pat); // Unsafe function, should be replaced with fgets(rep_pat, sizeof(rep_pat), stdin);

    // Iterate through the main string
    while (str[i] != '\0')
    {
        j = 0;
        k = i;

        // Check if the pattern matches
        while (str[k] == pat[j] && pat[j] != '\0')
        {
            k++;
            j++;
        }

        // If the pattern matches
        if (pat[j] == '\0')
        {
            copy_loop = k;
            rep_index = 0; // Reset rep_index for each match
            
            // Append the replacement pattern to the new string
            while (rep_pat[rep_index] != '\0')
            {
                new_str[n] = rep_pat[rep_index];
                rep_index++;
                n++;
            }

            // Skip the original pattern in the main string
            i = copy_loop;
        }
        else
        {
            // Copy the character if no pattern match
            new_str[n] = str[i];
            i++;
            n++;
        }
    }

    // Terminate the new string
    new_str[n] = '\0';

    // Output the new string
    printf("\n The new string is: ");
    puts(new_str);
}
