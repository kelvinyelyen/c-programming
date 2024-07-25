/*
 * This program inserts a user-defined string into a specific position within another user-defined string.
 *
 * The program follows these steps:
 * 1. Prompts the user to enter the main text.
 * 2. Prompts the user to enter the string to be inserted.
 * 3. Prompts the user to enter the position at which the string should be inserted.
 * 4. Constructs a new string with the insertion and prints the new string.
 *
 * Note: The program uses 'gets()' which is unsafe and deprecated due to potential buffer overflow issues.
 * It's recommended to use 'fgets()' instead in real-world applications.
 */

#include <stdio.h>

main()
{
    char text[100], str[100], ins_text[100];
    int i = 0, j = 0, k = 0, pos;

    printf("\n Enter the main text: ");
    gets(text); // Unsafe function, should be replaced with fgets(text, sizeof(text), stdin);

    printf("\n Enter the string to be inserted: ");
    gets(str); // Unsafe function, should be replaced with fgets(str, sizeof(str), stdin);

    printf("\n Enter the position at which the string has to be inserted: ");
    scanf("%d", &pos);

    // Iterate through the main text
    while (text[i] != '\0')
    {
        // Insert the string at the specified position
        if (i == pos)
        {
            while (str[k] != '\0')
            {
                ins_text[j] = str[k];
                j++;
                k++;
            }
        }
        else
        {
            ins_text[j] = text[i];
            j++;
        }
        i++;
    }

    // Terminate the new string
    ins_text[j] = '\0';

    // Output the new string
    printf("The new string is : ");
    puts(ins_text);
}
