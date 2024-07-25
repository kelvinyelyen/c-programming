#include <stdio.h>
main()
{
    char text[100], str[100], ins_text[100];
    int i = 0, j = 0, k = 0, pos;
    printf("\n Enter the main text: ");
    gets(text);
    printf("\n Enter the string to be inserted : ");
    gets(str);
    printf("\n Enter the position at which the string has to be inserted");
    scanf("%d", pos);

    while (text[i] != '\0')
    {
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
    ins_text[j] = '\0';
    printf("The new string is : ");
    puts(ins_text);
}