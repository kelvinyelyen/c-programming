#include <stdio.h>
#include <string.h> // For strlen function

int main()
{
    char str1[50], str2[50];
    int len1 = 0, len2 = 0;

    printf("Enter the first string: ");
    gets(str1); // Input the first string

    printf("Enter the second string: ");
    gets(str2); // Input the second string

    len1 = strlen(str1); // Calculate length of str1
    len2 = strlen(str2); // Calculate length of str2

    if (len1 == len2)
    {
        printf("Both strings are of the same length (%d).\n", len1);
    }
    else
    {
        printf("Strings are of different lengths:\n");
        printf("Length of str1: %d\n", len1);
        printf("Length of str2: %d\n", len2);
    }

    return 0;
}
