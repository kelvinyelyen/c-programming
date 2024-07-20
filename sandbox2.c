#include <stdio.h>
#include <ctype.h>
#include <math.h>

// function prototypes
int count_letters(char text[]);
int count_words(char text[]);
int count_sentences(char text[]);

int main(void)
{
    char text[1000];

    // user input text
    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    int letters = count_letters(text);
    printf("Number of letters: %d", letters);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // calculate the average number of letters and sentences
    double L = (double)letters / words * 100;
    double S = (double)sentences / words * 100;

    // calculate and round Coleman-Liau index
    int x = round((0.0588 * L) - (0.296 * S) - 15.8);

    // output grade
    if (x > 16)
    {
        printf("Grade 16+\n");
    }
    else if (x < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", x);
    }
}

int count_letters(char text[])
{
    int chars = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isupper(text[i]) || islower(text[i]))
        {
            chars++;
        }
    }
    return chars;
}

int count_words(char text[])
{
    int word = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((int)text[i] == 32) // check if ASCII value is of ' '
        {
            word++;
        }
    }
    word++;
    return word;
}

int count_sentences(char text[])
{
    int sent = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((int)text[i] == 33 || (int)text[i] == 46 || (int)text[i] == 63)
        {
            sent++;
        }
    }
    return sent;
}
