#include <stdio.h>
#include <string.h> // For strlen function

int main()
{
    char str1[50], str2[50];
    int len1 = 0, len2 = 0, same = 1; // Initialize same to 1 for assuming they are the same initially
    int i = 0;

    printf("Enter the first string: ");
    gets(str1); // Input the first string

    printf("Enter the second string: ");
    gets(str2); // Input the second string

    len1 = strlen(str1); // Calculate length of str1
    len2 = strlen(str2); // Calculate length of str2

    if (len1 == len2)
    {
        while (i < len1)
        {
            if (str1[i] != str2[i])
            {
                same = 0; // Mark as different
                break;    // Exit the loop as soon as difference is found
            }
            i++;
        }
    }
    else
    {
        same = 0; // Mark as different if lengths are different
    }

    // Compare strings ignoring case
    if (len1 == len2 && strcasecmp(str1, str2) == 0)
    {
        printf("Both strings are identical ignoring case, with length of %d.\n", len1);
    }
    else
    {
        printf("Strings are different or of different lengths.\n");
        printf("Length of first string: %d\n", len1);
        printf("Length of second string: %d\n", len2);
    }

    return 0;

    return 0;
}
