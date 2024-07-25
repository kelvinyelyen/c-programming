#include <stdio.h>

/*
 * This program checks if a given string is a palindrome.
 *
 * A palindrome is a string that reads the same forward and backward.
 * The program performs the following steps:
 * 1. Reads a string from the user.
 * 2. Computes the length of the string.
 * 3. Compares characters from the beginning and end of the string moving towards the center.
 * 4. If all corresponding characters match, the string is a palindrome.
 * 5. Otherwise, it is not a palindrome.
 *
 * Note: The program uses 'gets()' which is unsafe for input handling as it does not check for buffer overflow.
 * Consider using 'fgets()' for safer input handling.
 */

int main()
{
    char str[100];
    int i = 0, j, length = 0;

    printf("Enter the string: ");
    gets(str); // Unsafe; consider using fgets() instead

    // Calculate the length of the string
    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    // Initialize pointers for comparison
    i = 0;
    j = length - 1;

    // Check if the string is a palindrome
    while (i <= j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }

    // If i >= j, all characters matched, so the string is a palindrome
    if (i >= j)
    {
        printf("PALINDROME\n");
    }
    else
    {
        printf("NOT A PALINDROME\n");
    }

    return 0;
}
