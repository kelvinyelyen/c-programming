#include <stdio.h>
#include <string.h>

main()
{
    char str[100], reverse_str[100], temp;
    int i = 0, j = 0;
    printf("\n Enter the string: ");
    gets(str);
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    printf("\nThe reversed string is: ");
    puts(str);
}