#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char binary_str[] = "1010";
    // int decimal = strtol(binary_str, NULL, 2);
    // printf("%d\n", decimal);                   
    // return 0;

    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ( number < 2) {
        printf("Invalid number, enter a number greater than 2.");
    }

    for (i = 2; i < number; i++ ){
        if (number % i == 0) {
            printf("%d is no a prime number.", number);
        }
        else {
            printf("%d is a prime number.", number);
        }
    }

}
