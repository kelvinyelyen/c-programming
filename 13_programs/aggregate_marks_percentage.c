#include <stdio.h>

// Program #2: Calculate Aggregate Marks and Percentage
int main()
{
    // float marks[5], total=0.0;
    // int i;
    // float percentage;

    // printf("Enter the marks obtained in five subjects: \n");
    // for (i = 1; i < 6; i++)
    // {
    //     printf("Subject %d: ", i);
    //     scanf("%f", &marks[i]);
    //     if (marks[i] < 0 || marks[i] > 100)
    //     {
    //         printf("Invalid mark! Marks should be between 0 and 100.\n");
    //         return 1; 
    //     }
    //     total += marks[i];
    // }

    // percentage = total / 500 * 100;

    // printf("Aggregate Marks: %.2f\n", total);

    // if (percentage >= 0 && percentage <= 100)
    // {
    //     printf("Percentage: %.2f%%\n", percentage);
    // }
    // else
    // {
    //     printf("Invalid percentage calculated.\n");
    // }

    // return 0;

    int marks, i, total = 0, aggregate;
    float percentage;

    for (i = 1; i < 6; ++i)
    {
        printf("Enter the marks obtained in subject %d: ", i);
        scanf("%d", &marks);
        total += marks;
    }

    percentage = (total / 5.0);

    printf("Aggregate Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}
