#include <stdio.h>

/*
 * If-Else Statements:
 * - Used for decision making.
 * - Syntax:
 *   if (condition) {
 *       // code to execute if condition is true
 *   } else {
 *       // code to execute if condition is false
 *   }
 */

/* If-Else If Statements:
 * - Used for multi-way decision making based on multiple conditions.
 * - Syntax:
 *   if (condition1) {
 *       // code to execute if condition1 is true
 *   } else if (condition2) {
 *       // code to execute if condition2 is true
 *   } else {
 *       // code to execute if none of the conditions are true
 *   }
 */

/* Switch Statement:
 * - Used for multi-way decision making based on the value of a single variable.
 * - Syntax:
 *   switch (expression) {
 *       case value1:
 *           // code to execute if expression equals value1
 *           break;
 *       case value2:
 *           // code to execute if expression equals value2
 *           break;
 *       ...
 *       default:
 *           // code to execute if expression does not match any case
 *   }
 */

int main()
{
    // // If-else statement
    // int number = 10;

    // if (number > 0)
    // {
    //     printf("Number is positive.\n");
    // }
    // else
    // {
    //     printf("Number is non-positive.\n");
    // }

    // // If-else-if
    // int num = 20;

    // if (num < 0)
    // {
    //     printf("Number is negative.\n");
    // }
    // else if (num >= 0 && num < 10)
    // {
    //     printf("Number is between 0 and 9.\n");
    // }
    // else if (num >= 10 && num < 20)
    // {
    //     printf("Number is between 10 and 19.\n");
    // }
    // else if (num >= 20 && num < 30)
    // {
    //     printf("Number is between 20 and 29.\n");
    // }
    // else
    // {
    //     printf("Number is greater than or equal to 30.\n");
    // }

    // // Switch statement to determine grade based on character input
    // char grade = 'B';

    // switch (grade)
    // {
    // case 'A':
    //     printf("Excellent!\n");
    //     break;
    // case 'B':
    //     printf("Well done!\n");
    //     break;
    // case 'C':
    //     printf("Good job!\n");
    //     break;
    // case 'D':
    //     printf("You passed!\n");
    //     break;
    // case 'F':
    //     printf("Better try again!\n");
    //     break;
    // default:
    //     printf("Invalid grade!\n");
    // }

    char ch;
    printf("\n Enter any character : ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("\n %c is a VOWEL", ch);
        break;
    default:
        printf("\n %c is not a VOWEL", ch);
    }

    return 0;
}
