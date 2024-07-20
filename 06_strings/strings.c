#include <stdio.h>

int main()
{
    char Dest_Str[100], Source_Str[50];
    int i = 0, j = 0;

    printf("Enter the destination string: ");
    gets(Dest_Str); // Input destination string

    printf("Enter the source string: ");
    gets(Source_Str); // Input source string

    // Find the length of Dest_Str
    while (Dest_Str[i] != '\0')
    {
        i++;
    }

    // Append Source_Str to Dest_Str
    while (Source_Str[j] != '\0')
    {
        Dest_Str[i] = Source_Str[j];
        i++;
        j++;
    }
    Dest_Str[i] = '\0'; // Null-terminate Dest_Str after appending

    // Print the concatenated string
    printf("Concatenated string: %s\n", Dest_Str);
    puts(Dest_Str);

    return 0;
}
