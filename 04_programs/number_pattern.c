#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) // i represents the current row number
    {
        // Inner loop for each row
        for (int j = 1; j <= i; j++) // j represents the current column number in the current row
        {
            printf("%d\t", j); // Print the current column number followed by a tab
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
