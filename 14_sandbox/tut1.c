// #include <stdio.h>

// main()
// {
//     // Declaration of variables
//     int num1, num2, num3;
//     float total;

//     // Accepting user inputs
//     printf("Enter the first number: ");
//     scanf("%d", &num1);

//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     printf("Enter the third number: ");
//     scanf("%d", &num3);

//     if (num1 < 0 || num2 < 0 || num3 < 0)
//     {
//         printf("Enter only positive values.");
//     }
//     else
//     {
//         total = num1 + num2 + num3;
//         printf("The total is %f. \n", total);
//     }
// }

#include <stdio.h>

// Declare functions
int printMenu();
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main()
{
    /* code */
    int num1, num2, choice;

    printMenu();

    printf("Enter 2 values: ");
    scanf("%d %d", &num1, &num2);
    while (choice != 5)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("The sum is equal to %d\n", addition(num1, num2));
        }
        else if (choice == 2)
        {
            printf("The difference is %d\n", subtraction(num1, num2));
        }
        else if (choice == 3)
        {
            printf("The product is %d\n", multiplication(num1, num2));
        }
        else if (choice == 4)
        {
            printf("The quotient is %d\n", division(num1, num2));
        }
        else if (choice == 5)
        {
            printf("Bye Bye\n");
        }
        else {
            printf("Enter a valid choice. \n");
            exit(1);
        }
    }
    return 0;
}

// Definition of functions

int printMenu()
{
    printf("---MENU---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. EXIT\n");
}
int addition(int a, int b)
{
    return a + b;
}
int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}