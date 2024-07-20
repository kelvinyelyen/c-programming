#include <stdio.h>
main()
{
    char text[200], Str[20], new_text[200];
    int i = 0, j = 0, found = 0, k, n = 0, copy_loop = 0;
    printf("\n Enter the main text : ");
    gets(text);
    printf("\n Enter the string to be deleted : ");
    gets(Str);
    while (text[i] != '\0')
    {
        j = 0, found = 0, k = 1;
        while (text[k]] == Str[j] != '\0'
    {
        k++;
        j++;
    }
    if (str[j] == '\0')
        copy_loop = k;
    new_text[n] = text[copy_loop];
    i++;
    copy_loop++;
    n++;
}
new_text[n] = '\0';
printf("\n the new string is");
puts(new_text);
}